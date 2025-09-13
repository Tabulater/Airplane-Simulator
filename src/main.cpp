#include <QApplication>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QSurfaceFormat>
#include <QDebug>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QTimer>
#include <QDateTime>

#include <osgViewer/Viewer>
#include <osgDB/ReadFile>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/UFOManipulator>
#include <osgGA/NodeTrackerManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include "HUDSystem.h"

// Flight state
enum class FlightState {
    COLD_AND_DARK,
    ELECTRICAL_POWER,
    AVIONICS_ON,
    ENGINE_START,
    TAXI,
    TAKEOFF,
    CRUISE,
    LANDING,
    SHUTDOWN
};

// Flight metrics structure
struct FlightMetrics {
    double altitude = 0.0;         // feet
    double airspeed = 0.0;         // knots
    double verticalSpeed = 0.0;    // feet per minute
    double heading = 0.0;          // degrees
    double pitch = 0.0;            // degrees
    double roll = 0.0;             // degrees
    double fuel = 100.0;           // percentage
    double engineRPM = 0.0;        // percentage
    double flightTime = 0.0;       // seconds
    QDateTime startTime;
    
    void update(double dt) {
        flightTime += dt;
        // Simulate basic flight dynamics
        if (engineRPM > 0) {
            airspeed += (engineRPM - 0.5) * 10.0 * dt;
            altitude += verticalSpeed * dt / 60.0; // Convert FPM to feet per second
        }
        airspeed = qMax(0.0, qMin(airspeed, 250.0));
        altitude = qMax(0.0, altitude);
    }
};

class FlightControls : public QWidget {
    Q_OBJECT
public:
    explicit FlightControls(QWidget* parent = nullptr) : QWidget(parent) {
        // Create control indicators
        createIndicators();
        createButtons();
        setupLayout();
    }
    
    void updateControls(double throttle, double stickX, double stickY, double rudder) {
        // Update control indicators
        throttleIndicator->setValue(static_cast<int>(throttle * 100));
        stickXIndicator->setValue(static_cast<int>(stickX * 100));
        stickYIndicator->setValue(static_cast<int>(stickY * 100));
        rudderIndicator->setValue(static_cast<int>(rudder * 100));
    }

signals:
    void toggleEngine();
    void toggleAvionics();
    void toggleLights();
    void toggleGear();

private:
    void createIndicators() {
        throttleIndicator = createIndicator("Throttle");
        stickXIndicator = createIndicator("Aileron");
        stickYIndicator = createIndicator("Elevator");
        rudderIndicator = createIndicator("Rudder");
    }
    
    void createButtons() {
        engineButton = new QPushButton("ENGINE START/STOP");
        avionicsButton = new QPushButton("AVIONICS");
        lightsButton = new QPushButton("LIGHTS");
        gearButton = new QPushButton("GEAR");
        
        connect(engineButton, &QPushButton::clicked, this, &FlightControls::toggleEngine);
        connect(avionicsButton, &QPushButton::clicked, this, &FlightControls::toggleAvionics);
        connect(lightsButton, &QPushButton::clicked, this, &FlightControls::toggleLights);
        connect(gearButton, &QPushButton::clicked, this, &FlightControls::toggleGear);
    }
    
    void setupLayout() {
        QVBoxLayout* layout = new QVBoxLayout(this);
        layout->addWidget(createIndicatorGroup("Flight Controls", 
            {throttleIndicator, stickXIndicator, stickYIndicator, rudderIndicator}));
        
        QHBoxLayout* buttonLayout = new QHBoxLayout();
        buttonLayout->addWidget(engineButton);
        buttonLayout->addWidget(avionicsButton);
        buttonLayout->addWidget(lightsButton);
        buttonLayout->addWidget(gearButton);
        
        layout->addLayout(buttonLayout);
        setLayout(layout);
    }
    
    QWidget* createIndicatorGroup(const QString& title, const QList<QProgressBar*>& indicators) {
        QWidget* group = new QWidget();
        QVBoxLayout* layout = new QVBoxLayout(group);
        layout->addWidget(new QLabel(title));
        
        for (auto indicator : indicators) {
            layout->addWidget(indicator);
        }
        
        return group;
    }
    
