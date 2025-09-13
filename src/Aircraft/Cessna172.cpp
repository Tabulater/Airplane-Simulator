#include "Cessna172.h"
#include <osg/Geode>
#include <osg/ShapeDrawable>
#include <osg/MatrixTransform>
#include <cmath>

Cessna172::Cessna172() 
    : AircraftBase(AircraftType::Cessna172)
    , _flapPosition(0.0)
    , _mixture(1.0)
    , _carbHeatOn(false)
    , _rpm(1000.0)
    , _manifoldPressure(20.0)
    , _fuelFlow(8.5)
    , _masterBatteryOn(true)
    , _avionicsPowerOn(true)
    , _fuelPumpOn(true)
{
    // Load the Cessna 172 model
    if (!loadModel("data/aircraft/Cessna172/cessna172.osgt")) {
        // If model fails to load, create a simple representation
        osg::ref_ptr<osg::Geode> fuselage = new osg::Geode;
        fuselage->addDrawable(new osg::ShapeDrawable(new osg::Cylinder(osg::Vec3(0.0f, 0.0f, 0.5f), 0.3f, 8.0f)));
        
        osg::ref_ptr<osg::Geode> wing = new osg::Geode;
        wing->addDrawable(new osg::ShapeDrawable(new osg::Box(osg::Vec3(0.0f, 0.0f, 0.1f), 8.0f, 0.2f, 0.1f)));
        
        osg::ref_ptr<osg::Group> model = new osg::Group;
        model->addChild(fuselage);
        model->addChild(wing);
        
        _modelNode = model;
    }
}

void Cessna172::setFlapPosition(double position) {
    _flapPosition = std::max(0.0, std::min(1.0, position));
}

void Cessna172::setMixture(double mixture) {
    _mixture = std::max(0.0, std::min(1.0, mixture));
}

void Cessna172::setCarbHeat(bool on) {
    _carbHeatOn = on;
}

void Cessna172::initializeDynamics() {
    AircraftBase::initializeDynamics();
    
    // Cessna 172 specific initialization
    _currentState.airspeed = 60.0; // KIAS
    _currentState.altitude = 1000.0; // feet
    _rpm = 1000.0;
    _manifoldPressure = 20.0; // inHg
    _fuelFlow = 8.5; // GPH
}

void Cessna172::updateDynamics(double deltaTime) {
    // Update base dynamics first
    AircraftBase::updateDynamics(deltaTime);
    
    // Update engine and systems
    updateEngine(deltaTime);
    updateElectricalSystem(deltaTime);
    
    // Apply Cessna 172 specific flight model
    // This is a simplified model - in reality, this would use the CFD data
    
    // Update engine power based on throttle and mixture
    double targetRPM = 500.0 + _controls.throttle * 2200.0;
    double rpmChange = (targetRPM - _rpm) * deltaTime * 0.5;
    _rpm += rpmChange;
    
    // Update manifold pressure based on throttle and altitude
    double maxMP = 25.0 - (_currentState.altitude / 1000.0); // Simple altitude correction
    _manifoldPressure = _controls.throttle * maxMP;
    
    // Update fuel flow based on RPM and mixture
    _fuelFlow = 8.5 * (_rpm / 2400.0) * _mixture;
    
    // Simple flight model - in a real implementation, this would use the CFD forces
    double lift = 0.5 * 1.225 * _currentState.airspeed * _currentState.airspeed * 16.2 * 1.5;
    double weight = 1100.0 * 9.81; // 1100 kg * g
    
    // Update vertical speed based on lift and weight
    _currentState.vsi = (lift - weight) / weight * 10.0;
    
    // Update pitch based on elevator input
    _currentState.pitch += _controls.elevator * deltaTime * 5.0;
    _currentState.pitch = std::max(-15.0, std::min(20.0, _currentState.pitch));
    
    // Update roll based on aileron input
    _currentState.roll += _controls.aileron * deltaTime * 30.0;
    _currentState.roll = std::max(-30.0, std::min(30.0, _currentState.roll));
    
    // Update heading based on roll (coordinated turn)
    if (std::abs(_currentState.roll) > 0.1) {
        double turnRate = _currentState.roll * 3.0; // degrees per second
        _currentState.heading += turnRate * deltaTime;
    }
    
    // Update position based on heading and airspeed
    double headingRad = _currentState.heading * M_PI / 180.0;
    _currentState.latitude += (_currentState.airspeed * cos(headingRad) / 111320.0) * deltaTime;
    _currentState.longitude += (_currentState.airspeed * sin(headingRad) / (111320.0 * cos(_currentState.latitude * M_PI / 180.0))) * deltaTime;
    _currentState.altitude += _currentState.vsi * deltaTime;
    
    // Don't go below ground
    if (_currentState.altitude < 0.0) {
        _currentState.altitude = 0.0;
        _currentState.vsi = 0.0;
    }
}

void Cessna172::updateVisuals() {
    if (!_modelNode) return;
    
    // Update the model's position and orientation
    osg::Matrix matrix;
    matrix.makeRotate(
        _currentState.roll * M_PI / 180.0, osg::X_AXIS,
        _currentState.pitch * M_PI / 180.0, osg::Y_AXIS,
        _currentState.heading * M_PI / 180.0, osg::Z_AXIS);
    
    // Convert lat/lon/alt to local coordinates (simplified)
    double x = (_currentState.longitude * 111320.0);
    double y = (_currentState.latitude * 111320.0);
    
    matrix.setTrans(x, y, _currentState.altitude * 0.3048); // Convert feet to meters
    
    // Apply transformation to model
    osg::MatrixTransform* transform = dynamic_cast<osg::MatrixTransform*>(_modelNode->asGroup()->getChild(0));
    if (transform) {
        transform->setMatrix(matrix);
    }
    
    // Update control surfaces
    // This would be implemented to move ailerons, elevator, rudder, etc.
}

void Cessna172::updateEngine(double deltaTime) {
    // Update engine parameters based on controls and conditions
    // This is a simplified model
    
    // Update RPM based on throttle and mixture
    double targetRPM = 500.0 + _controls.throttle * 2200.0;
    
    // Apply mixture effect
    targetRPM *= _mixture;
    
    // Apply carb heat effect if on
    if (_carbHeatOn) {
        targetRPM *= 0.95; // Slight power reduction with carb heat on
    }
    
    // Smooth RPM changes
    _rpm += (targetRPM - _rpm) * deltaTime * 2.0;
    
    // Update manifold pressure
    double targetMP = _controls.throttle * (25.0 - (_currentState.altitude / 1000.0));
    _manifoldPressure += (targetMP - _manifoldPressure) * deltaTime * 2.0;
    
    // Update fuel flow
    _fuelFlow = 8.5 * (_rpm / 2400.0) * _mixture;
}

void Cessna172::updateElectricalSystem(double deltaTime) {
    // Update electrical system state
    // This is a simplified model
    
    // Battery drains when master is on
    if (_masterBatteryOn) {
        // Battery drain rate would be calculated here
    }
    
    // Update avionics power state
    if (_avionicsPowerOn && !_masterBatteryOn) {
        _avionicsPowerOn = false; // Avionics turn off if master is off
    }
    
    // Update fuel pump state
    if (_fuelPumpOn && !_masterBatteryOn) {
        _fuelPumpOn = false; // Fuel pump turns off if master is off
    }
}
