#include <QApplication>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QSurfaceFormat>
#include <QDebug>

#include <osgViewer/Viewer>
#include <osgDB/ReadFile>

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
        }
        
        setSceneData(root);
    }
    
protected:
    virtual void paintGL() override
    {
        frame();
    }
    
    virtual void resizeGL(int w, int h) override
    {
        getEventQueue()->windowResize(this->x(), this->y(), w, h);
        getCamera()->setViewport(0, 0, this->width(), this->height());
    }
    
    virtual void initializeGL() override
    {
        // Set up the viewer's camera
        getCamera()->setViewport(0, 0, width(), height());
        getCamera()->setProjectionMatrixAsPerspective(
            30.0f, static_cast<double>(width())/static_cast<double>(height()), 1.0f, 10000.0f);
        
        // Set up the event queue
        _gw = new osgViewer::GraphicsWindowEmbedded(0, 0, width(), height());
        getCamera()->setGraphicsContext(_gw);
        getCamera()->setViewport(new osg::Viewport(0, 0, width(), height()));
        
        setCameraManipulator(new osgGA::TrackballManipulator);
        
        // Set up the timer for continuous updates
        connect(&_timer, &QTimer::timeout, this, [this]() { update(); });
        _timer.start(16); // ~60 FPS
    }
    
    osgGA::EventQueue* getEventQueue() const
    {
        return _gw->getEventQueue();
    }
    
private:
    osg::ref_ptr<osgViewer::GraphicsWindowEmbedded> _gw;
    QTimer _timer;
};

int main(int argc, char** argv)
{
    // Set up the application
    QApplication app(argc, argv);
    
    // Set up OpenGL format
    QSurfaceFormat format;
    format.setSamples(4);
    format.setVersion(3, 3);
    format.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(format);
    
    // Create main window
    QMainWindow window;
    window.setWindowTitle("Flight Simulator");
    window.resize(1280, 720);
    
    // Create OSG widget
    OSGWidget* widget = new OSGWidget();
    window.setCentralWidget(widget);
    
    // Show window
    window.show();
    
    return app.exec();
}
