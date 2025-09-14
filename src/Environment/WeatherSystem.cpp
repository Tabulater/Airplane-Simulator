#include "WeatherSystem.h"
#include <osg/Texture2D>
#include <osg/Image>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/Fog>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/VertexProgram>
#include <osg/ShapeDrawable>
#include <osg/PositionAttitudeTransform>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osgParticle/PrecipitationEffect>

using namespace osg;

// Helper function to create a noise texture
ref_ptr<Texture2D> createNoiseTexture(int width, int height) {
    ref_ptr<Image> image = new Image;
    image->allocateImage(width, height, 1, GL_RGBA, GL_UNSIGNED_BYTE);
    
    unsigned char* data = image->data();
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            *data++ = rand() % 256; // R
            *data++ = rand() % 256; // G
            *data++ = rand() % 256; // B
            *data++ = 255;          // A
        }
    }
    
    ref_ptr<Texture2D> texture = new Texture2D;
    texture->setImage(image);
    texture->setWrap(Texture::WRAP_S, Texture::REPEAT);
    texture->setWrap(Texture::WRAP_T, Texture::REPEAT);
    texture->setFilter(Texture::MIN_FILTER, Texture::LINEAR);
    texture->setFilter(Texture::MAG_FILTER, Texture::LINEAR);
    
    return texture;
}

WeatherSystem::WeatherSystem() {
    // Initialize with default weather
    m_currentWeather = WeatherParams();
    m_targetWeather = m_currentWeather;
    
    // Create fog
    m_fog = new Fog;
    m_fog->setMode(Fog::EXP2);
    m_fog->setDensity(0.0001f);
    m_fog->setColor(Vec4(0.8f, 0.8f, 0.8f, 1.0f));
    
    // Create noise texture for clouds
    m_cloudNoiseTexture = createNoiseTexture(256, 256);
    
    // Create shader uniforms
    m_windUniform = new Uniform("wind", Vec3(0.0f, 0.0f, 0.0f));
    m_cloudCoverUniform = new Uniform("cloudCover", 0.0f);
    m_lightingUniform = new Uniform("lighting", 1.0f);
}

bool WeatherSystem::initialize() {
    // Set up the state set
    ref_ptr<StateSet> stateset = getOrCreateStateSet();
    
    // Enable fog
    stateset->setAttributeAndModes(m_fog, StateAttribute::ON);
    
    // Add shader uniforms
    stateset->addUniform(m_windUniform);
    stateset->addUniform(m_cloudCoverUniform);
    stateset->addUniform(m_lightingUniform);
    
    // Create initial cloud layers
    updateCloudLayers();
    
    return true;
}

void WeatherSystem::update(double simTime, const Vec3& observerPos) {
    // Update weather parameters based on transition
    const float transitionRate = 0.1f;
    m_currentWeather.cloudCover += (m_targetWeather.cloudCover - m_currentWeather.cloudCover) * transitionRate;
    m_currentWeather.visibility += (m_targetWeather.visibility - m_currentWeather.visibility) * transitionRate;
    // Update other parameters similarly...
    
    // Update cloud layers
    if (m_cloudsEnabled) {
        updateCloudLayers();
    }
    
    // Update precipitation
    if (m_precipitationEnabled) {
        updatePrecipitation();
    }
    
    // Update fog
    if (m_fogEnabled) {
        updateFog();
    }
    
    // Update wind
    if (m_windEnabled) {
        updateWind();
    }
}

void WeatherSystem::setWeather(const WeatherParams& params) {
    m_targetWeather = params;
}

void WeatherSystem::setWeatherPreset(WeatherPreset preset) {
    WeatherParams params;
    
    switch (preset) {
        case WeatherPreset::CLEAR:
            params.cloudCover = 0.0f;
            params.visibility = 50000.0f;
            break;
        case WeatherPreset::FEW_CLOUDS:
            params.cloudCover = 0.2f;
            params.visibility = 30000.0f;
            break;
        case WeatherPreset::SCATTERED:
            params.cloudCover = 0.4f;
            params.visibility = 20000.0f;
            break;
        case WeatherPreset::BROKEN:
            params.cloudCover = 0.7f;
            params.visibility = 10000.0f;
            break;
        case WeatherPreset::OVERCAST:
            params.cloudCover = 1.0f;
            params.visibility = 5000.0f;
            break;
        case WeatherPreset::LIGHT_RAIN:
            params.cloudCover = 0.8f;
            params.visibility = 5000.0f;
            params.isRaining = true;
            params.precipitationRate = 0.3f;
            break;
        case WeatherPreset::HEAVY_RAIN:
            params.cloudCover = 1.0f;
            params.visibility = 1000.0f;
            params.isRaining = true;
            params.precipitationRate = 1.0f;
            break;
        case WeatherPreset::THUNDERSTORM:
            params.cloudCover = 1.0f;
            params.visibility = 500.0f;
            params.isRaining = true;
            params.isThunderstorm = true;
            params.precipitationRate = 1.0f;
            break;
        case WeatherPreset::LIGHT_SNOW:
            params.cloudCover = 0.9f;
            params.visibility = 3000.0f;
            params.isSnowing = true;
            params.precipitationRate = 0.2f;
            break;
        case WeatherPreset::HEAVY_SNOW:
            params.cloudCover = 1.0f;
            params.visibility = 500.0f;
            params.isSnowing = true;
            params.precipitationRate = 0.8f;
            break;
        case WeatherPreset::FOG:
            params.cloudCover = 1.0f;
            params.visibility = 200.0f;
            break;
        default:
            break;
    }
    
    setWeather(params);
}

