/********************************************************************************
** Form generated from reading UI file 'WidgetPFD.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETPFD_H
#define UI_WIDGETPFD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "gui/WidgetGDU.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetPFD
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    WidgetGDU *widgetPFD;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetPFD)
    {
        if (WidgetPFD->objectName().isEmpty())
            WidgetPFD->setObjectName("WidgetPFD");
        WidgetPFD->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/gui/images/icon.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        WidgetPFD->setWindowIcon(icon);
        WidgetPFD->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(WidgetPFD);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(WidgetPFD);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1114, 734));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        widgetPFD = new WidgetGDU(scrollAreaWidgetContents);
        widgetPFD->setObjectName("widgetPFD");
        widgetPFD->setMinimumSize(QSize(1100, 720));
        widgetPFD->setMaximumSize(QSize(1100, 720));

        gridLayout_2->addWidget(widgetPFD, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(3, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(WidgetPFD);

        QMetaObject::connectSlotsByName(WidgetPFD);
    } // setupUi

    void retranslateUi(QWidget *WidgetPFD)
    {
        WidgetPFD->setWindowTitle(QCoreApplication::translate("WidgetPFD", "PFD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetPFD: public Ui_WidgetPFD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETPFD_H
