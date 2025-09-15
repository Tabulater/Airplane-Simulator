#include "CelestialSystem.h"
#include <osg/ShapeDrawable>
#include <osg/Material>
#include <osg/BlendFunc>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/Texture2D>
#include <osg/Image>
#include <osg/Depth>
#include <osg/StateSet>
#include <osg/Geometry>
#include <osg/MatrixTransform>
#include <osg/PositionAttitudeTransform>
#include <osgDB/ReadFile>
#include <osgUtil/SmoothingVisitor>
#include <random>
#include <cmath>

// Constants
const double EARTH_RADIUS = 6371000.0; // meters
const double SUN_DISTANCE = 1.496e11;   // meters (1 AU)
const double MOON_DISTANCE = 3.844e8;   // meters
const double SUN_RADIUS = 6.96e8;       // meters
const double MOON_RADIUS = 1.7374e6;    // meters

CelestialSystem::CelestialSystem() {
    // Set up the celestial root node
    setCullingActive(false);
    
    // Create the star field
    createStarField();
    
    // Create the sun and moon
    createSun();
    createMoon();
    
    // Set initial positions
    _sunDirection.set(0.0, 1.0, 0.3);
    _moonDirection.set(0.0, -1.0, 0.3);
    _sunDirection.normalize();
    _moonDirection.normalize();
}

void CelestialSystem::update(double simTime, const osg::Vec3d& observerPos) {
    // Update celestial body positions
    calculatePositions(simTime, observerPos);
    
    // Update light positions
    if (_sunLight.valid()) {
        _sunLight->setPosition(osg::Vec4(_sunDirection * SUN_DISTANCE, 0.0));
    }
    
    if (_moonLight.valid()) {
        _moonLight->setPosition(osg::Vec4(_moonDirection * MOON_DISTANCE, 0.0));
    }
    
    // Update visual positions
    if (_sunTransform.valid()) {
        osg::Matrix mat;
        mat.makeTranslate(_sunDirection * SUN_DISTANCE * 0.01); // Scale down for visualization
        _sunTransform->setMatrix(mat);
    }
    
    if (_moonTransform.valid()) {
        osg::Matrix mat;
        mat.makeTranslate(_moonDirection * MOON_DISTANCE * 0.1); // Scale down for visualization
        _moonTransform->setMatrix(mat);
    }
}

void CelestialSystem::createStarField() {
    // Create a geode to hold the star geometry
    _starField = new osg::Geode;
    
    // Create a geometry object to store all stars
    osg::ref_ptr<osg::Geometry> starsGeom = new osg::Geometry;
    osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array;
    osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array;
    
    // Generate random stars
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dist(-1.0f, 1.0f);
    std::uniform_real_distribution<float> brightness(0.5f, 1.0f);
    
    const int numStars = 5000;
    for (int i = 0; i < numStars; ++i) {
        // Generate random point on unit sphere
        osg::Vec3d dir(dist(gen), dist(gen), dist(gen));
        dir.normalize();
        
        // Position stars at a large distance
        vertices->push_back(dir * 1.0e6);
        
        // Assign random star color (slightly blue-white)
        float b = 0.8f + 0.2f * brightness(gen);
        colors->push_back(osg::Vec4(b, b, b + 0.1f, 1.0f));
    }
    
    // Set up the geometry
    starsGeom->setVertexArray(vertices);
    starsGeom->setColorArray(colors, osg::Array::BIND_PER_VERTEX);
    starsGeom->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::POINTS, 0, numStars));
    
    // Set up point sprites for better star rendering
    osg::StateSet* ss = starsGeom->getOrCreateStateSet();
    osg::PointSprite* sprite = new osg::PointSprite();
    ss->setTextureAttributeAndModes(0, sprite, osg::StateAttribute::ON);
    
    // Enable blending
    ss->setMode(GL_BLEND, osg::StateAttribute::ON);
    ss->setRenderingHint(osg::StateSet::TRANSPARENT_BIN);
    
    // Set point size
    osg::Point* point = new osg::Point(2.0f);
    ss->setAttribute(point);
    
    // Add to the geode
    _starField->addDrawable(starsGeom);
    
    // Add to the scene
    addChild(_starField);
}

void CelestialSystem::createSun() {
    // Create the sun light
    _sunLight = new osg::Light;
    _sunLight->setLightNum(0);
    _sunLight->setDiffuse(osg::Vec4(1.0f, 0.95f, 0.9f, 1.0f));
    _sunLight->setSpecular(osg::Vec4(1.0f, 0.95f, 0.9f, 1.0f));
    _sunLight->setAmbient(osg::Vec4(0.1f, 0.1f, 0.1f, 1.0f));
    _sunLight->setDirection(osg::Vec3(0.0f, 0.0f, -1.0f));
    _sunLight->setPosition(osg::Vec4(0.0f, 0.0f, 0.0f, 0.0f)); // Directional light
    
    _sunLightSource = new osg::LightSource;
    _sunLightSource->setLight(_sunLight.get());
    _sunLightSource->setLocalStateSetModes(osg::StateAttribute::ON);
    _sunLightSource->setStateSetModes(*getOrCreateStateSet(), osg::StateAttribute::ON);
    addChild(_sunLightSource);
    
    // Create a visual representation of the sun
    _sunTransform = new osg::MatrixTransform;
    
    osg::ref_ptr<osg::Geode> sunGeode = new osg::Geode;
    osg::ref_ptr<osg::Sphere> sunShape = new osg::Sphere(osg::Vec3(0, 0, 0), SUN_RADIUS * 10.0);
    osg::ref_ptr<osg::ShapeDrawable> sunDrawable = new osg::ShapeDrawable(sunShape);
    
    // Set up sun material
    osg::ref_ptr<osg::Material> sunMaterial = new osg::Material;
    sunMaterial->setEmission(osg::Material::FRONT_AND_BACK, osg::Vec4(1.0f, 0.9f, 0.7f, 1.0f));
    sunMaterial->setDiffuse(osg::Material::FRONT_AND_BACK, osg::Vec4(1.0f, 0.9f, 0.7f, 1.0f));
    
    osg::StateSet* ss = sunGeode->getOrCreateStateSet();
    ss->setAttributeAndModes(sunMaterial, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);
    ss->setMode(GL_LIGHTING, osg::StateAttribute::ON);
    ss->setMode(GL_BLEND, osg::StateAttribute::ON);
    
    // Add to the scene
    sunGeode->addDrawable(sunDrawable);
    _sunTransform->addChild(sunGeode);
    addChild(_sunTransform);
}