    QProgressBar* createIndicator(const QString& label) {
        QProgressBar* indicator = new QProgressBar();
        indicator->setTextVisible(true);
        indicator->setFormat(label + ": %p%");
        indicator->setRange(-100, 100);
        indicator->setValue(0);
        return indicator;
    }
    
    QProgressBar* throttleIndicator;
    QProgressBar* stickXIndicator;
    QProgressBar* stickYIndicator;
    QProgressBar* rudderIndicator;
    
    QPushButton* engineButton;
    QPushButton* avionicsButton;
    QPushButton* lightsButton;
    QPushButton* gearButton;
};

class FlightMetricsDisplay : public QWidget {
    Q_OBJECT
public:
    explicit FlightMetricsDisplay(QWidget* parent = nullptr) : QWidget(parent) {
        setupUI();
        updateMetrics(FlightMetrics());
    }
    
    void updateMetrics(const FlightMetrics& metrics) {
        altitudeLabel->setText(QString("ALT: %1 ft").arg(metrics.altitude, 0, 'f', 0));
        airspeedLabel->setText(QString("IAS: %1 kts").arg(metrics.airspeed, 0, 'f', 0));
        vsiLabel->setText(QString("VSI: %1 fpm").arg(metrics.verticalSpeed, 0, 'f', 0));
        headingLabel->setText(QString("HDG: %1°").arg(metrics.heading, 3, 'f', 0, QChar('0')));
        pitchLabel->setText(QString("PITCH: %1°").arg(metrics.pitch, 3, 'f', 1));
        rollLabel->setText(QString("ROLL: %1°").arg(metrics.roll, 3, 'f', 1));
        fuelLabel->setText(QString("FUEL: %1%").arg(metrics.fuel, 0, 'f', 1));
        rpmLabel->setText(QString("RPM: %1%").arg(metrics.engineRPM, 0, 'f', 1));
        
        QTime time(0, 0);
        time = time.addSecs(static_cast<int>(metrics.flightTime));
        timeLabel->setText("FLT TIME: " + time.toString("hh:mm:ss"));
    }

private:
    void setupUI() {
        QVBoxLayout* layout = new QVBoxLayout(this);
        layout->setSpacing(2);
        
        // Create metric labels
        altitudeLabel = createMetricLabel();
        airspeedLabel = createMetricLabel();
        vsiLabel = createMetricLabel();
        headingLabel = createMetricLabel();
        pitchLabel = createMetricLabel();
        rollLabel = createMetricLabel();
        fuelLabel = createMetricLabel();
        rpmLabel = createMetricLabel();
        timeLabel = createMetricLabel();
        
        // Add to layout
        layout->addWidget(altitudeLabel);
        layout->addWidget(airspeedLabel);
        layout->addWidget(vsiLabel);
        layout->addWidget(headingLabel);
        layout->addWidget(pitchLabel);
        layout->addWidget(rollLabel);
        layout->addWidget(fuelLabel);
        layout->addWidget(rpmLabel);
        layout->addWidget(timeLabel);
        
        setLayout(layout);
        setStyleSheet("QLabel { color: white; font: 12px; }");
        setAutoFillBackground(true);
        
        QPalette pal = palette();
        pal.setColor(QPalette::Window, QColor(0, 0, 0, 180));
        setPalette(pal);
    }
    
    QLabel* createMetricLabel() {
        QLabel* label = new QLabel();
        label->setMinimumWidth(120);
        label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        return label;
    }
    
    QLabel* altitudeLabel;
    QLabel* airspeedLabel;
    QLabel* vsiLabel;
    QLabel* headingLabel;
    QLabel* pitchLabel;
    QLabel* rollLabel;
    QLabel* fuelLabel;
    QLabel* rpmLabel;
    QLabel* timeLabel;
};

