#ifndef CESSNA_172_H
#define CESSNA_172_H

#include "AircraftBase.h"

class Cessna172 : public AircraftBase {
public:
    Cessna172();
    
    std::string getName() const override { return "Cessna172"; }
    
    // Cessna 172 specific methods
    void setFlapPosition(double position);
    double getFlapPosition() const { return _flapPosition; }
    
    void setMixture(double mixture);
    double getMixture() const { return _mixture; }
    
    void setCarbHeat(bool on);
    bool isCarbHeatOn() const { return _carbHeatOn; }
    
private:
    void initializeDynamics() override;
    void updateDynamics(double deltaTime) override;
    void updateVisuals() override;
    
    // Cessna 172 specific properties
    double _flapPosition;  // 0.0 (up) to 1.0 (full down)
    double _mixture;       // 0.0 (idle cutoff) to 1.0 (full rich)
    bool _carbHeatOn;      // Carburetor heat on/off
    
    // Engine parameters
    double _rpm;           // Engine RPM
    double _manifoldPressure; // inHg
    double _fuelFlow;      // GPH
    
    // Systems
    bool _masterBatteryOn;
    bool _avionicsPowerOn;
    bool _fuelPumpOn;
    
    void updateEngine(double deltaTime);
    void updateElectricalSystem(double deltaTime);
};

#endif // CESSNA_172_H
