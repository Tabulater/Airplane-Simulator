#include "EFIS.h"
#include "HUDSystem.h"
#include "Aircraft/AircraftBase.h"
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LineWidth>
#include <osg/PositionAttitudeTransform>
#include <osgText/Text>
#include <cmath>

EFIS::EFIS()
    : osg::Group()
{
    // Set up the EFIS node mask to ensure proper rendering order
    setNodeMask(0x1);
}

void EFIS::initialize(HUDSystem* hud, Aircraft* aircraft)
{
    if (!hud || !aircraft) {
        // Log error: Invalid parameters
        return;
    }

    m_hud = hud;
    m_aircraft = aircraft;

    // Initialize with default configuration
    m_config.terrainWarningEnabled = true;
    m_config.trafficWarningEnabled = true;
    m_config.weatherRadarEnabled = true;

    // Set initial mode based on aircraft type
    // This could be customized per aircraft type if needed
    m_mode = Mode::NAV;
}

void EFIS::update(double deltaTime)
{
    if (!m_hud.valid() || !m_aircraft) {
        return;
    }

    m_updateTime += deltaTime;

    // Update based on current mode
    switch (m_mode) {
        case Mode::NAV:
            updateNAVMode();
            break;
        case Mode::VOR:
            updateVORMode();
            break;
        case Mode::ILS:
            updateILSMode();
            break;
        case Mode::TACAN:
            updateTACANMode();
            break;
        case Mode::HUD_ONLY:
            updateHUDOnlyMode();
            break;
    }

    // Update common elements
    updateFlightPathMarker();
    
    if (m_showWeather) {
        updateWeatherDisplay();
    }
    
    if (m_showTerrain) {
        updateTerrainDisplay();
    }
    
    if (m_showTraffic) {
        updateTrafficDisplay();
    }
    
    if (m_showSystemStatus) {
        updateSystemStatus();
    }
}

void EFIS::updateNAVMode()
{
    // Standard navigation mode - show primary flight information
    if (m_showWaypoints) {
        updateNavigationDisplay();
    }
    
    // Update HUD with standard navigation symbology
    // This would be customized based on aircraft type
    m_hud->setVisible(true);
}

void EFIS::updateVORMode()
{
    // VOR navigation mode - show VOR-specific information
    m_hud->setVisible(true);
    // Additional VOR-specific updates would go here
}

void EFIS::updateILSMode()
{
    // ILS approach mode - show ILS guidance
    m_hud->setVisible(true);
    // Additional ILS-specific updates would go here
}

void EFIS::updateTACANMode()
{
    // TACAN navigation mode
    m_hud->setVisible(true);
    // Additional TACAN-specific updates would go here
}

void EFIS::updateHUDOnlyMode()
{
    // Minimal display mode - only essential flight information
    m_hud->setVisible(true);
    // Disable non-essential elements
}

void EFIS::updateFlightPathMarker()
{
    if (!m_showFPV) {
        return;
    }

    // Calculate flight path vector based on aircraft state
    // This is a simplified example - actual implementation would use aircraft state
    double pitch = m_aircraft->getPitch();
    double roll = m_aircraft->getRoll();
    double yaw = m_aircraft->getYaw();
    
    // Update HUD with flight path marker
    // m_hud->updateFlightPathMarker(pitch, roll, yaw);
}

void EFIS::updateNavigationDisplay()
{
    // Update navigation display with waypoints, navaids, etc.
    // This would integrate with the navigation system
}

void EFIS::updateWeatherDisplay()
{
    // Update weather radar display if enabled
    if (m_config.weatherRadarEnabled) {
        // Get weather data and update display
    }
}

void EFIS::updateTerrainDisplay()
{
    // Update terrain awareness display if enabled
    if (m_config.terrainWarningEnabled) {
        // Get terrain data and update display
    }
}

void EFIS::updateTrafficDisplay()
{
    // Update traffic display if enabled
    if (m_config.trafficWarningEnabled) {
        // Get traffic data and update display
    }
}

void EFIS::updateSystemStatus()
{
    // Update system status indicators
    // This would check various aircraft systems and update the display
}
