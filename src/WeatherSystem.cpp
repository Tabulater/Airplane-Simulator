#include "WeatherSystem.h"
#include <osgDB/ReadFile>
#include <osgDB/FileNameUtils>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/Fog>
#include <osg/Material>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>
#include <osg/TextureCubeMap>
#include <osg/MatrixTransform>
#include <osg/PolygonMode>
#include <osg/PositionAttitudeTransform>
#include <osgParticle/ParticleSystem>
#include <osgParticle/PrecipitationEffect>
#include <osgParticle/ModularEmitter>
#include <osgParticle/ModularProgram>
#include <osgParticle/RandomRateCounter>
#include <osgParticle/ParticleSystemUpdater>
#include <osg/io_utils>
#include <random>
#include <cstdlib>

WeatherSystem::WeatherSystem() 
    : _visibilityRange(15000.0f)
    , _hazeDensity(0.1f)
    , _hazeColor(0.8f, 0.8f, 0.8f)
    , _windSpeed(5.0f)
    , _windDirection(180.0f)
    , _precipitationIntensity(0.0f)
    , _timeOfDay(12.0f) {
    
    _root = new osg::Group;
    _root->setName("WeatherSystem");
    
    // Create fog
    _fog = new osg::Fog;
    _fog->setMode(osg::Fog::EXP2);
    _fog->setDensity(0.0002f);
    _fog->setColor(osg::Vec4(0.8f, 0.8f, 0.8f, 1.0f));
    
    osg::StateSet* stateset = _root->getOrCreateStateSet();
    stateset->setAttributeAndModes(_fog.get(), osg::StateAttribute::ON);
    stateset->setMode(GL_FOG, osg::StateAttribute::ON);
    
    // Set up default cloud layers
    setupClouds();
    setupPrecipitation();
}

WeatherSystem::~WeatherSystem() {
    // Cleanup
}

bool WeatherSystem::loadConfig(const std::string& configFile) {
    // TODO: Implement XML config loading
    return true;
}

void WeatherSystem::update(double dt) {
    // Update cloud movement
    for (auto& layer : _cloudLayers) {
        if (layer.effect.valid()) {
            // Update cloud movement based on wind
            osg::Vec3 windVec = osg::Vec3(
                sin(osg::DegreesToRadians(layer.direction)) * layer.speed * 0.1,
                cos(osg::DegreesToRadians(layer.direction)) * layer.speed * 0.1,
                0.0f
            );
            
            osg::MatrixTransform* transform = dynamic_cast<osg::MatrixTransform*>(layer.effect->getParent(0));
            if (transform) {
                osg::Matrix m = transform->getMatrix();
                m.setTrans(m.getTrans() + windVec * dt);
                transform->setMatrix(m);
                
                // Reset position if it drifts too far
                if (m.getTrans().length() > 10000.0f) {
                    m.setTrans(osg::Vec3(0, 0, 0));
                    transform->setMatrix(m);
                }
            }
        }
    }
    
    // Update precipitation
    if (_precipitation.valid()) {
        // Update precipitation based on intensity
        _precipitation->snow(0.05f * _precipitationIntensity);
        
        // Update wind effect on precipitation
        osg::Vec3 windVec = osg::Vec3(
            sin(osg::DegreesToRadians(_windDirection)) * _windSpeed * 0.5f,
            cos(osg::DegreesToRadians(_windDirection)) * _windSpeed * 0.5f,
            0.0f
        );
        _precipitation->setWind(windVec);
    }
    
    // Update time of day
    _timeOfDay += dt / 3600.0f; // Convert seconds to hours
    if (_timeOfDay >= 24.0f) _timeOfDay -= 24.0f;
    
    // Update lighting based on time of day
    updateLighting();
}

void WeatherSystem::setCloudDensity(float density) {
    for (auto& layer : _cloudLayers) {
        if (layer.effect.valid()) {
            layer.density = density;
            layer.effect->setParticleDensity(density * 0.1f);
        }
    }
}

void WeatherSystem::setFogDensity(float density) {
    if (_fog.valid()) {
        _fog->setDensity(density * 0.0005f);
    }
}

void WeatherSystem::setPrecipitation(float intensity) {
    _precipitationIntensity = osg::clampBetween(intensity, 0.0f, 1.0f);
    
    if (_precipitation.valid()) {
        _precipitation->snow(0.05f * _precipitationIntensity);
    }
}

void WeatherSystem::setClearSkies() {
    setCloudDensity(0.1f);
    setFogDensity(0.1f);
    setPrecipitation(0.0f);
}

void WeatherSystem::setBrokenClouds() {
    setCloudDensity(0.5f);
    setFogDensity(0.2f);
    setPrecipitation(0.0f);
}

void WeatherSystem::setOvercast() {
    setCloudDensity(0.8f);
    setFogDensity(0.4f);
    setPrecipitation(0.1f);
}

void WeatherSystem::setStormy() {
    setCloudDensity(0.9f);
    setFogDensity(0.7f);
    setPrecipitation(0.8f);
    
    // Add some wind
    _windSpeed = 15.0f;
    _windDirection = 225.0f;
}

