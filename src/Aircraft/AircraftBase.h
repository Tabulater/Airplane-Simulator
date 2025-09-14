#ifndef AIRCRAFT_BASE_H
#define AIRCRAFT_BASE_H

#include <string>
#include <memory>
#include <osg/Node>
#include <osg/PositionAttitudeTransform>
#include <osg/Vec3d>
#include <osg/Quat>
#include "../FlightDynamics/CFDInterface.h"
#include "AircraftInterface.h"

class AircraftBase : public AircraftInterface {
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
    
    // AircraftInterface implementation
    osg::Vec3d getPosition() const override;
    osg::Quat getOrientation() const override;
    
    // Flight parameters
    double getAirspeed() const override;          // in knots
    double getGroundSpeed() const override;       // in knots
    double getVerticalSpeed() const override;     // in feet per minute
    double getAltitude() const override;          // in feet MSL
    double getPressureAltitude() const override;  // in feet
    double getRadioAltitude() const override;     // in feet AGL
    
    // Attitude
    double getPitch() const override;     // in degrees, positive up
    double getRoll() const override;      // in degrees, positive right wing down
    double getHeading() const override;   // in degrees, true north
    double getTrack() const override;     // in degrees, true north
    
    // Performance
    double getAngleOfAttack() const override;     // in degrees
    double getSideslipAngle() const override;     // in degrees
    double getGLoad() const override;             // in Gs (1.0 = 1G)
    
    // Navigation
    double getSelectedHeading() const override;    // in degrees
    double getSelectedAltitude() const override;   // in feet
    double getSelectedAirspeed() const override;   // in knots
    double getSelectedVerticalSpeed() const override; // in feet per minute
    
    // Systems
    bool isAutopilotEngaged() const override;
    bool isAutoThrottleEngaged() const override;
    bool isGearDown() const override;
    bool isOnGround() const override;
    
    // Navigation radios
    double getNav1Frequency() const override;
    double getNav2Frequency() const override;
    double getCom1Frequency() const override;
    double getCom2Frequency() const override;
    
    // Fuel
    double getFuelQuantity() const override;       // in lbs or kg
    double getFuelFlow() const override;           // in lbs/hour or kg/hour
    
    // Engines
    int getNumEngines() const override;
    double getEngineRPM(int engine) const override; // in %
    double getEngineEGT(int engine) const override; // in degrees C
    double getEngineFF(int engine) const override;  // fuel flow in lbs/hour or kg/hour
    
    // Warning systems
    bool isStallWarningActive() const override;
    bool isOverspeedWarningActive() const override;
    bool isTerrainWarningActive() const override;
    bool isGearWarningActive() const override;
    
    // Configuration
    const std::string& getAircraftType() const override;
    const std::string& getRegistration() const override;

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
    
    // Navigation and radio state
    struct NavState {
        double nav1Freq{118.0};  // MHz
        double nav2Freq{110.6};  // MHz
        double com1Freq{121.5};  // MHz
        double com2Freq{121.7};  // MHz
        double selectedHeading{0.0};  // degrees
        double selectedAltitude{0.0}; // feet
        double selectedAirspeed{0.0}; // knots
        double selectedVS{0.0};       // feet per minute
        bool autopilotEngaged{false};
        bool autoThrottleEngaged{false};
    } _navState;
    
    // Aircraft identification
    std::string _registration{"N12345"};
    std::string _aircraftType{"Generic"};
};

// Factory function to create aircraft instances
std::unique_ptr<AircraftBase> createAircraft(AircraftBase::AircraftType type);

#endif // AIRCRAFT_BASE_H
