/********************************************************************************
** Form generated from reading UI file 'DockWidgetAuto.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETAUTO_H
#define UI_DOCKWIDGETAUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetAuto
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_7;
    QGridLayout *gridLayout_7;
    QLabel *label_NAV;
    QDoubleSpinBox *spinBoxFreqActive;
    QLabel *label_STBY;
    QDoubleSpinBox *spinBoxFreqStandby;
    QPushButton *pushButtonSwitchFreq;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonDN;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonUP;
    QLabel *labelHDG;
    QLabel *labelNAV;
    QLabel *labelNAV_ARM;
    QLabel *labelAPR;
    QLabel *labelAPR_ARM;
    QLabel *labelBC;
    QLabel *labelYD;
    QLabel *labelAP;
    QPushButton *pushButtonHDG;
    QPushButton *pushButtonNAV;
    QPushButton *pushButtonAPR;
    QPushButton *pushButtonBC;
    QPushButton *pushButtonYD;
    QPushButton *pushButtonAP;
    QLabel *labelALT;
    QLabel *labelIAS;
    QLabel *labelFD;
    QLabel *labelSR;
    QLabel *labelHB;
    QLabel *labelTRIM;
    QPushButton *pushButtonALT;
    QPushButton *pushButtonIAS;
    QPushButton *pushButtonFD;
    QPushButton *pushButtonSoftRide;
    QPushButton *pushButtonHalfBank;
    QPushButton *pushButtonTest;
    QSpacerItem *horizontalSpacer_R;
    QSpacerItem *horizontalSpacer_L;
    QFrame *frame_4;
    QGridLayout *gridLayout_6;
    QPushButton *pushButtonShowVS;
    QLabel *labelARM;
    QLabel *labelVS;
    QDoubleSpinBox *spinBoxALT_VS;
    QLabel *label_ALT;
    QLabel *label_VS;
    QPushButton *pushButtonENG;
    QPushButton *pushButtonARM;
    QPushButton *pushButtonShowALT;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSetHDG;
    QPushButton *pushButtonSetCRS;
    QDoubleSpinBox *spinBoxCRS;
    QDoubleSpinBox *spinBoxHDG;
    QButtonGroup *buttonGroupShow;

    void setupUi(QDockWidget *DockWidgetAuto)
    {
        if (DockWidgetAuto->objectName().isEmpty())
            DockWidgetAuto->setObjectName("DockWidgetAuto");
        DockWidgetAuto->resize(718, 316);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(dockWidgetContents);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 716, 289));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 1, 1, 4);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  padding: 4px 4px;\n"
"}"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Plain);
        gridLayout_7 = new QGridLayout(frame_7);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(9, 9, 9, 9);
        label_NAV = new QLabel(frame_7);
        label_NAV->setObjectName("label_NAV");
        QFont font;
        font.setPointSize(8);
        label_NAV->setFont(font);
        label_NAV->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_NAV, 0, 0, 1, 1);

        spinBoxFreqActive = new QDoubleSpinBox(frame_7);
        spinBoxFreqActive->setObjectName("spinBoxFreqActive");
        QFont font1;
        font1.setBold(true);
        spinBoxFreqActive->setFont(font1);
        spinBoxFreqActive->setFocusPolicy(Qt::NoFocus);
        spinBoxFreqActive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxFreqActive->setReadOnly(true);
        spinBoxFreqActive->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxFreqActive->setMinimum(108.000000000000000);
        spinBoxFreqActive->setMaximum(117.950000000000003);

        gridLayout_7->addWidget(spinBoxFreqActive, 0, 1, 1, 1);

        label_STBY = new QLabel(frame_7);
        label_STBY->setObjectName("label_STBY");
        label_STBY->setFont(font);
        label_STBY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_STBY, 1, 0, 1, 1);

        spinBoxFreqStandby = new QDoubleSpinBox(frame_7);
        spinBoxFreqStandby->setObjectName("spinBoxFreqStandby");
        spinBoxFreqStandby->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxFreqStandby->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxFreqStandby->setMinimum(108.000000000000000);
        spinBoxFreqStandby->setMaximum(117.950000000000003);
        spinBoxFreqStandby->setValue(117.950000000000003);

        gridLayout_7->addWidget(spinBoxFreqStandby, 1, 1, 1, 1);

        pushButtonSwitchFreq = new QPushButton(frame_7);
        pushButtonSwitchFreq->setObjectName("pushButtonSwitchFreq");
        pushButtonSwitchFreq->setFont(font);

        gridLayout_7->addWidget(pushButtonSwitchFreq, 0, 2, 2, 1);


        gridLayout_4->addWidget(frame_7, 1, 4, 2, 1);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(9, 9, 9, 9);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  padding: 4px 16px;\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(3, 3, 3, 3);
        pushButtonDN = new QPushButton(widget);
        pushButtonDN->setObjectName("pushButtonDN");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonDN->sizePolicy().hasHeightForWidth());
        pushButtonDN->setSizePolicy(sizePolicy1);
        pushButtonDN->setFont(font);

        gridLayout->addWidget(pushButtonDN, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 45, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        pushButtonUP = new QPushButton(widget);
        pushButtonUP->setObjectName("pushButtonUP");
        sizePolicy1.setHeightForWidth(pushButtonUP->sizePolicy().hasHeightForWidth());
        pushButtonUP->setSizePolicy(sizePolicy1);
        pushButtonUP->setFont(font);

        gridLayout->addWidget(pushButtonUP, 2, 0, 1, 1);


        gridLayout_5->addWidget(widget, 0, 0, 4, 1);

        labelHDG = new QLabel(frame);
        labelHDG->setObjectName("labelHDG");
        labelHDG->setEnabled(false);
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        labelHDG->setFont(font2);
        labelHDG->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelHDG->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelHDG, 0, 1, 1, 1);

        labelNAV = new QLabel(frame);
        labelNAV->setObjectName("labelNAV");
        labelNAV->setEnabled(false);
        labelNAV->setFont(font2);
        labelNAV->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelNAV->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelNAV, 0, 2, 1, 1);

        labelNAV_ARM = new QLabel(frame);
        labelNAV_ARM->setObjectName("labelNAV_ARM");
        labelNAV_ARM->setEnabled(false);
        labelNAV_ARM->setFont(font2);
        labelNAV_ARM->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #fff;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelNAV_ARM->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelNAV_ARM, 0, 3, 1, 1);

        labelAPR = new QLabel(frame);
        labelAPR->setObjectName("labelAPR");
        labelAPR->setEnabled(false);
        labelAPR->setFont(font2);
        labelAPR->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelAPR->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelAPR, 0, 4, 1, 1);

        labelAPR_ARM = new QLabel(frame);
        labelAPR_ARM->setObjectName("labelAPR_ARM");
        labelAPR_ARM->setEnabled(false);
        labelAPR_ARM->setFont(font2);
        labelAPR_ARM->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #fff;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelAPR_ARM->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelAPR_ARM, 0, 5, 1, 1);

        labelBC = new QLabel(frame);
        labelBC->setObjectName("labelBC");
        labelBC->setEnabled(false);
        labelBC->setFont(font2);
        labelBC->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelBC->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelBC, 0, 6, 1, 1);

        labelYD = new QLabel(frame);
        labelYD->setObjectName("labelYD");
        labelYD->setEnabled(false);
        labelYD->setFont(font2);
        labelYD->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelYD->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelYD, 0, 7, 1, 1);

        labelAP = new QLabel(frame);
        labelAP->setObjectName("labelAP");
        labelAP->setEnabled(false);
        labelAP->setFont(font2);
        labelAP->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelAP->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelAP, 0, 8, 1, 1);

        pushButtonHDG = new QPushButton(frame);
        pushButtonHDG->setObjectName("pushButtonHDG");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonHDG->sizePolicy().hasHeightForWidth());
        pushButtonHDG->setSizePolicy(sizePolicy2);
        pushButtonHDG->setMinimumSize(QSize(0, 0));
        pushButtonHDG->setFont(font);

        gridLayout_5->addWidget(pushButtonHDG, 1, 1, 1, 1);

        pushButtonNAV = new QPushButton(frame);
        pushButtonNAV->setObjectName("pushButtonNAV");
        sizePolicy2.setHeightForWidth(pushButtonNAV->sizePolicy().hasHeightForWidth());
        pushButtonNAV->setSizePolicy(sizePolicy2);
        pushButtonNAV->setMinimumSize(QSize(0, 0));
        pushButtonNAV->setFont(font);

        gridLayout_5->addWidget(pushButtonNAV, 1, 2, 1, 2);

        pushButtonAPR = new QPushButton(frame);
        pushButtonAPR->setObjectName("pushButtonAPR");
        sizePolicy2.setHeightForWidth(pushButtonAPR->sizePolicy().hasHeightForWidth());
        pushButtonAPR->setSizePolicy(sizePolicy2);
        pushButtonAPR->setMinimumSize(QSize(0, 0));
        pushButtonAPR->setFont(font);

        gridLayout_5->addWidget(pushButtonAPR, 1, 4, 1, 2);

        pushButtonBC = new QPushButton(frame);
        pushButtonBC->setObjectName("pushButtonBC");
        sizePolicy2.setHeightForWidth(pushButtonBC->sizePolicy().hasHeightForWidth());
        pushButtonBC->setSizePolicy(sizePolicy2);
        pushButtonBC->setMinimumSize(QSize(0, 0));
        pushButtonBC->setFont(font);

        gridLayout_5->addWidget(pushButtonBC, 1, 6, 1, 1);

        pushButtonYD = new QPushButton(frame);
        pushButtonYD->setObjectName("pushButtonYD");
        sizePolicy2.setHeightForWidth(pushButtonYD->sizePolicy().hasHeightForWidth());
        pushButtonYD->setSizePolicy(sizePolicy2);
        pushButtonYD->setMinimumSize(QSize(0, 0));
        pushButtonYD->setFont(font);

        gridLayout_5->addWidget(pushButtonYD, 1, 7, 1, 1);

        pushButtonAP = new QPushButton(frame);
        pushButtonAP->setObjectName("pushButtonAP");
        sizePolicy2.setHeightForWidth(pushButtonAP->sizePolicy().hasHeightForWidth());
        pushButtonAP->setSizePolicy(sizePolicy2);
        pushButtonAP->setMinimumSize(QSize(0, 0));
        pushButtonAP->setFont(font);

        gridLayout_5->addWidget(pushButtonAP, 1, 8, 1, 1);

        labelALT = new QLabel(frame);
        labelALT->setObjectName("labelALT");
        labelALT->setEnabled(false);
        labelALT->setFont(font2);
        labelALT->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelALT->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelALT, 2, 1, 1, 1);

        labelIAS = new QLabel(frame);
        labelIAS->setObjectName("labelIAS");
        labelIAS->setEnabled(false);
        labelIAS->setFont(font2);
        labelIAS->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelIAS->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelIAS, 2, 2, 1, 2);

        labelFD = new QLabel(frame);
        labelFD->setObjectName("labelFD");
        labelFD->setEnabled(false);
        labelFD->setFont(font2);
        labelFD->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelFD->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelFD, 2, 4, 1, 2);

        labelSR = new QLabel(frame);
        labelSR->setObjectName("labelSR");
        labelSR->setEnabled(false);
        labelSR->setFont(font2);
        labelSR->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelSR->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelSR, 2, 6, 1, 1);

        labelHB = new QLabel(frame);
        labelHB->setObjectName("labelHB");
        labelHB->setEnabled(false);
        labelHB->setFont(font2);
        labelHB->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelHB->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelHB, 2, 7, 1, 1);

        labelTRIM = new QLabel(frame);
        labelTRIM->setObjectName("labelTRIM");
        labelTRIM->setEnabled(false);
        labelTRIM->setFont(font2);
        labelTRIM->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelTRIM->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelTRIM, 2, 8, 1, 1);

        pushButtonALT = new QPushButton(frame);
        pushButtonALT->setObjectName("pushButtonALT");
        sizePolicy2.setHeightForWidth(pushButtonALT->sizePolicy().hasHeightForWidth());
        pushButtonALT->setSizePolicy(sizePolicy2);
        pushButtonALT->setMinimumSize(QSize(0, 0));
        pushButtonALT->setFont(font);

        gridLayout_5->addWidget(pushButtonALT, 3, 1, 1, 1);

        pushButtonIAS = new QPushButton(frame);
        pushButtonIAS->setObjectName("pushButtonIAS");
        sizePolicy2.setHeightForWidth(pushButtonIAS->sizePolicy().hasHeightForWidth());
        pushButtonIAS->setSizePolicy(sizePolicy2);
        pushButtonIAS->setMinimumSize(QSize(0, 0));
        pushButtonIAS->setFont(font);

        gridLayout_5->addWidget(pushButtonIAS, 3, 2, 1, 2);

        pushButtonFD = new QPushButton(frame);
        pushButtonFD->setObjectName("pushButtonFD");
        sizePolicy2.setHeightForWidth(pushButtonFD->sizePolicy().hasHeightForWidth());
        pushButtonFD->setSizePolicy(sizePolicy2);
        pushButtonFD->setMinimumSize(QSize(0, 0));
        pushButtonFD->setFont(font);

        gridLayout_5->addWidget(pushButtonFD, 3, 4, 1, 2);

        pushButtonSoftRide = new QPushButton(frame);
        pushButtonSoftRide->setObjectName("pushButtonSoftRide");
        sizePolicy2.setHeightForWidth(pushButtonSoftRide->sizePolicy().hasHeightForWidth());
        pushButtonSoftRide->setSizePolicy(sizePolicy2);
        pushButtonSoftRide->setMinimumSize(QSize(0, 0));
        pushButtonSoftRide->setFont(font);

        gridLayout_5->addWidget(pushButtonSoftRide, 3, 6, 1, 1);

        pushButtonHalfBank = new QPushButton(frame);
        pushButtonHalfBank->setObjectName("pushButtonHalfBank");
        sizePolicy2.setHeightForWidth(pushButtonHalfBank->sizePolicy().hasHeightForWidth());
        pushButtonHalfBank->setSizePolicy(sizePolicy2);
        pushButtonHalfBank->setMinimumSize(QSize(0, 0));
        pushButtonHalfBank->setFont(font);

        gridLayout_5->addWidget(pushButtonHalfBank, 3, 7, 1, 1);

        pushButtonTest = new QPushButton(frame);
        pushButtonTest->setObjectName("pushButtonTest");
        sizePolicy2.setHeightForWidth(pushButtonTest->sizePolicy().hasHeightForWidth());
        pushButtonTest->setSizePolicy(sizePolicy2);
        pushButtonTest->setMinimumSize(QSize(0, 0));
        pushButtonTest->setFont(font);

        gridLayout_5->addWidget(pushButtonTest, 3, 8, 1, 1);


        gridLayout_4->addWidget(frame, 0, 1, 1, 4);

        horizontalSpacer_R = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_R, 0, 5, 1, 1);

        horizontalSpacer_L = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_L, 0, 0, 1, 1);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  padding: 4px 16px;\n"
"}"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        gridLayout_6 = new QGridLayout(frame_4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(9, 9, 9, 9);
        pushButtonShowVS = new QPushButton(frame_4);
        buttonGroupShow = new QButtonGroup(DockWidgetAuto);
        buttonGroupShow->setObjectName("buttonGroupShow");
        buttonGroupShow->addButton(pushButtonShowVS);
        pushButtonShowVS->setObjectName("pushButtonShowVS");
        pushButtonShowVS->setFont(font);
        pushButtonShowVS->setCheckable(true);

        gridLayout_6->addWidget(pushButtonShowVS, 0, 4, 1, 1);

        labelARM = new QLabel(frame_4);
        labelARM->setObjectName("labelARM");
        labelARM->setEnabled(false);
        labelARM->setFont(font2);
        labelARM->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelARM->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelARM, 1, 2, 1, 1);

        labelVS = new QLabel(frame_4);
        labelVS->setObjectName("labelVS");
        labelVS->setEnabled(false);
        labelVS->setFont(font2);
        labelVS->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #000;\n"
"	color: #0f0;\n"
"}\n"
"\n"
"QLabel:disabled \n"
"{\n"
"	color: #666;\n"
"}"));
        labelVS->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelVS, 0, 2, 1, 1);

        spinBoxALT_VS = new QDoubleSpinBox(frame_4);
        spinBoxALT_VS->setObjectName("spinBoxALT_VS");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoxALT_VS->sizePolicy().hasHeightForWidth());
        spinBoxALT_VS->setSizePolicy(sizePolicy3);
        spinBoxALT_VS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxALT_VS->setDecimals(0);
        spinBoxALT_VS->setMinimum(100.000000000000000);
        spinBoxALT_VS->setMaximum(50000.000000000000000);
        spinBoxALT_VS->setSingleStep(100.000000000000000);

        gridLayout_6->addWidget(spinBoxALT_VS, 0, 3, 2, 1);

        label_ALT = new QLabel(frame_4);
        label_ALT->setObjectName("label_ALT");
        label_ALT->setFont(font);
        label_ALT->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_ALT, 1, 1, 1, 1);

        label_VS = new QLabel(frame_4);
        label_VS->setObjectName("label_VS");
        label_VS->setFont(font);
        label_VS->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_VS, 0, 1, 1, 1);

        pushButtonENG = new QPushButton(frame_4);
        pushButtonENG->setObjectName("pushButtonENG");
        pushButtonENG->setFont(font);

        gridLayout_6->addWidget(pushButtonENG, 0, 0, 1, 1);

        pushButtonARM = new QPushButton(frame_4);
        pushButtonARM->setObjectName("pushButtonARM");
        pushButtonARM->setFont(font);

        gridLayout_6->addWidget(pushButtonARM, 1, 0, 1, 1);

        pushButtonShowALT = new QPushButton(frame_4);
        buttonGroupShow->addButton(pushButtonShowALT);
        pushButtonShowALT->setObjectName("pushButtonShowALT");
        pushButtonShowALT->setFont(font);
        pushButtonShowALT->setCheckable(true);
        pushButtonShowALT->setChecked(true);

        gridLayout_6->addWidget(pushButtonShowALT, 1, 4, 1, 1);


        gridLayout_4->addWidget(frame_4, 1, 2, 2, 2);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  padding: 4px 16px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        pushButtonSetHDG = new QPushButton(frame_2);
        pushButtonSetHDG->setObjectName("pushButtonSetHDG");
        pushButtonSetHDG->setFont(font);

        gridLayout_2->addWidget(pushButtonSetHDG, 1, 0, 1, 1);

        pushButtonSetCRS = new QPushButton(frame_2);
        pushButtonSetCRS->setObjectName("pushButtonSetCRS");
        pushButtonSetCRS->setFont(font);

        gridLayout_2->addWidget(pushButtonSetCRS, 0, 0, 1, 1);

        spinBoxCRS = new QDoubleSpinBox(frame_2);
        spinBoxCRS->setObjectName("spinBoxCRS");
        spinBoxCRS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCRS->setDecimals(1);
        spinBoxCRS->setMinimum(-360.000000000000000);
        spinBoxCRS->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(spinBoxCRS, 0, 1, 1, 1);

        spinBoxHDG = new QDoubleSpinBox(frame_2);
        spinBoxHDG->setObjectName("spinBoxHDG");
        spinBoxHDG->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxHDG->setDecimals(1);
        spinBoxHDG->setMinimum(-360.000000000000000);
        spinBoxHDG->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(spinBoxHDG, 1, 1, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 1, 2, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        DockWidgetAuto->setWidget(dockWidgetContents);
#if QT_CONFIG(shortcut)
        label_NAV->setBuddy(spinBoxFreqActive);
        label_STBY->setBuddy(spinBoxFreqStandby);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(scrollArea, pushButtonDN);
        QWidget::setTabOrder(pushButtonDN, pushButtonUP);
        QWidget::setTabOrder(pushButtonUP, pushButtonHDG);
        QWidget::setTabOrder(pushButtonHDG, pushButtonNAV);
        QWidget::setTabOrder(pushButtonNAV, pushButtonAPR);
        QWidget::setTabOrder(pushButtonAPR, pushButtonBC);
        QWidget::setTabOrder(pushButtonBC, pushButtonYD);
        QWidget::setTabOrder(pushButtonYD, pushButtonAP);
        QWidget::setTabOrder(pushButtonAP, pushButtonALT);
        QWidget::setTabOrder(pushButtonALT, pushButtonIAS);
        QWidget::setTabOrder(pushButtonIAS, pushButtonFD);
        QWidget::setTabOrder(pushButtonFD, pushButtonSoftRide);
        QWidget::setTabOrder(pushButtonSoftRide, pushButtonHalfBank);
        QWidget::setTabOrder(pushButtonHalfBank, pushButtonTest);
        QWidget::setTabOrder(pushButtonTest, spinBoxCRS);
        QWidget::setTabOrder(spinBoxCRS, spinBoxHDG);
        QWidget::setTabOrder(spinBoxHDG, pushButtonENG);
        QWidget::setTabOrder(pushButtonENG, pushButtonARM);
        QWidget::setTabOrder(pushButtonARM, spinBoxALT_VS);
        QWidget::setTabOrder(spinBoxALT_VS, pushButtonShowVS);
        QWidget::setTabOrder(pushButtonShowVS, pushButtonShowALT);
        QWidget::setTabOrder(pushButtonShowALT, spinBoxFreqActive);
        QWidget::setTabOrder(spinBoxFreqActive, spinBoxFreqStandby);
        QWidget::setTabOrder(spinBoxFreqStandby, pushButtonSwitchFreq);

        retranslateUi(DockWidgetAuto);

        QMetaObject::connectSlotsByName(DockWidgetAuto);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetAuto)
    {
        DockWidgetAuto->setWindowTitle(QCoreApplication::translate("DockWidgetAuto", "Autopilot", nullptr));
        label_NAV->setText(QCoreApplication::translate("DockWidgetAuto", "NAV", nullptr));
        label_STBY->setText(QCoreApplication::translate("DockWidgetAuto", "STBY", nullptr));
        pushButtonSwitchFreq->setText(QCoreApplication::translate("DockWidgetAuto", "X", nullptr));
        pushButtonDN->setText(QCoreApplication::translate("DockWidgetAuto", "DN", nullptr));
        pushButtonUP->setText(QCoreApplication::translate("DockWidgetAuto", "UP", nullptr));
        labelHDG->setText(QCoreApplication::translate("DockWidgetAuto", "HDG", nullptr));
        labelNAV->setText(QCoreApplication::translate("DockWidgetAuto", "NAV", nullptr));
        labelNAV_ARM->setText(QCoreApplication::translate("DockWidgetAuto", "ARM", nullptr));
        labelAPR->setText(QCoreApplication::translate("DockWidgetAuto", "APR", nullptr));
        labelAPR_ARM->setText(QCoreApplication::translate("DockWidgetAuto", "ARM", nullptr));
        labelBC->setText(QCoreApplication::translate("DockWidgetAuto", "BC", nullptr));
        labelYD->setText(QCoreApplication::translate("DockWidgetAuto", "YD", nullptr));
        labelAP->setText(QCoreApplication::translate("DockWidgetAuto", "AP", nullptr));
        pushButtonHDG->setText(QCoreApplication::translate("DockWidgetAuto", "HDG", nullptr));
        pushButtonNAV->setText(QCoreApplication::translate("DockWidgetAuto", "NAV", nullptr));
        pushButtonAPR->setText(QCoreApplication::translate("DockWidgetAuto", "APR", nullptr));
        pushButtonBC->setText(QCoreApplication::translate("DockWidgetAuto", "BC", nullptr));
        pushButtonYD->setText(QCoreApplication::translate("DockWidgetAuto", "YD", nullptr));
        pushButtonAP->setText(QCoreApplication::translate("DockWidgetAuto", "AP", nullptr));
        labelALT->setText(QCoreApplication::translate("DockWidgetAuto", "ALT", nullptr));
        labelIAS->setText(QCoreApplication::translate("DockWidgetAuto", "IAS", nullptr));
        labelFD->setText(QCoreApplication::translate("DockWidgetAuto", "FD", nullptr));
        labelSR->setText(QCoreApplication::translate("DockWidgetAuto", "SR", nullptr));
        labelHB->setText(QCoreApplication::translate("DockWidgetAuto", "HB", nullptr));
        labelTRIM->setText(QCoreApplication::translate("DockWidgetAuto", "TRIM", nullptr));
        pushButtonALT->setText(QCoreApplication::translate("DockWidgetAuto", "ALT", nullptr));
        pushButtonIAS->setText(QCoreApplication::translate("DockWidgetAuto", "IAS", nullptr));
        pushButtonFD->setText(QCoreApplication::translate("DockWidgetAuto", "FD", nullptr));
        pushButtonSoftRide->setText(QCoreApplication::translate("DockWidgetAuto", "SOFT RIDE", nullptr));
        pushButtonHalfBank->setText(QCoreApplication::translate("DockWidgetAuto", "HALF BANK", nullptr));
        pushButtonTest->setText(QCoreApplication::translate("DockWidgetAuto", "TEST", nullptr));
        pushButtonShowVS->setText(QCoreApplication::translate("DockWidgetAuto", "VS", nullptr));
        labelARM->setText(QCoreApplication::translate("DockWidgetAuto", "ARM", nullptr));
        labelVS->setText(QCoreApplication::translate("DockWidgetAuto", "VS", nullptr));
        label_ALT->setText(QCoreApplication::translate("DockWidgetAuto", "ALT", nullptr));
        label_VS->setText(QCoreApplication::translate("DockWidgetAuto", "VS", nullptr));
        pushButtonENG->setText(QCoreApplication::translate("DockWidgetAuto", "ENG", nullptr));
        pushButtonARM->setText(QCoreApplication::translate("DockWidgetAuto", "ARM", nullptr));
        pushButtonShowALT->setText(QCoreApplication::translate("DockWidgetAuto", "ALT", nullptr));
        pushButtonSetHDG->setText(QCoreApplication::translate("DockWidgetAuto", "HDG", nullptr));
        pushButtonSetCRS->setText(QCoreApplication::translate("DockWidgetAuto", "CRS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetAuto: public Ui_DockWidgetAuto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETAUTO_H
