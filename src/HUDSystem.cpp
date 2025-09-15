#include "HUDSystem.h"
#include <osg/io_utils>
#include <osg/MatrixTransform>
#include <osg/ShapeDrawable>
#include <osg/Geometry>
#include <osg/LineWidth>
#include <osgText/Text>
#include <osg/PositionAttitudeTransform>
#include <osgDB/ReadFile>
#include <osg/BlendFunc>
#include <osg/AlphaFunc>
#include <osg/Depth>
#include <osg/Texture2D>
#include <osg/TexEnv>
#include <osg/StateSet>
#include <osg/StateAttribute>
#include <osg/BlendEquation>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/Program>
#include <osg/Shader>
#include <osg/Uniform>

#include <sstream>
#include <iomanip>
#include <cmath>

// Helper function to convert degrees to radians
static inline double deg2rad(double deg) { return deg * M_PI / 180.0; }

HUDSystem::HUDSystem(osgViewer::Viewer* viewer)
    : _viewer(viewer)
    , _isVisible(true)
    , _brightness(0.8f)
    , _color(0.0f, 1.0f, 0.0f)  // Green
    , _roll_deg(0.0)
    , _pitch_deg(0.0)
    , _heading_deg(0.0)
    , _airspeed_kts(0.0)
    , _altitude_ft(0.0)
    , _vs_fpm(0.0)
    , _alpha_deg(0.0)
    , _beta_deg(0.0)
    , _g_load(1.0)
{
    // Set up the HUD camera
    _hudCamera = new osg::Camera;
    _hudCamera->setReferenceFrame(osg::Transform::ABSOLUTE_RF);
    _hudCamera->setProjectionMatrix(osg::Matrix::ortho2D(0, 1280, 0, 720));
    _hudCamera->setViewMatrix(osg::Matrix::identity());
    _hudCamera->setClearMask(GL_DEPTH_BUFFER_BIT);
    _hudCamera->setRenderOrder(osg::Camera::POST_RENDER);
    _hudCamera->setAllowEventFocus(false);
    
    // Create the HUD geode
    _hudGeode = new osg::Geode;
    _hudCamera->addChild(_hudGeode.get());
    
    // Create a group to hold all HUD elements
    _hudElements = new osg::Group;
    _hudGeode->addDrawable(_hudElements.get());
    
    // Create HUD element groups
    _horizonGroup = new osg::Group;
    _flightPathMarker = new osg::Group;
    _airspeedTape = new osg::Group;
    _altitudeTape = new osg::Group;
    _headingTape = new osg::Group;
    _annunciators = new osg::Group;
    _navDisplay = new osg::Group;
    
    _hudElements->addChild(_horizonGroup.get());
    _hudElements->addChild(_flightPathMarker.get());
    _hudElements->addChild(_airspeedTape.get());
    _hudElements->addChild(_altitudeTape.get());
    _hudElements->addChild(_headingTape.get());
    _hudElements->addChild(_annunciators.get());
    _hudElements->addChild(_navDisplay.get());
    
    // Set up HUD state set
    osg::StateSet* stateset = _hudGeode->getOrCreateStateSet();
    stateset->setMode(GL_LIGHTING, osg::StateAttribute::OFF);
    stateset->setMode(GL_BLEND, osg::StateAttribute::ON);
    stateset->setRenderingHint(osg::StateSet::TRANSPARENT_BIN);
    
    // Enable depth testing but disable depth writing
    osg::Depth* depth = new osg::Depth;
    depth->setWriteMask(false);
    stateset->setAttributeAndModes(depth, osg::StateAttribute::ON);
    
    // Set up blending
    osg::BlendFunc* blendFunc = new osg::BlendFunc;
    blendFunc->setFunction(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    stateset->setAttributeAndModes(blendFunc);
    
    // Add to the scene
    addChild(_hudCamera.get());
    
    // Create the HUD elements
    createHUD();
}

bool HUDSystem::initialize(const std::string& configFile)
{
    // TODO: Load and parse the HUD configuration from XML
    // For now, we'll use hardcoded defaults
    
    _config.general.brightness = 0.8f;
    _config.general.color.set(0.0f, 1.0f, 0.0f);
    _config.general.opacity = 0.9f;
    _config.general.scale = 1.0f;
    
    _config.fpm.enabled = true;
    _config.fpm.size = 20.0f;
    _config.fpm.lineWidth = 2.0f;
    _config.fpm.style = "crosshair";
    _config.fpm.showVelocityVector = true;
    _config.fpm.showAccelerationCue = true;
    _config.fpm.showDriftAngleTicks = true;
    
    return true;
}

void HUDSystem::updateHUD(double roll_deg, double pitch_deg, double heading_deg,
                         double airspeed_kts, double altitude_ft, double vs_fpm,
                         double alpha_deg, double beta_deg, double g_load)
{
    // Update current values
    _roll_deg = roll_deg;
    _pitch_deg = pitch_deg;
    _heading_deg = heading_deg;
    _airspeed_kts = airspeed_kts;
    _altitude_ft = altitude_ft;
    _vs_fpm = vs_fpm;
    _alpha_deg = alpha_deg;
    _beta_deg = beta_deg;
    _g_load = g_load;
    
    // Update HUD elements
    // TODO: Implement dynamic updates for each HUD element
}

void HUDSystem::setVisible(bool visible)
{
    _isVisible = visible;
    _hudCamera->setNodeMask(visible ? 0xffffffff : 0x0);
}

void HUDSystem::setBrightness(float brightness)
{
    _brightness = osg::clampBetween(brightness, 0.0f, 1.0f);
    // Update HUD elements with new brightness
}

void HUDSystem::setColor(const osg::Vec3& color)
{
    _color = color;
    // Update HUD elements with new color
}

// Helper function to apply brightness to a color
osg::Vec3 HUDSystem::applyBrightness(const osg::Vec3& color) const
{
    return color * _brightness;
}

// Create a text element
osgText::Text* HUDSystem::createText(const std::string& text, float size, 
                                    const osg::Vec3& pos, const osg::Vec3& color,
                                    osgText::Text::AlignmentType align)
{
    osg::ref_ptr<osgText::Text> textDrawable = new osgText::Text;
    
    // Set up the text properties
    textDrawable->setFont("fonts/arial.ttf");
    textDrawable->setCharacterSize(size);
    textDrawable->setPosition(pos);
    textDrawable->setColor(osg::Vec4(applyBrightness(color), 1.0f));
    textDrawable->setAlignment(align);
    textDrawable->setText(text);
    
    // Add to the HUD geode
    _hudGeode->addDrawable(textDrawable.get());
    
    return textDrawable.release();
}

// Create a line segment
osg::Geometry* HUDSystem::createLine(const osg::Vec3& start, const osg::Vec3& end, 
                                    const osg::Vec4& color, float width)
{
    osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry;
    
    // Create vertices
    osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array;
    vertices->push_back(start);
    vertices->push_back(end);
    
    // Set up the geometry
    geometry->setVertexArray(vertices.get());
    geometry->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::LINES, 0, 2));
    
    // Set up the color
    osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array;
    colors->push_back(osg::Vec4(applyBrightness(osg::Vec3(color.r(), color.g(), color.b())), color.a()));
    geometry->setColorArray(colors.get(), osg::Array::BIND_OVERALL);
    
    // Set up the line width
    osg::ref_ptr<osg::LineWidth> linewidth = new osg::LineWidth;
    linewidth->setWidth(width);
    geometry->getOrCreateStateSet()->setAttributeAndModes(linewidth, osg::StateAttribute::ON);
    
    return geometry.release();
}

