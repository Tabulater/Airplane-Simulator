/********************************************************************************
** Form generated from reading UI file 'PageGeneral.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEGENERAL_H
#define UI_PAGEGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "gui/ComboUnitsLength.h"
#include "gui/ComboUnitsVelocity.h"

QT_BEGIN_NAMESPACE

class Ui_PageGeneral
{
public:
    QGridLayout *gridLayout;
    QFrame *line_2;
    QLabel *labelHudAltitude;
    ComboUnitsLength *comboBoxHudAltitude;
    ComboUnitsVelocity *comboBoxHudVelocity;
    QFrame *line_1;
    QLabel *labelHudVelocity;
    QPushButton *pushButtonHudColor;
    QLabel *labelHudColor;
    QSpacerItem *verticalSpacer;
    QSlider *sliderHudOpacity;
    QLabel *labelHudOpacity;
    QFrame *frameHudColor;
    QCheckBox *checkBoxWidescreen;
    QLabel *label;
    QSlider *sliderSoundVol;

    void setupUi(QWidget *PageGeneral)
    {
        if (PageGeneral->objectName().isEmpty())
            PageGeneral->setObjectName("PageGeneral");
        PageGeneral->resize(400, 300);
        gridLayout = new QGridLayout(PageGeneral);
        gridLayout->setObjectName("gridLayout");
        line_2 = new QFrame(PageGeneral);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 6, 0, 1, 3);

        labelHudAltitude = new QLabel(PageGeneral);
        labelHudAltitude->setObjectName("labelHudAltitude");
        labelHudAltitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHudAltitude, 2, 0, 1, 1);

        comboBoxHudAltitude = new ComboUnitsLength(PageGeneral);
        comboBoxHudAltitude->setObjectName("comboBoxHudAltitude");

        gridLayout->addWidget(comboBoxHudAltitude, 2, 1, 1, 2);

        comboBoxHudVelocity = new ComboUnitsVelocity(PageGeneral);
        comboBoxHudVelocity->setObjectName("comboBoxHudVelocity");

        gridLayout->addWidget(comboBoxHudVelocity, 3, 1, 1, 2);

        line_1 = new QFrame(PageGeneral);
        line_1->setObjectName("line_1");
        line_1->setFrameShape(QFrame::Shape::HLine);
        line_1->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_1, 4, 0, 1, 3);

        labelHudVelocity = new QLabel(PageGeneral);
        labelHudVelocity->setObjectName("labelHudVelocity");
        labelHudVelocity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHudVelocity, 3, 0, 1, 1);

        pushButtonHudColor = new QPushButton(PageGeneral);
        pushButtonHudColor->setObjectName("pushButtonHudColor");

        gridLayout->addWidget(pushButtonHudColor, 0, 2, 1, 1);

        labelHudColor = new QLabel(PageGeneral);
        labelHudColor->setObjectName("labelHudColor");
        labelHudColor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHudColor, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 230, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 3);

        sliderHudOpacity = new QSlider(PageGeneral);
        sliderHudOpacity->setObjectName("sliderHudOpacity");
        sliderHudOpacity->setMaximum(100);
        sliderHudOpacity->setValue(100);
        sliderHudOpacity->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderHudOpacity, 1, 1, 1, 2);

        labelHudOpacity = new QLabel(PageGeneral);
        labelHudOpacity->setObjectName("labelHudOpacity");
        labelHudOpacity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelHudOpacity, 1, 0, 1, 1);

        frameHudColor = new QFrame(PageGeneral);
        frameHudColor->setObjectName("frameHudColor");
        frameHudColor->setAutoFillBackground(false);
        frameHudColor->setFrameShape(QFrame::StyledPanel);
        frameHudColor->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameHudColor, 0, 1, 1, 1);

        checkBoxWidescreen = new QCheckBox(PageGeneral);
        checkBoxWidescreen->setObjectName("checkBoxWidescreen");

        gridLayout->addWidget(checkBoxWidescreen, 5, 0, 1, 3);

        label = new QLabel(PageGeneral);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 7, 0, 1, 1);

        sliderSoundVol = new QSlider(PageGeneral);
        sliderSoundVol->setObjectName("sliderSoundVol");
        sliderSoundVol->setMaximum(100);
        sliderSoundVol->setValue(100);
        sliderSoundVol->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderSoundVol, 7, 1, 1, 2);

#if QT_CONFIG(shortcut)
        labelHudAltitude->setBuddy(comboBoxHudAltitude);
        labelHudVelocity->setBuddy(comboBoxHudVelocity);
        labelHudColor->setBuddy(pushButtonHudColor);
        labelHudOpacity->setBuddy(sliderHudOpacity);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(pushButtonHudColor, sliderHudOpacity);
        QWidget::setTabOrder(sliderHudOpacity, comboBoxHudAltitude);
        QWidget::setTabOrder(comboBoxHudAltitude, comboBoxHudVelocity);
        QWidget::setTabOrder(comboBoxHudVelocity, checkBoxWidescreen);

        retranslateUi(PageGeneral);

        QMetaObject::connectSlotsByName(PageGeneral);
    } // setupUi

    void retranslateUi(QWidget *PageGeneral)
    {
        PageGeneral->setWindowTitle(QCoreApplication::translate("PageGeneral", "General", nullptr));
        labelHudAltitude->setText(QCoreApplication::translate("PageGeneral", "HUD Altitude Unit:", nullptr));
        labelHudVelocity->setText(QCoreApplication::translate("PageGeneral", "HUD Velocity Unit:", nullptr));
        pushButtonHudColor->setText(QCoreApplication::translate("PageGeneral", "Select", nullptr));
        labelHudColor->setText(QCoreApplication::translate("PageGeneral", "HUD Color:", nullptr));
        labelHudOpacity->setText(QCoreApplication::translate("PageGeneral", "HUD Opacity:", nullptr));
        checkBoxWidescreen->setText(QCoreApplication::translate("PageGeneral", "Widescreen dock areas window layout", nullptr));
        label->setText(QCoreApplication::translate("PageGeneral", "Sound Volume:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageGeneral: public Ui_PageGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEGENERAL_H
