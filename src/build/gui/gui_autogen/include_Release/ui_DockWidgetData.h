/********************************************************************************
** Form generated from reading UI file 'DockWidgetData.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETDATA_H
#define UI_DOCKWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "gui/ComboUnitsAngle.h"
#include "gui/ComboUnitsLength.h"
#include "gui/ComboUnitsNumber.h"
#include "gui/ComboUnitsRotation.h"
#include "gui/ComboUnitsVelocity.h"
#include "gui/SpinBoxHighlight.h"

QT_BEGIN_NAMESPACE

class Ui_DockWidgetData
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    ComboUnitsAngle *comboTrackAngle;
    QLabel *labelTurnRate;
    SpinBoxHighlight *spinTurnRate;
    ComboUnitsRotation *comboTurnRate;
    ComboUnitsVelocity *comboAirspeed;
    QDoubleSpinBox *spinMinGz;
    ComboUnitsNumber *comboMinGz;
    QLabel *labelMinGz;
    QLabel *labelAirspeed;
    ComboUnitsLength *comboAltitudeAGL;
    QLabel *labelMachNo;
    ComboUnitsAngle *comboHeading;
    ComboUnitsAngle *comboRollAngle;
    SpinBoxHighlight *spinAirspeed;
    QLabel *labelAoA;
    QLabel *labelPitchAngle;
    SpinBoxHighlight *spinSideslipAngle;
    SpinBoxHighlight *spinRollRate;
    QLabel *labelRollRate;
    SpinBoxHighlight *spinRollAngle;
    ComboUnitsNumber *comboGy;
    ComboUnitsRotation *comboRollRate;
    QLabel *labelYawRate;
    ComboUnitsRotation *comboYawRate;
    QLabel *labelRollAngle;
    SpinBoxHighlight *spinMaxGz;
    QLabel *labelGy;
    ComboUnitsAngle *comboAngleOfAttack;
    QLabel *labelPitchRate;
    SpinBoxHighlight *spinAngleOfAttack;
    ComboUnitsNumber *comboMachNumber;
    QLabel *labelClimbRate;
    QLabel *labelAltitudeASL;
    SpinBoxHighlight *spinMachNumber;
    SpinBoxHighlight *spinYawRate;
    SpinBoxHighlight *spinGz;
    SpinBoxHighlight *spinHeading;
    SpinBoxHighlight *spinPitchRate;
    ComboUnitsAngle *comboPitchAngle;
    ComboUnitsVelocity *comboClimbRate;
    ComboUnitsNumber *comboGx;
    ComboUnitsNumber *comboGz;
    ComboUnitsLength *comboAltitudeASL;
    SpinBoxHighlight *spinPitchAngle;
    QLabel *labelSideslip;
    ComboUnitsNumber *comboMaxGz;
    QLabel *labelGz;
    SpinBoxHighlight *spinAltitudeAGL;
    QLabel *labelMaxGz;
    ComboUnitsRotation *comboPitchRate;
    SpinBoxHighlight *spinGx;
    ComboUnitsAngle *comboSideslipAngle;
    QLabel *labelClimbAngle;
    SpinBoxHighlight *spinClimbAngle;
    ComboUnitsAngle *comboClimbAngle;
    QLabel *labelTrackAngle;
    SpinBoxHighlight *spinTrackAngle;
    QLabel *labelAltitudeAGL;
    SpinBoxHighlight *spinGy;
    SpinBoxHighlight *spinAltitudeASL;
    QLabel *labelGx;
    SpinBoxHighlight *spinClimbRate;
    QLabel *labelYawAngle;
    QLabel *label;
    SpinBoxHighlight *spinIAS;
    ComboUnitsVelocity *comboIAS;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonResetGz;

    void setupUi(QDockWidget *DockWidgetData)
    {
        if (DockWidgetData->objectName().isEmpty())
            DockWidgetData->setObjectName("DockWidgetData");
        DockWidgetData->resize(400, 907);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_4 = new QGridLayout(dockWidgetContents);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 880));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        comboTrackAngle = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboTrackAngle->setObjectName("comboTrackAngle");

        gridLayout->addWidget(comboTrackAngle, 12, 2, 2, 1);

        labelTurnRate = new QLabel(scrollAreaWidgetContents);
        labelTurnRate->setObjectName("labelTurnRate");
        labelTurnRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTurnRate, 17, 0, 1, 1);

        spinTurnRate = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinTurnRate->setObjectName("spinTurnRate");
        QFont font;
        font.setBold(true);
        spinTurnRate->setFont(font);
        spinTurnRate->setFocusPolicy(Qt::NoFocus);
        spinTurnRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTurnRate->setReadOnly(true);
        spinTurnRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTurnRate->setMinimum(-99999.990000000005239);
        spinTurnRate->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTurnRate, 17, 1, 1, 1);

        comboTurnRate = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboTurnRate->setObjectName("comboTurnRate");

        gridLayout->addWidget(comboTurnRate, 17, 2, 1, 1);

        comboAirspeed = new ComboUnitsVelocity(scrollAreaWidgetContents);
        comboAirspeed->setObjectName("comboAirspeed");

        gridLayout->addWidget(comboAirspeed, 2, 2, 1, 1);

        spinMinGz = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinMinGz->setObjectName("spinMinGz");
        spinMinGz->setFont(font);
        spinMinGz->setFocusPolicy(Qt::NoFocus);
        spinMinGz->setFrame(true);
        spinMinGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMinGz->setReadOnly(true);
        spinMinGz->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMinGz->setMinimum(-99999.990000000005239);
        spinMinGz->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMinGz, 21, 1, 1, 1);

        comboMinGz = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboMinGz->setObjectName("comboMinGz");

        gridLayout->addWidget(comboMinGz, 21, 2, 1, 1);

        labelMinGz = new QLabel(scrollAreaWidgetContents);
        labelMinGz->setObjectName("labelMinGz");
        labelMinGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMinGz, 21, 0, 1, 1);

        labelAirspeed = new QLabel(scrollAreaWidgetContents);
        labelAirspeed->setObjectName("labelAirspeed");
        labelAirspeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAirspeed, 2, 0, 1, 1);

        comboAltitudeAGL = new ComboUnitsLength(scrollAreaWidgetContents);
        comboAltitudeAGL->setObjectName("comboAltitudeAGL");

        gridLayout->addWidget(comboAltitudeAGL, 1, 2, 1, 1);

        labelMachNo = new QLabel(scrollAreaWidgetContents);
        labelMachNo->setObjectName("labelMachNo");
        labelMachNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMachNo, 5, 0, 1, 1);

        comboHeading = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboHeading->setObjectName("comboHeading");

        gridLayout->addWidget(comboHeading, 8, 2, 1, 1);

        comboRollAngle = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboRollAngle->setObjectName("comboRollAngle");

        gridLayout->addWidget(comboRollAngle, 6, 2, 1, 1);

        spinAirspeed = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinAirspeed->setObjectName("spinAirspeed");
        spinAirspeed->setFont(font);
        spinAirspeed->setFocusPolicy(Qt::NoFocus);
        spinAirspeed->setFrame(true);
        spinAirspeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinAirspeed->setReadOnly(true);
        spinAirspeed->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinAirspeed->setMinimum(-99999.990000000005239);
        spinAirspeed->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinAirspeed, 2, 1, 1, 1);

        labelAoA = new QLabel(scrollAreaWidgetContents);
        labelAoA->setObjectName("labelAoA");
        labelAoA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAoA, 9, 0, 1, 1);

        labelPitchAngle = new QLabel(scrollAreaWidgetContents);
        labelPitchAngle->setObjectName("labelPitchAngle");
        labelPitchAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPitchAngle, 7, 0, 1, 1);

        spinSideslipAngle = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinSideslipAngle->setObjectName("spinSideslipAngle");
        spinSideslipAngle->setFont(font);
        spinSideslipAngle->setFocusPolicy(Qt::NoFocus);
        spinSideslipAngle->setFrame(true);
        spinSideslipAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinSideslipAngle->setReadOnly(true);
        spinSideslipAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinSideslipAngle->setMinimum(-99999.990000000005239);
        spinSideslipAngle->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinSideslipAngle, 10, 1, 1, 1);

        spinRollRate = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinRollRate->setObjectName("spinRollRate");
        spinRollRate->setFont(font);
        spinRollRate->setFocusPolicy(Qt::NoFocus);
        spinRollRate->setFrame(true);
        spinRollRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRollRate->setReadOnly(true);
        spinRollRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRollRate->setMinimum(-99999.990000000005239);
        spinRollRate->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRollRate, 14, 1, 1, 1);

        labelRollRate = new QLabel(scrollAreaWidgetContents);
        labelRollRate->setObjectName("labelRollRate");
        labelRollRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelRollRate, 14, 0, 1, 1);

        spinRollAngle = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinRollAngle->setObjectName("spinRollAngle");
        spinRollAngle->setFont(font);
        spinRollAngle->setFocusPolicy(Qt::NoFocus);
        spinRollAngle->setFrame(true);
        spinRollAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRollAngle->setReadOnly(true);
        spinRollAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRollAngle->setMinimum(-99999.990000000005239);
        spinRollAngle->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRollAngle, 6, 1, 1, 1);

        comboGy = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboGy->setObjectName("comboGy");

        gridLayout->addWidget(comboGy, 19, 2, 1, 1);

        comboRollRate = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboRollRate->setObjectName("comboRollRate");

        gridLayout->addWidget(comboRollRate, 14, 2, 1, 1);

        labelYawRate = new QLabel(scrollAreaWidgetContents);
        labelYawRate->setObjectName("labelYawRate");
        labelYawRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelYawRate, 16, 0, 1, 1);

        comboYawRate = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboYawRate->setObjectName("comboYawRate");

        gridLayout->addWidget(comboYawRate, 16, 2, 1, 1);

        labelRollAngle = new QLabel(scrollAreaWidgetContents);
        labelRollAngle->setObjectName("labelRollAngle");
        labelRollAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelRollAngle, 6, 0, 1, 1);

        spinMaxGz = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinMaxGz->setObjectName("spinMaxGz");
        spinMaxGz->setFont(font);
        spinMaxGz->setFocusPolicy(Qt::NoFocus);
        spinMaxGz->setFrame(true);
        spinMaxGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMaxGz->setReadOnly(true);
        spinMaxGz->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMaxGz->setMinimum(-99999.990000000005239);
        spinMaxGz->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMaxGz, 22, 1, 1, 1);

        labelGy = new QLabel(scrollAreaWidgetContents);
        labelGy->setObjectName("labelGy");
        labelGy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGy, 19, 0, 1, 1);

        comboAngleOfAttack = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboAngleOfAttack->setObjectName("comboAngleOfAttack");

        gridLayout->addWidget(comboAngleOfAttack, 9, 2, 1, 1);

        labelPitchRate = new QLabel(scrollAreaWidgetContents);
        labelPitchRate->setObjectName("labelPitchRate");
        labelPitchRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPitchRate, 15, 0, 1, 1);

        spinAngleOfAttack = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinAngleOfAttack->setObjectName("spinAngleOfAttack");
        spinAngleOfAttack->setFont(font);
        spinAngleOfAttack->setFocusPolicy(Qt::NoFocus);
        spinAngleOfAttack->setFrame(true);
        spinAngleOfAttack->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinAngleOfAttack->setReadOnly(true);
        spinAngleOfAttack->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinAngleOfAttack->setMinimum(-99999.990000000005239);
        spinAngleOfAttack->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinAngleOfAttack, 9, 1, 1, 1);

        comboMachNumber = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboMachNumber->setObjectName("comboMachNumber");

        gridLayout->addWidget(comboMachNumber, 5, 2, 1, 1);

        labelClimbRate = new QLabel(scrollAreaWidgetContents);
        labelClimbRate->setObjectName("labelClimbRate");
        labelClimbRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelClimbRate, 4, 0, 1, 1);

        labelAltitudeASL = new QLabel(scrollAreaWidgetContents);
        labelAltitudeASL->setObjectName("labelAltitudeASL");
        labelAltitudeASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAltitudeASL, 0, 0, 1, 1);

        spinMachNumber = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinMachNumber->setObjectName("spinMachNumber");
        spinMachNumber->setFont(font);
        spinMachNumber->setFocusPolicy(Qt::NoFocus);
        spinMachNumber->setFrame(true);
        spinMachNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMachNumber->setReadOnly(true);
        spinMachNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMachNumber->setMinimum(-99999.990000000005239);
        spinMachNumber->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMachNumber, 5, 1, 1, 1);

        spinYawRate = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinYawRate->setObjectName("spinYawRate");
        spinYawRate->setFont(font);
        spinYawRate->setFocusPolicy(Qt::NoFocus);
        spinYawRate->setFrame(true);
        spinYawRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinYawRate->setReadOnly(true);
        spinYawRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinYawRate->setMinimum(-99999.990000000005239);
        spinYawRate->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinYawRate, 16, 1, 1, 1);

        spinGz = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinGz->setObjectName("spinGz");
        spinGz->setFont(font);
        spinGz->setFocusPolicy(Qt::NoFocus);
        spinGz->setFrame(true);
        spinGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinGz->setReadOnly(true);
        spinGz->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinGz->setMinimum(-99999.990000000005239);
        spinGz->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinGz, 20, 1, 1, 1);

        spinHeading = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinHeading->setObjectName("spinHeading");
        spinHeading->setFont(font);
        spinHeading->setFocusPolicy(Qt::NoFocus);
        spinHeading->setFrame(true);
        spinHeading->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinHeading->setReadOnly(true);
        spinHeading->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinHeading->setMinimum(-99999.990000000005239);
        spinHeading->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinHeading, 8, 1, 1, 1);

        spinPitchRate = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinPitchRate->setObjectName("spinPitchRate");
        spinPitchRate->setFont(font);
        spinPitchRate->setFocusPolicy(Qt::NoFocus);
        spinPitchRate->setFrame(true);
        spinPitchRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPitchRate->setReadOnly(true);
        spinPitchRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPitchRate->setMinimum(-99999.990000000005239);
        spinPitchRate->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPitchRate, 15, 1, 1, 1);

        comboPitchAngle = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboPitchAngle->setObjectName("comboPitchAngle");

        gridLayout->addWidget(comboPitchAngle, 7, 2, 1, 1);

        comboClimbRate = new ComboUnitsVelocity(scrollAreaWidgetContents);
        comboClimbRate->setObjectName("comboClimbRate");

        gridLayout->addWidget(comboClimbRate, 4, 2, 1, 1);

        comboGx = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboGx->setObjectName("comboGx");

        gridLayout->addWidget(comboGx, 18, 2, 1, 1);

        comboGz = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboGz->setObjectName("comboGz");

        gridLayout->addWidget(comboGz, 20, 2, 1, 1);

        comboAltitudeASL = new ComboUnitsLength(scrollAreaWidgetContents);
        comboAltitudeASL->setObjectName("comboAltitudeASL");

        gridLayout->addWidget(comboAltitudeASL, 0, 2, 1, 1);

        spinPitchAngle = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinPitchAngle->setObjectName("spinPitchAngle");
        spinPitchAngle->setFont(font);
        spinPitchAngle->setFocusPolicy(Qt::NoFocus);
        spinPitchAngle->setFrame(true);
        spinPitchAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPitchAngle->setReadOnly(true);
        spinPitchAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPitchAngle->setMinimum(-99999.990000000005239);
        spinPitchAngle->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPitchAngle, 7, 1, 1, 1);

        labelSideslip = new QLabel(scrollAreaWidgetContents);
        labelSideslip->setObjectName("labelSideslip");
        labelSideslip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSideslip, 10, 0, 1, 1);

        comboMaxGz = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboMaxGz->setObjectName("comboMaxGz");

        gridLayout->addWidget(comboMaxGz, 22, 2, 1, 1);

        labelGz = new QLabel(scrollAreaWidgetContents);
        labelGz->setObjectName("labelGz");
        labelGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGz, 20, 0, 1, 1);

        spinAltitudeAGL = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinAltitudeAGL->setObjectName("spinAltitudeAGL");
        spinAltitudeAGL->setFont(font);
        spinAltitudeAGL->setFocusPolicy(Qt::NoFocus);
        spinAltitudeAGL->setFrame(true);
        spinAltitudeAGL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinAltitudeAGL->setReadOnly(true);
        spinAltitudeAGL->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinAltitudeAGL->setMinimum(-99999.990000000005239);
        spinAltitudeAGL->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinAltitudeAGL, 1, 1, 1, 1);

        labelMaxGz = new QLabel(scrollAreaWidgetContents);
        labelMaxGz->setObjectName("labelMaxGz");
        labelMaxGz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMaxGz, 22, 0, 1, 1);

        comboPitchRate = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboPitchRate->setObjectName("comboPitchRate");

        gridLayout->addWidget(comboPitchRate, 15, 2, 1, 1);

        spinGx = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinGx->setObjectName("spinGx");
        spinGx->setFont(font);
        spinGx->setFocusPolicy(Qt::NoFocus);
        spinGx->setFrame(true);
        spinGx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinGx->setReadOnly(true);
        spinGx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinGx->setMinimum(-99999.990000000005239);
        spinGx->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinGx, 18, 1, 1, 1);

        comboSideslipAngle = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboSideslipAngle->setObjectName("comboSideslipAngle");

        gridLayout->addWidget(comboSideslipAngle, 10, 2, 1, 1);

        labelClimbAngle = new QLabel(scrollAreaWidgetContents);
        labelClimbAngle->setObjectName("labelClimbAngle");
        labelClimbAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelClimbAngle, 11, 0, 1, 1);

        spinClimbAngle = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinClimbAngle->setObjectName("spinClimbAngle");
        spinClimbAngle->setFont(font);
        spinClimbAngle->setFocusPolicy(Qt::NoFocus);
        spinClimbAngle->setFrame(true);
        spinClimbAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinClimbAngle->setReadOnly(true);
        spinClimbAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinClimbAngle->setMinimum(-99999.990000000005239);
        spinClimbAngle->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinClimbAngle, 11, 1, 1, 1);

        comboClimbAngle = new ComboUnitsAngle(scrollAreaWidgetContents);
        comboClimbAngle->setObjectName("comboClimbAngle");

        gridLayout->addWidget(comboClimbAngle, 11, 2, 1, 1);

        labelTrackAngle = new QLabel(scrollAreaWidgetContents);
        labelTrackAngle->setObjectName("labelTrackAngle");
        labelTrackAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTrackAngle, 12, 0, 2, 1);

        spinTrackAngle = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinTrackAngle->setObjectName("spinTrackAngle");
        spinTrackAngle->setFont(font);
        spinTrackAngle->setFocusPolicy(Qt::NoFocus);
        spinTrackAngle->setFrame(true);
        spinTrackAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTrackAngle->setReadOnly(true);
        spinTrackAngle->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTrackAngle->setMinimum(-99999.990000000005239);
        spinTrackAngle->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTrackAngle, 12, 1, 2, 1);

        labelAltitudeAGL = new QLabel(scrollAreaWidgetContents);
        labelAltitudeAGL->setObjectName("labelAltitudeAGL");
        labelAltitudeAGL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAltitudeAGL, 1, 0, 1, 1);

        spinGy = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinGy->setObjectName("spinGy");
        spinGy->setFont(font);
        spinGy->setFocusPolicy(Qt::NoFocus);
        spinGy->setFrame(true);
        spinGy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinGy->setReadOnly(true);
        spinGy->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinGy->setMinimum(-99999.990000000005239);
        spinGy->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinGy, 19, 1, 1, 1);

        spinAltitudeASL = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinAltitudeASL->setObjectName("spinAltitudeASL");
        spinAltitudeASL->setEnabled(true);
        spinAltitudeASL->setFont(font);
        spinAltitudeASL->setFocusPolicy(Qt::NoFocus);
        spinAltitudeASL->setFrame(true);
        spinAltitudeASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinAltitudeASL->setReadOnly(true);
        spinAltitudeASL->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinAltitudeASL->setMinimum(-99999.990000000005239);
        spinAltitudeASL->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinAltitudeASL, 0, 1, 1, 1);

        labelGx = new QLabel(scrollAreaWidgetContents);
        labelGx->setObjectName("labelGx");
        labelGx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGx, 18, 0, 1, 1);

        spinClimbRate = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinClimbRate->setObjectName("spinClimbRate");
        spinClimbRate->setFont(font);
        spinClimbRate->setFocusPolicy(Qt::NoFocus);
        spinClimbRate->setFrame(true);
        spinClimbRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinClimbRate->setReadOnly(true);
        spinClimbRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinClimbRate->setMinimum(-99999.990000000005239);
        spinClimbRate->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinClimbRate, 4, 1, 1, 1);

        labelYawAngle = new QLabel(scrollAreaWidgetContents);
        labelYawAngle->setObjectName("labelYawAngle");
        labelYawAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelYawAngle, 8, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        spinIAS = new SpinBoxHighlight(scrollAreaWidgetContents);
        spinIAS->setObjectName("spinIAS");
        spinIAS->setFont(font);
        spinIAS->setFocusPolicy(Qt::NoFocus);
        spinIAS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinIAS->setReadOnly(true);
        spinIAS->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinIAS->setMinimum(-99999.990000000005239);
        spinIAS->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinIAS, 3, 1, 1, 1);

        comboIAS = new ComboUnitsVelocity(scrollAreaWidgetContents);
        comboIAS->setObjectName("comboIAS");

        gridLayout->addWidget(comboIAS, 3, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 142, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        buttonResetGz = new QPushButton(scrollAreaWidgetContents);
        buttonResetGz->setObjectName("buttonResetGz");

        gridLayout_3->addWidget(buttonResetGz, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);

        DockWidgetData->setWidget(dockWidgetContents);
        QWidget::setTabOrder(scrollArea, comboAltitudeASL);
        QWidget::setTabOrder(comboAltitudeASL, comboAltitudeAGL);
        QWidget::setTabOrder(comboAltitudeAGL, comboAirspeed);
        QWidget::setTabOrder(comboAirspeed, comboIAS);
        QWidget::setTabOrder(comboIAS, comboClimbRate);
        QWidget::setTabOrder(comboClimbRate, comboMachNumber);
        QWidget::setTabOrder(comboMachNumber, comboRollAngle);
        QWidget::setTabOrder(comboRollAngle, comboPitchAngle);
        QWidget::setTabOrder(comboPitchAngle, comboHeading);
        QWidget::setTabOrder(comboHeading, comboAngleOfAttack);
        QWidget::setTabOrder(comboAngleOfAttack, comboSideslipAngle);
        QWidget::setTabOrder(comboSideslipAngle, comboClimbAngle);
        QWidget::setTabOrder(comboClimbAngle, comboTrackAngle);
        QWidget::setTabOrder(comboTrackAngle, comboRollRate);
        QWidget::setTabOrder(comboRollRate, comboPitchRate);
        QWidget::setTabOrder(comboPitchRate, comboYawRate);
        QWidget::setTabOrder(comboYawRate, comboTurnRate);
        QWidget::setTabOrder(comboTurnRate, comboGx);
        QWidget::setTabOrder(comboGx, comboGy);
        QWidget::setTabOrder(comboGy, comboGz);
        QWidget::setTabOrder(comboGz, comboMinGz);
        QWidget::setTabOrder(comboMinGz, comboMaxGz);
        QWidget::setTabOrder(comboMaxGz, buttonResetGz);

        retranslateUi(DockWidgetData);

        QMetaObject::connectSlotsByName(DockWidgetData);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetData)
    {
        DockWidgetData->setWindowTitle(QCoreApplication::translate("DockWidgetData", "Data", nullptr));
        labelTurnRate->setText(QCoreApplication::translate("DockWidgetData", "Turn Rate:", nullptr));
        labelMinGz->setText(QCoreApplication::translate("DockWidgetData", "Min Gz:", nullptr));
        labelAirspeed->setText(QCoreApplication::translate("DockWidgetData", "Airspeed:", nullptr));
        labelMachNo->setText(QCoreApplication::translate("DockWidgetData", "Mach Number:", nullptr));
        labelAoA->setText(QCoreApplication::translate("DockWidgetData", "Angle of Attack:", nullptr));
        labelPitchAngle->setText(QCoreApplication::translate("DockWidgetData", "Pitch Angle:", nullptr));
        labelRollRate->setText(QCoreApplication::translate("DockWidgetData", "Roll Rate:", nullptr));
        labelYawRate->setText(QCoreApplication::translate("DockWidgetData", "Yaw Rate:", nullptr));
        labelRollAngle->setText(QCoreApplication::translate("DockWidgetData", "Roll Angle:", nullptr));
        labelGy->setText(QCoreApplication::translate("DockWidgetData", "Gy:", nullptr));
        labelPitchRate->setText(QCoreApplication::translate("DockWidgetData", "Pitch Rate:", nullptr));
        labelClimbRate->setText(QCoreApplication::translate("DockWidgetData", "Climb Rate:", nullptr));
        labelAltitudeASL->setText(QCoreApplication::translate("DockWidgetData", "Altitude ASL:", nullptr));
        labelSideslip->setText(QCoreApplication::translate("DockWidgetData", "Sideslip Angle:", nullptr));
        labelGz->setText(QCoreApplication::translate("DockWidgetData", "Gz:", nullptr));
        labelMaxGz->setText(QCoreApplication::translate("DockWidgetData", "Max Gz:", nullptr));
        labelClimbAngle->setText(QCoreApplication::translate("DockWidgetData", "Climb Angle:", nullptr));
        labelTrackAngle->setText(QCoreApplication::translate("DockWidgetData", "Track Angle:", nullptr));
        labelAltitudeAGL->setText(QCoreApplication::translate("DockWidgetData", "Altitude AGL:", nullptr));
        labelGx->setText(QCoreApplication::translate("DockWidgetData", "Gx:", nullptr));
        labelYawAngle->setText(QCoreApplication::translate("DockWidgetData", "Heading:", nullptr));
        label->setText(QCoreApplication::translate("DockWidgetData", "IAS:", nullptr));
        buttonResetGz->setText(QCoreApplication::translate("DockWidgetData", "Reset Gz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetData: public Ui_DockWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETDATA_H
