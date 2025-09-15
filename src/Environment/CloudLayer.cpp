#include "CloudLayer.h"
#include <osg/Geode>
#include <osg/Geometry>
#include <osg/Texture2D>
#include <osg/Image>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/Program>
#include <osg/Shader>
#include <osg/StateSet>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/VertexProgram>
#include <osg/ShapeDrawable>
#include <osg/PositionAttitudeTransform>
#include <osg/MatrixTransform>
#include <osgDB/ReadFile>
#include <osg/io_utils>
#include <random>
#include <algorithm>

using namespace osg;

// Helper function to generate Perlin noise texture
ref_ptr<Texture2D> generateNoiseTexture(int width, int height, float scale = 1.0f) {
    ref_ptr<Image> image = new Image;
    image->allocateImage(width, height, 1, GL_LUMINANCE, GL_FLOAT);
    image->setInternalTextureFormat(GL_LUMINANCE_FLOAT32_ATI);
    
    std::vector<float> noise(width * height);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dist(0.0f, 1.0f);
    
    // Generate random noise
    for (int i = 0; i < width * height; ++i) {
        noise[i] = dist(gen);
    }
    
    // Simple blur to create Perlin-like noise
    std::vector<float> temp(noise);
    for (int y = 1; y < height - 1; ++y) {
        for (int x = 1; x < width - 1; ++x) {
            float sum = 0.0f;
            for (int dy = -1; dy <= 1; ++dy) {
                for (int dx = -1; dx <= 1; ++dx) {
                    sum += temp[(y + dy) * width + (x + dx)];
                }
            }
            noise[y * width + x] = sum / 9.0f;
        }
    }
    
    // Copy to image
    float* data = (float*)image->data();
    for (int i = 0; i < width * height; ++i) {
        data[i] = noise[i] * scale;
    }
    
    ref_ptr<Texture2D> texture = new Texture2D;
    texture->setImage(image);
    texture->setWrap(Texture::WRAP_S, Texture::REPEAT);
    texture->setWrap(Texture::WRAP_T, Texture::REPEAT);
    texture->setFilter(Texture::MIN_FILTER, Texture::LINEAR);
    texture->setFilter(Texture::MAG_FILTER, Texture::LINEAR);
    
    return texture;
}

CloudLayer::CloudLayer(const Parameters& params)
    : m_params(params)
    , m_lastUpdateTime(0.0)
    , m_coverageUniform(new Uniform("coverage", m_params.coverage))
    , m_densityUniform(new Uniform("density", m_params.density))
    , m_offsetUniform(new Uniform("offset", Vec2(0.0f, 0.0f)))
    , m_scaleUniform(new Uniform("scale", m_params.scale))
    , m_colorUniform(new Uniform("cloudColor", m_params.color))
{
    // Set up the node mask
    setNodeMask(0xFFFFFFF0); // Default node mask
    
    // Create noise textures
    createNoiseTextures();
    
    // Create the cloud geometry
    createGeometry();
    
    // Set up shaders
    createShaders();
}

void CloudLayer::update(double time) {
    // Calculate time delta
    double deltaTime = m_lastUpdateTime > 0.0 ? time - m_lastUpdateTime : 0.0;
    m_lastUpdateTime = time;
    
    // Update cloud movement
    if (deltaTime > 0.0 && m_params.speed > 0.0f) {
        Vec2 offset = m_offsetUniform->get();
        offset.x() += m_params.direction.x() * m_params.speed * deltaTime * 0.1f;
        offset.y() += m_params.direction.y() * m_params.speed * deltaTime * 0.1f;
        m_offsetUniform->set(offset);
    }
}

void CloudLayer::setParameters(const Parameters& params) {
    bool updateUniforms = false;
    
    if (params.coverage != m_params.coverage) {
        m_params.coverage = params.coverage;
        m_coverageUniform->set(m_params.coverage);
        updateUniforms = true;
    }
    
    if (params.density != m_params.density) {
        m_params.density = params.density;
        m_densityUniform->set(m_params.density);
        updateUniforms = true;
    }
    
    if (params.scale != m_params.scale) {
        m_params.scale = params.scale;
        m_scaleUniform->set(m_params.scale);
        updateUniforms = true;
    }
    
    if (params.color != m_params.color) {
        m_params.color = params.color;
        m_colorUniform->set(m_params.color);
        updateUniforms = true;
    }
    
    if (params.type != m_params.type || 
        params.altitude != m_params.altitude ||
        params.thickness != m_params.thickness) {
        m_params.type = params.type;
        m_params.altitude = params.altitude;
        m_params.thickness = params.thickness;
        createGeometry();
        updateUniforms = true;
    }
    
    m_params.direction = params.direction;
    m_params.speed = params.speed;
    
    if (updateUniforms) {
        updateUniforms();
    }
}

void CloudLayer::setCoverage(float coverage) {
    m_params.coverage = osg::clampBetween(coverage, 0.0f, 1.0f);
    m_coverageUniform->set(m_params.coverage);
}

void CloudLayer::setDensity(float density) {
    m_params.density = osg::clampBetween(density, 0.0f, 1.0f);
    m_densityUniform->set(m_params.density);
}