void CelestialSystem::createMoon() {
    // Create the moon light (much dimmer than the sun)
    _moonLight = new osg::Light;
    _moonLight->setLightNum(1);
    _moonLight->setDiffuse(osg::Vec4(0.1f, 0.1f, 0.15f, 1.0f));
    _moonLight->setSpecular(osg::Vec4(0.05f, 0.05f, 0.1f, 1.0f));
    _moonLight->setAmbient(osg::Vec4(0.01f, 0.01f, 0.02f, 1.0f));
    _moonLight->setDirection(osg::Vec3(0.0f, 0.0f, -1.0f));
    _moonLight->setPosition(osg::Vec4(0.0f, 0.0f, 0.0f, 0.0f)); // Directional light
    
    _moonLightSource = new osg::LightSource;
    _moonLightSource->setLight(_moonLight.get());
    _moonLightSource->setLocalStateSetModes(osg::StateAttribute::ON);
    _moonLightSource->setStateSetModes(*getOrCreateStateSet(), osg::StateAttribute::ON);
    addChild(_moonLightSource);
    
    // Create a visual representation of the moon
    _moonTransform = new osg::MatrixTransform;
    
    osg::ref_ptr<osg::Geode> moonGeode = new osg::Geode;
    osg::ref_ptr<osg::Sphere> moonShape = new osg::Sphere(osg::Vec3(0, 0, 0), MOON_RADIUS * 20.0);
    osg::ref_ptr<osg::ShapeDrawable> moonDrawable = new osg::ShapeDrawable(moonShape);
    
    // Set up moon material
    osg::ref_ptr<osg::Material> moonMaterial = new osg::Material;
    moonMaterial->setEmission(osg::Material::FRONT_AND_BACK, osg::Vec4(0.7f, 0.7f, 0.7f, 1.0f));
    moonMaterial->setDiffuse(osg::Material::FRONT_AND_BACK, osg::Vec4(0.7f, 0.7f, 0.7f, 1.0f));
    
    osg::StateSet* ss = moonGeode->getOrCreateStateSet();
    ss->setAttributeAndModes(moonMaterial, osg::StateAttribute::ON | osg::StateAttribute::OVERRIDE);
    ss->setMode(GL_LIGHTING, osg::StateAttribute::ON);
    ss->setMode(GL_BLEND, osg::StateAttribute::ON);
    
    // Add to the scene
    moonGeode->addDrawable(moonDrawable);
    _moonTransform->addChild(moonGeode);
    addChild(_moonTransform);
}

void CelestialSystem::calculatePositions(double simTime, const osg::Vec3d& observerPos) {
    // Simplified celestial mechanics - in a real implementation, you'd want to use
    // proper astronomical calculations for the observer's position and time
    
    // Simple day/night cycle based on simulation time
    double dayFrac = fmod(simTime, 86400.0) / 86400.0; // 0-1 over a day
    
    // Calculate sun position (simplified to a circular orbit around the Y axis)
    double sunAngle = dayFrac * 2.0 * M_PI;
    _sunDirection.set(sin(sunAngle), cos(sunAngle), 0.3);
    _sunDirection.normalize();
    
    // Moon position (simpler model, about 28 days for a full cycle)
    double moonAngle = dayFrac * 2.0 * M_PI * (1.0 - 1.0/28.0); // Slightly slower than the sun
    _moonDirection.set(cos(moonAngle), sin(moonAngle), 0.2);
    _moonDirection.normalize();
    
    // Adjust for observer position (simplified)
    // In a more complete implementation, you'd calculate the actual positions
    // based on the observer's latitude, longitude, and time of day
    if (!observerPos.isNaN()) {
        // Simple adjustment based on observer's position
        double lat = asin(observerPos.z() / observerPos.length());
        double lon = atan2(observerPos.y(), observerPos.x());
        
        // Rotate sun and moon directions based on observer's position
        osg::Matrix rotLat, rotLon;
        rotLat.makeRotate(lat, osg::Vec3d(0, 1, 0));
        rotLon.makeRotate(lon, osg::Vec3d(0, 0, 1));
        
        _sunDirection = _sunDirection * rotLat * rotLon;
        _moonDirection = _moonDirection * rotLat * rotLon;
    }
}
