#include "SimulationToolbar.h"
#include <QHBoxLayout>
#include <QLabel>
#include <QSpacerItem>
#include <QStyle>
#include <QDebug>

SimulationToolbar::SimulationToolbar(QWidget* parent) 
    : QToolBar(parent) {
    setObjectName("simulationToolbar");
    setMovable(false);
    setIconSize(QSize(24, 24));
    setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    
    createActions();
    createMenus();
    setupUi();
}

void SimulationToolbar::createActions() {
    // View actions
    viewActionGroup = new QActionGroup(this);
    
    pilotViewAction = new QAction(QIcon(":/icons/pilot-view.png"), tr("Pilot View"), this);
    pilotViewAction->setCheckable(true);
    pilotViewAction->setChecked(true);
    pilotViewAction->setData("pilot");
    
    cockpitViewAction = new QAction(QIcon(":/icons/cockpit-view.png"), tr("Cockpit View"), this);
    cockpitViewAction->setCheckable(true);
    cockpitViewAction->setData("cockpit");
    
    orbitViewAction = new QAction(QIcon(":/icons/orbit-view.png"), tr("Orbit View"), this);
    orbitViewAction->setCheckable(true);
    orbitViewAction->setData("orbit");
    
    towerViewAction = new QAction(QIcon(":/icons/tower-view.png"), tr("Tower View"), this);
    towerViewAction->setCheckable(true);
    towerViewAction->setData("tower");
    
    chaseViewAction = new QAction(QIcon(":/icons/chase-view.png"), tr("Chase View"), this);
    chaseViewAction->setCheckable(true);
    chaseViewAction->setData("chase");
    
    spotViewAction = new QAction(QIcon(":/icons/spot-view.png"), tr("Spot View"), this);
    spotViewAction->setCheckable(true);
    spotViewAction->setData("spot");
    
    // Add to action group
    viewActionGroup->addAction(pilotViewAction);
    viewActionGroup->addAction(cockpitViewAction);
    viewActionGroup->addAction(orbitViewAction);
    viewActionGroup->addAction(towerViewAction);
    viewActionGroup->addAction(chaseViewAction);
    viewActionGroup->addAction(spotViewAction);
    
    // Windows actions
    propulsionWindowAction = new QAction(QIcon(":/icons/propulsion.png"), tr("Propulsion"), this);
    mainControlsAction = new QAction(QIcon(":/icons/controls.png"), tr("Main Controls"), this);
    mainControlsAction->setCheckable(true);
    mainControlsAction->setChecked(true);
    airportSettingsAction = new QAction(QIcon(":/icons/airport.png"), tr("Airport"), this);
    timeSettingsAction = new QAction(QIcon(":/icons/time.png"), tr("Time"), this);
    
    // Settings actions
    generalSettingsAction = new QAction(tr("General Settings"), this);
    keyBindingsAction = new QAction(tr("Key Bindings"), this);
    graphicsSettingsAction = new QAction(tr("Graphics"), this);
    soundSettingsAction = new QAction(tr("Sound"), this);
    controlsSettingsAction = new QAction(tr("Controls"), this);
    
    // Help actions
    helpContentsAction = new QAction(QIcon(":/icons/help.png"), tr("Help Contents"), this);
    aboutAction = new QAction(tr("About MScSim"), this);
    
    // Connect signals
    connect(viewActionGroup, &QActionGroup::triggered, [this](QAction* action) {
        emit viewChanged(action->data().toString());
    });
    
    connect(mainControlsAction, &QAction::toggled, this, &SimulationToolbar::mainControlsToggled);
    connect(propulsionWindowAction, &QAction::triggered, this, &SimulationToolbar::propulsionSettingsRequested);
    connect(airportSettingsAction, &QAction::triggered, this, &SimulationToolbar::airportSettingsRequested);
    connect(timeSettingsAction, &QAction::triggered, this, &SimulationToolbar::timeSettingsRequested);
    connect(keyBindingsAction, &QAction::triggered, this, &SimulationToolbar::keyBindingsRequested);
    connect(helpContentsAction, &QAction::triggered, this, &SimulationToolbar::helpRequested);
}

