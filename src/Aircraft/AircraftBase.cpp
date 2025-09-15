#include "AircraftBase.h"
#include <osgDB/ReadFile>
#include <osg/MatrixTransform>
#include <osg/Quat>
#include <cmath>

// Constants
constexpr double KNOTS_TO_MPS = 0.514444;  // 1 knot = 0.514444 m/s
constexpr double MPS_TO_KNOTS = 1.0 / 0.514444;  // 1 m/s = 1.94384 knots
constexpr double M_TO_FT = 3.28084;        // 1 meter = 3.28084 feet
constexpr double FT_TO_M = 0.3048;         // 1 foot = 0.3048 meters
constexpr double DEG_TO_RAD = M_PI / 180.0;
constexpr double RAD_TO_DEG = 180.0 / M_PI;

AircraftBase::AircraftBase(AircraftType type) 
    : _type(type)
    , _currentState{}
    , _controls{}
{
    // Initialize with default values
    _currentState.altitude = 1000.0; // Start at 1000m
    _currentState.airspeed = 100.0;  // 100 m/s
}

bool AircraftBase::loadModel(const std::string& modelPath) {
    _modelNode = osgDB::readNodeFile(modelPath);
    if (!_modelNode) {
        // Try with .osgt extension if no extension provided
        if (modelPath.find_last_of('.') == std::string::npos) {
            _modelNode = osgDB::readNodeFile(modelPath + ".osgt");
        }
    }
    
    if (!_modelNode) {
        // Create a simple placeholder if model fails to load
        osg::ref_ptr<osg::Geode> geode = new osg::Geode;
        geode->addDrawable(new osg::ShapeDrawable(new osg::Box(osg::Vec3(0.0f, 0.0f, 0.0f), 10.0f)));
        _modelNode = geode;
        return false;
    }
    
    return true;
}

void AircraftBase::update(double deltaTime) {
    updateDynamics(deltaTime);
    updateVisuals();
    
    // Update navigation state (simplified for now)
    _navState.selectedHeading = _currentState.heading;
    _navState.selectedAltitude = _currentState.altitude * M_TO_FT;
    _navState.selectedAirspeed = _currentState.airspeed * MPS_TO_KNOTS;
    _navState.selectedVS = _currentState.vsi * M_TO_FT * 60.0;  // Convert m/s to ft/min
}

void AircraftBase::initializeDynamics() {
    // Initialize CFD interface for this aircraft
    _cfdInterface = std::make_unique<CFDInterface>();
    
    // Load the appropriate case file based on aircraft type
    std::string casePath = "data/aircraft/" + getName() + "/CFD";
    _cfdInterface->initialize(casePath, CFDInterface::SolverType::PIMPLE);
}

void AircraftBase::updateDynamics(double deltaTime) {
    if (!_cfdInterface) {
        initializeDynamics();
    }
    
    // Update CFD simulation with current state
    CFDInterface::FlightState cfdState;
    cfdState.airspeed = _currentState.airspeed;
    cfdState.altitude = _currentState.altitude;
    // Convert angles to radians for CFD
    cfdState.alpha = _currentState.pitch * M_PI / 180.0;
    cfdState.beta = 0.0; // Simplified - would need sideslip calculation
    cfdState.phi = _currentState.roll * M_PI / 180.0;
    cfdState.theta = _currentState.pitch * M_PI / 180.0;
    cfdState.psi = _currentState.heading * M_PI / 180.0;
    
    _cfdInterface->updateSimulation(cfdState);
    auto forces = _cfdInterface->getAerodynamicForces();
    
    // Simplified flight model - in a real implementation, this would be more sophisticated
    // and use the forces from the CFD simulation
    _currentState.pitch += _controls.elevator * 0.5 * deltaTime;
    _currentState.roll += _controls.aileron * 0.5 * deltaTime;
    _currentState.heading += _controls.rudder * 0.5 * deltaTime;
    
    // Update position based on heading and airspeed
    double headingRad = _currentState.heading * M_PI / 180.0;
    _currentState.latitude += (_currentState.airspeed * cos(headingRad) / 111320.0) * deltaTime;
    _currentState.longitude += (_currentState.airspeed * sin(headingRad) / (111320.0 * cos(_currentState.latitude * M_PI / 180.0))) * deltaTime;
    _currentState.altitude += _currentState.vsi * deltaTime;
    
    // Simple physics - in reality, this would use the CFD forces
    _currentState.airspeed += (_controls.throttle * 10.0 - 5.0) * deltaTime;
    _currentState.vsi = (_controls.elevator * 5.0) * deltaTime;
}

void AircraftBase::updateVisuals() {
    if (!_modelNode) return;
    
    // Update the model's position and orientation
    osg::MatrixTransform* transform = dynamic_cast<osg::MatrixTransform*>(_modelNode->asGroup()->getChild(0));
    if (!transform) return;
    
    osg::Matrix matrix;
    matrix.makeRotate(
        _currentState.roll * M_PI / 180.0, osg::X_AXIS,
        _currentState.pitch * M_PI / 180.0, osg::Y_AXIS,
        _currentState.heading * M_PI / 180.0, osg::Z_AXIS);
    
    // Convert lat/lon/alt to local coordinates (simplified)
    double x = (_currentState.longitude * 111320.0);
    double y = (_currentState.latitude * 111320.0);
    
    matrix.setTrans(x, y, _currentState.altitude);
    transform->setMatrix(matrix);
}

