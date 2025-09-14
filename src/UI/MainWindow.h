#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QString>

// Forward declarations
class SimulationToolbar;
class OSGWidget;
class QDockWidget;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() = default;

private slots:
    void onViewChanged(const QString& viewName);
    void onAirplaneChanged(const QString& airplaneName);
    void onMainControlsToggled(bool visible);

private:
    void createDockWidgets();
    void createControlsDock();
    void createPropulsionDock();
    
    // UI Components
    SimulationToolbar* m_toolbar;
    OSGWidget* m_osgWidget;
    QDockWidget* m_controlsDock;
    QDockWidget* m_propulsionDock;
};

#endif // MAIN_WINDOW_H
