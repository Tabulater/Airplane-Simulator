/**
 * @file test_weather.cpp
 * @brief Test application for the weather system
 * 
 * This application demonstrates the weather system with interactive controls
 * to change weather conditions and toggle different weather effects.
 */

#include <osgViewer/Viewer>
#include <osgGA/TrackballManipulator>
#include <osg/ShapeDrawable>
#include <osg/Geode>
#include <osg/Material>
#include <osg/PositionAttitudeTransform>
#include <osgText/Text>
#include <sstream>
#include <iomanip>

#include "Environment/WeatherSystem.h"
#include "Environment/CloudLayer.h"

// Global variables for the weather system and event handler
osg::ref_ptr<WeatherSystem> g_weatherSystem;

/**
 * @brief Event handler for the weather test application
 */
class WeatherTestHandler : public osgGA::GUIEventHandler
{
public:
    WeatherTestHandler() = default;
    
    bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa) override {
        if (!g_weatherSystem) return false;
        
        if (ea.getEventType() == osgGA::GUIEventAdapter::KEYDOWN) {
            switch (ea.getKey()) {
                case '1':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::CLEAR);
                    std::cout << "Weather: CLEAR" << std::endl;
                    return true;
                    
                case '2':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::FEW_CLOUDS);
                    std::cout << "Weather: FEW_CLOUDS" << std::endl;
                    return true;
                    
                case '3':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::SCATTERED);
                    std::cout << "Weather: SCATTERED" << std::endl;
                    return true;
                    
                case '4':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::BROKEN);
                    std::cout << "Weather: BROKEN" << std::endl;
                    return true;
                    
                case '5':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::OVERCAST);
                    std::cout << "Weather: OVERCAST" << std::endl;
                    return true;
                    
                case '6':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::LIGHT_RAIN);
                    std::cout << "Weather: LIGHT_RAIN" << std::endl;
                    return true;
                    
                case '7':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::HEAVY_RAIN);
                    std::cout << "Weather: HEAVY_RAIN" << std::endl;
                    return true;
                    
                case '8':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::THUNDERSTORM);
                    std::cout << "Weather: THUNDERSTORM" << std::endl;
                    return true;
                    
                case '9':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::LIGHT_SNOW);
                    std::cout << "Weather: LIGHT_SNOW" << std::endl;
                    return true;
                    
                case '0':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::HEAVY_SNOW);
                    std::cout << "Weather: HEAVY_SNOW" << std::endl;
                    return true;
                    
                case '-':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::FOG);
                    std::cout << "Weather: FOG" << std::endl;
                    return true;
                    
                case '=':
                    g_weatherSystem->setWeatherPreset(WeatherSystem::HAIL);
                    std::cout << "Weather: HAIL" << std::endl;
                    return true;
                    
                case 'c':
                    g_weatherSystem->setCloudsEnabled(!g_weatherSystem->isCloudsEnabled());
                    std::cout << "Clouds " << (g_weatherSystem->isCloudsEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'f':
                    g_weatherSystem->setFogEnabled(!g_weatherSystem->isFogEnabled());
                    std::cout << "Fog " << (g_weatherSystem->isFogEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'w':
                    g_weatherSystem->setWindEnabled(!g_weatherSystem->isWindEnabled());
                    std::cout << "Wind " << (g_weatherSystem->isWindEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'p':
                    g_weatherSystem->setPrecipitationEnabled(!g_weatherSystem->isPrecipitationEnabled());
                    std::cout << "Precipitation " << (g_weatherSystem->isPrecipitationEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                default:
                    break;
            }
        }
        
        return false;
    }
};

/**
 * @brief Create a simple scene with a ground plane and some objects
 */
