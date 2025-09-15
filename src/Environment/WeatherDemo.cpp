#include <osgViewer/Viewer>
#include <osg/ArgumentParser>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgGA/TrackballManipulator>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osg/ShapeDrawable>
#include <osg/Geode>
#include <osg/Group>
#include <osg/Material>
#include <osg/StateSet>
#include <osg/Light>
#include <osg/LightSource>
#include <osg/Texture2D>
#include <osg/Image>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/Program>
#include <osg/Shader>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/VertexProgram>
#include <osg/ShapeDrawable>
#include <osg/PositionAttitudeTransform>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osg/io_utils>
#include <osgText/Text>
#include <sstream>
#include <iomanip>

#include "WeatherSystem.h"
#include "CloudLayer.h"

// Forward declarations
class WeatherEventHandler;

// Global variables for the weather system and example
osg::ref_ptr<WeatherSystem> g_weatherSystem;
osg::ref_ptr<WeatherEventHandler> g_eventHandler;

/**
 * @brief Event handler for the weather demo
 */
class WeatherEventHandler : public osgGA::GUIEventHandler
{
public:
    WeatherEventHandler() = default;
    ~WeatherEventHandler() override = default;
    
    bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa) override {
        if (!g_weatherSystem) return false;
        
        if (ea.getEventType() == osgGA::GUIEventAdapter::KEYDOWN) {
            switch (ea.getKey()) {
                case 'n': // Next weather preset
                    nextWeatherPreset();
                    return true;
                    
                case 'c': // Toggle clouds
                    g_weatherSystem->setCloudsEnabled(!g_weatherSystem->isCloudsEnabled());
                    std::cout << "Clouds " << (g_weatherSystem->isCloudsEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'f': // Toggle fog
                    g_weatherSystem->setFogEnabled(!g_weatherSystem->isFogEnabled());
                    std::cout << "Fog " << (g_weatherSystem->isFogEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'w': // Toggle wind
                    g_weatherSystem->setWindEnabled(!g_weatherSystem->isWindEnabled());
                    std::cout << "Wind " << (g_weatherSystem->isWindEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                case 'p': // Toggle precipitation
                    g_weatherSystem->setPrecipitationEnabled(!g_weatherSystem->isPrecipitationEnabled());
                    std::cout << "Precipitation " << (g_weatherSystem->isPrecipitationEnabled() ? "enabled" : "disabled") << std::endl;
                    return true;
                    
                default:
                    break;
            }
        }
        
        return false;
    }
    
    // Update the weather system
    void update(double simTime, const osg::Vec3& observerPos) {
        if (g_weatherSystem) {
            g_weatherSystem->update(simTime, observerPos);
        }
    }
    
private:
    // Cycle to the next weather preset
    void nextWeatherPreset() {
        if (!g_weatherSystem) return;
        
        static int currentPreset = 0;
        currentPreset = (currentPreset + 1) % 14; // Number of presets
        
        WeatherSystem::WeatherPreset preset = static_cast<WeatherSystem::WeatherPreset>(currentPreset);
        g_weatherSystem->setWeatherPreset(preset);
        
        // Print the current weather preset
        const char* presetNames[] = {
            "CLEAR", "FEW_CLOUDS", "SCATTERED", "BROKEN", "OVERCAST",
            "LIGHT_RAIN", "HEAVY_RAIN", "THUNDERSTORM", "LIGHT_SNOW",
            "HEAVY_SNOW", "FOG", "HAIL", "DUST_STORM", "TORNADO"
        };
        
        std::cout << "Weather preset: " << presetNames[currentPreset] << std::endl;
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
    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry;
    
    // Create a large flat plane for the ground
    osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array;
    float size = 1000.0f;
    float height = 0.0f;
    
    vertices->push_back(osg::Vec3(-size, -size, height));
    vertices->push_back(osg::Vec3(size, -size, height));
    vertices->push_back(osg::Vec3(size, size, height));
    vertices->push_back(osg::Vec3(-size, size, height));
    
    geometry->setVertexArray(vertices);
    
    // Create texture coordinates
    osg::ref_ptr<osg::Vec2Array> texcoords = new osg::Vec2Array;
    texcoords->push_back(osg::Vec2(0.0f, 0.0f));
    texcoords->push_back(osg::Vec2(1.0f, 0.0f));
    texcoords->push_back(osg::Vec2(1.0f, 1.0f));
    texcoords->push_back(osg::Vec2(0.0f, 1.0f));
    geometry->setTexCoordArray(0, texcoords);
    
    // Create normals (facing up)
    osg::ref_ptr<osg::Vec3Array> normals = new osg::Vec3Array;
    normals->push_back(osg::Vec3(0.0f, 0.0f, 1.0f));
    geometry->setNormalArray(normals, osg::Array::BIND_OVERALL);
    
    // Create the primitive set
    geometry->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::QUADS, 0, 4));
    
    // Add the geometry to the geode
    groundGeode->addDrawable(geometry);
    
    // Set up the ground material
    osg::ref_ptr<osg::Material> material = new osg::Material;
    material->setAmbient(osg::Material::FRONT_AND_BACK, osg::Vec4(0.2f, 0.3f, 0.2f, 1.0f));
    material->setDiffuse(osg::Material::FRONT_AND_BACK, osg::Vec4(0.5f, 0.7f, 0.5f, 1.0f));
    material->setSpecular(osg::Material::FRONT_AND_BACK, osg::Vec4(0.1f, 0.1f, 0.1f, 1.0f));
    material->setShininess(osg::Material::FRONT_AND_BACK, 10.0f);
    
    osg::ref_ptr<osg::StateSet> stateset = groundGeode->getOrCreateStateSet();
    stateset->setAttributeAndModes(material, osg::StateAttribute::ON);
    
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
    text->setText("Weather System Demo\n"
                  "------------------\n"
                  "Press 'n' for next weather preset\n"
                  "'c' to toggle clouds\n"
                  "'f' to toggle fog\n"
                  "'w' to toggle wind\n"
                  "'p' to toggle precipitation");
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
 * @brief Main entry point for the weather demo
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
        g_weatherSystem->setWeatherPreset(WeatherSystem::WeatherPreset::CLEAR);
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
    g_eventHandler = new WeatherEventHandler;
    viewer.addEventHandler(g_eventHandler);
    
    // Print instructions
    std::cout << "Weather System Demo" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Press 'n' for next weather preset" << std::endl;
    std::cout << "'c' to toggle clouds" << std::endl;
    std::cout << "'f' to toggle fog" << std::endl;
    std::cout << "'w' to toggle wind" << std::endl;
    std::cout << "'p' to toggle precipitation" << std::endl;
    
    // Run the viewer
    while (!viewer.done()) {
        // Update the weather system
        if (g_weatherSystem && g_eventHandler) {
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