void CloudLayer::setAltitude(float altitude) {
    if (altitude != m_params.altitude) {
        m_params.altitude = altitude;
        createGeometry();
    }
}

void CloudLayer::setMovement(const Vec2& direction, float speed) {
    m_params.direction = direction;
    m_params.direction.normalize();
    m_params.speed = speed;
}

void CloudLayer::createGeometry() {
    // Remove existing children
    removeChildren(0, getNumChildren());
    
    // Create a geode to hold our geometry
    ref_ptr<Geode> geode = new Geode;
    
    // Create a large quad for the cloud layer
    ref_ptr<Geometry> geometry = new Geometry;
    
    // Create vertices for a large quad
    ref_ptr<Vec3Array> vertices = new Vec3Array;
    float size = 10000.0f; // 10km x 10km
    
    vertices->push_back(Vec3(-size, -size, m_params.altitude));
    vertices->push_back(Vec3(size, -size, m_params.altitude));
    vertices->push_back(Vec3(size, size, m_params.altitude));
    vertices->push_back(Vec3(-size, size, m_params.altitude));
    
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
    geode->addDrawable(geometry);
    
    // Set up the state set
    ref_ptr<StateSet> stateset = geode->getOrCreateStateSet();
    
    // Enable blending
    stateset->setMode(GL_BLEND, StateAttribute::ON);
    stateset->setRenderingHint(StateSet::TRANSPARENT_BIN);
    stateset->setAttributeAndModes(new BlendFunc(
        BlendFunc::SRC_ALPHA, 
        BlendFunc::ONE_MINUS_SRC_ALPHA
    ));
    
    // Disable depth write for proper transparency
    Depth* depth = new Depth;
    depth->setWriteMask(false);
    stateset->setAttributeAndModes(depth, StateAttribute::ON);
    
    // Add the geode to this group
    addChild(geode);
    
    // Update uniforms
    updateUniforms();
}

void CloudLayer::updateUniforms() {
    if (getNumChildren() == 0) return;
    
    Node* node = getChild(0);
    if (!node) return;
    
    ref_ptr<StateSet> stateset = node->getOrCreateStateSet();
    
    // Set the noise textures
    if (m_noiseTexture1.valid()) {
        stateset->setTextureAttributeAndModes(0, m_noiseTexture1, StateAttribute::ON);
    }
    
    if (m_noiseTexture2.valid()) {
        stateset->setTextureAttributeAndModes(1, m_noiseTexture2, StateAttribute::ON);
    }
    
    // Add uniforms
    stateset->addUniform(m_coverageUniform);
    stateset->addUniform(m_densityUniform);
    stateset->addUniform(m_offsetUniform);
    stateset->addUniform(m_scaleUniform);
    stateset->addUniform(m_colorUniform);
}

void CloudLayer::createShaders() {
    static const char* vertexShaderSource = {
        "#version 120\n"
        "varying vec2 texCoord;\n"
        "void main() {\n"
        "    gl_Position = ftransform();\n"
        "    texCoord = gl_MultiTexCoord0.st;\n"
        "}\n"
    };
    
    static const char* fragmentShaderSource = {
        "#version 120\n"
        "uniform sampler2D noiseTex1;\n"
        "uniform sampler2D noiseTex2;\n"
        "uniform float coverage;\n"
        "uniform float density;\n"
        "uniform float scale;\n"
        "uniform vec2 offset;\n"
        "uniform vec4 cloudColor;\n"
        "varying vec2 texCoord;\n"
        "void main() {\n"
        "    // Sample noise textures with different scales and offsets\n"
        "    vec2 uv1 = texCoord * scale + offset * 0.5;\n"
        "    vec2 uv2 = texCoord * scale * 1.7 - offset * 0.3;\n"
        "    \n"
        "    float noise1 = texture2D(noiseTex1, uv1).r;\n"
        "    float noise2 = texture2D(noiseTex2, uv2).r;\n"
        "    \n"
        "    // Combine noise patterns\n"
        "    float cloud = noise1 * noise2;\n"
        "    \n"
        "    // Apply coverage and density\n"
        "    cloud = smoothstep(1.0 - coverage, 1.0, cloud);\n"
        "    cloud *= density;\n"
        "    \n"
        "    // Set the final color\n"
        "    gl_FragColor = vec4(cloudColor.rgb, cloudColor.a * cloud);\n"
        "}\n"
    };
    
    ref_ptr<Program> program = new Program;
    program->addShader(new Shader(Shader::VERTEX, vertexShaderSource));
    program->addShader(new Shader(Shader::FRAGMENT, fragmentShaderSource));
    
    if (getNumChildren() > 0) {
        Node* node = getChild(0);
        if (node) {
            ref_ptr<StateSet> stateset = node->getOrCreateStateSet();
            stateset->setAttributeAndModes(program, StateAttribute::ON);
            
            // Set texture units
            stateset->addUniform(new Uniform("noiseTex1", 0));
            stateset->addUniform(new Uniform("noiseTex2", 1));
        }
    }
}

void CloudLayer::createNoiseTextures() {
    // Create two different noise textures for more interesting cloud patterns
    m_noiseTexture1 = generateNoiseTexture(256, 256, 1.0f);
    m_noiseTexture2 = generateNoiseTexture(256, 256, 1.0f);
}
