#include "AircraftBase.h"
#include <osgDB/ReadFile>

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

// Factory function implementation
std::unique_ptr<AircraftBase> createAircraft(AircraftBase::AircraftType type) {
    // This would be implemented in each aircraft's specific implementation file
    // For now, we'll just return a base aircraft
    return std::make_unique<AircraftBase>(type);
}