void WeatherSystem::updateCloudLayers() {
    // Remove existing cloud layers
    removeChildren(0, getNumChildren());
    
    // Create cloud layers based on current weather
    if (m_currentWeather.cloudCover > 0.01f) {
        // Create a simple cloud layer (in a real implementation, this would be more sophisticated)
        ref_ptr<Geode> cloudLayer = new Geode;
        ref_ptr<Geometry> geometry = new Geometry;
        
        // Create a large quad for the cloud layer
        Vec3Array* vertices = new Vec3Array;
        float size = 10000.0f;
        float height = 1000.0f;
        
        vertices->push_back(Vec3(-size, -size, height));
        vertices->push_back(Vec3(size, -size, height));
        vertices->push_back(Vec3(size, size, height));
        vertices->push_back(Vec3(-size, size, height));
        
        geometry->setVertexArray(vertices);
        
        // Set up the drawing elements
        DrawElementsUInt* primitive = new DrawElementsUInt(PrimitiveSet::QUADS, 0);
        primitive->push_back(0);
        primitive->push_back(1);
        primitive->push_back(2);
        primitive->push_back(3);
        geometry->addPrimitiveSet(primitive);
        
        // Set up texture coordinates
        Vec2Array* texcoords = new Vec2Array;
        texcoords->push_back(Vec2(0.0f, 0.0f));
        texcoords->push_back(Vec2(1.0f, 0.0f));
        texcoords->push_back(Vec2(1.0f, 1.0f));
        texcoords->push_back(Vec2(0.0f, 1.0f));
        geometry->setTexCoordArray(0, texcoords);
        
        // Set up the state set
        ref_ptr<StateSet> stateset = geometry->getOrCreateStateSet();
        stateset->setTextureAttributeAndModes(0, m_cloudNoiseTexture, StateAttribute::ON);
        
        // Enable blending
        stateset->setMode(GL_BLEND, StateAttribute::ON);
        stateset->setRenderingHint(StateSet::TRANSPARENT_BIN);
        
        // Add the geometry to the geode and add to the scene
        cloudLayer->addDrawable(geometry);
        addChild(cloudLayer);
    }
}

void WeatherSystem::updatePrecipitation() {
    // In a real implementation, this would update the precipitation effect
    // based on the current weather parameters
}

void WeatherSystem::updateFog() {
    // Update fog based on visibility
    float density = 0.0f;
    if (m_currentWeather.visibility > 0.0f) {
        density = 1.0f / (m_currentWeather.visibility * 0.5f);
    }
    
    m_fog->setDensity(density);
    
    // Adjust fog color based on weather
    if (m_currentWeather.isRaining || m_currentWeather.isThunderstorm) {
        m_fog->setColor(Vec4(0.5f, 0.5f, 0.55f, 1.0f));
    } else if (m_currentWeather.isSnowing) {
        m_fog->setColor(Vec4(0.9f, 0.9f, 0.95f, 1.0f));
    } else {
        m_fog->setColor(Vec4(0.8f, 0.8f, 0.8f, 1.0f));
    }
}

void WeatherSystem::updateWind() {
    // Update wind vector based on current weather
    float windSpeed = m_currentWeather.windSpeed;
    float windDir = m_currentWeather.windDirection * 3.14159f / 180.0f;
    
    Vec3 windVector(
        sinf(windDir) * windSpeed,
        cosf(windDir) * windSpeed,
        0.0f
    );
    
    m_windUniform->set(windVector);
}

void WeatherSystem::setCloudsEnabled(bool enabled) {
    m_cloudsEnabled = enabled;
    updateCloudLayers();
}

void WeatherSystem::setPrecipitationEnabled(bool enabled) {
    m_precipitationEnabled = enabled;
    updatePrecipitation();
}

void WeatherSystem::setFogEnabled(bool enabled) {
    m_fogEnabled = enabled;
    getOrCreateStateSet()->setAttributeAndModes(
        m_fog, 
        enabled ? StateAttribute::ON : StateAttribute::OFF
    );
}

void WeatherSystem::setWindEnabled(bool enabled) {
    m_windEnabled = enabled;
    if (!enabled) {
        m_windUniform->set(Vec3(0.0f, 0.0f, 0.0f));
    }
}

Vec3 WeatherSystem::getWindVector(const Vec3& position, float altitude) const {
    // In a real implementation, this would calculate wind based on position and altitude
    Vec3 wind;
    wind.x() = m_currentWeather.windSpeed * sinf(m_currentWeather.windDirection * 3.14159f / 180.0f);
    wind.y() = m_currentWeather.windSpeed * cosf(m_currentWeather.windDirection * 3.14159f / 180.0f);
    wind.z() = 0.0f; // No vertical wind for now
    
    return wind;
}
