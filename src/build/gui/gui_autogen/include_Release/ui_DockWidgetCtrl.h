/********************************************************************************
** Form generated from reading UI file 'DockWidgetCtrl.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETCTRL_H
#define UI_DOCKWIDGETCTRL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "gui/GraphicsPedals.h"
#include "gui/GraphicsStick.h"

QT_BEGIN_NAMESPACE

class Ui_DockWidgetCtrl
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBoxThrottle;
    QGridLayout *gridLayout;
    QWidget *widgetThrottle_1;
    QGridLayout *gridLayout_8;
    QSpacerItem *spacerThrottleR_1;
    QProgressBar *barThrottle_1;
    QSpacerItem *spacerThrottleL_1;
    QSpinBox *spinBoxThrottle_1;
    QWidget *widgetThrottle_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *spacerThrottleR_2;
    QProgressBar *barThrottle_2;
    QSpacerItem *spacerThrottleL_2;
    QSpinBox *spinBoxThrottle_2;
    QWidget *widgetThrottle_3;
    QGridLayout *gridLayout_10;
    QSpacerItem *spacerThrottleR_3;
    QProgressBar *barThrottle_3;
    QSpacerItem *spacerThrottleL_3;
    QSpinBox *spinBoxThrottle_3;
    QWidget *widgetThrottle_4;
    QGridLayout *gridLayout_15;
    QSpacerItem *spacerThrottleR_4;
    QProgressBar *barThrottle_4;
    QSpacerItem *spacerThrottleL_4;
    QSpinBox *spinBoxThrottle_4;
    QGroupBox *groupBoxCollective;
    QGridLayout *gridLayout_5;
    QProgressBar *barCollective;
    QSpacerItem *spacerCollective_R;
    QSpacerItem *spacerCollective_L;
    QSpinBox *spinBoxCollective;
    QWidget *widget;
    QGridLayout *gridLayout_24;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonNWS;
    QPushButton *pushButtonABS;
    QGroupBox *groupBoxPropeller;
    QGridLayout *gridLayout_4;
    QWidget *widgetPropeller_1;
    QGridLayout *gridLayout_16;
    QSpacerItem *spacerPropellerR_1;
    QProgressBar *barPropeller_1;
    QSpacerItem *spacerPropellerL_1;
    QSpinBox *spinBoxPropeller_1;
    QWidget *widgetPropeller_2;
    QGridLayout *gridLayout_17;
    QSpacerItem *spacerPropellerR_2;
    QProgressBar *barPropeller_2;
    QSpacerItem *spacerPropellerL_2;
    QSpinBox *spinBoxPropeller_2;
    QWidget *widgetPropeller_3;
    QGridLayout *gridLayout_18;
    QSpacerItem *spacerPropellerR_3;
    QProgressBar *barPropeller_3;
    QSpacerItem *spacerPropellerL_3;
    QSpinBox *spinBoxPropeller_3;
    QWidget *widgetPropeller_4;
    QGridLayout *gridLayout_19;
    QSpacerItem *spacerPropellerR_4;
    QProgressBar *barPropeller_4;
    QSpacerItem *spacerPropellerL_4;
    QSpinBox *spinBoxPropeller_4;
    QGroupBox *groupBoxMixture;
    QGridLayout *gridLayout_7;
    QWidget *widgetMixture_1;
    QGridLayout *gridLayout_20;
    QSpacerItem *spacerMixtureR_1;
    QProgressBar *barMixture_1;
    QSpacerItem *spacerMixtureL_1;
    QSpinBox *spinBoxMixture_1;
    QWidget *widgetMixture_2;
    QGridLayout *gridLayout_21;
    QSpacerItem *spacerMixtureR_2;
    QProgressBar *barMixture_2;
    QSpacerItem *spacerMixtureL_2;
    QSpinBox *spinBoxMixture_2;
    QWidget *widgetMixture_3;
    QGridLayout *gridLayout_22;
    QSpacerItem *spacerMixtureR_3;
    QProgressBar *barMixture_3;
    QSpacerItem *spacerMixtureL_3;
    QSpinBox *spinBoxMixture_3;
    QWidget *widgetMixture_4;
    QGridLayout *gridLayout_23;
    QSpacerItem *spacerMixtureR_4;
    QProgressBar *barMixture_4;
    QSpacerItem *spacerMixtureL_4;
    QSpinBox *spinBoxMixture_4;
    QGroupBox *groupBoxFlaps;
    QGridLayout *gridLayout_13;
    QSpacerItem *spacerFlaps_L;
    QProgressBar *barFlaps;
    QSpacerItem *spacerFlaps_R;
    QSpinBox *spinBoxFlaps;
    QGroupBox *groupBoxAirbrake;
    QGridLayout *gridLayout_12;
    QSpacerItem *spacerAirbrake_L;
    QProgressBar *barAirbrake;
    QSpacerItem *spacerAirbrake_R;
    QSpinBox *spinBoxAirbrake;
    QGroupBox *groupBoxStickPedals;
    QGridLayout *gridLayout_3;
    QProgressBar *barBrakeR;
    GraphicsPedals *graphicsCtrlPedals;
    GraphicsStick *graphicsCtrlStick;
    QProgressBar *barBrakeL;
    QGroupBox *groupBoxGear;
    QGridLayout *gridLayout_11;
    QSpacerItem *spacerGear_R;
    QSpacerItem *spacerGear_L;
    QProgressBar *barGear;
    QSpinBox *spinBoxGear;
    QGroupBox *groupBoxSpoilers;
    QGridLayout *gridLayout_14;
    QProgressBar *barSpoilers;
    QSpacerItem *spacerSpoilers_L;
    QSpacerItem *spacerSpoilers_R;
    QSpinBox *spinBoxSpoilers;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDockWidget *DockWidgetCtrl)
    {
        if (DockWidgetCtrl->objectName().isEmpty())
            DockWidgetCtrl->setObjectName("DockWidgetCtrl");
        DockWidgetCtrl->resize(1059, 314);
        DockWidgetCtrl->setMinimumSize(QSize(78, 103));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_6 = new QGridLayout(dockWidgetContents);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"    border: 1px solid #323232;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"	background: #ffffff;\n"
"	border: 1px solid #323232;\n"
"	color: #969696;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"	background: #032a63;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(-872, 0, 1929, 274));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 17, 1, 1);

        groupBoxThrottle = new QGroupBox(scrollAreaWidgetContents);
        groupBoxThrottle->setObjectName("groupBoxThrottle");
        groupBoxThrottle->setMinimumSize(QSize(0, 0));
        groupBoxThrottle->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBoxThrottle);
        gridLayout->setObjectName("gridLayout");
        widgetThrottle_1 = new QWidget(groupBoxThrottle);
        widgetThrottle_1->setObjectName("widgetThrottle_1");
        widgetThrottle_1->setMinimumSize(QSize(0, 0));
        gridLayout_8 = new QGridLayout(widgetThrottle_1);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        spacerThrottleR_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(spacerThrottleR_1, 2, 2, 1, 1);

        barThrottle_1 = new QProgressBar(widgetThrottle_1);
        barThrottle_1->setObjectName("barThrottle_1");
        barThrottle_1->setMaximumSize(QSize(18, 16777215));
        barThrottle_1->setValue(24);
        barThrottle_1->setTextVisible(false);
        barThrottle_1->setOrientation(Qt::Vertical);

        gridLayout_8->addWidget(barThrottle_1, 2, 1, 1, 1);

        spacerThrottleL_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_8->addItem(spacerThrottleL_1, 2, 0, 1, 1);

        spinBoxThrottle_1 = new QSpinBox(widgetThrottle_1);
        spinBoxThrottle_1->setObjectName("spinBoxThrottle_1");
        spinBoxThrottle_1->setFocusPolicy(Qt::NoFocus);
        spinBoxThrottle_1->setAlignment(Qt::AlignCenter);
        spinBoxThrottle_1->setReadOnly(true);
        spinBoxThrottle_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxThrottle_1->setMaximum(100);

        gridLayout_8->addWidget(spinBoxThrottle_1, 0, 0, 1, 3);


        gridLayout->addWidget(widgetThrottle_1, 0, 0, 1, 1);

        widgetThrottle_2 = new QWidget(groupBoxThrottle);
        widgetThrottle_2->setObjectName("widgetThrottle_2");
        widgetThrottle_2->setMinimumSize(QSize(0, 0));
        gridLayout_9 = new QGridLayout(widgetThrottle_2);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        spacerThrottleR_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(spacerThrottleR_2, 2, 2, 1, 1);

        barThrottle_2 = new QProgressBar(widgetThrottle_2);
        barThrottle_2->setObjectName("barThrottle_2");
        barThrottle_2->setMaximumSize(QSize(18, 16777215));
        barThrottle_2->setValue(24);
        barThrottle_2->setTextVisible(false);
        barThrottle_2->setOrientation(Qt::Vertical);

        gridLayout_9->addWidget(barThrottle_2, 2, 1, 1, 1);

        spacerThrottleL_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(spacerThrottleL_2, 2, 0, 1, 1);

        spinBoxThrottle_2 = new QSpinBox(widgetThrottle_2);
        spinBoxThrottle_2->setObjectName("spinBoxThrottle_2");
        spinBoxThrottle_2->setFocusPolicy(Qt::NoFocus);
        spinBoxThrottle_2->setAlignment(Qt::AlignCenter);
        spinBoxThrottle_2->setReadOnly(true);
        spinBoxThrottle_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxThrottle_2->setMaximum(100);

        gridLayout_9->addWidget(spinBoxThrottle_2, 0, 0, 1, 3);


        gridLayout->addWidget(widgetThrottle_2, 0, 1, 1, 1);

        widgetThrottle_3 = new QWidget(groupBoxThrottle);
        widgetThrottle_3->setObjectName("widgetThrottle_3");
        widgetThrottle_3->setMinimumSize(QSize(0, 0));
        gridLayout_10 = new QGridLayout(widgetThrottle_3);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        spacerThrottleR_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(spacerThrottleR_3, 2, 2, 1, 1);

        barThrottle_3 = new QProgressBar(widgetThrottle_3);
        barThrottle_3->setObjectName("barThrottle_3");
        barThrottle_3->setMaximumSize(QSize(18, 16777215));
        barThrottle_3->setValue(24);
        barThrottle_3->setTextVisible(false);
        barThrottle_3->setOrientation(Qt::Vertical);

        gridLayout_10->addWidget(barThrottle_3, 2, 1, 1, 1);

        spacerThrottleL_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(spacerThrottleL_3, 2, 0, 1, 1);

        spinBoxThrottle_3 = new QSpinBox(widgetThrottle_3);
        spinBoxThrottle_3->setObjectName("spinBoxThrottle_3");
        spinBoxThrottle_3->setFocusPolicy(Qt::NoFocus);
        spinBoxThrottle_3->setAlignment(Qt::AlignCenter);
        spinBoxThrottle_3->setReadOnly(true);
        spinBoxThrottle_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxThrottle_3->setMaximum(100);

        gridLayout_10->addWidget(spinBoxThrottle_3, 0, 0, 1, 3);


        gridLayout->addWidget(widgetThrottle_3, 0, 2, 1, 1);

        widgetThrottle_4 = new QWidget(groupBoxThrottle);
        widgetThrottle_4->setObjectName("widgetThrottle_4");
        widgetThrottle_4->setMinimumSize(QSize(0, 0));
        gridLayout_15 = new QGridLayout(widgetThrottle_4);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        spacerThrottleR_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_15->addItem(spacerThrottleR_4, 2, 2, 1, 1);

        barThrottle_4 = new QProgressBar(widgetThrottle_4);
        barThrottle_4->setObjectName("barThrottle_4");
        barThrottle_4->setMaximumSize(QSize(18, 16777215));
        barThrottle_4->setValue(24);
        barThrottle_4->setTextVisible(false);
        barThrottle_4->setOrientation(Qt::Vertical);

        gridLayout_15->addWidget(barThrottle_4, 2, 1, 1, 1);

        spacerThrottleL_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_15->addItem(spacerThrottleL_4, 2, 0, 1, 1);

        spinBoxThrottle_4 = new QSpinBox(widgetThrottle_4);
        spinBoxThrottle_4->setObjectName("spinBoxThrottle_4");
        spinBoxThrottle_4->setFocusPolicy(Qt::NoFocus);
        spinBoxThrottle_4->setAlignment(Qt::AlignCenter);
        spinBoxThrottle_4->setReadOnly(true);
        spinBoxThrottle_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxThrottle_4->setMaximum(100);

        gridLayout_15->addWidget(spinBoxThrottle_4, 0, 0, 1, 3);


        gridLayout->addWidget(widgetThrottle_4, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBoxThrottle, 0, 5, 1, 1);

        groupBoxCollective = new QGroupBox(scrollAreaWidgetContents);
        groupBoxCollective->setObjectName("groupBoxCollective");
        groupBoxCollective->setMinimumSize(QSize(0, 0));
        groupBoxCollective->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBoxCollective);
        gridLayout_5->setObjectName("gridLayout_5");
        barCollective = new QProgressBar(groupBoxCollective);
        barCollective->setObjectName("barCollective");
        barCollective->setMaximumSize(QSize(18, 16777215));
        barCollective->setValue(24);
        barCollective->setTextVisible(false);
        barCollective->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(barCollective, 1, 1, 1, 1);

        spacerCollective_R = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(spacerCollective_R, 1, 2, 1, 1);

        spacerCollective_L = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(spacerCollective_L, 1, 0, 1, 1);

        spinBoxCollective = new QSpinBox(groupBoxCollective);
        spinBoxCollective->setObjectName("spinBoxCollective");
        spinBoxCollective->setFocusPolicy(Qt::NoFocus);
        spinBoxCollective->setAlignment(Qt::AlignCenter);
        spinBoxCollective->setReadOnly(true);
        spinBoxCollective->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxCollective->setMaximum(100);

        gridLayout_5->addWidget(spinBoxCollective, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxCollective, 0, 1, 1, 1);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        gridLayout_24 = new QGridLayout(widget);
        gridLayout_24->setObjectName("gridLayout_24");
        verticalSpacer = new QSpacerItem(20, 131, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_24->addItem(verticalSpacer, 3, 0, 1, 1);

        pushButtonNWS = new QPushButton(widget);
        pushButtonNWS->setObjectName("pushButtonNWS");
        pushButtonNWS->setCheckable(true);
        pushButtonNWS->setChecked(true);

        gridLayout_24->addWidget(pushButtonNWS, 1, 0, 1, 1);

        pushButtonABS = new QPushButton(widget);
        pushButtonABS->setObjectName("pushButtonABS");
        pushButtonABS->setCheckable(true);
        pushButtonABS->setChecked(true);

        gridLayout_24->addWidget(pushButtonABS, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 16, 1, 1);

        groupBoxPropeller = new QGroupBox(scrollAreaWidgetContents);
        groupBoxPropeller->setObjectName("groupBoxPropeller");
        groupBoxPropeller->setMinimumSize(QSize(0, 0));
        groupBoxPropeller->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBoxPropeller);
        gridLayout_4->setObjectName("gridLayout_4");
        widgetPropeller_1 = new QWidget(groupBoxPropeller);
        widgetPropeller_1->setObjectName("widgetPropeller_1");
        widgetPropeller_1->setMinimumSize(QSize(0, 0));
        gridLayout_16 = new QGridLayout(widgetPropeller_1);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        spacerPropellerR_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_16->addItem(spacerPropellerR_1, 2, 2, 1, 1);

        barPropeller_1 = new QProgressBar(widgetPropeller_1);
        barPropeller_1->setObjectName("barPropeller_1");
        barPropeller_1->setMaximumSize(QSize(18, 16777215));
        barPropeller_1->setValue(24);
        barPropeller_1->setTextVisible(false);
        barPropeller_1->setOrientation(Qt::Vertical);

        gridLayout_16->addWidget(barPropeller_1, 2, 1, 1, 1);

        spacerPropellerL_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_16->addItem(spacerPropellerL_1, 2, 0, 1, 1);

        spinBoxPropeller_1 = new QSpinBox(widgetPropeller_1);
        spinBoxPropeller_1->setObjectName("spinBoxPropeller_1");
        spinBoxPropeller_1->setFocusPolicy(Qt::NoFocus);
        spinBoxPropeller_1->setAlignment(Qt::AlignCenter);
        spinBoxPropeller_1->setReadOnly(true);
        spinBoxPropeller_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPropeller_1->setMaximum(100);

        gridLayout_16->addWidget(spinBoxPropeller_1, 0, 0, 1, 3);


        gridLayout_4->addWidget(widgetPropeller_1, 0, 0, 1, 1);

        widgetPropeller_2 = new QWidget(groupBoxPropeller);
        widgetPropeller_2->setObjectName("widgetPropeller_2");
        widgetPropeller_2->setMinimumSize(QSize(0, 0));
        gridLayout_17 = new QGridLayout(widgetPropeller_2);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        spacerPropellerR_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_17->addItem(spacerPropellerR_2, 2, 2, 1, 1);

        barPropeller_2 = new QProgressBar(widgetPropeller_2);
        barPropeller_2->setObjectName("barPropeller_2");
        barPropeller_2->setMaximumSize(QSize(18, 16777215));
        barPropeller_2->setValue(24);
        barPropeller_2->setTextVisible(false);
        barPropeller_2->setOrientation(Qt::Vertical);

        gridLayout_17->addWidget(barPropeller_2, 2, 1, 1, 1);

        spacerPropellerL_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_17->addItem(spacerPropellerL_2, 2, 0, 1, 1);

        spinBoxPropeller_2 = new QSpinBox(widgetPropeller_2);
        spinBoxPropeller_2->setObjectName("spinBoxPropeller_2");
        spinBoxPropeller_2->setFocusPolicy(Qt::NoFocus);
        spinBoxPropeller_2->setAlignment(Qt::AlignCenter);
        spinBoxPropeller_2->setReadOnly(true);
        spinBoxPropeller_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPropeller_2->setMaximum(100);

        gridLayout_17->addWidget(spinBoxPropeller_2, 0, 0, 1, 3);


        gridLayout_4->addWidget(widgetPropeller_2, 0, 1, 1, 1);

        widgetPropeller_3 = new QWidget(groupBoxPropeller);
        widgetPropeller_3->setObjectName("widgetPropeller_3");
        widgetPropeller_3->setMinimumSize(QSize(0, 0));
        gridLayout_18 = new QGridLayout(widgetPropeller_3);
        gridLayout_18->setObjectName("gridLayout_18");
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        spacerPropellerR_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_18->addItem(spacerPropellerR_3, 2, 2, 1, 1);

        barPropeller_3 = new QProgressBar(widgetPropeller_3);
        barPropeller_3->setObjectName("barPropeller_3");
        barPropeller_3->setMaximumSize(QSize(18, 16777215));
        barPropeller_3->setValue(24);
        barPropeller_3->setTextVisible(false);
        barPropeller_3->setOrientation(Qt::Vertical);

        gridLayout_18->addWidget(barPropeller_3, 2, 1, 1, 1);

        spacerPropellerL_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_18->addItem(spacerPropellerL_3, 2, 0, 1, 1);

        spinBoxPropeller_3 = new QSpinBox(widgetPropeller_3);
        spinBoxPropeller_3->setObjectName("spinBoxPropeller_3");
        spinBoxPropeller_3->setFocusPolicy(Qt::NoFocus);
        spinBoxPropeller_3->setAlignment(Qt::AlignCenter);
        spinBoxPropeller_3->setReadOnly(true);
        spinBoxPropeller_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPropeller_3->setMaximum(100);

        gridLayout_18->addWidget(spinBoxPropeller_3, 0, 0, 1, 3);


        gridLayout_4->addWidget(widgetPropeller_3, 0, 2, 1, 1);

        widgetPropeller_4 = new QWidget(groupBoxPropeller);
        widgetPropeller_4->setObjectName("widgetPropeller_4");
        widgetPropeller_4->setMinimumSize(QSize(0, 0));
        gridLayout_19 = new QGridLayout(widgetPropeller_4);
        gridLayout_19->setObjectName("gridLayout_19");
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        spacerPropellerR_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(spacerPropellerR_4, 2, 2, 1, 1);

        barPropeller_4 = new QProgressBar(widgetPropeller_4);
        barPropeller_4->setObjectName("barPropeller_4");
        barPropeller_4->setMaximumSize(QSize(18, 16777215));
        barPropeller_4->setValue(24);
        barPropeller_4->setTextVisible(false);
        barPropeller_4->setOrientation(Qt::Vertical);

        gridLayout_19->addWidget(barPropeller_4, 2, 1, 1, 1);

        spacerPropellerL_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_19->addItem(spacerPropellerL_4, 2, 0, 1, 1);

        spinBoxPropeller_4 = new QSpinBox(widgetPropeller_4);
        spinBoxPropeller_4->setObjectName("spinBoxPropeller_4");
        spinBoxPropeller_4->setFocusPolicy(Qt::NoFocus);
        spinBoxPropeller_4->setAlignment(Qt::AlignCenter);
        spinBoxPropeller_4->setReadOnly(true);
        spinBoxPropeller_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPropeller_4->setMaximum(100);

        gridLayout_19->addWidget(spinBoxPropeller_4, 0, 0, 1, 3);


        gridLayout_4->addWidget(widgetPropeller_4, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBoxPropeller, 0, 6, 1, 1);

        groupBoxMixture = new QGroupBox(scrollAreaWidgetContents);
        groupBoxMixture->setObjectName("groupBoxMixture");
        groupBoxMixture->setMinimumSize(QSize(0, 0));
        groupBoxMixture->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(groupBoxMixture);
        gridLayout_7->setObjectName("gridLayout_7");
        widgetMixture_1 = new QWidget(groupBoxMixture);
        widgetMixture_1->setObjectName("widgetMixture_1");
        widgetMixture_1->setMinimumSize(QSize(0, 0));
        gridLayout_20 = new QGridLayout(widgetMixture_1);
        gridLayout_20->setObjectName("gridLayout_20");
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        spacerMixtureR_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_20->addItem(spacerMixtureR_1, 2, 2, 1, 1);

        barMixture_1 = new QProgressBar(widgetMixture_1);
        barMixture_1->setObjectName("barMixture_1");
        barMixture_1->setMaximumSize(QSize(18, 16777215));
        barMixture_1->setValue(24);
        barMixture_1->setTextVisible(false);
        barMixture_1->setOrientation(Qt::Vertical);

        gridLayout_20->addWidget(barMixture_1, 2, 1, 1, 1);

        spacerMixtureL_1 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_20->addItem(spacerMixtureL_1, 2, 0, 1, 1);

        spinBoxMixture_1 = new QSpinBox(widgetMixture_1);
        spinBoxMixture_1->setObjectName("spinBoxMixture_1");
        spinBoxMixture_1->setFocusPolicy(Qt::NoFocus);
        spinBoxMixture_1->setAlignment(Qt::AlignCenter);
        spinBoxMixture_1->setReadOnly(true);
        spinBoxMixture_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMixture_1->setMaximum(100);

        gridLayout_20->addWidget(spinBoxMixture_1, 0, 0, 1, 3);


        gridLayout_7->addWidget(widgetMixture_1, 0, 0, 1, 1);

        widgetMixture_2 = new QWidget(groupBoxMixture);
        widgetMixture_2->setObjectName("widgetMixture_2");
        widgetMixture_2->setMinimumSize(QSize(0, 0));
        gridLayout_21 = new QGridLayout(widgetMixture_2);
        gridLayout_21->setObjectName("gridLayout_21");
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        spacerMixtureR_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_21->addItem(spacerMixtureR_2, 2, 2, 1, 1);

        barMixture_2 = new QProgressBar(widgetMixture_2);
        barMixture_2->setObjectName("barMixture_2");
        barMixture_2->setMaximumSize(QSize(18, 16777215));
        barMixture_2->setValue(24);
        barMixture_2->setTextVisible(false);
        barMixture_2->setOrientation(Qt::Vertical);

        gridLayout_21->addWidget(barMixture_2, 2, 1, 1, 1);

        spacerMixtureL_2 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_21->addItem(spacerMixtureL_2, 2, 0, 1, 1);

        spinBoxMixture_2 = new QSpinBox(widgetMixture_2);
        spinBoxMixture_2->setObjectName("spinBoxMixture_2");
        spinBoxMixture_2->setFocusPolicy(Qt::NoFocus);
        spinBoxMixture_2->setAlignment(Qt::AlignCenter);
        spinBoxMixture_2->setReadOnly(true);
        spinBoxMixture_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMixture_2->setMaximum(100);

        gridLayout_21->addWidget(spinBoxMixture_2, 0, 0, 1, 3);


        gridLayout_7->addWidget(widgetMixture_2, 0, 1, 1, 1);

        widgetMixture_3 = new QWidget(groupBoxMixture);
        widgetMixture_3->setObjectName("widgetMixture_3");
        widgetMixture_3->setMinimumSize(QSize(0, 0));
        gridLayout_22 = new QGridLayout(widgetMixture_3);
        gridLayout_22->setObjectName("gridLayout_22");
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        spacerMixtureR_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_22->addItem(spacerMixtureR_3, 2, 2, 1, 1);

        barMixture_3 = new QProgressBar(widgetMixture_3);
        barMixture_3->setObjectName("barMixture_3");
        barMixture_3->setMaximumSize(QSize(18, 16777215));
        barMixture_3->setValue(24);
        barMixture_3->setTextVisible(false);
        barMixture_3->setOrientation(Qt::Vertical);

        gridLayout_22->addWidget(barMixture_3, 2, 1, 1, 1);

        spacerMixtureL_3 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_22->addItem(spacerMixtureL_3, 2, 0, 1, 1);

        spinBoxMixture_3 = new QSpinBox(widgetMixture_3);
        spinBoxMixture_3->setObjectName("spinBoxMixture_3");
        spinBoxMixture_3->setFocusPolicy(Qt::NoFocus);
        spinBoxMixture_3->setAlignment(Qt::AlignCenter);
        spinBoxMixture_3->setReadOnly(true);
        spinBoxMixture_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMixture_3->setMaximum(100);

        gridLayout_22->addWidget(spinBoxMixture_3, 0, 0, 1, 3);


        gridLayout_7->addWidget(widgetMixture_3, 0, 2, 1, 1);

        widgetMixture_4 = new QWidget(groupBoxMixture);
        widgetMixture_4->setObjectName("widgetMixture_4");
        widgetMixture_4->setMinimumSize(QSize(0, 0));
        gridLayout_23 = new QGridLayout(widgetMixture_4);
        gridLayout_23->setObjectName("gridLayout_23");
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        spacerMixtureR_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_23->addItem(spacerMixtureR_4, 2, 2, 1, 1);

        barMixture_4 = new QProgressBar(widgetMixture_4);
        barMixture_4->setObjectName("barMixture_4");
        barMixture_4->setMaximumSize(QSize(18, 16777215));
        barMixture_4->setValue(24);
        barMixture_4->setTextVisible(false);
        barMixture_4->setOrientation(Qt::Vertical);

        gridLayout_23->addWidget(barMixture_4, 2, 1, 1, 1);

        spacerMixtureL_4 = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_23->addItem(spacerMixtureL_4, 2, 0, 1, 1);

        spinBoxMixture_4 = new QSpinBox(widgetMixture_4);
        spinBoxMixture_4->setObjectName("spinBoxMixture_4");
        spinBoxMixture_4->setFocusPolicy(Qt::NoFocus);
        spinBoxMixture_4->setAlignment(Qt::AlignCenter);
        spinBoxMixture_4->setReadOnly(true);
        spinBoxMixture_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMixture_4->setMaximum(100);

        gridLayout_23->addWidget(spinBoxMixture_4, 0, 0, 1, 3);


        gridLayout_7->addWidget(widgetMixture_4, 0, 3, 1, 1);


        gridLayout_2->addWidget(groupBoxMixture, 0, 7, 1, 1);

        groupBoxFlaps = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFlaps->setObjectName("groupBoxFlaps");
        groupBoxFlaps->setMinimumSize(QSize(0, 0));
        groupBoxFlaps->setAlignment(Qt::AlignCenter);
        gridLayout_13 = new QGridLayout(groupBoxFlaps);
        gridLayout_13->setObjectName("gridLayout_13");
        spacerFlaps_L = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_13->addItem(spacerFlaps_L, 1, 0, 1, 1);

        barFlaps = new QProgressBar(groupBoxFlaps);
        barFlaps->setObjectName("barFlaps");
        barFlaps->setMaximumSize(QSize(18, 16777215));
        barFlaps->setValue(24);
        barFlaps->setTextVisible(false);
        barFlaps->setOrientation(Qt::Vertical);
        barFlaps->setInvertedAppearance(true);

        gridLayout_13->addWidget(barFlaps, 1, 1, 1, 1);

        spacerFlaps_R = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_13->addItem(spacerFlaps_R, 1, 2, 1, 1);

        spinBoxFlaps = new QSpinBox(groupBoxFlaps);
        spinBoxFlaps->setObjectName("spinBoxFlaps");
        spinBoxFlaps->setFocusPolicy(Qt::NoFocus);
        spinBoxFlaps->setAlignment(Qt::AlignCenter);
        spinBoxFlaps->setReadOnly(true);
        spinBoxFlaps->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxFlaps->setMaximum(100);

        gridLayout_13->addWidget(spinBoxFlaps, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxFlaps, 0, 4, 1, 1);

        groupBoxAirbrake = new QGroupBox(scrollAreaWidgetContents);
        groupBoxAirbrake->setObjectName("groupBoxAirbrake");
        groupBoxAirbrake->setMinimumSize(QSize(0, 0));
        groupBoxAirbrake->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBoxAirbrake);
        gridLayout_12->setObjectName("gridLayout_12");
        spacerAirbrake_L = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(spacerAirbrake_L, 1, 0, 1, 1);

        barAirbrake = new QProgressBar(groupBoxAirbrake);
        barAirbrake->setObjectName("barAirbrake");
        barAirbrake->setMaximumSize(QSize(18, 16777215));
        barAirbrake->setValue(24);
        barAirbrake->setTextVisible(false);
        barAirbrake->setOrientation(Qt::Vertical);

        gridLayout_12->addWidget(barAirbrake, 1, 1, 1, 1);

        spacerAirbrake_R = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_12->addItem(spacerAirbrake_R, 1, 2, 1, 1);

        spinBoxAirbrake = new QSpinBox(groupBoxAirbrake);
        spinBoxAirbrake->setObjectName("spinBoxAirbrake");
        spinBoxAirbrake->setFocusPolicy(Qt::NoFocus);
        spinBoxAirbrake->setAlignment(Qt::AlignCenter);
        spinBoxAirbrake->setReadOnly(true);
        spinBoxAirbrake->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxAirbrake->setMaximum(100);

        gridLayout_12->addWidget(spinBoxAirbrake, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxAirbrake, 0, 10, 1, 1);

        groupBoxStickPedals = new QGroupBox(scrollAreaWidgetContents);
        groupBoxStickPedals->setObjectName("groupBoxStickPedals");
        groupBoxStickPedals->setAlignment(Qt::AlignCenter);
        groupBoxStickPedals->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBoxStickPedals);
        gridLayout_3->setObjectName("gridLayout_3");
        barBrakeR = new QProgressBar(groupBoxStickPedals);
        barBrakeR->setObjectName("barBrakeR");
        barBrakeR->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(barBrakeR->sizePolicy().hasHeightForWidth());
        barBrakeR->setSizePolicy(sizePolicy);
        barBrakeR->setMaximumSize(QSize(16777215, 18));
        barBrakeR->setValue(24);
        barBrakeR->setTextVisible(false);

        gridLayout_3->addWidget(barBrakeR, 2, 1, 1, 1);

        graphicsCtrlPedals = new GraphicsPedals(groupBoxStickPedals);
        graphicsCtrlPedals->setObjectName("graphicsCtrlPedals");
        graphicsCtrlPedals->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsCtrlPedals->sizePolicy().hasHeightForWidth());
        graphicsCtrlPedals->setSizePolicy(sizePolicy1);
        graphicsCtrlPedals->setMaximumSize(QSize(16777215, 18));
        graphicsCtrlPedals->setFrameShape(QFrame::Box);
        graphicsCtrlPedals->setFrameShadow(QFrame::Plain);
        graphicsCtrlPedals->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCtrlPedals->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCtrlPedals->setInteractive(false);

        gridLayout_3->addWidget(graphicsCtrlPedals, 1, 0, 1, 2);

        graphicsCtrlStick = new GraphicsStick(groupBoxStickPedals);
        graphicsCtrlStick->setObjectName("graphicsCtrlStick");
        graphicsCtrlStick->setEnabled(false);
        sizePolicy1.setHeightForWidth(graphicsCtrlStick->sizePolicy().hasHeightForWidth());
        graphicsCtrlStick->setSizePolicy(sizePolicy1);
        graphicsCtrlStick->setFocusPolicy(Qt::NoFocus);
        graphicsCtrlStick->setFrameShape(QFrame::Box);
        graphicsCtrlStick->setFrameShadow(QFrame::Plain);
        graphicsCtrlStick->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCtrlStick->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsCtrlStick->setInteractive(false);

        gridLayout_3->addWidget(graphicsCtrlStick, 0, 0, 1, 2);

        barBrakeL = new QProgressBar(groupBoxStickPedals);
        barBrakeL->setObjectName("barBrakeL");
        barBrakeL->setEnabled(false);
        sizePolicy.setHeightForWidth(barBrakeL->sizePolicy().hasHeightForWidth());
        barBrakeL->setSizePolicy(sizePolicy);
        barBrakeL->setMaximumSize(QSize(16777215, 18));
        barBrakeL->setValue(24);
        barBrakeL->setTextVisible(false);
        barBrakeL->setInvertedAppearance(true);

        gridLayout_3->addWidget(barBrakeL, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBoxStickPedals, 0, 2, 1, 1);

        groupBoxGear = new QGroupBox(scrollAreaWidgetContents);
        groupBoxGear->setObjectName("groupBoxGear");
        groupBoxGear->setMinimumSize(QSize(0, 0));
        groupBoxGear->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(groupBoxGear);
        gridLayout_11->setObjectName("gridLayout_11");
        spacerGear_R = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(spacerGear_R, 1, 2, 1, 1);

        spacerGear_L = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_11->addItem(spacerGear_L, 1, 0, 1, 1);

        barGear = new QProgressBar(groupBoxGear);
        barGear->setObjectName("barGear");
        barGear->setMaximumSize(QSize(18, 16777215));
        barGear->setValue(24);
        barGear->setTextVisible(false);
        barGear->setOrientation(Qt::Vertical);
        barGear->setInvertedAppearance(true);

        gridLayout_11->addWidget(barGear, 1, 1, 1, 1);

        spinBoxGear = new QSpinBox(groupBoxGear);
        spinBoxGear->setObjectName("spinBoxGear");
        spinBoxGear->setFocusPolicy(Qt::NoFocus);
        spinBoxGear->setAlignment(Qt::AlignCenter);
        spinBoxGear->setReadOnly(true);
        spinBoxGear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxGear->setMaximum(100);

        gridLayout_11->addWidget(spinBoxGear, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxGear, 0, 3, 1, 1);

        groupBoxSpoilers = new QGroupBox(scrollAreaWidgetContents);
        groupBoxSpoilers->setObjectName("groupBoxSpoilers");
        groupBoxSpoilers->setMinimumSize(QSize(0, 0));
        groupBoxSpoilers->setAlignment(Qt::AlignCenter);
        gridLayout_14 = new QGridLayout(groupBoxSpoilers);
        gridLayout_14->setObjectName("gridLayout_14");
        barSpoilers = new QProgressBar(groupBoxSpoilers);
        barSpoilers->setObjectName("barSpoilers");
        barSpoilers->setMaximumSize(QSize(18, 16777215));
        barSpoilers->setValue(24);
        barSpoilers->setTextVisible(false);
        barSpoilers->setOrientation(Qt::Vertical);

        gridLayout_14->addWidget(barSpoilers, 1, 1, 1, 1);

        spacerSpoilers_L = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(spacerSpoilers_L, 1, 0, 1, 1);

        spacerSpoilers_R = new QSpacerItem(1, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_14->addItem(spacerSpoilers_R, 1, 2, 1, 1);

        spinBoxSpoilers = new QSpinBox(groupBoxSpoilers);
        spinBoxSpoilers->setObjectName("spinBoxSpoilers");
        spinBoxSpoilers->setFocusPolicy(Qt::NoFocus);
        spinBoxSpoilers->setAlignment(Qt::AlignCenter);
        spinBoxSpoilers->setReadOnly(true);
        spinBoxSpoilers->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxSpoilers->setMaximum(100);

        gridLayout_14->addWidget(spinBoxSpoilers, 0, 0, 1, 3);


        gridLayout_2->addWidget(groupBoxSpoilers, 0, 11, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 1);

        DockWidgetCtrl->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetCtrl);

        QMetaObject::connectSlotsByName(DockWidgetCtrl);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetCtrl)
    {
        DockWidgetCtrl->setWindowTitle(QCoreApplication::translate("DockWidgetCtrl", "Controls", nullptr));
        groupBoxThrottle->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Throttle", nullptr));
        barThrottle_1->setFormat(QString());
        spinBoxThrottle_1->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barThrottle_2->setFormat(QString());
        spinBoxThrottle_2->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barThrottle_3->setFormat(QString());
        spinBoxThrottle_3->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barThrottle_4->setFormat(QString());
        spinBoxThrottle_4->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxCollective->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Collective", nullptr));
        barCollective->setFormat(QString());
        spinBoxCollective->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonNWS->setToolTip(QCoreApplication::translate("DockWidgetCtrl", "Nose Wheel Steering", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonNWS->setText(QCoreApplication::translate("DockWidgetCtrl", "NWS", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonABS->setToolTip(QCoreApplication::translate("DockWidgetCtrl", "Anti-skid Braking System", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonABS->setText(QCoreApplication::translate("DockWidgetCtrl", "ABS", nullptr));
        groupBoxPropeller->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Propeller", nullptr));
        barPropeller_1->setFormat(QString());
        spinBoxPropeller_1->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barPropeller_2->setFormat(QString());
        spinBoxPropeller_2->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barPropeller_3->setFormat(QString());
        spinBoxPropeller_3->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barPropeller_4->setFormat(QString());
        spinBoxPropeller_4->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxMixture->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Mixture", nullptr));
        barMixture_1->setFormat(QString());
        spinBoxMixture_1->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barMixture_2->setFormat(QString());
        spinBoxMixture_2->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barMixture_3->setFormat(QString());
        spinBoxMixture_3->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        barMixture_4->setFormat(QString());
        spinBoxMixture_4->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxFlaps->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Flaps", nullptr));
        barFlaps->setFormat(QString());
        spinBoxFlaps->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxAirbrake->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Airbrake", nullptr));
        barAirbrake->setFormat(QString());
        spinBoxAirbrake->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxStickPedals->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Stick and Pedals", nullptr));
        barBrakeR->setFormat(QString());
        barBrakeL->setFormat(QString());
        groupBoxGear->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Gear", nullptr));
        barGear->setFormat(QString());
        spinBoxGear->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
        groupBoxSpoilers->setTitle(QCoreApplication::translate("DockWidgetCtrl", "Spoilers", nullptr));
        barSpoilers->setFormat(QString());
        spinBoxSpoilers->setSuffix(QCoreApplication::translate("DockWidgetCtrl", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetCtrl: public Ui_DockWidgetCtrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETCTRL_H