void SimulationToolbar::createMenus() {
    // View menu
    viewMenu = new QMenu(tr("View"), this);
    viewMenu->addAction(pilotViewAction);
    viewMenu->addAction(cockpitViewAction);
    viewMenu->addSeparator();
    viewMenu->addAction(orbitViewAction);
    viewMenu->addAction(towerViewAction);
    viewMenu->addAction(chaseViewAction);
    viewMenu->addAction(spotViewAction);
    
    // Windows menu
    windowsMenu = new QMenu(tr("Windows"), this);
    windowsMenu->addAction(propulsionWindowAction);
    windowsMenu->addAction(mainControlsAction);
    windowsMenu->addSeparator();
    windowsMenu->addAction(airportSettingsAction);
    windowsMenu->addAction(timeSettingsAction);
    
    // Settings menu
    settingsMenu = new QMenu(tr("Settings"), this);
    settingsMenu->addAction(generalSettingsAction);
    settingsMenu->addAction(keyBindingsAction);
    settingsMenu->addSeparator();
    settingsMenu->addAction(graphicsSettingsAction);
    settingsMenu->addAction(soundSettingsAction);
    settingsMenu->addAction(controlsSettingsAction);
    
    // Help menu
    helpMenu = new QMenu(tr("Help"), this);
    helpMenu->addAction(helpContentsAction);
    helpMenu->addSeparator();
    helpMenu->addAction(aboutAction);
}

void SimulationToolbar::setupUi() {
    // Add view menu button
    QToolButton* viewButton = new QToolButton(this);
    viewButton->setMenu(viewMenu);
    viewButton->setPopupMode(QToolButton::InstantPopup);
    viewButton->setIcon(QIcon(":/icons/view.png"));
    viewButton->setText(tr("View"));
    viewButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    addWidget(viewButton);
    
    // Add windows menu button
    QToolButton* windowsButton = new QToolButton(this);
    windowsButton->setMenu(windowsMenu);
    windowsButton->setPopupMode(QToolButton::InstantPopup);
    windowsButton->setIcon(QIcon(":/icons/windows.png"));
    windowsButton->setText(tr("Windows"));
    windowsButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    addWidget(windowsButton);
    
    // Add airplane selection
    addSeparator();
    QLabel* airplaneLabel = new QLabel(tr("Airplane:"), this);
    addWidget(airplaneLabel);
    
    airplaneComboBox = new QComboBox(this);
    airplaneComboBox->setMinimumWidth(150);
    airplaneComboBox->addItems({
        "Cessna 172",
        "Boeing 747",
        "Airbus A320",
        "F-16 Fighting Falcon",
        "Extra 300"
    });
    
    connect(airplaneComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [this](int index) {
                emit airplaneChanged(airplaneComboBox->currentText());
            });
    
    addWidget(airplaneComboBox);
    
    // Add stretch to push settings to the right
    addSeparator();
    QWidget* spacer = new QWidget();
    spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    addWidget(spacer);
    
    // Add settings button
    QToolButton* settingsButton = new QToolButton(this);
    settingsButton->setMenu(settingsMenu);
    settingsButton->setPopupMode(QToolButton::InstantPopup);
    settingsButton->setIcon(style()->standardIcon(QStyle::SP_ComputerIcon));
    settingsButton->setText(tr("Settings"));
    settingsButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    addWidget(settingsButton);
    
    // Add help button
    QToolButton* helpButton = new QToolButton(this);
    helpButton->setMenu(helpMenu);
    helpButton->setPopupMode(QToolButton::InstantPopup);
    helpButton->setIcon(style()->standardIcon(QStyle::SP_MessageBoxQuestion));
    helpButton->setText(tr("Help"));
    helpButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    addWidget(helpButton);
}
