#include "MainWindow.h"
#include "SimulationToolbar.h"
#include "../OSGWidget.h"
#include <QVBoxLayout>
#include <QDockWidget>
#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , m_toolbar(new SimulationToolbar(this))
    , m_osgWidget(new OSGWidget(this))
    , m_controlsDock(nullptr)
    , m_propulsionDock(nullptr)
{
    setWindowTitle("MScSim Flight Simulator");
    resize(1280, 800);
    
    // Create the main widget and layout
    QWidget* centralWidget = new QWidget(this);
    QVBoxLayout* mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);
    
    // Add the simulation toolbar
    mainLayout->addWidget(m_toolbar);
    
    // Add the OSG widget
    mainLayout->addWidget(m_osgWidget, 1);
    
    // Create dock widgets
    createDockWidgets();
    
    // Connect signals from the toolbar
    connect(m_toolbar, &SimulationToolbar::viewChanged, this, &MainWindow::onViewChanged);
    connect(m_toolbar, &SimulationToolbar::airplaneChanged, this, &MainWindow::onAirplaneChanged);
    connect(m_toolbar, &SimulationToolbar::mainControlsToggled, this, &MainWindow::onMainControlsToggled);
    
    setCentralWidget(centralWidget);
}

void MainWindow::createDockWidgets()
{
    // Create controls dock
    m_controlsDock = new QDockWidget(tr("Main Controls"), this);
    m_controlsDock->setObjectName("mainControlsDock");
    
    QWidget* controlsWidget = new QWidget();
    QVBoxLayout* controlsLayout = new QVBoxLayout(controlsWidget);
    
    // Add controls here
    QLabel* label = new QLabel("Flight Controls");
    controlsLayout->addWidget(label);
    
    // Add more controls as needed
    controlsLayout->addStretch();
    
    m_controlsDock->setWidget(controlsWidget);
    addDockWidget(Qt::RightDockWidgetArea, m_controlsDock);
    
    // Create propulsion dock
    m_propulsionDock = new QDockWidget(tr("Propulsion"), this);
    m_propulsionDock->setObjectName("propulsionDock");
    
    QWidget* propulsionWidget = new QWidget();
    QVBoxLayout* propulsionLayout = new QVBoxLayout(propulsionWidget);
    
    // Add propulsion controls here
    QLabel* propLabel = new QLabel("Propulsion System");
    propulsionLayout->addWidget(propLabel);
    
    // Add more propulsion controls as needed
    propulsionLayout->addStretch();
    
    m_propulsionDock->setWidget(propulsionWidget);
    addDockWidget(Qt::RightDockWidgetArea, m_propulsionDock);
    
    // Tabify the docks
    tabifyDockWidget(m_controlsDock, m_propulsionDock);
    m_controlsDock->raise();
}

void MainWindow::onViewChanged(const QString& viewName)
{
    qDebug() << "View changed to:" << viewName;
    // TODO: Implement view change logic
    if (m_osgWidget) {
        // Update the camera view based on the selected view
        if (viewName == "pilot") {
            // Set to pilot view
        } else if (viewName == "cockpit") {
            // Set to cockpit view
        } else if (viewName == "orbit") {
            // Set to orbit view
        }
    }
}

void MainWindow::onAirplaneChanged(const QString& airplaneName)
{
    qDebug() << "Airplane changed to:" << airplaneName;
    // TODO: Implement airplane change logic
    // This would involve loading the appropriate aircraft model and configuration
}

void MainWindow::onMainControlsToggled(bool visible)
{
    qDebug() << "Main controls" << (visible ? "shown" : "hidden");
    if (m_controlsDock) {
        m_controlsDock->setVisible(visible);
    }
}
