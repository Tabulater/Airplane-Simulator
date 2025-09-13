#ifndef AIRCRAFT_BASE_H
#define AIRCRAFT_BASE_H

#include <string>
#include <memory>
#include <osg/Node>
#include <osg/PositionAttitudeTransform>
#include "../FlightDynamics/CFDInterface.h"

class AircraftBase {
public:
    enum class AircraftType {
        AW101,
        C130,
        Cessna172,
        F16,
        F35A,
        MustangMkIII,
        PW5,
        R44,
        UH60
    };

    struct FlightControls {
        double throttle;    // 0.0 to 1.0
        double elevator;    // -1.0 to 1.0
        double aileron;     // -1.0 to 1.0
        double rudder;      // -1.0 to 1.0
        double flaps;       // 0.0 to 1.0
        double spoilers;    // 0.0 to 1.0
        double gear;        // 0.0 (up) to 1.0 (down)
        double brakes;      // 0.0 (off) to 1.0 (full)
    };

    struct FlightState {
        double latitude;    // degrees
        double longitude;   // degrees
        double altitude;    // meters
        double heading;     // degrees
        double pitch;       // degrees
        double roll;        // degrees
        double airspeed;    // m/s
        double vsi;         // m/s
    };

    // Constructor/Destructor
    explicit AircraftBase(AircraftType type);
    virtual ~AircraftBase() = default;

    // Load the 3D model
    virtual bool loadModel(const std::string& modelPath);

    // Update the aircraft state
    virtual void update(double deltaTime);

    // Get the root node for rendering
    osg::ref_ptr<osg::Node> getModelNode() const { return _modelNode; }

    // Get current flight state
    const FlightState& getFlightState() const { return _currentState; }

    // Set flight controls
    void setControls(const FlightControls& controls) { _controls = controls; }

    // Get aircraft type
    AircraftType getType() const { return _type; }

    // Get aircraft name
    virtual std::string getName() const = 0;

protected:
    AircraftType _type;
    FlightState _currentState;
    FlightControls _controls;
    osg::ref_ptr<osg::Node> _modelNode;
    std::unique_ptr<CFDInterface> _cfdInterface;

    // Initialize flight dynamics model
    virtual void initializeDynamics();

    // Update flight dynamics
    virtual void updateDynamics(double deltaTime);

    // Update visual model
    virtual void updateVisuals();
};

// Factory function to create aircraft instances
std::unique_ptr<AircraftBase> createAircraft(AircraftBase::AircraftType type);

#endif // AIRCRAFT_BASE_H
