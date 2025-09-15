#ifndef CELESTIAL_SYSTEM_H
#define CELESTIAL_SYSTEM_H

#include <osg/Group>
#include <osg/Vec3d>
#include <osg/ref_ptr>

// Forward declarations
namespace osg {
    class Light;
    class LightSource;
    class MatrixTransform;
    class Geode;
}

class CelestialSystem : public osg::Group {
public:
    CelestialSystem();
    virtual ~CelestialSystem() = default;

    // Update the celestial system based on the current time and position
    void update(double simTime, const osg::Vec3d& observerPos);

    // Get the current sun direction (normalized)
    const osg::Vec3d& getSunDirection() const { return _sunDirection; }
    
    // Get the current moon direction (normalized)
    const osg::Vec3d& getMoonDirection() const { return _moonDirection; }

    // Get the sun light source (for scene lighting)
    osg::Light* getSunLight() const { return _sunLight.get(); }
    
    // Get the moon light source (for scene lighting)
    osg::Light* getMoonLight() const { return _moonLight.get(); }

private:
    // Celestial body directions
    osg::Vec3d _sunDirection;
    osg::Vec3d _moonDirection;

    // Light sources
    osg::ref_ptr<osg::Light> _sunLight;
    osg::ref_ptr<osg::Light> _moonLight;
    osg::ref_ptr<osg::LightSource> _sunLightSource;
    osg::ref_ptr<osg::LightSource> _moonLightSource;

    // Visual representations
    osg::ref_ptr<osg::MatrixTransform> _sunTransform;
    osg::ref_ptr<osg::MatrixTransform> _moonTransform;
    osg::ref_ptr<osg::Geode> _starField;

    // Create the star field
    void createStarField();
    
    // Create the sun and moon
    void createSun();
    void createMoon();
    
    // Calculate celestial positions
    void calculatePositions(double simTime, const osg::Vec3d& observerPos);
};

#endif // CELESTIAL_SYSTEM_H