class OSGWidget : public QOpenGLWidget, public osgViewer::Viewer
{
public:
    OSGWidget(QWidget* parent = nullptr) : QOpenGLWidget(parent)
    {
        setMouseTracking(true);
        
        // Set up the viewer
        setThreadingModel(osgViewer::Viewer::SingleThreaded);
        
        // Create a root node
        osg::ref_ptr<osg::Group> root = new osg::Group;
        
            // Add a simple model (replace with your aircraft model)
        osg::ref_ptr<osg::Node> model = osgDB::readNodeFile("cessna.osg");
        if (model.valid()) {
            root->addChild(model);
        } else {
            qWarning() << "Failed to load model";
            // Create a simple placeholder if model fails to load
            osg::ref_ptr<osg::Geode> geode = new osg::Geode;
            geode->addDrawable(new osg::ShapeDrawable(new osg::Box(osg::Vec3(0.0f, 0.0f, 1.0f), 2.0f)));
            root->addChild(geode);
        }
        
        // Create and initialize the HUD system
        osg::ref_ptr<HUDSystem> hudSystem = new HUDSystem(this);
        if (!hudSystem->initialize("data/hud/hud_config.xml")) {
            qWarning() << "Failed to initialize HUD system";
        }
        root->addChild(hudSystem);
        
        setSceneData(root);
    }
    
protected:
    void keyPressEvent(QKeyEvent* event) override {
        handleKeyEvent(event, true);
    }
    
    void keyReleaseEvent(QKeyEvent* event) override {
        handleKeyEvent(event, false);
    }
    
    void mouseMoveEvent(QMouseEvent* event) override {
        // Update stick position based on mouse movement when right button is pressed
        if (event->buttons() & Qt::RightButton) {
            QPointF center = rect().center();
            QPointF delta = event->pos() - center;
            
            // Calculate stick position (-1.0 to 1.0)
            _stickX = qBound(-1.0, delta.x() / (width() / 2.0), 1.0);
            _stickY = qBound(-1.0, -delta.y() / (height() / 2.0), 1.0);
            
            if (_controlsWidget) {
                _controlsWidget->updateControls(_throttle, _stickX, _stickY, _rudder);
            }
        }
        
        QOpenGLWidget::mouseMoveEvent(event);
    }
    
    void mousePressEvent(QMouseEvent* event) override {
        // Start moving the stick when right button is pressed
        if (event->button() == Qt::RightButton) {
            setCursor(Qt::BlankCursor);
            QCursor::setPos(mapToGlobal(rect().center()));
        }
        
        QOpenGLWidget::mousePressEvent(event);
    }
    
    void mouseReleaseEvent(QMouseEvent* event) override {
        // Center the stick when right button is released
        if (event->button() == Qt::RightButton) {
            _stickX = 0.0;
            _stickY = 0.0;
            setCursor(Qt::ArrowCursor);
            
            if (_controlsWidget) {
                _controlsWidget->updateControls(_throttle, _stickX, _stickY, _rudder);
            }
        }
        
        QOpenGLWidget::mouseReleaseEvent(event);
    }
    
    void wheelEvent(QWheelEvent* event) override {
        // Adjust throttle with mouse wheel
        QPoint numDegrees = event->angleDelta() / 8;
        if (!numDegrees.isNull()) {
            _throttle = qBound(0.0, _throttle + numDegrees.y() * 0.01, 1.0);
            
            if (_controlsWidget) {
                _controlsWidget->updateControls(_throttle, _stickX, _stickY, _rudder);
            }
        }
        
        event->accept();
    }
    
    virtual void paintGL() override {
        // Update metrics
        updateMetrics();
        
        // Update the camera position based on flight dynamics
        updateCamera();
        
        // Render the frame
        frame();
    }
    
    virtual void resizeGL(int w, int h) override {
        getEventQueue()->windowResize(this->x(), this->y(), w, h);
        getCamera()->setViewport(0, 0, this->width(), this->height());
        
        if (_metricsDisplay) {
            _metricsDisplay->move(10, 10);
        }
        
        if (_controlsWidget) {
            _controlsWidget->move(width() - _controlsWidget->width() - 10, 10);
        }
    }
    
