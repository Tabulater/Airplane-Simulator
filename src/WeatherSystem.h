#ifndef WEATHER_SYSTEM_H
#define WEATHER_SYSTEM_H

#include <osg/Group>
#include <osg/Fog>
#include <osgParticle/PrecipitationEffect>
#include <osgParticle/ModularEmitter>
#include <osgParticle/ModularProgram>
#include <osgParticle/RandomRateCounter>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ParticleSystemUpdater>

class WeatherSystem {
public:
    WeatherSystem();
    ~WeatherSystem();

    // Initialize the weather system
    bool loadConfig(const std::string& configFile);
    
    // Update weather effects
    void update(double dt);
    
    // Get the root node containing all weather effects
    osg::Node* getNode() const { return _root.get(); }
    
    // Weather control
    void setCloudDensity(float density);
    void setFogDensity(float density);
    void setPrecipitation(float intensity);
    
    // Weather presets
    void setClearSkies();
    void setBrokenClouds();
    void setOvercast();
    void setStormy();
    
private:
    void setupClouds();
    void setupFog();
    void setupPrecipitation();
    void updateCloudLayers();
    
    // Weather state
    struct CloudLayer {
        osg::ref_ptr<osgParticle::PrecipitationEffect> effect;
        float altitude;
        float thickness;
        float coverage;
        float density;
        float fade;
        float speed;
        float direction;
    };
    
    osg::ref_ptr<osg::Group> _root;
    osg::ref_ptr<osg::Fog> _fog;
    std::vector<CloudLayer> _cloudLayers;
    
    // Configuration
    float _visibilityRange;
    float _hazeDensity;
    osg::Vec3f _hazeColor;
    
    // Wind
    float _windSpeed;
    float _windDirection;
    
    // Precipitation
    osg::ref_ptr<osgParticle::PrecipitationEffect> _precipitation;
    float _precipitationIntensity;
    
    // Time of day
    float _timeOfDay;  // 0-24 hours
    
    // Helper functions
    osg::Vec4f getSkyColor() const;
    void updateLighting();
};

#endif // WEATHER_SYSTEM_H
