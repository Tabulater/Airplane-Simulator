#ifndef EFIS_H
#define EFIS_H

#include <osg/Group>
#include <osg/ref_ptr>
#include <osg/Vec3d>
#include <string>
#include <memory>

// Forward declarations
class HUDSystem;
class Aircraft;

/**
 * @brief The EFIS class manages the Electronic Flight Instrument System
 * 
 * This class handles the integration between aircraft systems, navigation,
 * and the HUD display to ensure consistent symbology across all aircraft.
 */
class EFIS : public osg::Group
{
public:
    EFIS();
    virtual ~EFIS() = default;

    // Initialize EFIS with required systems
    void initialize(HUDSystem* hud, Aircraft* aircraft);

    // Update EFIS with current flight state
    void update(double deltaTime);

    // Mode selection
    enum class Mode {
        NAV,    // Standard navigation mode
        VOR,    // VOR navigation mode
        ILS,    // Instrument Landing System mode
        TACAN,  // TACAN navigation mode
        HUD_ONLY // HUD-only mode (minimal display)
    };

    void setMode(Mode mode) { m_mode = mode; }
    Mode getMode() const { return m_mode; }

    // Display options
    void setShowFlightPathVector(bool show) { m_showFPV = show; }
    void setShowWaypoints(bool show) { m_showWaypoints = show; }
    void setShowAirports(bool show) { m_showAirports = show; }
    void setShowWeather(bool show) { m_showWeather = show; }

protected:
    // Update HUD elements based on current mode
    void updateNAVMode();
    void updateVORMode();
    void updateILSMode();
    void updateTACANMode();
    void updateHUDOnlyMode();

    // Helper functions
    void updateFlightPathMarker();
    void updateNavigationDisplay();
    void updateWeatherDisplay();
    void updateTerrainDisplay();
    void updateTrafficDisplay();
    void updateSystemStatus();

private:
    // Connected systems
    osg::ref_ptr<HUDSystem> m_hud;
    Aircraft* m_aircraft{nullptr};

    // Current state
    Mode m_mode{Mode::NAV};
    double m_updateTime{0.0};
    
    // Display options
    bool m_showFPV{true};
    bool m_showWaypoints{true};
    bool m_showAirports{true};
    bool m_showWeather{true};
    bool m_showTerrain{true};
    bool m_showTraffic{true};
    bool m_showSystemStatus{true};

    // Cached values for smooth updates
    double m_lastAirspeed{0.0};
    double m_lastAltitude{0.0};
    double m_lastHeading{0.0};
    double m_lastVS{0.0};
    
    // Configuration
    struct EFISConfig {
        bool terrainWarningEnabled{true};
        bool trafficWarningEnabled{true};
        bool weatherRadarEnabled{true};
        // Add more configuration parameters as needed
    } m_config;
};

#endif // EFIS_H