// ========== AircraftInterface Implementation ==========

osg::Vec3d AircraftBase::getPosition() const {
    return osg::Vec3d(_currentState.longitude, _currentState.latitude, _currentState.altitude);
}

osg::Quat AircraftBase::getOrientation() const {
    return osg::Quat(
        _currentState.roll * DEG_TO_RAD, osg::X_AXIS,
        _currentState.pitch * DEG_TO_RAD, osg::Y_AXIS,
        _currentState.heading * DEG_TO_RAD, osg::Z_AXIS);
}

double AircraftBase::getAirspeed() const { return _currentState.airspeed * MPS_TO_KNOTS; }
double AircraftBase::getGroundSpeed() const { return _currentState.airspeed * MPS_TO_KNOTS; }  // Simplified
double AircraftBase::getVerticalSpeed() const { return _currentState.vsi * M_TO_FT * 60.0; }  // m/s to ft/min
double AircraftBase::getAltitude() const { return _currentState.altitude * M_TO_FT; }
double AircraftBase::getPressureAltitude() const { return _currentState.altitude * M_TO_FT; }  // Simplified
double AircraftBase::getRadioAltitude() const { 
    // Simplified: Use AGL based on altitude (in a real sim, this would use terrain data)
    return std::max(0.0, _currentState.altitude * M_TO_FT - 100.0);  // Assume 100ft field elevation
}

double AircraftBase::getPitch() const { return _currentState.pitch; }
double AircraftBase::getRoll() const { return _currentState.roll; }
double AircraftBase::getHeading() const { return _currentState.heading; }
double AircraftBase::getTrack() const { return _currentState.heading; }  // Simplified: track = heading

double AircraftBase::getAngleOfAttack() const { 
    // Simplified: calculate AOA based on pitch and flight path angle
    return _currentState.pitch * 0.8;  // Rough approximation
}

double AircraftBase::getSideslipAngle() const { 
    // Simplified: assume coordinated flight
    return 0.0;  
}

double AircraftBase::getGLoad() const { 
    // Simplified: 1G in level flight, more in turns
    return 1.0 + std::abs(std::sin(_currentState.roll * DEG_TO_RAD));
}

// Navigation
double AircraftBase::getSelectedHeading() const { return _navState.selectedHeading; }
double AircraftBase::getSelectedAltitude() const { return _navState.selectedAltitude; }
double AircraftBase::getSelectedAirspeed() const { return _navState.selectedAirspeed; }
double AircraftBase::getSelectedVerticalSpeed() const { return _navState.selectedVS; }

// Systems
bool AircraftBase::isAutopilotEngaged() const { return _navState.autopilotEngaged; }
bool AircraftBase::isAutoThrottleEngaged() const { return _navState.autoThrottleEngaged; }
bool AircraftBase::isGearDown() const { return _controls.gear > 0.5; }
bool AircraftBase::isOnGround() const { return _currentState.altitude < 2.0; }  // Simplified

// Navigation radios
double AircraftBase::getNav1Frequency() const { return _navState.nav1Freq; }
double AircraftBase::getNav2Frequency() const { return _navState.nav2Freq; }
double AircraftBase::getCom1Frequency() const { return _navState.com1Freq; }
double AircraftBase::getCom2Frequency() const { return _navState.com2Freq; }

// Fuel
double AircraftBase::getFuelQuantity() const { 
    // Simplified: return a fixed value for now
    return 1000.0;  // lbs
}

double AircraftBase::getFuelFlow() const { 
    // Simplified: based on throttle position
    return _controls.throttle * 500.0;  // lbs/hour
}

// Engines
int AircraftBase::getNumEngines() const { 
    // Default to 1 engine, override in derived classes as needed
    return 1; 
}

double AircraftBase::getEngineRPM(int engine) const { 
    // Simplified: based on throttle
    return _controls.throttle * 100.0;  // %
}

double AircraftBase::getEngineEGT(int engine) const { 
    // Simplified: based on throttle
    return 600.0 + _controls.throttle * 400.0;  // °C
}

double AircraftBase::getEngineFF(int engine) const { 
    // Simplified: based on throttle
    return _controls.throttle * 25.0;  // lbs/hour
}

// Warning systems
bool AircraftBase::isStallWarningActive() const { 
    // Simplified: based on airspeed and configuration
    return _currentState.airspeed < 40.0 * KNOTS_TO_MPS;  // 40 knots
}

bool AircraftBase::isOverspeedWarningActive() const { 
    // Simplified: based on airspeed
    return _currentState.airspeed > 200.0 * KNOTS_TO_MPS;  // 200 knots
}

bool AircraftBase::isTerrainWarningActive() const { 
    // Simplified: based on altitude and descent rate
    return (_currentState.altitude < 100.0 * FT_TO_M) && (_currentState.vsi < -5.0);
}

bool AircraftBase::isGearWarningActive() const { 
    // Gear warning when gear is up and close to ground
    return !isGearDown() && (_currentState.altitude < 500.0 * FT_TO_M);
}

// Configuration
const std::string& AircraftBase::getAircraftType() const { 
    return _aircraftType; 
}

const std::string& AircraftBase::getRegistration() const { 
    return _registration; 
}

// ========== Factory Function ==========

std::unique_ptr<AircraftBase> createAircraft(AircraftBase::AircraftType type) {
    return std::make_unique<AircraftBase>(type);
}