// Create the main HUD elements
void HUDSystem::createHUD()
{
    // Create the horizon display
    createHorizonDisplay();
    
    // Create the flight path marker
    createFlightPathMarker();
    
    // Create the airspeed tape
    createAirspeedTape();
    
    // Create the altitude tape
    createAltitudeTape();
    
    // Create the heading tape
    createHeadingTape();
    
    // Create the annunciators
    createAnnunciators();
    
    // Create the navigation display
    createNavigationDisplay();
}

void HUDSystem::createHorizonDisplay()
{
    // Create the horizon line
    osg::ref_ptr<osg::Geometry> horizonLine = createLine(
        osg::Vec3(0.0f, 0.0f, 0.0f), 
        osg::Vec3(100.0f, 0.0f, 0.0f), 
        osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f), 
        2.0f
    );
    
    // Add to the horizon group
    _horizonGroup->addChild(horizonLine);
    
    // Add pitch ladder
    // TODO: Add more detailed pitch ladder with markings
    for (int i = -90; i <= 90; i += 10) {
        if (i == 0) continue; // Skip horizon line
        
        float y = i * 10.0f; // Scale factor for visibility
        osg::ref_ptr<osg::Geometry> line = createLine(
            osg::Vec3(-50.0f, y, 0.0f), 
            osg::Vec3(50.0f, y, 0.0f), 
            osg::Vec4(0.0f, 1.0f, 0.0f, 0.7f), 
            1.0f
        );
        _horizonGroup->addChild(line);
        
        // Add degree labels
        if (i % 30 == 0 && i != 0) {
            std::ostringstream ss;
            ss << std::abs(i) << "°";
            createText(ss.str(), 12.0f, osg::Vec3(60.0f, y, 0.0f), 
                      osg::Vec3(0.0f, 1.0f, 0.0f), 
                      osgText::Text::LEFT_CENTER);
        }
    }
    
    // Add roll indicators
    // TODO: Add more detailed roll indicators
    for (int i = -60; i <= 60; i += 10) {
        if (i == 0) continue; // Skip center line
        
        float angle = deg2rad(i);
        float x1 = 100.0f * sin(angle);
        float y1 = 100.0f * cos(angle);
        
        float tickLength = (i % 30 == 0) ? 20.0f : 10.0f;
        float x2 = (100.0f - tickLength) * sin(angle);
        float y2 = (100.0f - tickLength) * cos(angle);
        
        osg::ref_ptr<osg::Geometry> tick = createLine(
            osg::Vec3(x1, y1, 0.0f), 
            osg::Vec3(x2, y2, 0.0f), 
            osg::Vec4(0.0f, 1.0f, 0.0f, 0.8f), 
            1.5f
        );
        _horizonGroup->addChild(tick);
    }
}

