/********************************************************************************
** Form generated from reading UI file 'DockWidgetEFIS.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETEFIS_H
#define UI_DOCKWIDGETEFIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "gui/GraphicsEADI.h"
#include "gui/GraphicsEHSI.h"
#include "gui/WidgetSquare.h"

QT_BEGIN_NAMESPACE

class Ui_DockWidgetEFIS
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    WidgetSquare *widgetEADI;
    QFrame *frameEADI;
    QGridLayout *gridLayout_3;
    GraphicsEADI *graphicsEADI;
    QGridLayout *gridLayout_2;
    WidgetSquare *widgetEHSI;
    QFrame *frameEHSI;
    QGridLayout *gridLayout_4;
    GraphicsEHSI *graphicsEHSI;

    void setupUi(QDockWidget *DockWidgetEFIS)
    {
        if (DockWidgetEFIS->objectName().isEmpty())
            DockWidgetEFIS->setObjectName("DockWidgetEFIS");
        DockWidgetEFIS->resize(815, 460);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_5 = new QGridLayout(dockWidgetContents);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        widgetEADI = new WidgetSquare(dockWidgetContents);
        widgetEADI->setObjectName("widgetEADI");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(widgetEADI->sizePolicy().hasHeightForWidth());
        widgetEADI->setSizePolicy(sizePolicy);
        widgetEADI->setMinimumSize(QSize(0, 0));
        frameEADI = new QFrame(widgetEADI);
        frameEADI->setObjectName("frameEADI");
        frameEADI->setGeometry(QRect(70, 70, 260, 260));
        frameEADI->setStyleSheet(QString::fromUtf8("#frameEADI\n"
"{\n"
"	background-color: #000;\n"
"	border-radius: 10px;\n"
"}"));
        frameEADI->setFrameShape(QFrame::StyledPanel);
        frameEADI->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frameEADI);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        graphicsEADI = new GraphicsEADI(frameEADI);
        graphicsEADI->setObjectName("graphicsEADI");
        graphicsEADI->setEnabled(false);
        graphicsEADI->setFocusPolicy(Qt::NoFocus);
        graphicsEADI->setFrameShape(QFrame::NoFrame);
        graphicsEADI->setFrameShadow(QFrame::Plain);
        graphicsEADI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEADI->setInteractive(false);
        graphicsEADI->setOptimizationFlags(QGraphicsView::IndirectPainting);

        gridLayout_3->addWidget(graphicsEADI, 0, 0, 1, 1);


        gridLayout->addWidget(widgetEADI, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        widgetEHSI = new WidgetSquare(dockWidgetContents);
        widgetEHSI->setObjectName("widgetEHSI");
        sizePolicy.setHeightForWidth(widgetEHSI->sizePolicy().hasHeightForWidth());
        widgetEHSI->setSizePolicy(sizePolicy);
        widgetEHSI->setMinimumSize(QSize(0, 0));
        frameEHSI = new QFrame(widgetEHSI);
        frameEHSI->setObjectName("frameEHSI");
        frameEHSI->setGeometry(QRect(70, 70, 260, 260));
        frameEHSI->setStyleSheet(QString::fromUtf8("#frameEHSI\n"
"{\n"
"	background-color: #000;\n"
"	border-radius: 10px;\n"
"}"));
        frameEHSI->setFrameShape(QFrame::StyledPanel);
        frameEHSI->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frameEHSI);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        graphicsEHSI = new GraphicsEHSI(frameEHSI);
        graphicsEHSI->setObjectName("graphicsEHSI");
        graphicsEHSI->setEnabled(false);
        graphicsEHSI->setFocusPolicy(Qt::NoFocus);
        graphicsEHSI->setFrameShape(QFrame::NoFrame);
        graphicsEHSI->setFrameShadow(QFrame::Plain);
        graphicsEHSI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEHSI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEHSI->setInteractive(false);
        graphicsEHSI->setOptimizationFlags(QGraphicsView::IndirectPainting);

        gridLayout_4->addWidget(graphicsEHSI, 0, 0, 1, 1);


        gridLayout_2->addWidget(widgetEHSI, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 1, 1, 1);

        DockWidgetEFIS->setWidget(dockWidgetContents);

        retranslateUi(DockWidgetEFIS);

        QMetaObject::connectSlotsByName(DockWidgetEFIS);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetEFIS)
    {
        DockWidgetEFIS->setWindowTitle(QCoreApplication::translate("DockWidgetEFIS", "EFIS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetEFIS: public Ui_DockWidgetEFIS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETEFIS_H
