#ifndef HUD_SYSTEM_H
#define HUD_SYSTEM_H

#include <osg/Group>
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/LineWidth>
#include <osg/MatrixTransform>
#include <osgText/Text>
#include <osgViewer/Viewer>
#include <osgDB/ReadFile>
#include <osg/PositionAttitudeTransform>
#include <osg/BlendFunc>
#include <osg/AlphaFunc>
#include <osg/StateSet>
#include <osg/Depth>
#include <osg/ShapeDrawable>
#include <osg/Shape>
#include <osg/Texture2D>
#include <osg/TexEnv>
#include <osg/BlendFunc>
#include <osg/AlphaFunc>

#include <string>
#include <memory>
#include <vector>
#include <map>

class HUDSystem : public osg::Group
{
public:
    HUDSystem(osgViewer::Viewer* viewer);
    ~HUDSystem() = default;

    // Initialize the HUD system with configuration
    bool initialize(const std::string& configFile);

    // Update the HUD with current flight data
    void updateHUD(double roll_deg, double pitch_deg, double heading_deg,
                  double airspeed_kts, double altitude_ft, double vs_fpm,
                  double alpha_deg, double beta_deg, double g_load);

    // Toggle HUD visibility
    void setVisible(bool visible);
    bool isVisible() const { return _isVisible; }

    // Adjust HUD brightness (0.0 to 1.0)
    void setBrightness(float brightness);
    float getBrightness() const { return _brightness; }

    // Set HUD color (RGB, 0.0-1.0)
    void setColor(const osg::Vec3& color);
    const osg::Vec3& getColor() const { return _color; }

private:
    // HUD Elements
    void createHUD();
    void createHorizonDisplay();
    void createFlightPathMarker();
    void createAirspeedTape();
    void createAltitudeTape();
    void createHeadingTape();
    void createAnnunciators();
    void createNavigationDisplay();
    
    // Helper functions
    osg::Vec3 applyBrightness(const osg::Vec3& color) const;
    osgText::Text* createText(const std::string& text, float size, const osg::Vec3& pos, 
                             const osg::Vec3& color, osgText::Text::AlignmentType align);
    osg::Geometry* createLine(const osg::Vec3& start, const osg::Vec3& end, 
                             const osg::Vec4& color, float width = 1.0f);
    
    // State
    osg::ref_ptr<osgViewer::Viewer> _viewer;
    osg::ref_ptr<osg::Camera> _hudCamera;
    osg::ref_ptr<osg::Geode> _hudGeode;
    
    // HUD elements
    osg::ref_ptr<osg::Group> _hudElements;
    osg::ref_ptr<osg::Group> _horizonGroup;
    osg::ref_ptr<osg::Group> _flightPathMarker;
    osg::ref_ptr<osg::Group> _airspeedTape;
    osg::ref_ptr<osg::Group> _altitudeTape;
    osg::ref_ptr<osg::Group> _headingTape;
    osg::ref_ptr<osg::Group> _annunciators;
    osg::ref_ptr<osg::Group> _navDisplay;
    
    // Configuration
    bool _isVisible;
    float _brightness;
    osg::Vec3 _color;
    
    // Current values
    double _roll_deg;
    double _pitch_deg;
    double _heading_deg;
    double _airspeed_kts;
    double _altitude_ft;
    double _vs_fpm;
    double _alpha_deg;
    double _beta_deg;
    double _g_load;
    
    // Configuration
    struct HUDConfig {
        struct General {
            float brightness;
            osg::Vec3 color;
            float opacity;
            float scale;
        } general;
        
        struct FlightPathMarker {
            bool enabled;
            float size;
            float lineWidth;
            std::string style;
            bool showVelocityVector;
            bool showAccelerationCue;
            bool showDriftAngleTicks;
        } fpm;
        
        // Add other configuration sections as needed
    } _config;
};

#endif // HUD_SYSTEM_H
