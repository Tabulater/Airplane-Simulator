/********************************************************************************
** Form generated from reading UI file 'DockWidgetMap.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETMAP_H
#define UI_DOCKWIDGETMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "gui/WidgetMap.h"

QT_BEGIN_NAMESPACE

class Ui_DockWidgetMap
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    WidgetMap *widgetMap;
    QWidget *widgetBar;
    QGridLayout *gridLayout_2;
    QLabel *labelBar;

    void setupUi(QDockWidget *DockWidgetMap)
    {
        if (DockWidgetMap->objectName().isEmpty())
            DockWidgetMap->setObjectName("DockWidgetMap");
        DockWidgetMap->resize(613, 464);
        DockWidgetMap->setMinimumSize(QSize(206, 70));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetMap = new WidgetMap(dockWidgetContents);
        widgetMap->setObjectName("widgetMap");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetMap->sizePolicy().hasHeightForWidth());
        widgetMap->setSizePolicy(sizePolicy);
        widgetMap->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(widgetMap, 0, 0, 1, 1);

        widgetBar = new QWidget(dockWidgetContents);
        widgetBar->setObjectName("widgetBar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetBar->sizePolicy().hasHeightForWidth());
        widgetBar->setSizePolicy(sizePolicy1);
        widgetBar->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(widgetBar);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        labelBar = new QLabel(widgetBar);
        labelBar->setObjectName("labelBar");
        labelBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelBar, 0, 0, 1, 1);


        gridLayout->addWidget(widgetBar, 1, 0, 1, 1);

        DockWidgetMap->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetMap);

        QMetaObject::connectSlotsByName(DockWidgetMap);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetMap)
    {
        DockWidgetMap->setWindowTitle(QCoreApplication::translate("DockWidgetMap", "Map", nullptr));
        labelBar->setText(QCoreApplication::translate("DockWidgetMap", "0\302\27200'00.00\"N 0\302\27200'00.00\"E", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetMap: public Ui_DockWidgetMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETMAP_H
