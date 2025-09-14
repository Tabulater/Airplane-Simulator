#ifndef SIMULATION_TOOLBAR_H
#define SIMULATION_TOOLBAR_H

#include <QToolBar>
#include <QComboBox>
#include <QPushButton>
#include <QMenu>
#include <QActionGroup>

class SimulationToolbar : public QToolBar {
    Q_OBJECT

public:
    explicit SimulationToolbar(QWidget* parent = nullptr);

signals:
    void viewChanged(const QString& viewName);
    void airplaneChanged(const QString& airplaneName);
    void settingsRequested();
    void helpRequested();
    void keyBindingsRequested();
    void timeSettingsRequested();
    void airportSettingsRequested();
    void propulsionSettingsRequested();
    void mainControlsToggled(bool visible);

private:
    void createActions();
    void createMenus();
    void setupUi();

    // View menu
    QMenu* viewMenu;
    QAction* pilotViewAction;
    QAction* orbitViewAction;
    QAction* towerViewAction;
    QAction* chaseViewAction;
    QAction* spotViewAction;
    QAction* cockpitViewAction;

    // Windows menu
    QMenu* windowsMenu;
    QAction* propulsionWindowAction;
    QAction* mainControlsAction;
    QAction* airportSettingsAction;
    QAction* timeSettingsAction;

    // Settings menu
    QMenu* settingsMenu;
    QAction* generalSettingsAction;
    QAction* keyBindingsAction;
    QAction* graphicsSettingsAction;
    QAction* soundSettingsAction;
    QAction* controlsSettingsAction;

    // Help menu
    QMenu* helpMenu;
    QAction* helpContentsAction;
    QAction* aboutAction;

    // Airplane selection
    QComboBox* airplaneComboBox;
    QActionGroup* viewActionGroup;
};

#endif // SIMULATION_TOOLBAR_H
