/********************************************************************************
** Form generated from reading UI file 'DockWidgetProp.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETPROP_H
#define UI_DOCKWIDGETPROP_H

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
#include "gui/ComboUnitsFlowRate.h"
#include "gui/ComboUnitsNumber.h"
#include "gui/ComboUnitsPressure.h"
#include "gui/ComboUnitsRotation.h"
#include "gui/ComboUnitsTemperature.h"

QT_BEGIN_NAMESPACE

class Ui_DockWidgetProp
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFuel_1;
    QDoubleSpinBox *spinTOT_2;
    QDoubleSpinBox *spinEPR_4;
    QLabel *labelFF;
    QDoubleSpinBox *spinITT_3;
    QDoubleSpinBox *spinTOT_4;
    QDoubleSpinBox *spinN1_1;
    QPushButton *pushButtonAB_1;
    QDoubleSpinBox *spinN2_3;
    QDoubleSpinBox *spinTOT_3;
    ComboUnitsTemperature *comboITT;
    QPushButton *pushButtonIgnition_3;
    QDoubleSpinBox *spinITT_2;
    QLabel *labelNG;
    QDoubleSpinBox *spinN2_2;
    QDoubleSpinBox *spinMAP_2;
    QLabel *labelTIT;
    QLabel *labelN2;
    QPushButton *pushButtonStart_1;
    QLabel *label_1;
    QDoubleSpinBox *spinRPM_2;
    ComboUnitsRotation *comboPROP;
    QDoubleSpinBox *spinEGT_1;
    QDoubleSpinBox *spinNG_3;
    QDoubleSpinBox *spinTIT_1;
    QDoubleSpinBox *spinNG_2;
    QDoubleSpinBox *spinTIT_4;
    QPushButton *pushButtonFuel_2;
    QDoubleSpinBox *spinITT_1;
    ComboUnitsNumber *comboEPR;
    QDoubleSpinBox *spinNG_4;
    QDoubleSpinBox *spinEPR_1;
    QPushButton *pushButtonFuel_3;
    QDoubleSpinBox *spinPROP_4;
    QDoubleSpinBox *spinRPM_1;
    QDoubleSpinBox *spinTRQ_4;
    QDoubleSpinBox *spinTRQ_1;
    QLabel *labelPROP;
    QPushButton *pushButtonIgnition_2;
    ComboUnitsTemperature *comboEGT;
    ComboUnitsRotation *comboRPM;
    QDoubleSpinBox *spinPROP_1;
    QPushButton *pushButtonStart_3;
    QDoubleSpinBox *spinFF_4;
    QPushButton *pushButtonAB_4;
    QDoubleSpinBox *spinTIT_3;
    QPushButton *pushButtonIgnition_1;
    ComboUnitsNumber *comboNG;
    QDoubleSpinBox *spinEPR_3;
    QDoubleSpinBox *spinMAP_1;
    QDoubleSpinBox *spinITT_4;
    QDoubleSpinBox *spinEGT_4;
    QLabel *labelEPR;
    QLabel *label_2;
    QPushButton *pushButtonState_3;
    QLabel *labelRPM;
    QDoubleSpinBox *spinN1_4;
    ComboUnitsFlowRate *comboFF;
    QDoubleSpinBox *spinTIT_2;
    QPushButton *pushButtonState_1;
    QPushButton *pushButtonAB_3;
    QDoubleSpinBox *spinFF_3;
    QDoubleSpinBox *spinN2_1;
    QDoubleSpinBox *spinPROP_2;
    QDoubleSpinBox *spinTRQ_2;
    QDoubleSpinBox *spinN2_4;
    QDoubleSpinBox *spinEGT_2;
    ComboUnitsTemperature *comboTIT;
    QDoubleSpinBox *spinTRQ_3;
    QDoubleSpinBox *spinRPM_3;
    QLabel *labelTRQ;
    QLabel *labelEGT;
    QDoubleSpinBox *spinEPR_2;
    QDoubleSpinBox *spinMAP_3;
    QPushButton *pushButtonState_4;
    QDoubleSpinBox *spinFF_2;
    QDoubleSpinBox *spinEGT_3;
    ComboUnitsNumber *comboTRQ;
    QLabel *labelMAP;
    ComboUnitsNumber *comboN2;
    QSpacerItem *verticalSpacer;
    ComboUnitsNumber *comboN1;
    QLabel *labelITT;
    QPushButton *pushButtonAB_2;
    QDoubleSpinBox *spinTOT_1;
    QLabel *labelTOT;
    QDoubleSpinBox *spinN1_2;
    QLabel *labelN1;
    QDoubleSpinBox *spinRPM_4;
    QDoubleSpinBox *spinFF_1;
    QDoubleSpinBox *spinN1_3;
    ComboUnitsPressure *comboMAP;
    QPushButton *pushButtonState_2;
    QPushButton *pushButtonStart_2;
    QDoubleSpinBox *spinMAP_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButtonStart_4;
    QPushButton *pushButtonFuel_4;
    ComboUnitsTemperature *comboTOT;
    QDoubleSpinBox *spinPROP_3;
    QPushButton *pushButtonIgnition_4;
    QDoubleSpinBox *spinNG_1;
    QLabel *labelCHT;
    QDoubleSpinBox *spinCHT_1;
    QDoubleSpinBox *spinCHT_2;
    QDoubleSpinBox *spinCHT_3;
    QDoubleSpinBox *spinCHT_4;
    ComboUnitsTemperature *comboCHT;

    void setupUi(QDockWidget *DockWidgetProp)
    {
        if (DockWidgetProp->objectName().isEmpty())
            DockWidgetProp->setObjectName("DockWidgetProp");
        DockWidgetProp->resize(580, 834);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 578, 804));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        pushButtonFuel_1 = new QPushButton(scrollAreaWidgetContents);
        pushButtonFuel_1->setObjectName("pushButtonFuel_1");
        pushButtonFuel_1->setCheckable(true);
        pushButtonFuel_1->setChecked(true);

        gridLayout->addWidget(pushButtonFuel_1, 3, 1, 1, 1);

        spinTOT_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTOT_2->setObjectName("spinTOT_2");
        QFont font;
        font.setBold(true);
        spinTOT_2->setFont(font);
        spinTOT_2->setFocusPolicy(Qt::NoFocus);
        spinTOT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTOT_2->setReadOnly(true);
        spinTOT_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTOT_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTOT_2, 19, 2, 1, 1);

        spinEPR_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEPR_4->setObjectName("spinEPR_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinEPR_4->sizePolicy().hasHeightForWidth());
        spinEPR_4->setSizePolicy(sizePolicy);
        spinEPR_4->setFont(font);
        spinEPR_4->setFocusPolicy(Qt::NoFocus);
        spinEPR_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEPR_4->setReadOnly(true);
        spinEPR_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEPR_4->setDecimals(2);
        spinEPR_4->setMinimum(0.000000000000000);
        spinEPR_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEPR_4, 14, 4, 1, 1);

        labelFF = new QLabel(scrollAreaWidgetContents);
        labelFF->setObjectName("labelFF");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelFF->sizePolicy().hasHeightForWidth());
        labelFF->setSizePolicy(sizePolicy1);
        labelFF->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFF, 23, 0, 1, 1);

        spinITT_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinITT_3->setObjectName("spinITT_3");
        sizePolicy.setHeightForWidth(spinITT_3->sizePolicy().hasHeightForWidth());
        spinITT_3->setSizePolicy(sizePolicy);
        spinITT_3->setFont(font);
        spinITT_3->setFocusPolicy(Qt::NoFocus);
        spinITT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinITT_3->setReadOnly(true);
        spinITT_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinITT_3->setDecimals(2);
        spinITT_3->setMinimum(0.000000000000000);
        spinITT_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinITT_3, 21, 3, 1, 1);

        spinTOT_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTOT_4->setObjectName("spinTOT_4");
        spinTOT_4->setFont(font);
        spinTOT_4->setFocusPolicy(Qt::NoFocus);
        spinTOT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTOT_4->setReadOnly(true);
        spinTOT_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTOT_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTOT_4, 19, 4, 1, 1);

        spinN1_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN1_1->setObjectName("spinN1_1");
        sizePolicy.setHeightForWidth(spinN1_1->sizePolicy().hasHeightForWidth());
        spinN1_1->setSizePolicy(sizePolicy);
        spinN1_1->setFont(font);
        spinN1_1->setFocusPolicy(Qt::NoFocus);
        spinN1_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN1_1->setReadOnly(true);
        spinN1_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN1_1->setDecimals(2);
        spinN1_1->setMinimum(0.000000000000000);
        spinN1_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN1_1, 9, 1, 1, 1);

        pushButtonAB_1 = new QPushButton(scrollAreaWidgetContents);
        pushButtonAB_1->setObjectName("pushButtonAB_1");
        pushButtonAB_1->setEnabled(false);
        pushButtonAB_1->setFocusPolicy(Qt::NoFocus);
        pushButtonAB_1->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonAB_1->setCheckable(true);

        gridLayout->addWidget(pushButtonAB_1, 2, 1, 1, 1);

        spinN2_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN2_3->setObjectName("spinN2_3");
        sizePolicy.setHeightForWidth(spinN2_3->sizePolicy().hasHeightForWidth());
        spinN2_3->setSizePolicy(sizePolicy);
        spinN2_3->setFont(font);
        spinN2_3->setFocusPolicy(Qt::NoFocus);
        spinN2_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN2_3->setReadOnly(true);
        spinN2_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN2_3->setDecimals(2);
        spinN2_3->setMinimum(0.000000000000000);
        spinN2_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN2_3, 11, 3, 1, 1);

        spinTOT_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTOT_3->setObjectName("spinTOT_3");
        spinTOT_3->setFont(font);
        spinTOT_3->setFocusPolicy(Qt::NoFocus);
        spinTOT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTOT_3->setReadOnly(true);
        spinTOT_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTOT_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTOT_3, 19, 3, 1, 1);

        comboITT = new ComboUnitsTemperature(scrollAreaWidgetContents);
        comboITT->setObjectName("comboITT");
        sizePolicy.setHeightForWidth(comboITT->sizePolicy().hasHeightForWidth());
        comboITT->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboITT, 21, 5, 1, 1);

        pushButtonIgnition_3 = new QPushButton(scrollAreaWidgetContents);
        pushButtonIgnition_3->setObjectName("pushButtonIgnition_3");
        pushButtonIgnition_3->setCheckable(true);
        pushButtonIgnition_3->setChecked(true);

        gridLayout->addWidget(pushButtonIgnition_3, 4, 3, 1, 1);

        spinITT_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinITT_2->setObjectName("spinITT_2");
        sizePolicy.setHeightForWidth(spinITT_2->sizePolicy().hasHeightForWidth());
        spinITT_2->setSizePolicy(sizePolicy);
        spinITT_2->setFont(font);
        spinITT_2->setFocusPolicy(Qt::NoFocus);
        spinITT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinITT_2->setReadOnly(true);
        spinITT_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinITT_2->setDecimals(2);
        spinITT_2->setMinimum(0.000000000000000);
        spinITT_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinITT_2, 21, 2, 1, 1);

        labelNG = new QLabel(scrollAreaWidgetContents);
        labelNG->setObjectName("labelNG");
        sizePolicy1.setHeightForWidth(labelNG->sizePolicy().hasHeightForWidth());
        labelNG->setSizePolicy(sizePolicy1);
        labelNG->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelNG, 8, 0, 1, 1);

        spinN2_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN2_2->setObjectName("spinN2_2");
        sizePolicy.setHeightForWidth(spinN2_2->sizePolicy().hasHeightForWidth());
        spinN2_2->setSizePolicy(sizePolicy);
        spinN2_2->setFont(font);
        spinN2_2->setFocusPolicy(Qt::NoFocus);
        spinN2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN2_2->setReadOnly(true);
        spinN2_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN2_2->setDecimals(2);
        spinN2_2->setMinimum(0.000000000000000);
        spinN2_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN2_2, 11, 2, 1, 1);

        spinMAP_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinMAP_2->setObjectName("spinMAP_2");
        sizePolicy.setHeightForWidth(spinMAP_2->sizePolicy().hasHeightForWidth());
        spinMAP_2->setSizePolicy(sizePolicy);
        spinMAP_2->setFont(font);
        spinMAP_2->setFocusPolicy(Qt::NoFocus);
        spinMAP_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMAP_2->setReadOnly(true);
        spinMAP_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMAP_2->setDecimals(2);
        spinMAP_2->setMinimum(0.000000000000000);
        spinMAP_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMAP_2, 15, 2, 1, 1);

        labelTIT = new QLabel(scrollAreaWidgetContents);
        labelTIT->setObjectName("labelTIT");
        labelTIT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTIT, 18, 0, 1, 1);

        labelN2 = new QLabel(scrollAreaWidgetContents);
        labelN2->setObjectName("labelN2");
        sizePolicy1.setHeightForWidth(labelN2->sizePolicy().hasHeightForWidth());
        labelN2->setSizePolicy(sizePolicy1);
        labelN2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelN2, 11, 0, 1, 1);

        pushButtonStart_1 = new QPushButton(scrollAreaWidgetContents);
        pushButtonStart_1->setObjectName("pushButtonStart_1");

        gridLayout->addWidget(pushButtonStart_1, 5, 1, 1, 1);

        label_1 = new QLabel(scrollAreaWidgetContents);
        label_1->setObjectName("label_1");
        sizePolicy1.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy1);
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 0, 1, 1, 1);

        spinRPM_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinRPM_2->setObjectName("spinRPM_2");
        sizePolicy.setHeightForWidth(spinRPM_2->sizePolicy().hasHeightForWidth());
        spinRPM_2->setSizePolicy(sizePolicy);
        spinRPM_2->setFont(font);
        spinRPM_2->setFocusPolicy(Qt::NoFocus);
        spinRPM_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRPM_2->setReadOnly(true);
        spinRPM_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRPM_2->setDecimals(2);
        spinRPM_2->setMinimum(0.000000000000000);
        spinRPM_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRPM_2, 6, 2, 1, 1);

        comboPROP = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboPROP->setObjectName("comboPROP");

        gridLayout->addWidget(comboPROP, 7, 5, 1, 1);

        spinEGT_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEGT_1->setObjectName("spinEGT_1");
        sizePolicy.setHeightForWidth(spinEGT_1->sizePolicy().hasHeightForWidth());
        spinEGT_1->setSizePolicy(sizePolicy);
        spinEGT_1->setFont(font);
        spinEGT_1->setFocusPolicy(Qt::NoFocus);
        spinEGT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEGT_1->setReadOnly(true);
        spinEGT_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEGT_1->setDecimals(2);
        spinEGT_1->setMinimum(0.000000000000000);
        spinEGT_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEGT_1, 16, 1, 1, 1);

        spinNG_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinNG_3->setObjectName("spinNG_3");
        sizePolicy.setHeightForWidth(spinNG_3->sizePolicy().hasHeightForWidth());
        spinNG_3->setSizePolicy(sizePolicy);
        spinNG_3->setFont(font);
        spinNG_3->setFocusPolicy(Qt::NoFocus);
        spinNG_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinNG_3->setReadOnly(true);
        spinNG_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinNG_3->setDecimals(2);
        spinNG_3->setMinimum(0.000000000000000);
        spinNG_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinNG_3, 8, 3, 1, 1);

        spinTIT_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTIT_1->setObjectName("spinTIT_1");
        spinTIT_1->setFont(font);
        spinTIT_1->setFocusPolicy(Qt::NoFocus);
        spinTIT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTIT_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTIT_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTIT_1, 18, 1, 1, 1);

        spinNG_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinNG_2->setObjectName("spinNG_2");
        sizePolicy.setHeightForWidth(spinNG_2->sizePolicy().hasHeightForWidth());
        spinNG_2->setSizePolicy(sizePolicy);
        spinNG_2->setFont(font);
        spinNG_2->setFocusPolicy(Qt::NoFocus);
        spinNG_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinNG_2->setReadOnly(true);
        spinNG_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinNG_2->setDecimals(2);
        spinNG_2->setMinimum(0.000000000000000);
        spinNG_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinNG_2, 8, 2, 1, 1);

        spinTIT_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTIT_4->setObjectName("spinTIT_4");
        spinTIT_4->setFont(font);
        spinTIT_4->setFocusPolicy(Qt::NoFocus);
        spinTIT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTIT_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTIT_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTIT_4, 18, 4, 1, 1);

        pushButtonFuel_2 = new QPushButton(scrollAreaWidgetContents);
        pushButtonFuel_2->setObjectName("pushButtonFuel_2");
        pushButtonFuel_2->setCheckable(true);
        pushButtonFuel_2->setChecked(true);

        gridLayout->addWidget(pushButtonFuel_2, 3, 2, 1, 1);

        spinITT_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinITT_1->setObjectName("spinITT_1");
        sizePolicy.setHeightForWidth(spinITT_1->sizePolicy().hasHeightForWidth());
        spinITT_1->setSizePolicy(sizePolicy);
        spinITT_1->setFont(font);
        spinITT_1->setFocusPolicy(Qt::NoFocus);
        spinITT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinITT_1->setReadOnly(true);
        spinITT_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinITT_1->setDecimals(2);
        spinITT_1->setMinimum(0.000000000000000);
        spinITT_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinITT_1, 21, 1, 1, 1);

        comboEPR = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboEPR->setObjectName("comboEPR");
        sizePolicy.setHeightForWidth(comboEPR->sizePolicy().hasHeightForWidth());
        comboEPR->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboEPR, 14, 5, 1, 1);

        spinNG_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinNG_4->setObjectName("spinNG_4");
        sizePolicy.setHeightForWidth(spinNG_4->sizePolicy().hasHeightForWidth());
        spinNG_4->setSizePolicy(sizePolicy);
        spinNG_4->setFont(font);
        spinNG_4->setFocusPolicy(Qt::NoFocus);
        spinNG_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinNG_4->setReadOnly(true);
        spinNG_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinNG_4->setDecimals(2);
        spinNG_4->setMinimum(0.000000000000000);
        spinNG_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinNG_4, 8, 4, 1, 1);

        spinEPR_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEPR_1->setObjectName("spinEPR_1");
        sizePolicy.setHeightForWidth(spinEPR_1->sizePolicy().hasHeightForWidth());
        spinEPR_1->setSizePolicy(sizePolicy);
        spinEPR_1->setFont(font);
        spinEPR_1->setFocusPolicy(Qt::NoFocus);
        spinEPR_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEPR_1->setReadOnly(true);
        spinEPR_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEPR_1->setDecimals(2);
        spinEPR_1->setMinimum(0.000000000000000);
        spinEPR_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEPR_1, 14, 1, 1, 1);

        pushButtonFuel_3 = new QPushButton(scrollAreaWidgetContents);
        pushButtonFuel_3->setObjectName("pushButtonFuel_3");
        pushButtonFuel_3->setCheckable(true);
        pushButtonFuel_3->setChecked(true);

        gridLayout->addWidget(pushButtonFuel_3, 3, 3, 1, 1);

        spinPROP_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinPROP_4->setObjectName("spinPROP_4");
        spinPROP_4->setFont(font);
        spinPROP_4->setFocusPolicy(Qt::NoFocus);
        spinPROP_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPROP_4->setReadOnly(true);
        spinPROP_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPROP_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPROP_4, 7, 4, 1, 1);

        spinRPM_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinRPM_1->setObjectName("spinRPM_1");
        sizePolicy.setHeightForWidth(spinRPM_1->sizePolicy().hasHeightForWidth());
        spinRPM_1->setSizePolicy(sizePolicy);
        spinRPM_1->setFont(font);
        spinRPM_1->setFocusPolicy(Qt::NoFocus);
        spinRPM_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRPM_1->setReadOnly(true);
        spinRPM_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRPM_1->setDecimals(2);
        spinRPM_1->setMinimum(0.000000000000000);
        spinRPM_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRPM_1, 6, 1, 1, 1);

        spinTRQ_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTRQ_4->setObjectName("spinTRQ_4");
        sizePolicy.setHeightForWidth(spinTRQ_4->sizePolicy().hasHeightForWidth());
        spinTRQ_4->setSizePolicy(sizePolicy);
        spinTRQ_4->setFont(font);
        spinTRQ_4->setFocusPolicy(Qt::NoFocus);
        spinTRQ_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTRQ_4->setReadOnly(true);
        spinTRQ_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTRQ_4->setDecimals(2);
        spinTRQ_4->setMinimum(0.000000000000000);
        spinTRQ_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTRQ_4, 13, 4, 1, 1);

        spinTRQ_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTRQ_1->setObjectName("spinTRQ_1");
        sizePolicy.setHeightForWidth(spinTRQ_1->sizePolicy().hasHeightForWidth());
        spinTRQ_1->setSizePolicy(sizePolicy);
        spinTRQ_1->setFont(font);
        spinTRQ_1->setFocusPolicy(Qt::NoFocus);
        spinTRQ_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTRQ_1->setReadOnly(true);
        spinTRQ_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTRQ_1->setDecimals(2);
        spinTRQ_1->setMinimum(0.000000000000000);
        spinTRQ_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTRQ_1, 13, 1, 1, 1);

        labelPROP = new QLabel(scrollAreaWidgetContents);
        labelPROP->setObjectName("labelPROP");
        labelPROP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPROP, 7, 0, 1, 1);

        pushButtonIgnition_2 = new QPushButton(scrollAreaWidgetContents);
        pushButtonIgnition_2->setObjectName("pushButtonIgnition_2");
        pushButtonIgnition_2->setCheckable(true);
        pushButtonIgnition_2->setChecked(true);

        gridLayout->addWidget(pushButtonIgnition_2, 4, 2, 1, 1);

        comboEGT = new ComboUnitsTemperature(scrollAreaWidgetContents);
        comboEGT->setObjectName("comboEGT");
        sizePolicy.setHeightForWidth(comboEGT->sizePolicy().hasHeightForWidth());
        comboEGT->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboEGT, 16, 5, 1, 1);

        comboRPM = new ComboUnitsRotation(scrollAreaWidgetContents);
        comboRPM->setObjectName("comboRPM");
        sizePolicy.setHeightForWidth(comboRPM->sizePolicy().hasHeightForWidth());
        comboRPM->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboRPM, 6, 5, 1, 1);

        spinPROP_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinPROP_1->setObjectName("spinPROP_1");
        spinPROP_1->setFont(font);
        spinPROP_1->setFocusPolicy(Qt::NoFocus);
        spinPROP_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPROP_1->setReadOnly(true);
        spinPROP_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPROP_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPROP_1, 7, 1, 1, 1);

        pushButtonStart_3 = new QPushButton(scrollAreaWidgetContents);
        pushButtonStart_3->setObjectName("pushButtonStart_3");

        gridLayout->addWidget(pushButtonStart_3, 5, 3, 1, 1);

        spinFF_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinFF_4->setObjectName("spinFF_4");
        sizePolicy.setHeightForWidth(spinFF_4->sizePolicy().hasHeightForWidth());
        spinFF_4->setSizePolicy(sizePolicy);
        spinFF_4->setFont(font);
        spinFF_4->setFocusPolicy(Qt::NoFocus);
        spinFF_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinFF_4->setReadOnly(true);
        spinFF_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinFF_4->setDecimals(2);
        spinFF_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinFF_4, 23, 4, 1, 1);

        pushButtonAB_4 = new QPushButton(scrollAreaWidgetContents);
        pushButtonAB_4->setObjectName("pushButtonAB_4");
        pushButtonAB_4->setEnabled(false);
        pushButtonAB_4->setFocusPolicy(Qt::NoFocus);
        pushButtonAB_4->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonAB_4->setCheckable(true);

        gridLayout->addWidget(pushButtonAB_4, 2, 4, 1, 1);

        spinTIT_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTIT_3->setObjectName("spinTIT_3");
        spinTIT_3->setFont(font);
        spinTIT_3->setFocusPolicy(Qt::NoFocus);
        spinTIT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTIT_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTIT_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTIT_3, 18, 3, 1, 1);

        pushButtonIgnition_1 = new QPushButton(scrollAreaWidgetContents);
        pushButtonIgnition_1->setObjectName("pushButtonIgnition_1");
        pushButtonIgnition_1->setCheckable(true);
        pushButtonIgnition_1->setChecked(true);

        gridLayout->addWidget(pushButtonIgnition_1, 4, 1, 1, 1);

        comboNG = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboNG->setObjectName("comboNG");
        sizePolicy.setHeightForWidth(comboNG->sizePolicy().hasHeightForWidth());
        comboNG->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboNG, 8, 5, 1, 1);

        spinEPR_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEPR_3->setObjectName("spinEPR_3");
        sizePolicy.setHeightForWidth(spinEPR_3->sizePolicy().hasHeightForWidth());
        spinEPR_3->setSizePolicy(sizePolicy);
        spinEPR_3->setFont(font);
        spinEPR_3->setFocusPolicy(Qt::NoFocus);
        spinEPR_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEPR_3->setReadOnly(true);
        spinEPR_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEPR_3->setDecimals(2);
        spinEPR_3->setMinimum(0.000000000000000);
        spinEPR_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEPR_3, 14, 3, 1, 1);

        spinMAP_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinMAP_1->setObjectName("spinMAP_1");
        sizePolicy.setHeightForWidth(spinMAP_1->sizePolicy().hasHeightForWidth());
        spinMAP_1->setSizePolicy(sizePolicy);
        spinMAP_1->setFont(font);
        spinMAP_1->setFocusPolicy(Qt::NoFocus);
        spinMAP_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMAP_1->setReadOnly(true);
        spinMAP_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMAP_1->setDecimals(2);
        spinMAP_1->setMinimum(0.000000000000000);
        spinMAP_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMAP_1, 15, 1, 1, 1);

        spinITT_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinITT_4->setObjectName("spinITT_4");
        sizePolicy.setHeightForWidth(spinITT_4->sizePolicy().hasHeightForWidth());
        spinITT_4->setSizePolicy(sizePolicy);
        spinITT_4->setFont(font);
        spinITT_4->setFocusPolicy(Qt::NoFocus);
        spinITT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinITT_4->setReadOnly(true);
        spinITT_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinITT_4->setDecimals(2);
        spinITT_4->setMinimum(0.000000000000000);
        spinITT_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinITT_4, 21, 4, 1, 1);

        spinEGT_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEGT_4->setObjectName("spinEGT_4");
        sizePolicy.setHeightForWidth(spinEGT_4->sizePolicy().hasHeightForWidth());
        spinEGT_4->setSizePolicy(sizePolicy);
        spinEGT_4->setFont(font);
        spinEGT_4->setFocusPolicy(Qt::NoFocus);
        spinEGT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEGT_4->setReadOnly(true);
        spinEGT_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEGT_4->setDecimals(2);
        spinEGT_4->setMinimum(0.000000000000000);
        spinEGT_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEGT_4, 16, 4, 1, 1);

        labelEPR = new QLabel(scrollAreaWidgetContents);
        labelEPR->setObjectName("labelEPR");
        sizePolicy1.setHeightForWidth(labelEPR->sizePolicy().hasHeightForWidth());
        labelEPR->setSizePolicy(sizePolicy1);
        labelEPR->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelEPR, 14, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        pushButtonState_3 = new QPushButton(scrollAreaWidgetContents);
        pushButtonState_3->setObjectName("pushButtonState_3");
        pushButtonState_3->setEnabled(false);
        pushButtonState_3->setFocusPolicy(Qt::NoFocus);
        pushButtonState_3->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonState_3->setCheckable(true);

        gridLayout->addWidget(pushButtonState_3, 1, 3, 1, 1);

        labelRPM = new QLabel(scrollAreaWidgetContents);
        labelRPM->setObjectName("labelRPM");
        sizePolicy1.setHeightForWidth(labelRPM->sizePolicy().hasHeightForWidth());
        labelRPM->setSizePolicy(sizePolicy1);
        labelRPM->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelRPM, 6, 0, 1, 1);

        spinN1_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN1_4->setObjectName("spinN1_4");
        sizePolicy.setHeightForWidth(spinN1_4->sizePolicy().hasHeightForWidth());
        spinN1_4->setSizePolicy(sizePolicy);
        spinN1_4->setFont(font);
        spinN1_4->setFocusPolicy(Qt::NoFocus);
        spinN1_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN1_4->setReadOnly(true);
        spinN1_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN1_4->setDecimals(2);
        spinN1_4->setMinimum(0.000000000000000);
        spinN1_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN1_4, 9, 4, 1, 1);

        comboFF = new ComboUnitsFlowRate(scrollAreaWidgetContents);
        comboFF->setObjectName("comboFF");
        sizePolicy.setHeightForWidth(comboFF->sizePolicy().hasHeightForWidth());
        comboFF->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboFF, 23, 5, 1, 1);

        spinTIT_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTIT_2->setObjectName("spinTIT_2");
        spinTIT_2->setFont(font);
        spinTIT_2->setFocusPolicy(Qt::NoFocus);
        spinTIT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTIT_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTIT_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTIT_2, 18, 2, 1, 1);

        pushButtonState_1 = new QPushButton(scrollAreaWidgetContents);
        pushButtonState_1->setObjectName("pushButtonState_1");
        pushButtonState_1->setEnabled(false);
        pushButtonState_1->setFocusPolicy(Qt::NoFocus);
        pushButtonState_1->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonState_1->setCheckable(true);

        gridLayout->addWidget(pushButtonState_1, 1, 1, 1, 1);

        pushButtonAB_3 = new QPushButton(scrollAreaWidgetContents);
        pushButtonAB_3->setObjectName("pushButtonAB_3");
        pushButtonAB_3->setEnabled(false);
        pushButtonAB_3->setFocusPolicy(Qt::NoFocus);
        pushButtonAB_3->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonAB_3->setCheckable(true);

        gridLayout->addWidget(pushButtonAB_3, 2, 3, 1, 1);

        spinFF_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinFF_3->setObjectName("spinFF_3");
        sizePolicy.setHeightForWidth(spinFF_3->sizePolicy().hasHeightForWidth());
        spinFF_3->setSizePolicy(sizePolicy);
        spinFF_3->setFont(font);
        spinFF_3->setFocusPolicy(Qt::NoFocus);
        spinFF_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinFF_3->setReadOnly(true);
        spinFF_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinFF_3->setDecimals(2);
        spinFF_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinFF_3, 23, 3, 1, 1);

        spinN2_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN2_1->setObjectName("spinN2_1");
        sizePolicy.setHeightForWidth(spinN2_1->sizePolicy().hasHeightForWidth());
        spinN2_1->setSizePolicy(sizePolicy);
        spinN2_1->setFont(font);
        spinN2_1->setFocusPolicy(Qt::NoFocus);
        spinN2_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN2_1->setReadOnly(true);
        spinN2_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN2_1->setDecimals(2);
        spinN2_1->setMinimum(0.000000000000000);
        spinN2_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN2_1, 11, 1, 1, 1);

        spinPROP_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinPROP_2->setObjectName("spinPROP_2");
        spinPROP_2->setFont(font);
        spinPROP_2->setFocusPolicy(Qt::NoFocus);
        spinPROP_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPROP_2->setReadOnly(true);
        spinPROP_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPROP_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPROP_2, 7, 2, 1, 1);

        spinTRQ_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTRQ_2->setObjectName("spinTRQ_2");
        sizePolicy.setHeightForWidth(spinTRQ_2->sizePolicy().hasHeightForWidth());
        spinTRQ_2->setSizePolicy(sizePolicy);
        spinTRQ_2->setFont(font);
        spinTRQ_2->setFocusPolicy(Qt::NoFocus);
        spinTRQ_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTRQ_2->setReadOnly(true);
        spinTRQ_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTRQ_2->setDecimals(2);
        spinTRQ_2->setMinimum(0.000000000000000);
        spinTRQ_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTRQ_2, 13, 2, 1, 1);

        spinN2_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN2_4->setObjectName("spinN2_4");
        sizePolicy.setHeightForWidth(spinN2_4->sizePolicy().hasHeightForWidth());
        spinN2_4->setSizePolicy(sizePolicy);
        spinN2_4->setFont(font);
        spinN2_4->setFocusPolicy(Qt::NoFocus);
        spinN2_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN2_4->setReadOnly(true);
        spinN2_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN2_4->setDecimals(2);
        spinN2_4->setMinimum(0.000000000000000);
        spinN2_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN2_4, 11, 4, 1, 1);

        spinEGT_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEGT_2->setObjectName("spinEGT_2");
        sizePolicy.setHeightForWidth(spinEGT_2->sizePolicy().hasHeightForWidth());
        spinEGT_2->setSizePolicy(sizePolicy);
        spinEGT_2->setFont(font);
        spinEGT_2->setFocusPolicy(Qt::NoFocus);
        spinEGT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEGT_2->setReadOnly(true);
        spinEGT_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEGT_2->setDecimals(2);
        spinEGT_2->setMinimum(0.000000000000000);
        spinEGT_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEGT_2, 16, 2, 1, 1);

        comboTIT = new ComboUnitsTemperature(scrollAreaWidgetContents);
        comboTIT->setObjectName("comboTIT");

        gridLayout->addWidget(comboTIT, 18, 5, 1, 1);

        spinTRQ_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTRQ_3->setObjectName("spinTRQ_3");
        sizePolicy.setHeightForWidth(spinTRQ_3->sizePolicy().hasHeightForWidth());
        spinTRQ_3->setSizePolicy(sizePolicy);
        spinTRQ_3->setFont(font);
        spinTRQ_3->setFocusPolicy(Qt::NoFocus);
        spinTRQ_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTRQ_3->setReadOnly(true);
        spinTRQ_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTRQ_3->setDecimals(2);
        spinTRQ_3->setMinimum(0.000000000000000);
        spinTRQ_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTRQ_3, 13, 3, 1, 1);

        spinRPM_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinRPM_3->setObjectName("spinRPM_3");
        sizePolicy.setHeightForWidth(spinRPM_3->sizePolicy().hasHeightForWidth());
        spinRPM_3->setSizePolicy(sizePolicy);
        spinRPM_3->setFont(font);
        spinRPM_3->setFocusPolicy(Qt::NoFocus);
        spinRPM_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRPM_3->setReadOnly(true);
        spinRPM_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRPM_3->setDecimals(2);
        spinRPM_3->setMinimum(0.000000000000000);
        spinRPM_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRPM_3, 6, 3, 1, 1);

        labelTRQ = new QLabel(scrollAreaWidgetContents);
        labelTRQ->setObjectName("labelTRQ");
        sizePolicy1.setHeightForWidth(labelTRQ->sizePolicy().hasHeightForWidth());
        labelTRQ->setSizePolicy(sizePolicy1);
        labelTRQ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTRQ, 13, 0, 1, 1);

        labelEGT = new QLabel(scrollAreaWidgetContents);
        labelEGT->setObjectName("labelEGT");
        sizePolicy1.setHeightForWidth(labelEGT->sizePolicy().hasHeightForWidth());
        labelEGT->setSizePolicy(sizePolicy1);
        labelEGT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelEGT, 16, 0, 1, 1);

        spinEPR_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEPR_2->setObjectName("spinEPR_2");
        sizePolicy.setHeightForWidth(spinEPR_2->sizePolicy().hasHeightForWidth());
        spinEPR_2->setSizePolicy(sizePolicy);
        spinEPR_2->setFont(font);
        spinEPR_2->setFocusPolicy(Qt::NoFocus);
        spinEPR_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEPR_2->setReadOnly(true);
        spinEPR_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEPR_2->setDecimals(2);
        spinEPR_2->setMinimum(0.000000000000000);
        spinEPR_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEPR_2, 14, 2, 1, 1);

        spinMAP_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinMAP_3->setObjectName("spinMAP_3");
        sizePolicy.setHeightForWidth(spinMAP_3->sizePolicy().hasHeightForWidth());
        spinMAP_3->setSizePolicy(sizePolicy);
        spinMAP_3->setFont(font);
        spinMAP_3->setFocusPolicy(Qt::NoFocus);
        spinMAP_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMAP_3->setReadOnly(true);
        spinMAP_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMAP_3->setDecimals(2);
        spinMAP_3->setMinimum(0.000000000000000);
        spinMAP_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMAP_3, 15, 3, 1, 1);

        pushButtonState_4 = new QPushButton(scrollAreaWidgetContents);
        pushButtonState_4->setObjectName("pushButtonState_4");
        pushButtonState_4->setEnabled(false);
        pushButtonState_4->setFocusPolicy(Qt::NoFocus);
        pushButtonState_4->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonState_4->setCheckable(true);

        gridLayout->addWidget(pushButtonState_4, 1, 4, 1, 1);

        spinFF_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinFF_2->setObjectName("spinFF_2");
        sizePolicy.setHeightForWidth(spinFF_2->sizePolicy().hasHeightForWidth());
        spinFF_2->setSizePolicy(sizePolicy);
        spinFF_2->setFont(font);
        spinFF_2->setFocusPolicy(Qt::NoFocus);
        spinFF_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinFF_2->setReadOnly(true);
        spinFF_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinFF_2->setDecimals(2);
        spinFF_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinFF_2, 23, 2, 1, 1);

        spinEGT_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinEGT_3->setObjectName("spinEGT_3");
        sizePolicy.setHeightForWidth(spinEGT_3->sizePolicy().hasHeightForWidth());
        spinEGT_3->setSizePolicy(sizePolicy);
        spinEGT_3->setFont(font);
        spinEGT_3->setFocusPolicy(Qt::NoFocus);
        spinEGT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinEGT_3->setReadOnly(true);
        spinEGT_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinEGT_3->setDecimals(2);
        spinEGT_3->setMinimum(0.000000000000000);
        spinEGT_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinEGT_3, 16, 3, 1, 1);

        comboTRQ = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboTRQ->setObjectName("comboTRQ");
        sizePolicy.setHeightForWidth(comboTRQ->sizePolicy().hasHeightForWidth());
        comboTRQ->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboTRQ, 13, 5, 1, 1);

        labelMAP = new QLabel(scrollAreaWidgetContents);
        labelMAP->setObjectName("labelMAP");
        sizePolicy1.setHeightForWidth(labelMAP->sizePolicy().hasHeightForWidth());
        labelMAP->setSizePolicy(sizePolicy1);
        labelMAP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMAP, 15, 0, 1, 1);

        comboN2 = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboN2->setObjectName("comboN2");
        sizePolicy.setHeightForWidth(comboN2->sizePolicy().hasHeightForWidth());
        comboN2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboN2, 11, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 31, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 24, 3, 1, 1);

        comboN1 = new ComboUnitsNumber(scrollAreaWidgetContents);
        comboN1->setObjectName("comboN1");
        sizePolicy.setHeightForWidth(comboN1->sizePolicy().hasHeightForWidth());
        comboN1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboN1, 9, 5, 1, 1);

        labelITT = new QLabel(scrollAreaWidgetContents);
        labelITT->setObjectName("labelITT");
        sizePolicy1.setHeightForWidth(labelITT->sizePolicy().hasHeightForWidth());
        labelITT->setSizePolicy(sizePolicy1);
        labelITT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelITT, 21, 0, 1, 1);

        pushButtonAB_2 = new QPushButton(scrollAreaWidgetContents);
        pushButtonAB_2->setObjectName("pushButtonAB_2");
        pushButtonAB_2->setEnabled(false);
        pushButtonAB_2->setFocusPolicy(Qt::NoFocus);
        pushButtonAB_2->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonAB_2->setCheckable(true);

        gridLayout->addWidget(pushButtonAB_2, 2, 2, 1, 1);

        spinTOT_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinTOT_1->setObjectName("spinTOT_1");
        spinTOT_1->setFont(font);
        spinTOT_1->setFocusPolicy(Qt::NoFocus);
        spinTOT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinTOT_1->setReadOnly(true);
        spinTOT_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinTOT_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinTOT_1, 19, 1, 1, 1);

        labelTOT = new QLabel(scrollAreaWidgetContents);
        labelTOT->setObjectName("labelTOT");
        labelTOT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTOT, 19, 0, 1, 1);

        spinN1_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN1_2->setObjectName("spinN1_2");
        sizePolicy.setHeightForWidth(spinN1_2->sizePolicy().hasHeightForWidth());
        spinN1_2->setSizePolicy(sizePolicy);
        spinN1_2->setFont(font);
        spinN1_2->setFocusPolicy(Qt::NoFocus);
        spinN1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN1_2->setReadOnly(true);
        spinN1_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN1_2->setDecimals(2);
        spinN1_2->setMinimum(0.000000000000000);
        spinN1_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN1_2, 9, 2, 1, 1);

        labelN1 = new QLabel(scrollAreaWidgetContents);
        labelN1->setObjectName("labelN1");
        sizePolicy1.setHeightForWidth(labelN1->sizePolicy().hasHeightForWidth());
        labelN1->setSizePolicy(sizePolicy1);
        labelN1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelN1, 9, 0, 1, 1);

        spinRPM_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinRPM_4->setObjectName("spinRPM_4");
        sizePolicy.setHeightForWidth(spinRPM_4->sizePolicy().hasHeightForWidth());
        spinRPM_4->setSizePolicy(sizePolicy);
        spinRPM_4->setFont(font);
        spinRPM_4->setFocusPolicy(Qt::NoFocus);
        spinRPM_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinRPM_4->setReadOnly(true);
        spinRPM_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinRPM_4->setDecimals(2);
        spinRPM_4->setMinimum(0.000000000000000);
        spinRPM_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinRPM_4, 6, 4, 1, 1);

        spinFF_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinFF_1->setObjectName("spinFF_1");
        sizePolicy.setHeightForWidth(spinFF_1->sizePolicy().hasHeightForWidth());
        spinFF_1->setSizePolicy(sizePolicy);
        spinFF_1->setFont(font);
        spinFF_1->setFocusPolicy(Qt::NoFocus);
        spinFF_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinFF_1->setReadOnly(true);
        spinFF_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinFF_1->setDecimals(2);
        spinFF_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinFF_1, 23, 1, 1, 1);

        spinN1_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinN1_3->setObjectName("spinN1_3");
        sizePolicy.setHeightForWidth(spinN1_3->sizePolicy().hasHeightForWidth());
        spinN1_3->setSizePolicy(sizePolicy);
        spinN1_3->setFont(font);
        spinN1_3->setFocusPolicy(Qt::NoFocus);
        spinN1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinN1_3->setReadOnly(true);
        spinN1_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinN1_3->setDecimals(2);
        spinN1_3->setMinimum(0.000000000000000);
        spinN1_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinN1_3, 9, 3, 1, 1);

        comboMAP = new ComboUnitsPressure(scrollAreaWidgetContents);
        comboMAP->setObjectName("comboMAP");
        sizePolicy.setHeightForWidth(comboMAP->sizePolicy().hasHeightForWidth());
        comboMAP->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboMAP, 15, 5, 1, 1);

        pushButtonState_2 = new QPushButton(scrollAreaWidgetContents);
        pushButtonState_2->setObjectName("pushButtonState_2");
        pushButtonState_2->setEnabled(false);
        pushButtonState_2->setFocusPolicy(Qt::NoFocus);
        pushButtonState_2->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        pushButtonState_2->setCheckable(true);

        gridLayout->addWidget(pushButtonState_2, 1, 2, 1, 1);

        pushButtonStart_2 = new QPushButton(scrollAreaWidgetContents);
        pushButtonStart_2->setObjectName("pushButtonStart_2");

        gridLayout->addWidget(pushButtonStart_2, 5, 2, 1, 1);

        spinMAP_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinMAP_4->setObjectName("spinMAP_4");
        sizePolicy.setHeightForWidth(spinMAP_4->sizePolicy().hasHeightForWidth());
        spinMAP_4->setSizePolicy(sizePolicy);
        spinMAP_4->setFont(font);
        spinMAP_4->setFocusPolicy(Qt::NoFocus);
        spinMAP_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinMAP_4->setReadOnly(true);
        spinMAP_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinMAP_4->setDecimals(2);
        spinMAP_4->setMinimum(0.000000000000000);
        spinMAP_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinMAP_4, 15, 4, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        pushButtonStart_4 = new QPushButton(scrollAreaWidgetContents);
        pushButtonStart_4->setObjectName("pushButtonStart_4");

        gridLayout->addWidget(pushButtonStart_4, 5, 4, 1, 1);

        pushButtonFuel_4 = new QPushButton(scrollAreaWidgetContents);
        pushButtonFuel_4->setObjectName("pushButtonFuel_4");
        pushButtonFuel_4->setCheckable(true);
        pushButtonFuel_4->setChecked(true);

        gridLayout->addWidget(pushButtonFuel_4, 3, 4, 1, 1);

        comboTOT = new ComboUnitsTemperature(scrollAreaWidgetContents);
        comboTOT->setObjectName("comboTOT");

        gridLayout->addWidget(comboTOT, 19, 5, 1, 1);

        spinPROP_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinPROP_3->setObjectName("spinPROP_3");
        spinPROP_3->setFont(font);
        spinPROP_3->setFocusPolicy(Qt::NoFocus);
        spinPROP_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinPROP_3->setReadOnly(true);
        spinPROP_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinPROP_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinPROP_3, 7, 3, 1, 1);

        pushButtonIgnition_4 = new QPushButton(scrollAreaWidgetContents);
        pushButtonIgnition_4->setObjectName("pushButtonIgnition_4");
        pushButtonIgnition_4->setCheckable(true);
        pushButtonIgnition_4->setChecked(true);

        gridLayout->addWidget(pushButtonIgnition_4, 4, 4, 1, 1);

        spinNG_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinNG_1->setObjectName("spinNG_1");
        sizePolicy.setHeightForWidth(spinNG_1->sizePolicy().hasHeightForWidth());
        spinNG_1->setSizePolicy(sizePolicy);
        spinNG_1->setFont(font);
        spinNG_1->setFocusPolicy(Qt::NoFocus);
        spinNG_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinNG_1->setReadOnly(true);
        spinNG_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinNG_1->setDecimals(2);
        spinNG_1->setMinimum(0.000000000000000);
        spinNG_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinNG_1, 8, 1, 1, 1);

        labelCHT = new QLabel(scrollAreaWidgetContents);
        labelCHT->setObjectName("labelCHT");
        labelCHT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCHT, 17, 0, 1, 1);

        spinCHT_1 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinCHT_1->setObjectName("spinCHT_1");
        spinCHT_1->setFont(font);
        spinCHT_1->setFocusPolicy(Qt::NoFocus);
        spinCHT_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCHT_1->setReadOnly(true);
        spinCHT_1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinCHT_1->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinCHT_1, 17, 1, 1, 1);

        spinCHT_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinCHT_2->setObjectName("spinCHT_2");
        spinCHT_2->setFont(font);
        spinCHT_2->setFocusPolicy(Qt::NoFocus);
        spinCHT_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCHT_2->setReadOnly(true);
        spinCHT_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinCHT_2->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinCHT_2, 17, 2, 1, 1);

        spinCHT_3 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinCHT_3->setObjectName("spinCHT_3");
        spinCHT_3->setFont(font);
        spinCHT_3->setFocusPolicy(Qt::NoFocus);
        spinCHT_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCHT_3->setReadOnly(true);
        spinCHT_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinCHT_3->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinCHT_3, 17, 3, 1, 1);

        spinCHT_4 = new QDoubleSpinBox(scrollAreaWidgetContents);
        spinCHT_4->setObjectName("spinCHT_4");
        spinCHT_4->setFont(font);
        spinCHT_4->setFocusPolicy(Qt::NoFocus);
        spinCHT_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCHT_4->setReadOnly(true);
        spinCHT_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinCHT_4->setMaximum(99999.990000000005239);

        gridLayout->addWidget(spinCHT_4, 17, 4, 1, 1);

        comboCHT = new ComboUnitsTemperature(scrollAreaWidgetContents);
        comboCHT->setObjectName("comboCHT");

        gridLayout->addWidget(comboCHT, 17, 5, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        DockWidgetProp->setWidget(dockWidgetContents);
        QWidget::setTabOrder(scrollArea, pushButtonFuel_1);
        QWidget::setTabOrder(pushButtonFuel_1, pushButtonIgnition_1);
        QWidget::setTabOrder(pushButtonIgnition_1, pushButtonStart_1);
        QWidget::setTabOrder(pushButtonStart_1, pushButtonFuel_2);
        QWidget::setTabOrder(pushButtonFuel_2, pushButtonIgnition_2);
        QWidget::setTabOrder(pushButtonIgnition_2, pushButtonStart_2);
        QWidget::setTabOrder(pushButtonStart_2, pushButtonFuel_3);
        QWidget::setTabOrder(pushButtonFuel_3, pushButtonIgnition_3);
        QWidget::setTabOrder(pushButtonIgnition_3, pushButtonStart_3);
        QWidget::setTabOrder(pushButtonStart_3, pushButtonFuel_4);
        QWidget::setTabOrder(pushButtonFuel_4, pushButtonIgnition_4);
        QWidget::setTabOrder(pushButtonIgnition_4, pushButtonStart_4);
        QWidget::setTabOrder(pushButtonStart_4, comboRPM);
        QWidget::setTabOrder(comboRPM, comboPROP);
        QWidget::setTabOrder(comboPROP, comboNG);
        QWidget::setTabOrder(comboNG, comboN1);
        QWidget::setTabOrder(comboN1, comboN2);
        QWidget::setTabOrder(comboN2, comboTRQ);
        QWidget::setTabOrder(comboTRQ, comboEPR);
        QWidget::setTabOrder(comboEPR, comboMAP);
        QWidget::setTabOrder(comboMAP, comboEGT);
        QWidget::setTabOrder(comboEGT, comboTOT);
        QWidget::setTabOrder(comboTOT, comboITT);
        QWidget::setTabOrder(comboITT, comboFF);

        retranslateUi(DockWidgetProp);

        QMetaObject::connectSlotsByName(DockWidgetProp);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetProp)
    {
        DockWidgetProp->setWindowTitle(QCoreApplication::translate("DockWidgetProp", "Propulsion", nullptr));
        pushButtonFuel_1->setText(QCoreApplication::translate("DockWidgetProp", "Fuel", nullptr));
#if QT_CONFIG(tooltip)
        labelFF->setToolTip(QCoreApplication::translate("DockWidgetProp", "Fuel Flow", nullptr));
#endif // QT_CONFIG(tooltip)
        labelFF->setText(QCoreApplication::translate("DockWidgetProp", "FF:", nullptr));
        pushButtonAB_1->setText(QCoreApplication::translate("DockWidgetProp", "AB", nullptr));
        pushButtonIgnition_3->setText(QCoreApplication::translate("DockWidgetProp", "Ignition", nullptr));
#if QT_CONFIG(tooltip)
        labelNG->setToolTip(QCoreApplication::translate("DockWidgetProp", "Gas Generator RPM", nullptr));
#endif // QT_CONFIG(tooltip)
        labelNG->setText(QCoreApplication::translate("DockWidgetProp", "NG:", nullptr));
        labelTIT->setText(QCoreApplication::translate("DockWidgetProp", "TIT:", nullptr));
#if QT_CONFIG(tooltip)
        labelN2->setToolTip(QCoreApplication::translate("DockWidgetProp", "N2", nullptr));
#endif // QT_CONFIG(tooltip)
        labelN2->setText(QCoreApplication::translate("DockWidgetProp", "N2:", nullptr));
        pushButtonStart_1->setText(QCoreApplication::translate("DockWidgetProp", "Start", nullptr));
        label_1->setText(QCoreApplication::translate("DockWidgetProp", "1", nullptr));
        pushButtonFuel_2->setText(QCoreApplication::translate("DockWidgetProp", "Fuel", nullptr));
        pushButtonFuel_3->setText(QCoreApplication::translate("DockWidgetProp", "Fuel", nullptr));
#if QT_CONFIG(tooltip)
        labelPROP->setToolTip(QCoreApplication::translate("DockWidgetProp", "Propeller Speed", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPROP->setText(QCoreApplication::translate("DockWidgetProp", "PROP:", nullptr));
        pushButtonIgnition_2->setText(QCoreApplication::translate("DockWidgetProp", "Ignition", nullptr));
        pushButtonStart_3->setText(QCoreApplication::translate("DockWidgetProp", "Start", nullptr));
        pushButtonAB_4->setText(QCoreApplication::translate("DockWidgetProp", "AB", nullptr));
        pushButtonIgnition_1->setText(QCoreApplication::translate("DockWidgetProp", "Ignition", nullptr));
#if QT_CONFIG(tooltip)
        labelEPR->setToolTip(QCoreApplication::translate("DockWidgetProp", "Engine Pressure Ratio", nullptr));
#endif // QT_CONFIG(tooltip)
        labelEPR->setText(QCoreApplication::translate("DockWidgetProp", "EPR:", nullptr));
        label_2->setText(QCoreApplication::translate("DockWidgetProp", "2", nullptr));
        pushButtonState_3->setText(QCoreApplication::translate("DockWidgetProp", "ON", nullptr));
#if QT_CONFIG(tooltip)
        labelRPM->setToolTip(QCoreApplication::translate("DockWidgetProp", "Engine Speed", nullptr));
#endif // QT_CONFIG(tooltip)
        labelRPM->setText(QCoreApplication::translate("DockWidgetProp", "RPM:", nullptr));
        pushButtonState_1->setText(QCoreApplication::translate("DockWidgetProp", "ON", nullptr));
        pushButtonAB_3->setText(QCoreApplication::translate("DockWidgetProp", "AB", nullptr));
#if QT_CONFIG(tooltip)
        labelTRQ->setToolTip(QCoreApplication::translate("DockWidgetProp", "Torque", nullptr));
#endif // QT_CONFIG(tooltip)
        labelTRQ->setText(QCoreApplication::translate("DockWidgetProp", "TRQ:", nullptr));
#if QT_CONFIG(tooltip)
        labelEGT->setToolTip(QCoreApplication::translate("DockWidgetProp", "Exhaust Gas Temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        labelEGT->setText(QCoreApplication::translate("DockWidgetProp", "EGT:", nullptr));
        pushButtonState_4->setText(QCoreApplication::translate("DockWidgetProp", "ON", nullptr));
#if QT_CONFIG(tooltip)
        labelMAP->setToolTip(QCoreApplication::translate("DockWidgetProp", "Manifold Absolute Pressure", nullptr));
#endif // QT_CONFIG(tooltip)
        labelMAP->setText(QCoreApplication::translate("DockWidgetProp", "MAP:", nullptr));
#if QT_CONFIG(tooltip)
        labelITT->setToolTip(QCoreApplication::translate("DockWidgetProp", "Interstage Turbine Temperature", nullptr));
#endif // QT_CONFIG(tooltip)
        labelITT->setText(QCoreApplication::translate("DockWidgetProp", "ITT:", nullptr));
        pushButtonAB_2->setText(QCoreApplication::translate("DockWidgetProp", "AB", nullptr));
        labelTOT->setText(QCoreApplication::translate("DockWidgetProp", "TOT:", nullptr));
#if QT_CONFIG(tooltip)
        labelN1->setToolTip(QCoreApplication::translate("DockWidgetProp", "N1", nullptr));
#endif // QT_CONFIG(tooltip)
        labelN1->setText(QCoreApplication::translate("DockWidgetProp", "N1:", nullptr));
        pushButtonState_2->setText(QCoreApplication::translate("DockWidgetProp", "ON", nullptr));
        pushButtonStart_2->setText(QCoreApplication::translate("DockWidgetProp", "Start", nullptr));
        label_3->setText(QCoreApplication::translate("DockWidgetProp", "3", nullptr));
        label_4->setText(QCoreApplication::translate("DockWidgetProp", "4", nullptr));
        pushButtonStart_4->setText(QCoreApplication::translate("DockWidgetProp", "Start", nullptr));
        pushButtonFuel_4->setText(QCoreApplication::translate("DockWidgetProp", "Fuel", nullptr));
        pushButtonIgnition_4->setText(QCoreApplication::translate("DockWidgetProp", "Ignition", nullptr));
        labelCHT->setText(QCoreApplication::translate("DockWidgetProp", "CHT:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetProp: public Ui_DockWidgetProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETPROP_H