    virtual void initializeGL() override {
        // Set up the viewer's camera
        getCamera()->setViewport(0, 0, width(), height());
        getCamera()->setProjectionMatrixAsPerspective(
            60.0f, static_cast<double>(width())/static_cast<double>(height()), 1.0f, 10000.0f);
        
        // Set up the event queue
        _gw = new osgViewer::GraphicsWindowEmbedded(0, 0, width(), height());
        getCamera()->setGraphicsContext(_gw);
        getCamera()->setViewport(new osg::Viewport(0, 0, width(), height()));
        
        // Set up the camera manipulator
        _manipulator = new osgGA::TrackballManipulator();
        setCameraManipulator(_manipulator);
        
        // Set the scene data
        setSceneData(_root);
        
        // Add the state manipulator
        osg::ref_ptr<osgGA::StateSetManipulator> statesetManipulator = new osgGA::StateSetManipulator(getCamera()->getOrCreateStateSet());
        addEventHandler(statesetManipulator.get());
        
        // Add the stats handler
        addEventHandler(new osgViewer::StatsHandler);
        
        // Set up the view
        getCamera()->setClearColor(osg::Vec4(0.2f, 0.2f, 0.6f, 1.0f));
        
        // Start the timer for physics updates
        _lastUpdateTime = QTime::currentTime();
    }
    
    osgGA::EventQueue* getEventQueue() const
    {
        return _gw->getEventQueue();
    }
    
private slots:
    void updatePhysics() {
        // Calculate delta time
        QTime currentTime = QTime::currentTime();
        double dt = _lastUpdateTime.msecsTo(currentTime) / 1000.0;
        _lastUpdateTime = currentTime;
        
        // Update flight state based on controls
        updateFlightState(dt);
        
        // Update the 3D model
        updateAircraftModel();
        
        // Request a redraw
        update();
    }

private:
    // Flight state
    FlightState _flightState;
    FlightMetrics _metrics;
    
    // Controls
    double _throttle;    // 0.0 to 1.0
    double _stickX;      // -1.0 (left) to 1.0 (right)
    double _stickY;      // -1.0 (back) to 1.0 (forward)
    double _rudder;      // -1.0 (left) to 1.0 (right)
    double _brakes;      // 0.0 to 1.0
    double _flaps;       // 0.0 (up) to 1.0 (full down)
    double _gearPosition; // 0.0 (up) to 1.0 (down)
    double _flapsPosition; // 0.0 (up) to 1.0 (full down)
    
    // OSG objects
    osg::ref_ptr<osg::Group> _root;
    osg::ref_ptr<osg::Node> _aircraft;
    osg::ref_ptr<osgGA::TrackballManipulator> _manipulator;
    osg::ref_ptr<osgViewer::GraphicsWindowEmbedded> _gw;
    
    // UI
    FlightMetricsDisplay* _metricsDisplay = nullptr;
    FlightControls* _controlsWidget = nullptr;
    
    // Timing
    QTimer* _timer;
    QTime _lastUpdateTime;
    
    // Helper methods
    void setupScene() {
        // Add terrain
        osg::ref_ptr<osg::Node> terrain = osgDB::readNodeFile("terrain.earth");
        if (terrain.valid()) {
            _root->addChild(terrain);
        } else {
            // Create a simple ground plane as fallback
            osg::ref_ptr<osg::Geode> geode = new osg::Geode();
            osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
            
            // Create a simple ground plane
            osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array();
            vertices->push_back(osg::Vec3(-1000.0f, -1000.0f, 0.0f));
            vertices->push_back(osg::Vec3(1000.0f, -1000.0f, 0.0f));
            vertices->push_back(osg::Vec3(1000.0f, 1000.0f, 0.0f));
            vertices->push_back(osg::Vec3(-1000.0f, 1000.0f, 0.0f));
            
            geometry->setVertexArray(vertices);
            
            osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array();
            colors->push_back(osg::Vec4(0.2f, 0.5f, 0.2f, 1.0f));
            
            geometry->setColorArray(colors, osg::Array::BIND_OVERALL);
            geometry->addPrimitiveSet(new osg::DrawArrays(osg::PrimitiveSet::QUADS, 0, 4));
            
            geode->addDrawable(geometry);
            _root->addChild(geode);
        }
        
        // Add sky
        osg::ref_ptr<osg::Node> sky = osgDB::readNodeFile("skydome.osgt");
        if (sky.valid()) {
            _root->addChild(sky);
        }
    }
    
