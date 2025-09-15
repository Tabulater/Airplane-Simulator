/********************************************************************************
** Form generated from reading UI file 'DialogInit.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINIT_H
#define UI_DIALOGINIT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include "gui/ComboUnitsAngle.h"
#include "gui/ComboUnitsLength.h"
#include "gui/ComboUnitsVelocity.h"

QT_BEGIN_NAMESPACE

class Ui_DialogInit
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBoxEngineOn;
    QLabel *labelAircraftType;
    QComboBox *comboAircrafts;
    QLabel *labelAirport;
    QComboBox *comboAirports;
    QLabel *labelInitLat;
    QDoubleSpinBox *spinInitLat;
    ComboUnitsAngle *comboInitLat;
    QLabel *labelInitLon;
    QDoubleSpinBox *spinInitLon;
    ComboUnitsAngle *comboInitLon;
    QLabel *labelInitAlt;
    QDoubleSpinBox *spinInitAlt;
    ComboUnitsLength *comboInitAlt;
    QLabel *labelInitPsi;
    QDoubleSpinBox *spinInitPsi;
    ComboUnitsAngle *comboInitPsi;
    QLabel *labelInitIAS;
    QDoubleSpinBox *spinInitIAS;
    ComboUnitsVelocity *comboInitIAS;
    QLabel *labelInitDate;
    QDateEdit *dateInit;
    QLabel *labelInitTime;
    QTimeEdit *timeInit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonTime;
    QDoubleSpinBox *spinDistance;
    ComboUnitsLength *comboDistance;
    QLabel *labelDistance;
    QLabel *label;
    QComboBox *comboLocations;

    void setupUi(QDialog *DialogInit)
    {
        if (DialogInit->objectName().isEmpty())
            DialogInit->setObjectName("DialogInit");
        DialogInit->resize(378, 528);
        DialogInit->setModal(false);
        gridLayout = new QGridLayout(DialogInit);
        gridLayout->setObjectName("gridLayout");
        checkBoxEngineOn = new QCheckBox(DialogInit);
        checkBoxEngineOn->setObjectName("checkBoxEngineOn");
        checkBoxEngineOn->setChecked(true);

        gridLayout->addWidget(checkBoxEngineOn, 11, 1, 1, 2);

        labelAircraftType = new QLabel(DialogInit);
        labelAircraftType->setObjectName("labelAircraftType");
        labelAircraftType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAircraftType, 0, 0, 1, 1);

        comboAircrafts = new QComboBox(DialogInit);
        comboAircrafts->setObjectName("comboAircrafts");

        gridLayout->addWidget(comboAircrafts, 0, 1, 1, 1);

        labelAirport = new QLabel(DialogInit);
        labelAirport->setObjectName("labelAirport");
        labelAirport->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAirport, 1, 0, 1, 1);

        comboAirports = new QComboBox(DialogInit);
        comboAirports->setObjectName("comboAirports");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboAirports->sizePolicy().hasHeightForWidth());
        comboAirports->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboAirports, 1, 1, 1, 1);

        labelInitLat = new QLabel(DialogInit);
        labelInitLat->setObjectName("labelInitLat");
        labelInitLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitLat, 4, 0, 1, 1);

        spinInitLat = new QDoubleSpinBox(DialogInit);
        spinInitLat->setObjectName("spinInitLat");
        spinInitLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinInitLat->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinInitLat->setDecimals(8);
        spinInitLat->setMinimum(-1.570796000000000);
        spinInitLat->setMaximum(1.570796000000000);
        spinInitLat->setSingleStep(0.010000000000000);

        gridLayout->addWidget(spinInitLat, 4, 1, 1, 1);

        comboInitLat = new ComboUnitsAngle(DialogInit);
        comboInitLat->setObjectName("comboInitLat");

        gridLayout->addWidget(comboInitLat, 4, 2, 1, 1);

        labelInitLon = new QLabel(DialogInit);
        labelInitLon->setObjectName("labelInitLon");
        labelInitLon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitLon, 5, 0, 1, 1);

        spinInitLon = new QDoubleSpinBox(DialogInit);
        spinInitLon->setObjectName("spinInitLon");
        spinInitLon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinInitLon->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinInitLon->setDecimals(8);
        spinInitLon->setMinimum(-3.141592000000000);
        spinInitLon->setMaximum(3.141592000000000);
        spinInitLon->setSingleStep(0.010000000000000);

        gridLayout->addWidget(spinInitLon, 5, 1, 1, 1);

        comboInitLon = new ComboUnitsAngle(DialogInit);
        comboInitLon->setObjectName("comboInitLon");

        gridLayout->addWidget(comboInitLon, 5, 2, 1, 1);

        labelInitAlt = new QLabel(DialogInit);
        labelInitAlt->setObjectName("labelInitAlt");
        labelInitAlt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitAlt, 6, 0, 1, 1);

        spinInitAlt = new QDoubleSpinBox(DialogInit);
        spinInitAlt->setObjectName("spinInitAlt");
        spinInitAlt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinInitAlt->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinInitAlt->setDecimals(0);
        spinInitAlt->setMinimum(0.000000000000000);
        spinInitAlt->setMaximum(99999.000000000000000);
        spinInitAlt->setSingleStep(100.000000000000000);

        gridLayout->addWidget(spinInitAlt, 6, 1, 1, 1);

        comboInitAlt = new ComboUnitsLength(DialogInit);
        comboInitAlt->setObjectName("comboInitAlt");

        gridLayout->addWidget(comboInitAlt, 6, 2, 1, 1);

        labelInitPsi = new QLabel(DialogInit);
        labelInitPsi->setObjectName("labelInitPsi");
        labelInitPsi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitPsi, 7, 0, 1, 1);

        spinInitPsi = new QDoubleSpinBox(DialogInit);
        spinInitPsi->setObjectName("spinInitPsi");
        spinInitPsi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinInitPsi->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinInitPsi->setDecimals(2);
        spinInitPsi->setMinimum(0.000000000000000);
        spinInitPsi->setMaximum(6.280000000000000);

        gridLayout->addWidget(spinInitPsi, 7, 1, 1, 1);

        comboInitPsi = new ComboUnitsAngle(DialogInit);
        comboInitPsi->setObjectName("comboInitPsi");

        gridLayout->addWidget(comboInitPsi, 7, 2, 1, 1);

        labelInitIAS = new QLabel(DialogInit);
        labelInitIAS->setObjectName("labelInitIAS");
        labelInitIAS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitIAS, 8, 0, 1, 1);

        spinInitIAS = new QDoubleSpinBox(DialogInit);
        spinInitIAS->setObjectName("spinInitIAS");
        spinInitIAS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinInitIAS->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinInitIAS->setDecimals(0);
        spinInitIAS->setMinimum(0.000000000000000);
        spinInitIAS->setMaximum(9999.000000000000000);
        spinInitIAS->setSingleStep(10.000000000000000);

        gridLayout->addWidget(spinInitIAS, 8, 1, 1, 1);

        comboInitIAS = new ComboUnitsVelocity(DialogInit);
        comboInitIAS->setObjectName("comboInitIAS");

        gridLayout->addWidget(comboInitIAS, 8, 2, 1, 1);

        labelInitDate = new QLabel(DialogInit);
        labelInitDate->setObjectName("labelInitDate");
        labelInitDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitDate, 9, 0, 1, 1);

        dateInit = new QDateEdit(DialogInit);
        dateInit->setObjectName("dateInit");
        dateInit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dateInit->setDate(QDate(2000, 1, 1));

        gridLayout->addWidget(dateInit, 9, 1, 1, 1);

        labelInitTime = new QLabel(DialogInit);
        labelInitTime->setObjectName("labelInitTime");
        labelInitTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelInitTime, 10, 0, 1, 1);

        timeInit = new QTimeEdit(DialogInit);
        timeInit->setObjectName("timeInit");
        timeInit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        timeInit->setTime(QTime(12, 0, 0));

        gridLayout->addWidget(timeInit, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(351, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 3);

        buttonBox = new QDialogButtonBox(DialogInit);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 13, 0, 1, 3);

        pushButtonTime = new QPushButton(DialogInit);
        pushButtonTime->setObjectName("pushButtonTime");

        gridLayout->addWidget(pushButtonTime, 10, 2, 1, 1);

        spinDistance = new QDoubleSpinBox(DialogInit);
        spinDistance->setObjectName("spinDistance");
        spinDistance->setEnabled(false);
        spinDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinDistance->setDecimals(0);
        spinDistance->setMinimum(-10000.000000000000000);
        spinDistance->setMaximum(10000.000000000000000);

        gridLayout->addWidget(spinDistance, 3, 1, 1, 1);

        comboDistance = new ComboUnitsLength(DialogInit);
        comboDistance->setObjectName("comboDistance");
        comboDistance->setEnabled(false);

        gridLayout->addWidget(comboDistance, 3, 2, 1, 1);

        labelDistance = new QLabel(DialogInit);
        labelDistance->setObjectName("labelDistance");
        labelDistance->setEnabled(false);
        labelDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelDistance, 3, 0, 1, 1);

        label = new QLabel(DialogInit);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        comboLocations = new QComboBox(DialogInit);
        comboLocations->setObjectName("comboLocations");

        gridLayout->addWidget(comboLocations, 2, 1, 1, 1);

#if QT_CONFIG(shortcut)
        labelAircraftType->setBuddy(comboAircrafts);
        labelAirport->setBuddy(comboAirports);
        labelInitLat->setBuddy(spinInitLat);
        labelInitLon->setBuddy(spinInitLon);
        labelInitAlt->setBuddy(spinInitAlt);
        labelInitPsi->setBuddy(spinInitPsi);
        labelInitIAS->setBuddy(spinInitIAS);
        labelInitDate->setBuddy(dateInit);
        labelInitTime->setBuddy(timeInit);
        labelDistance->setBuddy(spinDistance);
        label->setBuddy(comboLocations);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(comboAircrafts, comboAirports);
        QWidget::setTabOrder(comboAirports, comboLocations);
        QWidget::setTabOrder(comboLocations, spinDistance);
        QWidget::setTabOrder(spinDistance, comboDistance);
        QWidget::setTabOrder(comboDistance, spinInitLat);
        QWidget::setTabOrder(spinInitLat, comboInitLat);
        QWidget::setTabOrder(comboInitLat, spinInitLon);
        QWidget::setTabOrder(spinInitLon, comboInitLon);
        QWidget::setTabOrder(comboInitLon, spinInitAlt);
        QWidget::setTabOrder(spinInitAlt, comboInitAlt);
        QWidget::setTabOrder(comboInitAlt, spinInitPsi);
        QWidget::setTabOrder(spinInitPsi, comboInitPsi);
        QWidget::setTabOrder(comboInitPsi, spinInitIAS);
        QWidget::setTabOrder(spinInitIAS, comboInitIAS);
        QWidget::setTabOrder(comboInitIAS, dateInit);
        QWidget::setTabOrder(dateInit, timeInit);
        QWidget::setTabOrder(timeInit, pushButtonTime);
        QWidget::setTabOrder(pushButtonTime, checkBoxEngineOn);

        retranslateUi(DialogInit);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogInit, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogInit, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogInit);
    } // setupUi

    void retranslateUi(QDialog *DialogInit)
    {
        DialogInit->setWindowTitle(QCoreApplication::translate("DialogInit", "Initial Conditions", nullptr));
        checkBoxEngineOn->setText(QCoreApplication::translate("DialogInit", "Engine On", nullptr));
        labelAircraftType->setText(QCoreApplication::translate("DialogInit", "Aircraft:", nullptr));
        labelAirport->setText(QCoreApplication::translate("DialogInit", "Airport:", nullptr));
        labelInitLat->setText(QCoreApplication::translate("DialogInit", "Latitude:", nullptr));
        labelInitLon->setText(QCoreApplication::translate("DialogInit", "Longitude:", nullptr));
        labelInitAlt->setText(QCoreApplication::translate("DialogInit", "Altitude AGL:", nullptr));
        labelInitPsi->setText(QCoreApplication::translate("DialogInit", "Heading:", nullptr));
        labelInitIAS->setText(QCoreApplication::translate("DialogInit", "Airspeed:", nullptr));
        labelInitDate->setText(QCoreApplication::translate("DialogInit", "Date UTC:", nullptr));
        dateInit->setDisplayFormat(QCoreApplication::translate("DialogInit", "yyyy-MM-dd", nullptr));
        labelInitTime->setText(QCoreApplication::translate("DialogInit", "Time UTC:", nullptr));
        timeInit->setDisplayFormat(QCoreApplication::translate("DialogInit", "HH:mm", nullptr));
        pushButtonTime->setText(QCoreApplication::translate("DialogInit", "Set...", nullptr));
        labelDistance->setText(QCoreApplication::translate("DialogInit", "Distance:", nullptr));
        label->setText(QCoreApplication::translate("DialogInit", "Location:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInit: public Ui_DialogInit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINIT_H