void WeatherSystem::setupClouds() {
    // Create cloud layers
    const int numLayers = 3;
    const float baseAltitude = 1000.0f;
    const float layerSpacing = 500.0f;
    
    for (int i = 0; i < numLayers; ++i) {
        CloudLayer layer;
        layer.altitude = baseAltitude + i * layerSpacing;
        layer.thickness = 200.0f + i * 100.0f;
        layer.coverage = 0.4f + i * 0.1f;
        layer.density = 0.3f + i * 0.1f;
        layer.fade = 0.5f;
        layer.speed = 2.0f + i * 1.0f;
        layer.direction = 180.0f + i * 10.0f;
        
        // Create cloud effect
        osg::ref_ptr<osgParticle::PrecipitationEffect> effect = new osgParticle::PrecipitationEffect;
        effect->snow(0.0f); // Initialize with no precipitation
        effect->setWind(osg::Vec3(0.0f, 0.0f, 0.0f));
        effect->setParticleSize(50.0f + i * 20.0f);
        effect->setParticleColor(osg::Vec4(1.0f, 1.0f, 1.0f, 0.8f));
        effect->setParticleDensity(layer.density * 0.1f);
        effect->setNearTransition(1000.0f);
        effect->setFarTransition(10000.0f);
        
        // Position the cloud layer
        osg::ref_ptr<osg::MatrixTransform> transform = new osg::MatrixTransform;
        transform->setMatrix(osg::Matrix::translate(0.0f, 0.0f, layer.altitude));
        transform->addChild(effect);
        
        _root->addChild(transform);
        
        layer.effect = effect;
        _cloudLayers.push_back(layer);
    }
}

void WeatherSystem::setupFog() {
    // Fog is already set up in the constructor
}

void WeatherSystem::setupPrecipitation() {
    _precipitation = new osgParticle::PrecipitationEffect;
    _precipitation->snow(0.0f); // Start with no precipitation
    _precipitation->setParticleSize(0.01f);
    _precipitation->setParticleSpeed(2.0f);
    _precipitation->setParticleColor(osg::Vec4(0.9f, 0.9f, 1.0f, 1.0f));
    _precipitation->setNearTransition(100.0f);
    _precipitation->setFarTransition(1000.0f);
    _precipitation->setParticleSpeed(5.0f);
    _precipitation->setParticleSize(0.02f);
    
    _root->addChild(_precipitation);
}

void WeatherSystem::updateCloudLayers() {
    // Update cloud layer properties
    for (auto& layer : _cloudLayers) {
        if (layer.effect.valid()) {
            layer.effect->setParticleDensity(layer.density * 0.1f);
        }
    }
}

osg::Vec4f WeatherSystem::getSkyColor() const {
    // Calculate sky color based on time of day
    float t = _timeOfDay;
    
    // Daytime (6:00 - 18:00)
    if (t >= 6.0f && t < 18.0f) {
        // Midday (12:00)
        if (t < 12.0f) {
            // Morning (6:00 - 12:00)
            float p = (t - 6.0f) / 6.0f;
            return osg::Vec4f(0.2f, 0.6f, 1.0f, 1.0f) * (0.7f + 0.3f * p);
        } else {
            // Afternoon (12:00 - 18:00)
            float p = (t - 12.0f) / 6.0f;
            return osg::Vec4f(0.2f, 0.6f, 1.0f, 1.0f) * (1.0f - 0.3f * p);
        }
    }
    // Nighttime (18:00 - 6:00)
    else {
        // Evening (18:00 - 24:00)
        if (t < 24.0f) {
            float p = (t - 18.0f) / 6.0f;
            return osg::Vec4f(0.0f, 0.1f, 0.3f, 1.0f) * (1.0f - p) + 
                   osg::Vec4f(0.0f, 0.0f, 0.1f, 1.0f) * p;
        }
        // Early morning (0:00 - 6:00)
        else {
            float p = t / 6.0f;
            return osg::Vec4f(0.0f, 0.0f, 0.1f, 1.0f) * (1.0f - p) + 
                   osg::Vec4f(0.0f, 0.1f, 0.3f, 1.0f) * p;
        }
    }
}

void WeatherSystem::updateLighting() {
    osg::Vec4f skyColor = getSkyColor();
    
    // Update fog color based on time of day
    if (_fog.valid()) {
        _fog->setColor(skyColor);
    }
    
    // Update ambient light
    osg::StateSet* stateset = _root->getOrCreateStateSet();
    
    // Create or update light
    osg::ref_ptr<osg::Light> light = new osg::Light;
    light->setLightNum(0);
    light->setPosition(osg::Vec4(0.0f, 0.0f, 1.0f, 0.0f)); // Directional light
    
    // Adjust light color based on time of day
    if (_timeOfDay >= 6.0f && _timeOfDay < 18.0f) {
        // Daytime
        float intensity = 0.8f + 0.2f * sin(osg::PI * (_timeOfDay - 6.0f) / 12.0f);
        light->setDiffuse(osg::Vec4(1.0f, 1.0f, 0.9f, 1.0f) * intensity);
        light->setAmbient(osg::Vec4(0.3f, 0.3f, 0.3f, 1.0f));
    } else {
        // Nighttime
        light->setDiffuse(osg::Vec4(0.1f, 0.1f, 0.2f, 1.0f));
        light->setAmbient(osg::Vec4(0.1f, 0.1f, 0.15f, 1.0f));
    }
    
    osg::ref_ptr<osg::LightSource> lightSource = new osg::LightSource;
    lightSource->setLight(light);
    
    // Remove existing light if any
    for (unsigned int i = 0; i < _root->getNumChildren(); ++i) {
        if (dynamic_cast<osg::LightSource*>(_root->getChild(i))) {
            _root->removeChild(i);
            break;
        }
    }
    
    _root->addChild(lightSource);
}