    void setupCamera() {
        // Set up the camera position behind and above the aircraft
        osg::Vec3d eye(0.0, -10.0, 3.0);
        osg::Vec3d center(0.0, 0.0, 1.8);
        osg::Vec3d up(0.0, 0.0, 1.0);
        
        _manipulator->setHomePosition(eye, center, up);
        _manipulator->home(0);
    }
    
    void updateFlightState(double dt) {
        // Update flight metrics based on controls and physics
        _metrics.engineRPM = _throttle * 100.0;
        
        // Simple flight model - this would be replaced with a more sophisticated model
        if (_flightState >= FlightState::ENGINE_START && _throttle > 0.1) {
            _metrics.airspeed += (_throttle - 0.1) * 10.0 * dt;
            _metrics.altitude += _metrics.airspeed * _stickY * 0.1 * dt;
            _metrics.heading += _stickX * _metrics.airspeed * 0.1 * dt;
            
            // Apply gravity
            _metrics.altitude -= (1.0 - _stickY) * 5.0 * dt;
            
            // Update pitch and roll based on stick input
            _metrics.pitch = _stickY * 30.0;
            _metrics.roll = -_stickX * 30.0;
            
            // Update vertical speed (simplified)
            _metrics.verticalSpeed = _stickY * 1000.0;
        } else {
            // On ground or engine off
            _metrics.airspeed *= 0.95; // Slow down
            if (_metrics.altitude > 0) {
                _metrics.altitude = qMax(0.0, _metrics.altitude - 5.0 * dt);
            }
        }
        
        // Update flight time
        _metrics.update(dt);
    }
    
    void updateAircraftModel() {
        if (!_aircraft) return;
        
        // Get or create the transform node for the aircraft
        osg::PositionAttitudeTransform* transform = dynamic_cast<osg::PositionAttitudeTransform*>(_aircraft.get());
        if (!transform) {
            transform = new osg::PositionAttitudeTransform();
            transform->addChild(_aircraft);
            _root->replaceChild(_aircraft, transform);
            _aircraft = transform;
        }
        
        // Update aircraft position and orientation
        osg::Quat pitchRot(_metrics.pitch * 3.14159/180.0, osg::Vec3(1, 0, 0));
        osg::Quat rollRot(_metrics.roll * 3.14159/180.0, osg::Vec3(0, 1, 0));
        osg::Quat headingRot(_metrics.heading * 3.14159/180.0, osg::Vec3(0, 0, 1));
        
        transform->setAttitude(headingRot * rollRot * pitchRot);
        transform->setPosition(osg::Vec3(0, 0, _metrics.altitude));
    }
    
    void updateCamera() {
        if (!_manipulator) return;
        
        // Calculate camera position based on aircraft position and orientation
        double distance = 10.0;
        double height = 2.0;
        
        // Calculate camera position behind and above the aircraft
        double headingRad = _metrics.heading * 3.14159 / 180.0;
        double pitchRad = _metrics.pitch * 3.14159 / 180.0;
        
        double x = -sin(headingRad) * distance * cos(pitchRad);
        double y = -cos(headingRad) * distance * cos(pitchRad);
        double z = _metrics.altitude + height + sin(pitchRad) * distance;
        
        osg::Vec3d eye(x, y, z);
        osg::Vec3d center(0, 0, _metrics.altitude + 1.0);
        osg::Vec3d up(0, 0, 1);
        
        _manipulator->setByMatrix(osg::Matrixd::lookAt(eye, center, up));
    }
    
