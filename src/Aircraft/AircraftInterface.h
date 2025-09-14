#ifndef AIRCRAFT_INTERFACE_H
#define AIRCRAFT_INTERFACE_H

#include <osg/Vec3d>
#include <osg/Quat>

/**
 * @brief Interface for aircraft that can be used with the EFIS system
 * 
 * This interface defines the methods that the EFIS system expects from
 * any aircraft class that wants to use its functionality.
 */
class AircraftInterface
{
public:
    virtual ~AircraftInterface() = default;

    // Position and orientation
    virtual osg::Vec3d getPosition() const = 0;
    virtual osg::Quat getOrientation() const = 0;
    
    // Flight parameters
    virtual double getAirspeed() const = 0;          // in knots
    virtual double getGroundSpeed() const = 0;        // in knots
    virtual double getVerticalSpeed() const = 0;      // in feet per minute
    virtual double getAltitude() const = 0;           // in feet MSL
    virtual double getPressureAltitude() const = 0;   // in feet
    virtual double getRadioAltitude() const = 0;      // in feet AGL
    
    // Attitude
    virtual double getPitch() const = 0;     // in degrees, positive up
    virtual double getRoll() const = 0;      // in degrees, positive right wing down
    virtual double getHeading() const = 0;   // in degrees, true north
    virtual double getTrack() const = 0;     // in degrees, true north
    
    // Performance
    virtual double getAngleOfAttack() const = 0;     // in degrees
    virtual double getSideslipAngle() const = 0;     // in degrees
    virtual double getGLoad() const = 0;             // in Gs (1.0 = 1G)
    
    // Navigation
    virtual double getSelectedHeading() const = 0;    // in degrees
    virtual double getSelectedAltitude() const = 0;   // in feet
    virtual double getSelectedAirspeed() const = 0;   // in knots
    virtual double getSelectedVerticalSpeed() const = 0; // in feet per minute
    
    // Systems
    virtual bool isAutopilotEngaged() const = 0;
    virtual bool isAutoThrottleEngaged() const = 0;
    virtual bool isGearDown() const = 0;
    virtual bool isOnGround() const = 0;
    
    // Navigation radios
    virtual double getNav1Frequency() const = 0;
    virtual double getNav2Frequency() const = 0;
    virtual double getCom1Frequency() const = 0;
    virtual double getCom2Frequency() const = 0;
    
    // Fuel
    virtual double getFuelQuantity() const = 0;       // in lbs or kg
    virtual double getFuelFlow() const = 0;           // in lbs/hour or kg/hour
    
    // Engines
    virtual int getNumEngines() const = 0;
    virtual double getEngineRPM(int engine) const = 0; // in %
    virtual double getEngineEGT(int engine) const = 0; // in degrees C
    virtual double getEngineFF(int engine) const = 0;  // fuel flow in lbs/hour or kg/hour
    
    // Warning systems
    virtual bool isStallWarningActive() const = 0;
    virtual bool isOverspeedWarningActive() const = 0;
    virtual bool isTerrainWarningActive() const = 0;
    virtual bool isGearWarningActive() const = 0;
    
    // Configuration
    virtual const std::string& getAircraftType() const = 0;
    virtual const std::string& getRegistration() const = 0;
};

#endif // AIRCRAFT_INTERFACE_H
