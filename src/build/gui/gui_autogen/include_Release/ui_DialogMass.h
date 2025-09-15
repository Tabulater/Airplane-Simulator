/********************************************************************************
** Form generated from reading UI file 'DialogMass.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMASS_H
#define UI_DIALOGMASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "gui/ComboUnitsMass.h"
#include "gui/SpinBoxHighlight.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMass
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinBoxFuelTank_2;
    QLabel *labelTotal;
    QLabel *labelFuelTank_3;
    ComboUnitsMass *comboBoxFuelTank_6;
    QDoubleSpinBox *spinBoxFuelTank_1;
    QDoubleSpinBox *spinBoxMTOW;
    QDoubleSpinBox *spinBoxFuelTank_4;
    QDoubleSpinBox *spinBoxFuelTank_8;
    QLabel *labelPilot_2;
    ComboUnitsMass *comboBoxPilot_2;
    ComboUnitsMass *comboBoxFuelTank_1;
    ComboUnitsMass *comboBoxFuelTank_8;
    QLabel *labelTrunk;
    ComboUnitsMass *comboBoxCabin;
    ComboUnitsMass *comboBoxFuelTank_4;
    QDoubleSpinBox *spinBoxPilot_2;
    QLabel *labelFuelTank_8;
    QDoubleSpinBox *spinBoxFuelTank_7;
    QDoubleSpinBox *spinBoxFuelTank_5;
    QLabel *labelFuelTank_5;
    ComboUnitsMass *comboBoxTotal;
    QDialogButtonBox *buttonBox;
    ComboUnitsMass *comboBoxMTOW;
    QLabel *labelFuelTank_4;
    QLabel *labelCabin;
    QLabel *labelFuelTank_6;
    QDoubleSpinBox *spinBoxTrunk;
    ComboUnitsMass *comboBoxTrunk;
    QLabel *labelFuelTank_2;
    QLabel *labelPilot_1;
    ComboUnitsMass *comboBoxFuelTank_3;
    QDoubleSpinBox *spinBoxFuelTank_3;
    QFrame *line;
    ComboUnitsMass *comboBoxFuelTank_5;
    QDoubleSpinBox *spinBoxFuelTank_6;
    ComboUnitsMass *comboBoxFuelTank_7;
    ComboUnitsMass *comboBoxFuelTank_2;
    SpinBoxHighlight *spinBoxTotal;
    ComboUnitsMass *comboBoxPilot_1;
    QDoubleSpinBox *spinBoxPilot_1;
    QLabel *label;
    QDoubleSpinBox *spinBoxCabin;
    QSpacerItem *verticalSpacer;
    QLabel *labelFuelTank_7;
    QLabel *labelFuelTank_1;
    ComboUnitsMass *comboBoxSlung;
    QDoubleSpinBox *spinBoxSlung;
    QLabel *labelSlung;

    void setupUi(QDialog *DialogMass)
    {
        if (DialogMass->objectName().isEmpty())
            DialogMass->setObjectName("DialogMass");
        DialogMass->resize(419, 582);
        DialogMass->setModal(true);
        gridLayout = new QGridLayout(DialogMass);
        gridLayout->setObjectName("gridLayout");
        spinBoxFuelTank_2 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_2->setObjectName("spinBoxFuelTank_2");
        spinBoxFuelTank_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_2, 3, 1, 1, 1);

        labelTotal = new QLabel(DialogMass);
        labelTotal->setObjectName("labelTotal");
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotal, 15, 0, 1, 1);

        labelFuelTank_3 = new QLabel(DialogMass);
        labelFuelTank_3->setObjectName("labelFuelTank_3");
        labelFuelTank_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_3, 4, 0, 1, 1);

        comboBoxFuelTank_6 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_6->setObjectName("comboBoxFuelTank_6");

        gridLayout->addWidget(comboBoxFuelTank_6, 7, 2, 1, 1);

        spinBoxFuelTank_1 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_1->setObjectName("spinBoxFuelTank_1");
        spinBoxFuelTank_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_1, 2, 1, 1, 1);

        spinBoxMTOW = new QDoubleSpinBox(DialogMass);
        spinBoxMTOW->setObjectName("spinBoxMTOW");
        QFont font;
        font.setBold(true);
        spinBoxMTOW->setFont(font);
        spinBoxMTOW->setFocusPolicy(Qt::NoFocus);
        spinBoxMTOW->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxMTOW->setReadOnly(true);
        spinBoxMTOW->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMTOW->setMaximum(999999.000000000000000);

        gridLayout->addWidget(spinBoxMTOW, 14, 1, 1, 1);

        spinBoxFuelTank_4 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_4->setObjectName("spinBoxFuelTank_4");
        spinBoxFuelTank_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_4, 5, 1, 1, 1);

        spinBoxFuelTank_8 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_8->setObjectName("spinBoxFuelTank_8");
        spinBoxFuelTank_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_8, 9, 1, 1, 1);

        labelPilot_2 = new QLabel(DialogMass);
        labelPilot_2->setObjectName("labelPilot_2");
        labelPilot_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPilot_2, 1, 0, 1, 1);

        comboBoxPilot_2 = new ComboUnitsMass(DialogMass);
        comboBoxPilot_2->setObjectName("comboBoxPilot_2");

        gridLayout->addWidget(comboBoxPilot_2, 1, 2, 1, 1);

        comboBoxFuelTank_1 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_1->setObjectName("comboBoxFuelTank_1");

        gridLayout->addWidget(comboBoxFuelTank_1, 2, 2, 1, 1);

        comboBoxFuelTank_8 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_8->setObjectName("comboBoxFuelTank_8");

        gridLayout->addWidget(comboBoxFuelTank_8, 9, 2, 1, 1);

        labelTrunk = new QLabel(DialogMass);
        labelTrunk->setObjectName("labelTrunk");
        labelTrunk->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTrunk, 11, 0, 1, 1);

        comboBoxCabin = new ComboUnitsMass(DialogMass);
        comboBoxCabin->setObjectName("comboBoxCabin");

        gridLayout->addWidget(comboBoxCabin, 10, 2, 1, 1);

        comboBoxFuelTank_4 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_4->setObjectName("comboBoxFuelTank_4");

        gridLayout->addWidget(comboBoxFuelTank_4, 5, 2, 1, 1);

        spinBoxPilot_2 = new QDoubleSpinBox(DialogMass);
        spinBoxPilot_2->setObjectName("spinBoxPilot_2");
        spinBoxPilot_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxPilot_2, 1, 1, 1, 1);

        labelFuelTank_8 = new QLabel(DialogMass);
        labelFuelTank_8->setObjectName("labelFuelTank_8");
        labelFuelTank_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_8, 9, 0, 1, 1);

        spinBoxFuelTank_7 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_7->setObjectName("spinBoxFuelTank_7");
        spinBoxFuelTank_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_7, 8, 1, 1, 1);

        spinBoxFuelTank_5 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_5->setObjectName("spinBoxFuelTank_5");
        spinBoxFuelTank_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_5, 6, 1, 1, 1);

        labelFuelTank_5 = new QLabel(DialogMass);
        labelFuelTank_5->setObjectName("labelFuelTank_5");
        labelFuelTank_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_5, 6, 0, 1, 1);

        comboBoxTotal = new ComboUnitsMass(DialogMass);
        comboBoxTotal->setObjectName("comboBoxTotal");

        gridLayout->addWidget(comboBoxTotal, 15, 2, 1, 1);

        buttonBox = new QDialogButtonBox(DialogMass);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 17, 0, 1, 3);

        comboBoxMTOW = new ComboUnitsMass(DialogMass);
        comboBoxMTOW->setObjectName("comboBoxMTOW");

        gridLayout->addWidget(comboBoxMTOW, 14, 2, 1, 1);

        labelFuelTank_4 = new QLabel(DialogMass);
        labelFuelTank_4->setObjectName("labelFuelTank_4");
        labelFuelTank_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_4, 5, 0, 1, 1);

        labelCabin = new QLabel(DialogMass);
        labelCabin->setObjectName("labelCabin");
        labelCabin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCabin, 10, 0, 1, 1);

        labelFuelTank_6 = new QLabel(DialogMass);
        labelFuelTank_6->setObjectName("labelFuelTank_6");
        labelFuelTank_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_6, 7, 0, 1, 1);

        spinBoxTrunk = new QDoubleSpinBox(DialogMass);
        spinBoxTrunk->setObjectName("spinBoxTrunk");
        spinBoxTrunk->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxTrunk, 11, 1, 1, 1);

        comboBoxTrunk = new ComboUnitsMass(DialogMass);
        comboBoxTrunk->setObjectName("comboBoxTrunk");

        gridLayout->addWidget(comboBoxTrunk, 11, 2, 1, 1);

        labelFuelTank_2 = new QLabel(DialogMass);
        labelFuelTank_2->setObjectName("labelFuelTank_2");
        labelFuelTank_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_2, 3, 0, 1, 1);

        labelPilot_1 = new QLabel(DialogMass);
        labelPilot_1->setObjectName("labelPilot_1");
        labelPilot_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPilot_1, 0, 0, 1, 1);

        comboBoxFuelTank_3 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_3->setObjectName("comboBoxFuelTank_3");

        gridLayout->addWidget(comboBoxFuelTank_3, 4, 2, 1, 1);

        spinBoxFuelTank_3 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_3->setObjectName("spinBoxFuelTank_3");
        spinBoxFuelTank_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_3, 4, 1, 1, 1);

        line = new QFrame(DialogMass);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 13, 0, 1, 3);

        comboBoxFuelTank_5 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_5->setObjectName("comboBoxFuelTank_5");

        gridLayout->addWidget(comboBoxFuelTank_5, 6, 2, 1, 1);

        spinBoxFuelTank_6 = new QDoubleSpinBox(DialogMass);
        spinBoxFuelTank_6->setObjectName("spinBoxFuelTank_6");
        spinBoxFuelTank_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxFuelTank_6, 7, 1, 1, 1);

        comboBoxFuelTank_7 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_7->setObjectName("comboBoxFuelTank_7");

        gridLayout->addWidget(comboBoxFuelTank_7, 8, 2, 1, 1);

        comboBoxFuelTank_2 = new ComboUnitsMass(DialogMass);
        comboBoxFuelTank_2->setObjectName("comboBoxFuelTank_2");

        gridLayout->addWidget(comboBoxFuelTank_2, 3, 2, 1, 1);

        spinBoxTotal = new SpinBoxHighlight(DialogMass);
        spinBoxTotal->setObjectName("spinBoxTotal");
        spinBoxTotal->setFont(font);
        spinBoxTotal->setFocusPolicy(Qt::NoFocus);
        spinBoxTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxTotal->setReadOnly(true);
        spinBoxTotal->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxTotal->setMaximum(999999.000000000000000);

        gridLayout->addWidget(spinBoxTotal, 15, 1, 1, 1);

        comboBoxPilot_1 = new ComboUnitsMass(DialogMass);
        comboBoxPilot_1->setObjectName("comboBoxPilot_1");

        gridLayout->addWidget(comboBoxPilot_1, 0, 2, 1, 1);

        spinBoxPilot_1 = new QDoubleSpinBox(DialogMass);
        spinBoxPilot_1->setObjectName("spinBoxPilot_1");
        spinBoxPilot_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxPilot_1, 0, 1, 1, 1);

        label = new QLabel(DialogMass);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 14, 0, 1, 1);

        spinBoxCabin = new QDoubleSpinBox(DialogMass);
        spinBoxCabin->setObjectName("spinBoxCabin");
        spinBoxCabin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxCabin, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(375, 78, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 3);

        labelFuelTank_7 = new QLabel(DialogMass);
        labelFuelTank_7->setObjectName("labelFuelTank_7");
        labelFuelTank_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_7, 8, 0, 1, 1);

        labelFuelTank_1 = new QLabel(DialogMass);
        labelFuelTank_1->setObjectName("labelFuelTank_1");
        labelFuelTank_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelFuelTank_1, 2, 0, 1, 1);

        comboBoxSlung = new ComboUnitsMass(DialogMass);
        comboBoxSlung->setObjectName("comboBoxSlung");

        gridLayout->addWidget(comboBoxSlung, 12, 2, 1, 1);

        spinBoxSlung = new QDoubleSpinBox(DialogMass);
        spinBoxSlung->setObjectName("spinBoxSlung");
        spinBoxSlung->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBoxSlung, 12, 1, 1, 1);

        labelSlung = new QLabel(DialogMass);
        labelSlung->setObjectName("labelSlung");
        labelSlung->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSlung, 12, 0, 1, 1);

#if QT_CONFIG(shortcut)
        labelFuelTank_3->setBuddy(spinBoxFuelTank_3);
        labelPilot_2->setBuddy(spinBoxPilot_2);
        labelTrunk->setBuddy(spinBoxTrunk);
        labelFuelTank_8->setBuddy(spinBoxFuelTank_8);
        labelFuelTank_5->setBuddy(spinBoxFuelTank_5);
        labelFuelTank_4->setBuddy(spinBoxFuelTank_4);
        labelCabin->setBuddy(spinBoxCabin);
        labelFuelTank_6->setBuddy(spinBoxFuelTank_6);
        labelFuelTank_2->setBuddy(spinBoxFuelTank_2);
        labelPilot_1->setBuddy(spinBoxPilot_1);
        labelFuelTank_7->setBuddy(spinBoxFuelTank_7);
        labelFuelTank_1->setBuddy(spinBoxFuelTank_1);
        labelSlung->setBuddy(spinBoxSlung);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(spinBoxPilot_1, comboBoxPilot_1);
        QWidget::setTabOrder(comboBoxPilot_1, spinBoxPilot_2);
        QWidget::setTabOrder(spinBoxPilot_2, comboBoxPilot_2);
        QWidget::setTabOrder(comboBoxPilot_2, spinBoxFuelTank_1);
        QWidget::setTabOrder(spinBoxFuelTank_1, comboBoxFuelTank_1);
        QWidget::setTabOrder(comboBoxFuelTank_1, spinBoxFuelTank_2);
        QWidget::setTabOrder(spinBoxFuelTank_2, comboBoxFuelTank_2);
        QWidget::setTabOrder(comboBoxFuelTank_2, spinBoxFuelTank_3);
        QWidget::setTabOrder(spinBoxFuelTank_3, comboBoxFuelTank_3);
        QWidget::setTabOrder(comboBoxFuelTank_3, spinBoxFuelTank_4);
        QWidget::setTabOrder(spinBoxFuelTank_4, comboBoxFuelTank_4);
        QWidget::setTabOrder(comboBoxFuelTank_4, spinBoxFuelTank_5);
        QWidget::setTabOrder(spinBoxFuelTank_5, comboBoxFuelTank_5);
        QWidget::setTabOrder(comboBoxFuelTank_5, spinBoxFuelTank_6);
        QWidget::setTabOrder(spinBoxFuelTank_6, comboBoxFuelTank_6);
        QWidget::setTabOrder(comboBoxFuelTank_6, spinBoxFuelTank_7);
        QWidget::setTabOrder(spinBoxFuelTank_7, comboBoxFuelTank_7);
        QWidget::setTabOrder(comboBoxFuelTank_7, spinBoxFuelTank_8);
        QWidget::setTabOrder(spinBoxFuelTank_8, comboBoxFuelTank_8);
        QWidget::setTabOrder(comboBoxFuelTank_8, spinBoxCabin);
        QWidget::setTabOrder(spinBoxCabin, comboBoxCabin);
        QWidget::setTabOrder(comboBoxCabin, spinBoxTrunk);
        QWidget::setTabOrder(spinBoxTrunk, comboBoxTrunk);
        QWidget::setTabOrder(comboBoxTrunk, spinBoxSlung);
        QWidget::setTabOrder(spinBoxSlung, comboBoxSlung);
        QWidget::setTabOrder(comboBoxSlung, comboBoxMTOW);
        QWidget::setTabOrder(comboBoxMTOW, comboBoxTotal);

        retranslateUi(DialogMass);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogMass, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogMass, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogMass);
    } // setupUi

    void retranslateUi(QDialog *DialogMass)
    {
        DialogMass->setWindowTitle(QCoreApplication::translate("DialogMass", "Fuel and Payload", nullptr));
        labelTotal->setText(QCoreApplication::translate("DialogMass", "Total:", nullptr));
        labelFuelTank_3->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 3:", nullptr));
        labelPilot_2->setText(QCoreApplication::translate("DialogMass", "Pilot 2:", nullptr));
        labelTrunk->setText(QCoreApplication::translate("DialogMass", "Cargo Trunk:", nullptr));
        labelFuelTank_8->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 8:", nullptr));
        labelFuelTank_5->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 5:", nullptr));
        labelFuelTank_4->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 4:", nullptr));
        labelCabin->setText(QCoreApplication::translate("DialogMass", "Cabin:", nullptr));
        labelFuelTank_6->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 6:", nullptr));
        labelFuelTank_2->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 2:", nullptr));
        labelPilot_1->setText(QCoreApplication::translate("DialogMass", "Pilot 1:", nullptr));
        label->setText(QCoreApplication::translate("DialogMass", "MTOW:", nullptr));
        labelFuelTank_7->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 7:", nullptr));
        labelFuelTank_1->setText(QCoreApplication::translate("DialogMass", "Fuel Tank 1:", nullptr));
        labelSlung->setText(QCoreApplication::translate("DialogMass", "Slung:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMass: public Ui_DialogMass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMASS_H
