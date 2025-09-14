#include "WeatherExample.h"
#include <osg/ShapeDrawable>
#include <osg/Material>
#include <osg/PositionAttitudeTransform>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osgGA/TrackballManipulator>
#include <osgText/Text>
#include <sstream>
#include <iomanip>

using namespace osg;

WeatherExample::WeatherExample(osgViewer::Viewer* viewer)
    : m_viewer(viewer)
    , m_root(new Group)
    , m_weatherSystem(new WeatherSystem)
{
    // Create the scene
    m_root->addChild(createScene());
    
    // Add the weather system to the scene
    if (m_weatherSystem->initialize()) {
        m_root->addChild(m_weatherSystem);
    }
    
    // Set up the camera
    setupCamera(viewer);
    
    // Set the initial weather
    m_weatherSystem->setWeatherPreset(m_currentPreset);
    
    // Add this as an event handler
    viewer->addEventHandler(this);
}

bool WeatherExample::handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter&) {
    if (ea.getEventType() == osgGA::GUIEventAdapter::KEYDOWN) {
        switch (ea.getKey()) {
            case 'n':
                nextWeatherPreset();
                return true;
                
            case 'c':
                toggleEffect(0); // Toggle clouds
                return true;
                
            case 'f':
                toggleEffect(1); // Toggle fog
                return true;
                
            case 'w':
                toggleEffect(2); // Toggle wind
                return true;
                
            case 'p':
                toggleEffect(3); // Toggle precipitation
                return true;
                
            default:
                break;
        }
    }
    
    return false;
}

void WeatherExample::update() {
    // Update simulation time (in seconds)
    static double lastTime = m_viewer->elapsedTime();
    double currentTime = m_viewer->elapsedTime();
    double deltaTime = currentTime - lastTime;
    lastTime = currentTime;
    
    m_simTime += deltaTime;
    
    // Update the weather system
    if (m_weatherSystem) {
        // Get the camera position for weather effects that depend on viewer position
        Vec3d eye, center, up;
        m_viewer->getCamera()->getViewMatrixAsLookAt(eye, center, up);
        
        m_weatherSystem->update(m_simTime, eye);
    }
    
    // Update any other dynamic elements here
}