    void updateMetrics() {
        if (_metricsDisplay) {
            _metricsDisplay->updateMetrics(_metrics);
        }
    }
    
    void handleKeyEvent(QKeyEvent* event, bool pressed) {
        float delta = pressed ? 0.1f : -0.1f;
        
        switch (event->key()) {
            // Throttle control
            case Qt::Key_W: _throttle = pressed ? 1.0 : 0.0; break;
            case Qt::Key_S: _throttle = 0.0; break;
                
            // Stick control
            case Qt::Key_Up:    _stickY = pressed ? 1.0 : 0.0; break;
            case Qt::Key_Down:  _stickY = pressed ? -1.0 : 0.0; break;
            case Qt::Key_Left:  _stickX = pressed ? -1.0 : 0.0; break;
            case Qt::Key_Right: _stickX = pressed ? 1.0 : 0.0; break;
                
            // Rudder control
            case Qt::Key_Q: _rudder = pressed ? -1.0 : 0.0; break;
            case Qt::Key_E: _rudder = pressed ? 1.0 : 0.0; break;
                
            // Brakes
            case Qt::Key_Space: _brakes = pressed ? 1.0 : 0.0; break;
                
            // Flaps
            case Qt::Key_F: 
                if (pressed) {
                    _flaps = _flaps < 1.0 ? _flaps + 0.2 : 1.0;
                }
                break;
            case Qt::Key_V: 
                if (pressed) {
                    _flaps = _flaps > 0.0 ? _flaps - 0.2 : 0.0;
                }
                break;
                
            // Landing gear
            case Qt::Key_G: 
                if (pressed) {
                    _gearPosition = _gearPosition > 0.5 ? 0.0 : 1.0;
                }
                break;
                
            // Engine start/stop
            case Qt::Key_Home:
                if (pressed) {
                    if (_flightState < FlightState::ENGINE_START) {
                        _flightState = FlightState::ENGINE_START;
                        _throttle = 0.1; // Idle
                    } else {
                        _flightState = FlightState::AVIONICS_ON;
                        _throttle = 0.0;
                    }
                }
                break;
                
            // Avionics on/off
            case Qt::Key_A:
                if (pressed) {
                    if (_flightState < FlightState::AVIONICS_ON) {
                        _flightState = FlightState::AVIONICS_ON;
                    } else if (_flightState == FlightState::AVIONICS_ON) {
                        _flightState = FlightState::COLD_AND_DARK;
                    }
                }
                break;
        }
        
        if (_controlsWidget) {
            _controlsWidget->updateControls(_throttle, _stickX, _stickY, _rudder);
        }
    }
    
    osg::Node* createSimpleAircraft() {
        osg::ref_ptr<osg::Geode> geode = new osg::Geode();
        
        // Create a simple airplane shape
        osg::ref_ptr<osg::Geometry> geometry = new osg::Geometry();
        
        // Define vertices for a simple airplane shape
        osg::ref_ptr<osg::Vec3Array> vertices = new osg::Vec3Array();
        
        // Fuselage (main body)
        addFuselage(vertices);
        
        // Wings
        addWings(vertices);
        
        // Tail
        addTail(vertices);
        
        // Set up the geometry
        geometry->setVertexArray(vertices);
        
        // Create colors for the airplane
        osg::ref_ptr<osg::Vec4Array> colors = new osg::Vec4Array();
        colors->push_back(osg::Vec4(0.8f, 0.8f, 0.8f, 1.0f));
        geometry->setColorArray(colors, osg::Array::BIND_OVERALL);
        
        // Add the geometry to the geode
        geode->addDrawable(geometry);
        
        // Enable lighting
        osg::StateSet* stateSet = geode->getOrCreateStateSet();
        stateSet->setMode(GL_LIGHTING, osg::StateAttribute::ON);
        stateSet->setMode(GL_LIGHT0, osg::StateAttribute::ON);
        stateSet->setMode(GL_BLEND, osg::StateAttribute::ON);
        
        return geode.release();
    }
    
