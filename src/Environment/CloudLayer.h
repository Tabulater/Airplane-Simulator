#ifndef CLOUD_LAYER_H
#define CLOUD_LAYER_H

#include <osg/Group>
#include <osg/Texture2D>
#include <osg/Geometry>
#include <osg/StateSet>
#include <osg/Program>
#include <osg/Uniform>

/**
 * @brief The CloudLayer class represents a single layer of clouds in the atmosphere
 * 
 * This class handles the rendering of a single cloud layer with configurable
 * properties like coverage, density, altitude, and movement.
 */
class CloudLayer : public osg::Group
{
public:
    /**
     * @brief Cloud type enumeration
     */
    enum CloudType {
        CIRRUS,     // High-altitude, wispy clouds
        ALTO,       // Mid-altitude clouds
        STRATUS,    // Low, uniform cloud layer
        CUMULUS,    // Puffy, vertically developed clouds
        CUMULONIMBUS // Thunderstorm clouds
    };

    /**
     * @brief Cloud layer parameters structure
     */
    struct Parameters {
        CloudType type{CUMULUS};
        float coverage{0.5f};      // 0.0 (no clouds) to 1.0 (fully covered)
        float density{0.5f};       // 0.0 (transparent) to 1.0 (opaque)
        float altitude{1000.0f};   // Height above ground in meters
        float thickness{500.0f};   // Thickness of the cloud layer in meters
        float scale{1.0f};         // Scale of cloud patterns
        float speed{1.0f};         // Movement speed factor
        osg::Vec2 direction{1.0f, 0.0f}; // Movement direction
        osg::Vec4 color{1.0f, 1.0f, 1.0f, 1.0f}; // Cloud color
    };

    /**
     * @brief Constructor
     * @param params Cloud layer parameters
     */
    explicit CloudLayer(const Parameters& params = Parameters());

    /**
     * @brief Update the cloud layer
     * @param time Current simulation time in seconds
     */
    void update(double time);

    /**
     * @brief Set the cloud layer parameters
     * @param params New parameters
     */
    void setParameters(const Parameters& params);

    /**
     * @brief Get the current cloud layer parameters
     * @return Current parameters
     */
    const Parameters& getParameters() const { return m_params; }

    /**
     * @brief Set the cloud layer coverage
     * @param coverage Coverage value (0.0 to 1.0)
     */
    void setCoverage(float coverage);

    /**
     * @brief Set the cloud layer density
     * @param density Density value (0.0 to 1.0)
     */
    void setDensity(float density);

    /**
     * @brief Set the cloud layer altitude
     * @param altitude Altitude in meters
     */
    void setAltitude(float altitude);

    /**
     * @brief Set the cloud layer movement direction and speed
     * @param direction Normalized direction vector
     * @param speed Speed factor
     */
    void setMovement(const osg::Vec2& direction, float speed);

private:
    void createGeometry();
    void updateUniforms();
    void createShaders();
    void createNoiseTextures();

    Parameters m_params;
    double m_lastUpdateTime{0.0};
    osg::ref_ptr<osg::Uniform> m_coverageUniform;
    osg::ref_ptr<osg::Uniform> m_densityUniform;
    osg::ref_ptr<osg::Uniform> m_offsetUniform;
    osg::ref_ptr<osg::Uniform> m_scaleUniform;
    osg::ref_ptr<osg::Uniform> m_colorUniform;
    osg::ref_ptr<osg::Texture2D> m_noiseTexture1;
    osg::ref_ptr<osg::Texture2D> m_noiseTexture2;
};

#endif // CLOUD_LAYER_H