Node* WeatherExample::createScene() {
    // Create a group to hold all scene elements
    ref_ptr<Group> scene = new Group;
    
    // Add a ground plane
    ref_ptr<Geode> groundGeode = new Geode;
    ref_ptr<Geometry> geometry = new Geometry;
    
    // Create a large flat plane for the ground
    ref_ptr<Vec3Array> vertices = new Vec3Array;
    float size = 1000.0f;
    float height = 0.0f;
    
    vertices->push_back(Vec3(-size, -size, height));
    vertices->push_back(Vec3(size, -size, height));
    vertices->push_back(Vec3(size, size, height));
    vertices->push_back(Vec3(-size, size, height));
    
    geometry->setVertexArray(vertices);
    
    // Create texture coordinates
    ref_ptr<Vec2Array> texcoords = new Vec2Array;
    texcoords->push_back(Vec2(0.0f, 0.0f));
    texcoords->push_back(Vec2(1.0f, 0.0f));
    texcoords->push_back(Vec2(1.0f, 1.0f));
    texcoords->push_back(Vec2(0.0f, 1.0f));
    geometry->setTexCoordArray(0, texcoords);
    
    // Create normals (facing up)
    ref_ptr<Vec3Array> normals = new Vec3Array;
    normals->push_back(Vec3(0.0f, 0.0f, 1.0f));
    geometry->setNormalArray(normals, Array::BIND_OVERALL);
    
    // Create the primitive set
    geometry->addPrimitiveSet(new DrawArrays(PrimitiveSet::QUADS, 0, 4));
    
    // Add the geometry to the geode
    groundGeode->addDrawable(geometry);
    
    // Set up the ground material
    ref_ptr<Material> material = new Material;
    material->setAmbient(Material::FRONT_AND_BACK, Vec4(0.2f, 0.3f, 0.2f, 1.0f));
    material->setDiffuse(Material::FRONT_AND_BACK, Vec4(0.5f, 0.7f, 0.5f, 1.0f));
    material->setSpecular(Material::FRONT_AND_BACK, Vec4(0.1f, 0.1f, 0.1f, 1.0f));
    material->setShininess(Material::FRONT_AND_BACK, 10.0f);
    
    ref_ptr<StateSet> stateset = groundGeode->getOrCreateStateSet();
    stateset->setAttributeAndModes(material, StateAttribute::ON);
    
    // Add the ground to the scene
    scene->addChild(groundGeode);
    
    // Add some simple objects to the scene for reference
    ref_ptr<Geode> sphereGeode = new Geode;
    sphereGeode->addDrawable(new ShapeDrawable(new Sphere(Vec3(0.0f, 0.0f, 2.0f), 2.0f)));
    
    ref_ptr<Material> sphereMaterial = new Material;
    sphereMaterial->setAmbient(Material::FRONT_AND_BACK, Vec4(0.2f, 0.2f, 0.5f, 1.0f));
    sphereMaterial->setDiffuse(Material::FRONT_AND_BACK, Vec4(0.5f, 0.5f, 1.0f, 1.0f));
    sphereMaterial->setSpecular(Material::FRONT_AND_BACK, Vec4(0.8f, 0.8f, 0.8f, 1.0f));
    sphereMaterial->setShininess(Material::FRONT_AND_BACK, 50.0f);
    
    ref_ptr<StateSet> sphereStateSet = sphereGeode->getOrCreateStateSet();
    sphereStateSet->setAttributeAndModes(sphereMaterial, StateAttribute::ON);
    
    scene->addChild(sphereGeode);
    
    // Add a text label with instructions
    ref_ptr<Geode> textGeode = new Geode;
    ref_ptr<osgText::Text> text = new osgText::Text;
    
    text->setFont("fonts/arial.ttf");
    text->setText("Press 'n' for next weather preset\n"
                  "'c' to toggle clouds\n"
                  "'f' to toggle fog\n"
                  "'w' to toggle wind\n"
                  "'p' to toggle precipitation");
    text->setPosition(Vec3(-15.0f, -15.0f, 0.0f));
    text->setCharacterSize(1.0f);
    text->setColor(Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    text->setBackdropType(osgText::Text::OUTLINE);
    text->setBackdropColor(Vec4(0.0f, 0.0f, 0.0f, 1.0f));
    
    textGeode->addDrawable(text);
    
    // Create a transform to position the text in screen space
    ref_ptr<MatrixTransform> textTransform = new MatrixTransform;
    textTransform->setMatrix(Matrix::ortho2D(-20, 20, -20, 20));
    textTransform->setReferenceFrame(Transform::ABSOLUTE_RF);
    textTransform->getOrCreateStateSet()->setMode(GL_LIGHTING, StateAttribute::OFF);
    textTransform->addChild(textGeode);
    
    scene->addChild(textTransform);
    
    return scene.release();
}

void WeatherExample::setupCamera(Viewer* viewer) {
    // Set up the camera
    ref_ptr<Camera> camera = viewer->getCamera();
    camera->setClearColor(Vec4(0.2f, 0.4f, 0.6f, 1.0f));
    
    // Set up the view matrix
    ref_ptr<MatrixTransform> viewTransform = new MatrixTransform;
    viewTransform->setMatrix(Matrix::lookAt(
        Vec3(0.0f, -20.0f, 10.0f),  // Eye position
        Vec3(0.0f, 0.0f, 5.0f),     // Center position
        Vec3(0.0f, 0.0f, 1.0f)      // Up vector
    ));
    
    // Set up the projection matrix
    float aspectRatio = static_cast<float>(viewer->getCamera()->getViewport()->width()) / 
                        static_cast<float>(viewer->getCamera()->getViewport()->height());
    
    ref_ptr<MatrixTransform> projTransform = new MatrixTransform;
    projTransform->setMatrix(Matrix::perspective(45.0f, aspectRatio, 0.1f, 1000.0f));
    
    // Add the transforms to the scene
    m_root->addChild(projTransform);
    projTransform->addChild(viewTransform);
    
    // Add a light source
    ref_ptr<LightSource> lightSource = new LightSource;
    lightSource->getLight()->setPosition(Vec4(1.0f, 1.0f, 1.0f, 0.0f));  // Directional light
    lightSource->getLight()->setDiffuse(Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    lightSource->getLight()->setSpecular(Vec4(1.0f, 1.0f, 1.0f, 1.0f));
    
    viewTransform->addChild(lightSource);
    
    // Set the scene data
    viewTransform->addChild(m_root);
    
    // Set the camera manipulator
    ref_ptr<TrackballManipulator> manipulator = new TrackballManipulator;
    manipulator->setHomePosition(
        Vec3(0.0f, -20.0f, 10.0f),  // Eye position
        Vec3(0.0f, 0.0f, 5.0f),     // Center position
        Vec3(0.0f, 0.0f, 1.0f)      // Up vector
    );
    
    viewer->setCameraManipulator(manipulator);
    viewer->home();
}

void WeatherExample::nextWeatherPreset() {
    // Cycle to the next weather preset
    int current = static_cast<int>(m_currentPreset);
    int next = (current + 1) % (static_cast<int>(WeatherSystem::WeatherPreset::TORNADO) + 1);
    m_currentPreset = static_cast<WeatherSystem::WeatherPreset>(next);
    
    // Apply the new weather preset
    if (m_weatherSystem) {
        m_weatherSystem->setWeatherPreset(m_currentPreset);
    }
    
    // Print the current weather preset
    const char* presetNames[] = {
        "CLEAR", "FEW_CLOUDS", "SCATTERED", "BROKEN", "OVERCAST",
        "LIGHT_RAIN", "HEAVY_RAIN", "THUNDERSTORM", "LIGHT_SNOW",
        "HEAVY_SNOW", "FOG", "HAIL", "DUST_STORM", "TORNADO"
    };
    
    std::cout << "Weather preset: " << presetNames[static_cast<int>(m_currentPreset)] << std::endl;
}

void WeatherExample::toggleEffect(int effect) {
    if (!m_weatherSystem) return;
    
    switch (effect) {
        case 0: // Toggle clouds
            m_weatherSystem->setCloudsEnabled(!m_weatherSystem->isCloudsEnabled());
            std::cout << "Clouds " << (m_weatherSystem->isCloudsEnabled() ? "enabled" : "disabled") << std::endl;
            break;
            
        case 1: // Toggle fog
            m_weatherSystem->setFogEnabled(!m_weatherSystem->isFogEnabled());
            std::cout << "Fog " << (m_weatherSystem->isFogEnabled() ? "enabled" : "disabled") << std::endl;
            break;
            
        case 2: // Toggle wind
            m_weatherSystem->setWindEnabled(!m_weatherSystem->isWindEnabled());
            std::cout << "Wind " << (m_weatherSystem->isWindEnabled() ? "enabled" : "disabled") << std::endl;
            break;
            
        case 3: // Toggle precipitation
            m_weatherSystem->setPrecipitationEnabled(!m_weatherSystem->isPrecipitationEnabled());
            std::cout << "Precipitation " << (m_weatherSystem->isPrecipitationEnabled() ? "enabled" : "disabled") << std::endl;
            break;
            
        default:
            break;
    }
}
