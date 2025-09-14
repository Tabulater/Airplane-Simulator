#ifndef WEATHER_EXAMPLE_H
#define WEATHER_EXAMPLE_H

#include <osg/Group>
#include <osgViewer/Viewer>
#include "WeatherSystem.h"

/**
 * @brief The WeatherExample class demonstrates the weather system functionality
 * 
 * This class sets up a simple scene with the weather system and provides
 * keyboard controls to change weather presets and toggle effects.
 */
class WeatherExample : public osgGA::GUIEventHandler
{
public:
    WeatherExample(osgViewer::Viewer* viewer);
    ~WeatherExample() = default;
    
    // Handle keyboard events
    bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa) override;
    
    // Update the weather system
    void update();
    
    // Get the root node
    osg::Node* getRoot() const { return m_root.get(); }
    
private:
    // Create a simple scene with a ground plane
    osg::Node* createScene();
    
    // Set up the camera
    void setupCamera(osgViewer::Viewer* viewer);
    
    // Change to the next weather preset
    void nextWeatherPreset();
    
    // Toggle a weather effect
    void toggleEffect(int key);
    
    // The root node of the scene
    osg::ref_ptr<osg::Group> m_root;
    
    // The weather system
    osg::ref_ptr<WeatherSystem> m_weatherSystem;
    
    // Current weather preset
    WeatherSystem::WeatherPreset m_currentPreset{WeatherSystem::WeatherPreset::CLEAR};
    
    // Viewer reference
    osgViewer::Viewer* m_viewer;
    
    // Simulation time
    double m_simTime{0.0};
};

#endif // WEATHER_EXAMPLE_H