    void addFuselage(osg::Vec3Array* vertices) {
        // Simple fuselage as a cylinder
        const int segments = 16;
        const float radius = 0.5f;
        const float length = 5.0f;
        
        for (int i = 0; i < segments; ++i) {
            float angle = 2.0f * 3.14159f * static_cast<float>(i) / static_cast<float>(segments);
            float x = cosf(angle) * radius;
            float y = sinf(angle) * radius;
            
            // Front ring
            vertices->push_back(osg::Vec3(x, y, 0.0f));
            // Back ring
            vertices->push_back(osg::Vec3(x, y + length, 0.0f));
        }
    }
    
    void addWings(osg::Vec3Array* vertices) {
        // Main wings
        const float halfSpan = 4.0f;
        const float chord = 1.5f;
        
        // Left wing
        vertices->push_back(osg::Vec3(0.0f, 2.5f, 0.0f));
        vertices->push_back(osg::Vec3(-halfSpan, 2.5f, 0.0f));
        vertices->push_back(osg::Vec3(-halfSpan, 2.5f + chord, 0.0f));
        
        // Right wing
        vertices->push_back(osg::Vec3(0.0f, 2.5f, 0.0f));
        vertices->push_back(osg::Vec3(halfSpan, 2.5f, 0.0f));
        vertices->push_back(osg::Vec3(halfSpan, 2.5f + chord, 0.0f));
    }
    
    void addTail(osg::Vec3Array* vertices) {
        // Vertical stabilizer
        vertices->push_back(osg::Vec3(0.0f, 4.5f, 0.0f));
        vertices->push_back(osg::Vec3(0.0f, 5.0f, 1.0f));
        vertices->push_back(osg::Vec3(0.0f, 5.0f, 0.0f));
        
        // Horizontal stabilizer
        vertices->push_back(osg::Vec3(0.0f, 4.5f, 0.0f));
        vertices->push_back(osg::Vec3(-1.0f, 4.5f, 0.0f));
        vertices->push_back(osg::Vec3(1.0f, 4.5f, 0.0f));
    }
};

int main(int argc, char** argv)
{
    // Set up the application
    QApplication app(argc, argv);
    
    // Set up OpenGL format
    QSurfaceFormat format;
    format.setSamples(8);
    format.setVersion(3, 3);
    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setDepthBufferSize(24);
    format.setStencilBufferSize(8);
    QSurfaceFormat::setDefaultFormat(format);
    
    try {
        // Create main window
        QMainWindow window;
        window.setWindowTitle("Flight Simulator");
        window.resize(1280, 720);
        
        // Create main widget and layout
        QWidget* mainWidget = new QWidget();
        QHBoxLayout* mainLayout = new QHBoxLayout(mainWidget);
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout->setSpacing(0);
        
        // Create OSG widget
        OSGWidget* osgWidget = new OSGWidget();
        
        // Create metrics display
        FlightMetricsDisplay* metricsDisplay = new FlightMetricsDisplay();
        metricsDisplay->setParent(osgWidget);
        metricsDisplay->move(10, 10);
        osgWidget->setMetricsDisplay(metricsDisplay);
        
        // Create flight controls
        FlightControls* controls = new FlightControls();
        controls->setParent(osgWidget);
        controls->move(osgWidget->width() - controls->width() - 10, 10);
        osgWidget->setControlsWidget(controls);
        
        // Connect controls to OSG widget
        QObject::connect(controls, &FlightControls::toggleEngine, [osgWidget]() {
            // Toggle engine start/stop
            static bool engineOn = false;
            engineOn = !engineOn;
            // Update engine state in the simulator
        });
        
        // Add OSG widget to layout
        mainLayout->addWidget(osgWidget);
        
        // Set main widget
        window.setCentralWidget(mainWidget);
        
        // Show window
        window.show();
        
        // Center the window
        window.move(QApplication::primaryScreen()->availableGeometry().center() - window.rect().center());
        
        return app.exec();
    } catch (const std::exception& e) {
        qCritical() << "Exception:" << e.what();
        return 1;
    }
}

#include "main.moc"
