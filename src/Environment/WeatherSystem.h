#ifndef WEATHER_SYSTEM_H
#define WEATHER_SYSTEM_H

#include <osg/Group>
#include <osg/Texture2D>
#include <osg/StateSet>
#include <osg/Fog>
#include <osg/Uniform>
#include <osg/NodeCallback>
#include <vector>
#include <memory>

// Forward declarations
class CloudLayer;
class PrecipitationEffect;

/**
 * @brief The WeatherSystem class manages all weather-related visual and physical effects
 * 
 * This includes:
 * - Cloud layers (stratus, cumulus, cirrus)
 * - Fog and visibility effects
 * - Precipitation (rain, snow)
 * - Wind and turbulence
 * - Lighting and atmospheric effects
 */
class WeatherSystem : public osg::Group
{
public:
    enum class WeatherPreset {
        CLEAR,
        FEW_CLOUDS,
        SCATTERED,
        BROKEN,
        OVERCAST,
        LIGHT_RAIN,
        HEAVY_RAIN,
        THUNDERSTORM,
        LIGHT_SNOW,
        HEAVY_SNOW,
        FOG,
        HAIL,
        DUST_STORM,
        TORNADO
    };

    struct WeatherParams {
        float cloudCover{0.0f};          // 0.0 (clear) to 1.0 (overcast)
        float cloudThickness{1000.0f};    // meters
        float cloudBaseHeight{1000.0f};   // meters above ground
        float visibility{10000.0f};       // meters
        float precipitationRate{0.0f};    // 0.0 (none) to 1.0 (heavy)
        float precipitationDensity{0.0f}; // 0.0 (none) to 1.0 (heavy)
        float windSpeed{0.0f};           // m/s
        float windDirection{0.0f};        // degrees, from north
        float turbulence{0.0f};           // 0.0 (none) to 1.0 (severe)
        float temperature{15.0f};         // degrees C
        float pressure{1013.25f};         // hPa
        float humidity{0.5f};             // 0.0 to 1.0
        bool  isRaining{false};
        bool  isSnowing{false};
        bool  isHailing{false};
        bool  isThunderstorm{false};
    };

    WeatherSystem();
    virtual ~WeatherSystem() = default;

    // Initialize the weather system
    bool initialize();

    // Update weather based on simulation time
    void update(double simTime, const osg::Vec3& observerPos);

    // Set weather parameters directly
    void setWeather(const WeatherParams& params);
    
    // Set weather using a preset
    void setWeatherPreset(WeatherPreset preset);
    
    // Get current weather parameters
    const WeatherParams& getCurrentWeather() const { return m_currentWeather; }
    
    // Enable/disable specific effects
    void setCloudsEnabled(bool enabled);
    void setPrecipitationEnabled(bool enabled);
    void setFogEnabled(bool enabled);
    void setWindEnabled(bool enabled);
    
    // Get the fog settings for the scene
    osg::ref_ptr<osg::Fog> getFog() const { return m_fog; }
    
    // Get the wind vector at a specific position and altitude
    osg::Vec3 getWindVector(const osg::Vec3& position, float altitude) const;

protected:
    // Create cloud layers based on current weather
    void updateCloudLayers();
    
    // Update precipitation effects
    void updatePrecipitation();
    
    // Update fog and visibility
    void updateFog();
    
    // Update wind effects
    void updateWind();
    
    // Update shader uniforms
    void updateShaderUniforms();

private:
    // Current weather state
    WeatherParams m_currentWeather;
    WeatherParams m_targetWeather;
    float m_weatherTransitionTime{0.0f};
    
    // Cloud layers
    std::vector<std::unique_ptr<CloudLayer>> m_cloudLayers;
    
    // Precipitation effects
    std::unique_ptr<PrecipitationEffect> m_precipitation;
    
    // Fog
    osg::ref_ptr<osg::Fog> m_fog;
    
    // Wind
    osg::ref_ptr<osg::Uniform> m_windUniform;
    
    // Shader uniforms
    osg::ref_ptr<osg::Uniform> m_cloudCoverUniform;
    osg::ref_ptr<osg::Uniform> m_lightingUniform;
    
    // State
    bool m_cloudsEnabled{true};
    bool m_precipitationEnabled{true};
    bool m_fogEnabled{true};
    bool m_windEnabled{true};
    
    // Textures
    osg::ref_ptr<osg::Texture2D> m_cloudNoiseTexture;
    osg::ref_ptr<osg::Texture2D> m_weatherMapTexture;
};

#endif // WEATHER_SYSTEM_H