void HUDSystem::createFlightPathMarker()
{
    // Create a simple crosshair for the flight path marker
    float size = _config.fpm.size;
    
    // Horizontal line
    osg::ref_ptr<osg::Geometry> hLine = createLine(
        osg::Vec3(-size, 0.0f, 0.0f), 
        osg::Vec3(size, 0.0f, 0.0f), 
        osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f), 
        _config.fpm.lineWidth
    );
    _flightPathMarker->addChild(hLine);
    
    // Vertical line
    osg::ref_ptr<osg::Geometry> vLine = createLine(
        osg::Vec3(0.0f, -size, 0.0f), 
        osg::Vec3(0.0f, size, 0.0f), 
        osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f), 
        _config.fpm.lineWidth
    );
    _flightPathMarker->addChild(vLine);
    
    // Add a small circle in the center
    osg::ref_ptr<osg::Geometry> circle = new osg::Geometry;
    osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array;
    const int segments = 16;
    const float radius = size * 0.3f;
    
    for (int i = 0; i <= segments; ++i) {
        float angle = 2.0f * M_PI * static_cast<float>(i) / static_cast<float>(segments);
        vertices->push_back(osg::Vec3(radius * cosf(angle), radius * sinf(angle), 0.0f));
    }
    
    circle->setVertexArray(vertices);
    circle->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::LINE_STRIP, 0, vertices->size()));
    
    osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array;
    colors->push_back(osg::Vec4(0.0f, 1.0f, 0.0f, 1.0f));
    circle->setColorArray(colors, osg::Array::BIND_OVERALL);
    
    _flightPathMarker->addChild(circle);
}

void HUDSystem::createAirspeedTape()
{
    // TODO: Implement airspeed tape with dynamic updates
    createText("AIRSPEED", 14.0f, osg::Vec3(50.0f, 360.0f, 0.0f), 
              osg::Vec3(0.0f, 1.0f, 0.0f), 
              osgText::Text::CENTER_CENTER);
}

void HUDSystem::createAltitudeTape()
{
    // TODO: Implement altitude tape with dynamic updates
    createText("ALTITUDE", 14.0f, osg::Vec3(1230.0f, 360.0f, 0.0f), 
              osg::Vec3(0.0f, 1.0f, 0.0f), 
              osgText::Text::CENTER_CENTER);
}

void HUDSystem::createHeadingTape()
{
    // TODO: Implement heading tape with dynamic updates
    createText("HDG", 14.0f, osg::Vec3(640.0f, 700.0f, 0.0f), 
              osg::Vec3(0.0f, 1.0f, 0.0f), 
              osgText::Text::CENTER_CENTER);
}

void HUDSystem::createAnnunciators()
{
    // TODO: Implement annunciators with dynamic updates
    createText("FLIGHT MODE: MANUAL", 16.0f, osg::Vec3(640.0f, 50.0f, 0.0f), 
              osg::Vec3(0.0f, 1.0f, 0.0f), 
              osgText::Text::CENTER_CENTER);
}

void HUDSystem::createNavigationDisplay()
{
    // TODO: Implement navigation display with dynamic updates
    // This would show waypoints, navaids, airports, etc.
}
