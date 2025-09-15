/********************************************************************************
** Form generated from reading UI file 'DialogEnvr.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGENVR_H
#define UI_DIALOGENVR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "gui/ComboUnitsAngle.h"
#include "gui/ComboUnitsLength.h"
#include "gui/ComboUnitsPressure.h"
#include "gui/ComboUnitsTemperature.h"
#include "gui/ComboUnitsVelocity.h"

QT_BEGIN_NAMESPACE

class Ui_DialogEnvr
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBoxWind;
    QGridLayout *gridLayout_5;
    QLabel *labelWindDir;
    QLabel *labelWindSpeed;
    QDoubleSpinBox *spinBoxWindDir;
    QLabel *labelTurbulence;
    QLabel *labelWindShear;
    QDoubleSpinBox *spinBoxWindSpeed;
    ComboUnitsAngle *comboWindDir;
    ComboUnitsVelocity *comboWindSpeed;
    QComboBox *comboWindShear;
    QComboBox *comboTurbulence;
    QGroupBox *groupBoxVisibility;
    QGridLayout *gridLayout;
    QSlider *sliderVisibility;
    QDoubleSpinBox *spinBoxVisibility;
    ComboUnitsLength *comboVisibility;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBoxSeaLevel;
    QGridLayout *gridLayout_4;
    QLabel *labelSeaLevelTemp;
    QDoubleSpinBox *spinBoxSeaLevelTemp;
    QLabel *labelSeaLevelPress;
    QDoubleSpinBox *spinBoxSeaLevelPress;
    ComboUnitsTemperature *comboSeaLevelTemp;
    ComboUnitsPressure *comboSeaLevelPress;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButtonCloudsTypeLayer;
    QRadioButton *radioButtonCloudsTypeBlock;
    QStackedWidget *stackedWidgetClouds;
    QWidget *pageCloudsBlock;
    QGridLayout *gridLayout_7;
    QDoubleSpinBox *doubleSpinBoxCloudsBlockCount;
    QLabel *labelCloudsBlockBaseASL;
    QLabel *labelCloudsBlockCount;
    QLabel *label_4labelCloudsBlockThickness;
    ComboUnitsLength *comboCloudsBlockBaseASL;
    ComboUnitsLength *comboCloudsBlockThickness;
    QDoubleSpinBox *spinBoxCloudsBlockThickness;
    QDoubleSpinBox *spinBoxCloudsBlockBaseASL;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageCloudsLayer;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *spinBoxCloudsLayerBaseASL;
    QLabel *labelCloudsLayerBaseASL;
    ComboUnitsLength *comboCloudsLayerBaseASL;
    QComboBox *comboCloudsLayerCover;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QButtonGroup *buttonGroupCloudsType;

    void setupUi(QDialog *DialogEnvr)
    {
        if (DialogEnvr->objectName().isEmpty())
            DialogEnvr->setObjectName("DialogEnvr");
        DialogEnvr->resize(486, 679);
        DialogEnvr->setModal(true);
        gridLayout_2 = new QGridLayout(DialogEnvr);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBoxWind = new QGroupBox(DialogEnvr);
        groupBoxWind->setObjectName("groupBoxWind");
        gridLayout_5 = new QGridLayout(groupBoxWind);
        gridLayout_5->setObjectName("gridLayout_5");
        labelWindDir = new QLabel(groupBoxWind);
        labelWindDir->setObjectName("labelWindDir");
        labelWindDir->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelWindDir, 0, 0, 1, 1);

        labelWindSpeed = new QLabel(groupBoxWind);
        labelWindSpeed->setObjectName("labelWindSpeed");
        labelWindSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelWindSpeed, 1, 0, 1, 1);

        spinBoxWindDir = new QDoubleSpinBox(groupBoxWind);
        spinBoxWindDir->setObjectName("spinBoxWindDir");
        spinBoxWindDir->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxWindDir->setDecimals(0);

        gridLayout_5->addWidget(spinBoxWindDir, 0, 1, 1, 1);

        labelTurbulence = new QLabel(groupBoxWind);
        labelTurbulence->setObjectName("labelTurbulence");
        labelTurbulence->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelTurbulence, 2, 0, 1, 1);

        labelWindShear = new QLabel(groupBoxWind);
        labelWindShear->setObjectName("labelWindShear");
        labelWindShear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelWindShear, 3, 0, 1, 1);

        spinBoxWindSpeed = new QDoubleSpinBox(groupBoxWind);
        spinBoxWindSpeed->setObjectName("spinBoxWindSpeed");
        spinBoxWindSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxWindSpeed->setDecimals(0);

        gridLayout_5->addWidget(spinBoxWindSpeed, 1, 1, 1, 1);

        comboWindDir = new ComboUnitsAngle(groupBoxWind);
        comboWindDir->setObjectName("comboWindDir");

        gridLayout_5->addWidget(comboWindDir, 0, 2, 1, 1);

        comboWindSpeed = new ComboUnitsVelocity(groupBoxWind);
        comboWindSpeed->setObjectName("comboWindSpeed");

        gridLayout_5->addWidget(comboWindSpeed, 1, 2, 1, 1);

        comboWindShear = new QComboBox(groupBoxWind);
        comboWindShear->addItem(QString());
        comboWindShear->addItem(QString());
        comboWindShear->addItem(QString());
        comboWindShear->addItem(QString());
        comboWindShear->addItem(QString());
        comboWindShear->setObjectName("comboWindShear");

        gridLayout_5->addWidget(comboWindShear, 3, 1, 1, 2);

        comboTurbulence = new QComboBox(groupBoxWind);
        comboTurbulence->addItem(QString());
        comboTurbulence->addItem(QString());
        comboTurbulence->addItem(QString());
        comboTurbulence->addItem(QString());
        comboTurbulence->addItem(QString());
        comboTurbulence->setObjectName("comboTurbulence");

        gridLayout_5->addWidget(comboTurbulence, 2, 1, 1, 2);


        gridLayout_2->addWidget(groupBoxWind, 1, 0, 1, 1);

        groupBoxVisibility = new QGroupBox(DialogEnvr);
        groupBoxVisibility->setObjectName("groupBoxVisibility");
        gridLayout = new QGridLayout(groupBoxVisibility);
        gridLayout->setObjectName("gridLayout");
        sliderVisibility = new QSlider(groupBoxVisibility);
        sliderVisibility->setObjectName("sliderVisibility");
        sliderVisibility->setMinimum(1);
        sliderVisibility->setMaximum(250);
        sliderVisibility->setValue(250);
        sliderVisibility->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderVisibility, 0, 0, 1, 1);

        spinBoxVisibility = new QDoubleSpinBox(groupBoxVisibility);
        spinBoxVisibility->setObjectName("spinBoxVisibility");
        QFont font;
        font.setBold(true);
        spinBoxVisibility->setFont(font);
        spinBoxVisibility->setFocusPolicy(Qt::NoFocus);
        spinBoxVisibility->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxVisibility->setReadOnly(true);
        spinBoxVisibility->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxVisibility->setDecimals(1);
        spinBoxVisibility->setMinimum(0.000000000000000);
        spinBoxVisibility->setMaximum(999999.000000000000000);
        spinBoxVisibility->setSingleStep(100.000000000000000);
        spinBoxVisibility->setValue(0.000000000000000);

        gridLayout->addWidget(spinBoxVisibility, 0, 1, 1, 1);

        comboVisibility = new ComboUnitsLength(groupBoxVisibility);
        comboVisibility->setObjectName("comboVisibility");

        gridLayout->addWidget(comboVisibility, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBoxVisibility, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 175, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogEnvr);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 1);

        groupBoxSeaLevel = new QGroupBox(DialogEnvr);
        groupBoxSeaLevel->setObjectName("groupBoxSeaLevel");
        gridLayout_4 = new QGridLayout(groupBoxSeaLevel);
        gridLayout_4->setObjectName("gridLayout_4");
        labelSeaLevelTemp = new QLabel(groupBoxSeaLevel);
        labelSeaLevelTemp->setObjectName("labelSeaLevelTemp");
        labelSeaLevelTemp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelSeaLevelTemp, 0, 0, 1, 1);

        spinBoxSeaLevelTemp = new QDoubleSpinBox(groupBoxSeaLevel);
        spinBoxSeaLevelTemp->setObjectName("spinBoxSeaLevelTemp");
        spinBoxSeaLevelTemp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxSeaLevelTemp->setDecimals(0);

        gridLayout_4->addWidget(spinBoxSeaLevelTemp, 0, 1, 1, 1);

        labelSeaLevelPress = new QLabel(groupBoxSeaLevel);
        labelSeaLevelPress->setObjectName("labelSeaLevelPress");
        labelSeaLevelPress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelSeaLevelPress, 1, 0, 1, 1);

        spinBoxSeaLevelPress = new QDoubleSpinBox(groupBoxSeaLevel);
        spinBoxSeaLevelPress->setObjectName("spinBoxSeaLevelPress");
        spinBoxSeaLevelPress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(spinBoxSeaLevelPress, 1, 1, 1, 1);

        comboSeaLevelTemp = new ComboUnitsTemperature(groupBoxSeaLevel);
        comboSeaLevelTemp->setObjectName("comboSeaLevelTemp");

        gridLayout_4->addWidget(comboSeaLevelTemp, 0, 2, 1, 1);

        comboSeaLevelPress = new ComboUnitsPressure(groupBoxSeaLevel);
        comboSeaLevelPress->setObjectName("comboSeaLevelPress");

        gridLayout_4->addWidget(comboSeaLevelPress, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBoxSeaLevel, 0, 0, 1, 1);

        groupBox = new QGroupBox(DialogEnvr);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        radioButtonCloudsTypeLayer = new QRadioButton(groupBox);
        buttonGroupCloudsType = new QButtonGroup(DialogEnvr);
        buttonGroupCloudsType->setObjectName("buttonGroupCloudsType");
        buttonGroupCloudsType->addButton(radioButtonCloudsTypeLayer);
        radioButtonCloudsTypeLayer->setObjectName("radioButtonCloudsTypeLayer");

        gridLayout_3->addWidget(radioButtonCloudsTypeLayer, 0, 2, 1, 1);

        radioButtonCloudsTypeBlock = new QRadioButton(groupBox);
        buttonGroupCloudsType->addButton(radioButtonCloudsTypeBlock);
        radioButtonCloudsTypeBlock->setObjectName("radioButtonCloudsTypeBlock");
        radioButtonCloudsTypeBlock->setChecked(true);

        gridLayout_3->addWidget(radioButtonCloudsTypeBlock, 0, 1, 1, 1);

        stackedWidgetClouds = new QStackedWidget(groupBox);
        stackedWidgetClouds->setObjectName("stackedWidgetClouds");
        pageCloudsBlock = new QWidget();
        pageCloudsBlock->setObjectName("pageCloudsBlock");
        gridLayout_7 = new QGridLayout(pageCloudsBlock);
        gridLayout_7->setObjectName("gridLayout_7");
        doubleSpinBoxCloudsBlockCount = new QDoubleSpinBox(pageCloudsBlock);
        doubleSpinBoxCloudsBlockCount->setObjectName("doubleSpinBoxCloudsBlockCount");
        doubleSpinBoxCloudsBlockCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxCloudsBlockCount->setDecimals(0);
        doubleSpinBoxCloudsBlockCount->setMaximum(1.000000000000000);

        gridLayout_7->addWidget(doubleSpinBoxCloudsBlockCount, 0, 1, 1, 1);

        labelCloudsBlockBaseASL = new QLabel(pageCloudsBlock);
        labelCloudsBlockBaseASL->setObjectName("labelCloudsBlockBaseASL");
        labelCloudsBlockBaseASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(labelCloudsBlockBaseASL, 1, 0, 1, 1);

        labelCloudsBlockCount = new QLabel(pageCloudsBlock);
        labelCloudsBlockCount->setObjectName("labelCloudsBlockCount");
        labelCloudsBlockCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(labelCloudsBlockCount, 0, 0, 1, 1);

        label_4labelCloudsBlockThickness = new QLabel(pageCloudsBlock);
        label_4labelCloudsBlockThickness->setObjectName("label_4labelCloudsBlockThickness");
        label_4labelCloudsBlockThickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_4labelCloudsBlockThickness, 2, 0, 1, 1);

        comboCloudsBlockBaseASL = new ComboUnitsLength(pageCloudsBlock);
        comboCloudsBlockBaseASL->setObjectName("comboCloudsBlockBaseASL");

        gridLayout_7->addWidget(comboCloudsBlockBaseASL, 1, 2, 1, 1);

        comboCloudsBlockThickness = new ComboUnitsLength(pageCloudsBlock);
        comboCloudsBlockThickness->setObjectName("comboCloudsBlockThickness");

        gridLayout_7->addWidget(comboCloudsBlockThickness, 2, 2, 1, 1);

        spinBoxCloudsBlockThickness = new QDoubleSpinBox(pageCloudsBlock);
        spinBoxCloudsBlockThickness->setObjectName("spinBoxCloudsBlockThickness");
        spinBoxCloudsBlockThickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCloudsBlockThickness->setDecimals(0);
        spinBoxCloudsBlockThickness->setMinimum(100.000000000000000);
        spinBoxCloudsBlockThickness->setMaximum(10000.000000000000000);
        spinBoxCloudsBlockThickness->setValue(500.000000000000000);

        gridLayout_7->addWidget(spinBoxCloudsBlockThickness, 2, 1, 1, 1);

        spinBoxCloudsBlockBaseASL = new QDoubleSpinBox(pageCloudsBlock);
        spinBoxCloudsBlockBaseASL->setObjectName("spinBoxCloudsBlockBaseASL");
        spinBoxCloudsBlockBaseASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCloudsBlockBaseASL->setDecimals(0);
        spinBoxCloudsBlockBaseASL->setMaximum(10000.000000000000000);
        spinBoxCloudsBlockBaseASL->setValue(500.000000000000000);

        gridLayout_7->addWidget(spinBoxCloudsBlockBaseASL, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 3, 0, 1, 3);

        stackedWidgetClouds->addWidget(pageCloudsBlock);
        pageCloudsLayer = new QWidget();
        pageCloudsLayer->setObjectName("pageCloudsLayer");
        gridLayout_6 = new QGridLayout(pageCloudsLayer);
        gridLayout_6->setObjectName("gridLayout_6");
        spinBoxCloudsLayerBaseASL = new QDoubleSpinBox(pageCloudsLayer);
        spinBoxCloudsLayerBaseASL->setObjectName("spinBoxCloudsLayerBaseASL");
        spinBoxCloudsLayerBaseASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCloudsLayerBaseASL->setDecimals(0);
        spinBoxCloudsLayerBaseASL->setMinimum(100.000000000000000);
        spinBoxCloudsLayerBaseASL->setMaximum(10000.000000000000000);

        gridLayout_6->addWidget(spinBoxCloudsLayerBaseASL, 0, 1, 1, 1);

        labelCloudsLayerBaseASL = new QLabel(pageCloudsLayer);
        labelCloudsLayerBaseASL->setObjectName("labelCloudsLayerBaseASL");
        labelCloudsLayerBaseASL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(labelCloudsLayerBaseASL, 0, 0, 1, 1);

        comboCloudsLayerBaseASL = new ComboUnitsLength(pageCloudsLayer);
        comboCloudsLayerBaseASL->setObjectName("comboCloudsLayerBaseASL");

        gridLayout_6->addWidget(comboCloudsLayerBaseASL, 0, 2, 1, 1);

        comboCloudsLayerCover = new QComboBox(pageCloudsLayer);
        comboCloudsLayerCover->addItem(QString());
        comboCloudsLayerCover->addItem(QString());
        comboCloudsLayerCover->addItem(QString());
        comboCloudsLayerCover->addItem(QString());
        comboCloudsLayerCover->addItem(QString());
        comboCloudsLayerCover->setObjectName("comboCloudsLayerCover");

        gridLayout_6->addWidget(comboCloudsLayerCover, 1, 1, 1, 2);

        label_3 = new QLabel(pageCloudsLayer);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 0, 1, 3);

        stackedWidgetClouds->addWidget(pageCloudsLayer);

        gridLayout_3->addWidget(stackedWidgetClouds, 1, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 3, 0, 1, 1);

#if QT_CONFIG(shortcut)
        labelWindDir->setBuddy(spinBoxWindDir);
        labelWindSpeed->setBuddy(spinBoxWindSpeed);
        labelTurbulence->setBuddy(comboTurbulence);
        labelWindShear->setBuddy(comboWindShear);
        labelSeaLevelTemp->setBuddy(spinBoxSeaLevelTemp);
        labelSeaLevelPress->setBuddy(spinBoxSeaLevelPress);
        labelCloudsBlockBaseASL->setBuddy(spinBoxCloudsBlockBaseASL);
        labelCloudsBlockCount->setBuddy(doubleSpinBoxCloudsBlockCount);
        label_4labelCloudsBlockThickness->setBuddy(spinBoxCloudsBlockThickness);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(spinBoxSeaLevelTemp, comboSeaLevelTemp);
        QWidget::setTabOrder(comboSeaLevelTemp, spinBoxSeaLevelPress);
        QWidget::setTabOrder(spinBoxSeaLevelPress, comboSeaLevelPress);
        QWidget::setTabOrder(comboSeaLevelPress, spinBoxWindDir);
        QWidget::setTabOrder(spinBoxWindDir, comboWindDir);
        QWidget::setTabOrder(comboWindDir, spinBoxWindSpeed);
        QWidget::setTabOrder(spinBoxWindSpeed, comboWindSpeed);
        QWidget::setTabOrder(comboWindSpeed, comboTurbulence);
        QWidget::setTabOrder(comboTurbulence, comboWindShear);
        QWidget::setTabOrder(comboWindShear, sliderVisibility);
        QWidget::setTabOrder(sliderVisibility, comboVisibility);
        QWidget::setTabOrder(comboVisibility, radioButtonCloudsTypeBlock);
        QWidget::setTabOrder(radioButtonCloudsTypeBlock, radioButtonCloudsTypeLayer);
        QWidget::setTabOrder(radioButtonCloudsTypeLayer, doubleSpinBoxCloudsBlockCount);
        QWidget::setTabOrder(doubleSpinBoxCloudsBlockCount, spinBoxCloudsBlockBaseASL);
        QWidget::setTabOrder(spinBoxCloudsBlockBaseASL, comboCloudsBlockBaseASL);
        QWidget::setTabOrder(comboCloudsBlockBaseASL, spinBoxCloudsBlockThickness);
        QWidget::setTabOrder(spinBoxCloudsBlockThickness, comboCloudsBlockThickness);
        QWidget::setTabOrder(comboCloudsBlockThickness, spinBoxCloudsLayerBaseASL);
        QWidget::setTabOrder(spinBoxCloudsLayerBaseASL, comboCloudsLayerBaseASL);
        QWidget::setTabOrder(comboCloudsLayerBaseASL, comboCloudsLayerCover);

        retranslateUi(DialogEnvr);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogEnvr, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogEnvr, qOverload<>(&QDialog::reject));

        stackedWidgetClouds->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogEnvr);
    } // setupUi

    void retranslateUi(QDialog *DialogEnvr)
    {
        DialogEnvr->setWindowTitle(QCoreApplication::translate("DialogEnvr", "Environment", nullptr));
        groupBoxWind->setTitle(QCoreApplication::translate("DialogEnvr", "Wind and Turbulence", nullptr));
        labelWindDir->setText(QCoreApplication::translate("DialogEnvr", "Wind Direction:", nullptr));
        labelWindSpeed->setText(QCoreApplication::translate("DialogEnvr", "Wind Speed:", nullptr));
        labelTurbulence->setText(QCoreApplication::translate("DialogEnvr", "Turbulence Intensity:", nullptr));
        labelWindShear->setText(QCoreApplication::translate("DialogEnvr", "Wind Shear Model:", nullptr));
        comboWindShear->setItemText(0, QCoreApplication::translate("DialogEnvr", "None", nullptr));
        comboWindShear->setItemText(1, QCoreApplication::translate("DialogEnvr", "Model 1", nullptr));
        comboWindShear->setItemText(2, QCoreApplication::translate("DialogEnvr", "Model 2", nullptr));
        comboWindShear->setItemText(3, QCoreApplication::translate("DialogEnvr", "Model 3", nullptr));
        comboWindShear->setItemText(4, QCoreApplication::translate("DialogEnvr", "Model 4", nullptr));

        comboTurbulence->setItemText(0, QCoreApplication::translate("DialogEnvr", "None", nullptr));
        comboTurbulence->setItemText(1, QCoreApplication::translate("DialogEnvr", "Mild", nullptr));
        comboTurbulence->setItemText(2, QCoreApplication::translate("DialogEnvr", "Moderate", nullptr));
        comboTurbulence->setItemText(3, QCoreApplication::translate("DialogEnvr", "Severe", nullptr));
        comboTurbulence->setItemText(4, QCoreApplication::translate("DialogEnvr", "Extreme", nullptr));

        groupBoxVisibility->setTitle(QCoreApplication::translate("DialogEnvr", "Visibility", nullptr));
        groupBoxSeaLevel->setTitle(QCoreApplication::translate("DialogEnvr", "Sea Level Conditions", nullptr));
        labelSeaLevelTemp->setText(QCoreApplication::translate("DialogEnvr", "Temperature:", nullptr));
        labelSeaLevelPress->setText(QCoreApplication::translate("DialogEnvr", "Pressure:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogEnvr", "Clouds", nullptr));
        radioButtonCloudsTypeLayer->setText(QCoreApplication::translate("DialogEnvr", "Layer", nullptr));
        radioButtonCloudsTypeBlock->setText(QCoreApplication::translate("DialogEnvr", "Block", nullptr));
        labelCloudsBlockBaseASL->setText(QCoreApplication::translate("DialogEnvr", "Base ASL:", nullptr));
        labelCloudsBlockCount->setText(QCoreApplication::translate("DialogEnvr", "Clouds per 100 sq km:", nullptr));
        label_4labelCloudsBlockThickness->setText(QCoreApplication::translate("DialogEnvr", "Thickness:", nullptr));
        labelCloudsLayerBaseASL->setText(QCoreApplication::translate("DialogEnvr", "Base ASL:", nullptr));
        comboCloudsLayerCover->setItemText(0, QCoreApplication::translate("DialogEnvr", "Clear", nullptr));
        comboCloudsLayerCover->setItemText(1, QCoreApplication::translate("DialogEnvr", "Few", nullptr));
        comboCloudsLayerCover->setItemText(2, QCoreApplication::translate("DialogEnvr", "Scattered", nullptr));
        comboCloudsLayerCover->setItemText(3, QCoreApplication::translate("DialogEnvr", "Broken", nullptr));
        comboCloudsLayerCover->setItemText(4, QCoreApplication::translate("DialogEnvr", "Overcast", nullptr));

        label_3->setText(QCoreApplication::translate("DialogEnvr", "Cover:", nullptr));
        label->setText(QCoreApplication::translate("DialogEnvr", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEnvr: public Ui_DialogEnvr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGENVR_H
