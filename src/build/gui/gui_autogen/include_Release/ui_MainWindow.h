/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "gui/WidgetOTW.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDialogConf;
    QAction *actionQuit;
    QAction *actionDialogInit;
    QAction *actionDialogEnvr;
    QAction *actionDialogMass;
    QAction *actionDockMain;
    QAction *actionDockData;
    QAction *actionViewPilot;
    QAction *actionViewOrbit;
    QAction *actionDockEFIS;
    QAction *actionStateInpIdle;
    QAction *actionStateInpInit;
    QAction *actionStateInpWork;
    QAction *actionStateInpPause;
    QAction *actionStateInpStop;
    QAction *actionViewWorld;
    QAction *actionDockCtrl;
    QAction *actionDockProp;
    QAction *actionShowHUD;
    QAction *actionAirportLightsRALS;
    QAction *actionAirportLightsRCLS;
    QAction *actionAirportLightsRELS;
    QAction *actionAirportLightsTDZL;
    QAction *actionAirportLightsTELS;
    QAction *actionAirportLightsVGSI;
    QAction *actionAirportLightsHELI;
    QAction *actionAirportLightsTWRL;
    QAction *actionTimeFaster;
    QAction *actionTimeSlower;
    QAction *actionViewChase;
    QAction *actionDockAuto;
    QAction *actionDockMap;
    QAction *actionFlightOpen;
    QAction *actionFlightSave;
    QAction *actionShowTraces;
    QAction *actionShowRotorBlur;
    QAction *actionShowBladesDatum;
    QAction *actionShowBladesPaths;
    QAction *actionShowPFD;
    QAction *actionTimeNormal;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedMain;
    QWidget *pageOTW;
    QGridLayout *gridLayout_2;
    WidgetOTW *widgetOTW;
    QMenuBar *menuBar;
    QMenu *menuSimulation;
    QMenu *menuWindows;
    QMenu *menuView;
    QMenu *menuRotor;
    QMenu *menuAirport;
    QMenu *menuLights;
    QMenu *menuTime;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/gui/images/icon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionDialogConf = new QAction(MainWindow);
        actionDialogConf->setObjectName("actionDialogConf");
        actionDialogConf->setMenuRole(QAction::PreferencesRole);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionQuit->setMenuRole(QAction::QuitRole);
        actionDialogInit = new QAction(MainWindow);
        actionDialogInit->setObjectName("actionDialogInit");
        actionDialogInit->setMenuRole(QAction::ApplicationSpecificRole);
        actionDialogEnvr = new QAction(MainWindow);
        actionDialogEnvr->setObjectName("actionDialogEnvr");
        actionDialogEnvr->setMenuRole(QAction::ApplicationSpecificRole);
        actionDialogMass = new QAction(MainWindow);
        actionDialogMass->setObjectName("actionDialogMass");
        actionDialogMass->setMenuRole(QAction::ApplicationSpecificRole);
        actionDockMain = new QAction(MainWindow);
        actionDockMain->setObjectName("actionDockMain");
        actionDockMain->setCheckable(true);
        actionDockMain->setMenuRole(QAction::ApplicationSpecificRole);
        actionDockData = new QAction(MainWindow);
        actionDockData->setObjectName("actionDockData");
        actionDockData->setCheckable(true);
        actionDockData->setMenuRole(QAction::ApplicationSpecificRole);
        actionViewPilot = new QAction(MainWindow);
        actionViewPilot->setObjectName("actionViewPilot");
        actionViewPilot->setCheckable(false);
        actionViewPilot->setChecked(false);
        actionViewPilot->setMenuRole(QAction::ApplicationSpecificRole);
        actionViewOrbit = new QAction(MainWindow);
        actionViewOrbit->setObjectName("actionViewOrbit");
        actionViewOrbit->setCheckable(false);
        actionViewOrbit->setMenuRole(QAction::ApplicationSpecificRole);
        actionDockEFIS = new QAction(MainWindow);
        actionDockEFIS->setObjectName("actionDockEFIS");
        actionDockEFIS->setCheckable(true);
        actionDockEFIS->setChecked(false);
        actionDockEFIS->setMenuRole(QAction::ApplicationSpecificRole);
        actionStateInpIdle = new QAction(MainWindow);
        actionStateInpIdle->setObjectName("actionStateInpIdle");
        actionStateInpIdle->setCheckable(false);
        actionStateInpIdle->setChecked(false);
        actionStateInpIdle->setMenuRole(QAction::ApplicationSpecificRole);
        actionStateInpInit = new QAction(MainWindow);
        actionStateInpInit->setObjectName("actionStateInpInit");
        actionStateInpInit->setCheckable(false);
        actionStateInpInit->setMenuRole(QAction::ApplicationSpecificRole);
        actionStateInpWork = new QAction(MainWindow);
        actionStateInpWork->setObjectName("actionStateInpWork");
        actionStateInpWork->setCheckable(false);
        actionStateInpWork->setMenuRole(QAction::ApplicationSpecificRole);
        actionStateInpPause = new QAction(MainWindow);
        actionStateInpPause->setObjectName("actionStateInpPause");
        actionStateInpPause->setCheckable(false);
        actionStateInpPause->setMenuRole(QAction::ApplicationSpecificRole);
        actionStateInpStop = new QAction(MainWindow);
        actionStateInpStop->setObjectName("actionStateInpStop");
        actionStateInpStop->setCheckable(false);
        actionStateInpStop->setChecked(false);
        actionStateInpStop->setMenuRole(QAction::ApplicationSpecificRole);
        actionViewWorld = new QAction(MainWindow);
        actionViewWorld->setObjectName("actionViewWorld");
        actionViewWorld->setCheckable(false);
        actionViewWorld->setMenuRole(QAction::ApplicationSpecificRole);
        actionDockCtrl = new QAction(MainWindow);
        actionDockCtrl->setObjectName("actionDockCtrl");
        actionDockCtrl->setCheckable(true);
        actionDockCtrl->setMenuRole(QAction::ApplicationSpecificRole);
        actionDockProp = new QAction(MainWindow);
        actionDockProp->setObjectName("actionDockProp");
        actionDockProp->setCheckable(true);
        actionDockProp->setMenuRole(QAction::ApplicationSpecificRole);
        actionShowHUD = new QAction(MainWindow);
        actionShowHUD->setObjectName("actionShowHUD");
        actionShowHUD->setCheckable(true);
        actionShowHUD->setChecked(true);
        actionAirportLightsRALS = new QAction(MainWindow);
        actionAirportLightsRALS->setObjectName("actionAirportLightsRALS");
        actionAirportLightsRALS->setCheckable(true);
        actionAirportLightsRCLS = new QAction(MainWindow);
        actionAirportLightsRCLS->setObjectName("actionAirportLightsRCLS");
        actionAirportLightsRCLS->setCheckable(true);
        actionAirportLightsRELS = new QAction(MainWindow);
        actionAirportLightsRELS->setObjectName("actionAirportLightsRELS");
        actionAirportLightsRELS->setCheckable(true);
        actionAirportLightsTDZL = new QAction(MainWindow);
        actionAirportLightsTDZL->setObjectName("actionAirportLightsTDZL");
        actionAirportLightsTDZL->setCheckable(true);
        actionAirportLightsTELS = new QAction(MainWindow);
        actionAirportLightsTELS->setObjectName("actionAirportLightsTELS");
        actionAirportLightsTELS->setCheckable(true);
        actionAirportLightsVGSI = new QAction(MainWindow);
        actionAirportLightsVGSI->setObjectName("actionAirportLightsVGSI");
        actionAirportLightsVGSI->setCheckable(true);
        actionAirportLightsHELI = new QAction(MainWindow);
        actionAirportLightsHELI->setObjectName("actionAirportLightsHELI");
        actionAirportLightsHELI->setCheckable(true);
        actionAirportLightsTWRL = new QAction(MainWindow);
        actionAirportLightsTWRL->setObjectName("actionAirportLightsTWRL");
        actionAirportLightsTWRL->setCheckable(true);
        actionTimeFaster = new QAction(MainWindow);
        actionTimeFaster->setObjectName("actionTimeFaster");
        actionTimeSlower = new QAction(MainWindow);
        actionTimeSlower->setObjectName("actionTimeSlower");
        actionViewChase = new QAction(MainWindow);
        actionViewChase->setObjectName("actionViewChase");
        actionViewChase->setCheckable(false);
        actionDockAuto = new QAction(MainWindow);
        actionDockAuto->setObjectName("actionDockAuto");
        actionDockAuto->setCheckable(true);
        actionDockMap = new QAction(MainWindow);
        actionDockMap->setObjectName("actionDockMap");
        actionDockMap->setCheckable(true);
        actionFlightOpen = new QAction(MainWindow);
        actionFlightOpen->setObjectName("actionFlightOpen");
        actionFlightSave = new QAction(MainWindow);
        actionFlightSave->setObjectName("actionFlightSave");
        actionShowTraces = new QAction(MainWindow);
        actionShowTraces->setObjectName("actionShowTraces");
        actionShowTraces->setCheckable(true);
        actionShowRotorBlur = new QAction(MainWindow);
        actionShowRotorBlur->setObjectName("actionShowRotorBlur");
        actionShowRotorBlur->setCheckable(true);
        actionShowBladesDatum = new QAction(MainWindow);
        actionShowBladesDatum->setObjectName("actionShowBladesDatum");
        actionShowBladesDatum->setCheckable(true);
        actionShowBladesPaths = new QAction(MainWindow);
        actionShowBladesPaths->setObjectName("actionShowBladesPaths");
        actionShowBladesPaths->setCheckable(true);
        actionShowPFD = new QAction(MainWindow);
        actionShowPFD->setObjectName("actionShowPFD");
        actionTimeNormal = new QAction(MainWindow);
        actionTimeNormal->setObjectName("actionTimeNormal");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedMain = new QStackedWidget(centralwidget);
        stackedMain->setObjectName("stackedMain");
        pageOTW = new QWidget();
        pageOTW->setObjectName("pageOTW");
        gridLayout_2 = new QGridLayout(pageOTW);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetOTW = new WidgetOTW(pageOTW);
        widgetOTW->setObjectName("widgetOTW");
        widgetOTW->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(widgetOTW, 0, 0, 1, 1);

        stackedMain->addWidget(pageOTW);

        gridLayout->addWidget(stackedMain, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName("menuSimulation");
        menuWindows = new QMenu(menuBar);
        menuWindows->setObjectName("menuWindows");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuRotor = new QMenu(menuView);
        menuRotor->setObjectName("menuRotor");
        menuAirport = new QMenu(menuBar);
        menuAirport->setObjectName("menuAirport");
        menuLights = new QMenu(menuAirport);
        menuLights->setObjectName("menuLights");
        menuTime = new QMenu(menuBar);
        menuTime->setObjectName("menuTime");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSimulation->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWindows->menuAction());
        menuBar->addAction(menuAirport->menuAction());
        menuBar->addAction(menuTime->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSimulation->addAction(actionDialogInit);
        menuSimulation->addAction(actionDialogEnvr);
        menuSimulation->addAction(actionDialogMass);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionDialogConf);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionFlightOpen);
        menuSimulation->addAction(actionFlightSave);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionStateInpIdle);
        menuSimulation->addAction(actionStateInpInit);
        menuSimulation->addAction(actionStateInpWork);
        menuSimulation->addAction(actionStateInpPause);
        menuSimulation->addAction(actionStateInpStop);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionQuit);
        menuWindows->addAction(actionDockAuto);
        menuWindows->addAction(actionDockCtrl);
        menuWindows->addAction(actionDockData);
        menuWindows->addAction(actionDockEFIS);
        menuWindows->addAction(actionDockMain);
        menuWindows->addAction(actionDockMap);
        menuWindows->addAction(actionDockProp);
        menuWindows->addSeparator();
        menuWindows->addAction(actionShowPFD);
        menuView->addAction(actionViewChase);
        menuView->addAction(actionViewOrbit);
        menuView->addAction(actionViewPilot);
        menuView->addAction(actionViewWorld);
        menuView->addSeparator();
        menuView->addAction(actionShowHUD);
        menuView->addAction(actionShowTraces);
        menuView->addSeparator();
        menuView->addAction(menuRotor->menuAction());
        menuRotor->addAction(actionShowRotorBlur);
        menuRotor->addAction(actionShowBladesDatum);
        menuRotor->addAction(actionShowBladesPaths);
        menuAirport->addAction(menuLights->menuAction());
        menuLights->addAction(actionAirportLightsRALS);
        menuLights->addAction(actionAirportLightsRCLS);
        menuLights->addAction(actionAirportLightsRELS);
        menuLights->addAction(actionAirportLightsTDZL);
        menuLights->addAction(actionAirportLightsTELS);
        menuLights->addAction(actionAirportLightsVGSI);
        menuLights->addAction(actionAirportLightsHELI);
        menuLights->addAction(actionAirportLightsTWRL);
        menuTime->addAction(actionTimeFaster);
        menuTime->addAction(actionTimeSlower);
        menuTime->addAction(actionTimeNormal);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        stackedMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MScSim", nullptr));
        actionDialogConf->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionDialogInit->setText(QCoreApplication::translate("MainWindow", "Initial Conditions", nullptr));
        actionDialogEnvr->setText(QCoreApplication::translate("MainWindow", "Environment", nullptr));
        actionDialogMass->setText(QCoreApplication::translate("MainWindow", "Fuel and Payload", nullptr));
        actionDockMain->setText(QCoreApplication::translate("MainWindow", "Main", nullptr));
        actionDockData->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        actionViewPilot->setText(QCoreApplication::translate("MainWindow", "Pilot View", nullptr));
        actionViewOrbit->setText(QCoreApplication::translate("MainWindow", "Orbit View", nullptr));
        actionDockEFIS->setText(QCoreApplication::translate("MainWindow", "EFIS", nullptr));
        actionStateInpIdle->setText(QCoreApplication::translate("MainWindow", "Idle", nullptr));
        actionStateInpInit->setText(QCoreApplication::translate("MainWindow", "Initialize", nullptr));
        actionStateInpWork->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        actionStateInpPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        actionStateInpStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        actionViewWorld->setText(QCoreApplication::translate("MainWindow", "World View", nullptr));
        actionDockCtrl->setText(QCoreApplication::translate("MainWindow", "Controls", nullptr));
        actionDockProp->setText(QCoreApplication::translate("MainWindow", "Propulsion", nullptr));
        actionShowHUD->setText(QCoreApplication::translate("MainWindow", "Show HUD", nullptr));
        actionAirportLightsRALS->setText(QCoreApplication::translate("MainWindow", "RALS", nullptr));
        actionAirportLightsRCLS->setText(QCoreApplication::translate("MainWindow", "RCLS", nullptr));
        actionAirportLightsRELS->setText(QCoreApplication::translate("MainWindow", "RELS", nullptr));
        actionAirportLightsTDZL->setText(QCoreApplication::translate("MainWindow", "TDZL", nullptr));
        actionAirportLightsTELS->setText(QCoreApplication::translate("MainWindow", "TELS", nullptr));
        actionAirportLightsVGSI->setText(QCoreApplication::translate("MainWindow", "VGSI", nullptr));
        actionAirportLightsHELI->setText(QCoreApplication::translate("MainWindow", "Helipad", nullptr));
        actionAirportLightsTWRL->setText(QCoreApplication::translate("MainWindow", "Tower", nullptr));
        actionTimeFaster->setText(QCoreApplication::translate("MainWindow", "Faster", nullptr));
        actionTimeSlower->setText(QCoreApplication::translate("MainWindow", "Slower", nullptr));
        actionViewChase->setText(QCoreApplication::translate("MainWindow", "Chase View", nullptr));
        actionDockAuto->setText(QCoreApplication::translate("MainWindow", "Autopilot", nullptr));
        actionDockMap->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        actionFlightOpen->setText(QCoreApplication::translate("MainWindow", "Open Flight...", nullptr));
        actionFlightSave->setText(QCoreApplication::translate("MainWindow", "Save Flight...", nullptr));
        actionShowTraces->setText(QCoreApplication::translate("MainWindow", "Show Traces", nullptr));
        actionShowRotorBlur->setText(QCoreApplication::translate("MainWindow", "Rotor Blur", nullptr));
        actionShowBladesDatum->setText(QCoreApplication::translate("MainWindow", "Blades Datum", nullptr));
        actionShowBladesPaths->setText(QCoreApplication::translate("MainWindow", "Blades Paths", nullptr));
        actionShowPFD->setText(QCoreApplication::translate("MainWindow", "Show PFD", nullptr));
        actionTimeNormal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        menuSimulation->setTitle(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        menuWindows->setTitle(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuRotor->setTitle(QCoreApplication::translate("MainWindow", "Rotor", nullptr));
        menuAirport->setTitle(QCoreApplication::translate("MainWindow", "Airport", nullptr));
        menuLights->setTitle(QCoreApplication::translate("MainWindow", "Lights", nullptr));
        menuTime->setTitle(QCoreApplication::translate("MainWindow", "Time", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