osg::Node* createScene() {
    // Create a group to hold all scene elements
    osg::ref_ptr<osg::Group> scene = new osg::Group;
    
    // Add a ground plane
    osg::ref_ptr<osg::Geode> groundGeode = new osg::Geode;
    groundGeode->addDrawable(new osg::ShapeDrawable(new osg::Box(osg::Vec3(0.0f, 0.0f, -0.5f), 100.0f, 100.0f, 1.0f)));
    
    // Set up the ground material
    osg::ref_ptr<osg::Material> groundMaterial = new osg::Material;
    groundMaterial->setAmbient(osg::Material::FRONT_AND_BACK, osg::Vec4(0.2f, 0.3f, 0.2f, 1.0f));
    groundMaterial->setDiffuse(osg::Material::FRONT_AND_BACK, osg::Vec4(0.5f, 0.7f, 0.5f, 1.0f));
    groundMaterial->setSpecular(osg::Material::FRONT_AND_BACK, osg::Vec4(0.1f, 0.1f, 0.1f, 1.0f));
    groundMaterial->setShininess(osg::Material::FRONT_AND_BACK, 10.0f);
    
    osg::ref_ptr<osg::StateSet> stateset = groundGeode->getOrCreateStateSet();
    stateset->setAttributeAndModes(groundMaterial, osg::StateAttribute::ON);
    
    // Add the ground to the scene
    scene->addChild(groundGeode);
    
    // Add some simple objects to the scene for reference
    osg::ref_ptr<osg::Geode> sphereGeode = new osg::Geode;
    sphereGeode->addDrawable(new osg::ShapeDrawable(new osg::Sphere(osg::Vec3(0.0f, 0.0f, 2.0f), 2.0f)));
    
    osg::ref_ptr<osg::Material> sphereMaterial = new osg::Material;
    sphereMaterial->setAmbient(osg::Material::FRONT_AND_BACK, osg::Vec4(0.2f, 0.2f, 0.5f, 1.0f));
    sphereMaterial->setDiffuse(osg::Material::FRONT_AND_BACK, osg::Vec4(0.5f, 0.5f, 1.0f, 1.0f));
    sphereMaterial->setSpecular(osg::Material::FRONT_AND_BACK, osg::Vec4(0.8f, 0.8f, 0.8f, 1.0f));
    sphereMaterial->setShininess(osg::Material::FRONT_AND_BACK, 50.0f);
    
    osg::ref_ptr<osg::StateSet> sphereStateSet = sphereGeode->getOrCreateStateSet();
    sphereStateSet->setAttributeAndModes(sphereMaterial, osg::StateAttribute::ON);
    
    scene->addChild(sphereGeode);
    
    // Add a text label with instructions
    osg::ref_ptr<osg::Geode> textGeode = new osg::Geode;
    osg::ref_ptr<osgText::Text> text = new osgText::Text;
    
    text->setFont("fonts/arial.ttf");
    text->setText("Weather System Test\n"
                  "-----------------\n"
                  "Press 1-0, - or = to change weather preset\n"
                  "c: Toggle clouds\n"
                  "f: Toggle fog\n"
                  "w: Toggle wind\n"
                  "p: Toggle precipitation");
    text->setPosition(osg::Vec3(-15.0f, -15.0f, 0.0f));
    text->setCharacterSize(1.0f);
    text->setColor(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    text->setBackdropType(osgText::Text::OUTLINE);
    text->setBackdropColor(osg::Vec4(0.0f, 0.0f, 0.0f, 1.0f));
    
    textGeode->addDrawable(text);
    
    // Create a transform to position the text in screen space
    osg::ref_ptr<osg::MatrixTransform> textTransform = new osg::MatrixTransform;
    textTransform->setMatrix(osg::Matrix::ortho2D(-20, 20, -20, 20));
    textTransform->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
    textTransform->getOrCreateStateSet()->setMode(GL_LIGHTING, osg::StateAttribute::OFF);
    textTransform->addChild(textGeode);
    
    scene->addChild(textTransform);
    
    return scene.release();
}

/**
 * @brief Main entry point
 */
int main(int argc, char** argv) {
    // Create the viewer
    osg::ArgumentParser arguments(&argc, argv);
    osgViewer::Viewer viewer(arguments);
    
    // Set up the camera
    osg::ref_ptr<osg::Camera> camera = viewer.getCamera();
    camera->setClearColor(osg::Vec4(0.2f, 0.4f, 0.6f, 1.0f));
    
    // Create the scene
    osg::ref_ptr<osg::Group> root = new osg::Group;
    
    // Add the scene geometry
    root->addChild(createScene());
    
    // Create and initialize the weather system
    g_weatherSystem = new WeatherSystem;
    if (g_weatherSystem->initialize()) {
        root->addChild(g_weatherSystem);
        
        // Set an initial weather preset
        g_weatherSystem->setWeatherPreset(WeatherSystem::CLEAR);
    }
    
    // Set up the view matrix
    osg::ref_ptr<osg::MatrixTransform> viewTransform = new osg::MatrixTransform;
    viewTransform->setMatrix(osg::Matrix::lookAt(
        osg::Vec3(0.0f, -20.0f, 10.0f),  // Eye position
        osg::Vec3(0.0f, 0.0f, 5.0f),     // Center position
        osg::Vec3(0.0f, 0.0f, 1.0f)      // Up vector
    ));
    
    // Set up the projection matrix
    float aspectRatio = static_cast<float>(viewer.getCamera()->getViewport()->width()) / 
                        static_cast<float>(viewer.getCamera()->getViewport()->height());
    
    osg::ref_ptr<osg::MatrixTransform> projTransform = new osg::MatrixTransform;
    projTransform->setMatrix(osg::Matrix::perspective(45.0f, aspectRatio, 0.1f, 1000.0f));
    
    // Add the transforms to the scene
    root->addChild(projTransform);
    projTransform->addChild(viewTransform);
    
    // Add a light source
    osg::ref_ptr<osg::LightSource> lightSource = new osg::LightSource;
    lightSource->getLight()->setPosition(osg::Vec4(1.0f, 1.0f, 1.0f, 0.0f));  // Directional light
    lightSource->getLight()->setDiffuse(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    lightSource->getLight()->setSpecular(osg::Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    
    viewTransform->addChild(lightSource);
    
    // Add the scene to the view transform
    viewTransform->addChild(root);
    
    // Set the scene data
    viewer.setSceneData(root);
    
    // Set up the camera manipulator
    osg::ref_ptr<osgGA::TrackballManipulator> manipulator = new osgGA::TrackballManipulator;
    manipulator->setHomePosition(
        osg::Vec3(0.0f, -20.0f, 10.0f),  // Eye position
        osg::Vec3(0.0f, 0.0f, 5.0f),     // Center position
        osg::Vec3(0.0f, 0.0f, 1.0f)      // Up vector
    );
    
    viewer.setCameraManipulator(manipulator);
    viewer.home();
    
    // Add the event handler
    viewer.addEventHandler(new WeatherTestHandler);
    
    // Print instructions
    std::cout << "Weather System Test" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Press 1-0, - or = to change weather preset" << std::endl;
    std::cout << "c: Toggle clouds" << std::endl;
    std::cout << "f: Toggle fog" << std::endl;
    std::cout << "w: Toggle wind" << std::endl;
    std::cout << "p: Toggle precipitation" << std::endl;
    
    // Run the viewer
    while (!viewer.done()) {
        // Update the weather system
        if (g_weatherSystem) {
            // Get the camera position for weather effects that depend on viewer position
            osg::Vec3d eye, center, up;
            viewer.getCamera()->getViewMatrixAsLookAt(eye, center, up);
            
            // Update the weather system
            static double lastTime = 0.0;
            double currentTime = viewer.elapsedTime();
            double deltaTime = lastTime > 0.0 ? currentTime - lastTime : 0.0;
            lastTime = currentTime;
            
            g_weatherSystem->update(currentTime, eye);
        }
        
        // Render the frame
        viewer.frame();
    }
    
    return 0;
}
