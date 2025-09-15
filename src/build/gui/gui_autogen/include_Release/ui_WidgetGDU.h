/********************************************************************************
** Form generated from reading UI file 'WidgetGDU.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETGDU_H
#define UI_WIDGETGDU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "gui/WidgetCGI.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGDU
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    WidgetCGI *widgetCGI;
    QWidget *widgetBottom;
    QPushButton *buttonKeySoft_11;
    QPushButton *buttonKeySoft_10;
    QPushButton *buttonKeySoft_09;
    QPushButton *buttonKeySoft_02;
    QPushButton *buttonKeySoft_08;
    QPushButton *buttonKeySoft_04;
    QPushButton *buttonKeySoft_06;
    QPushButton *buttonKeySoft_03;
    QPushButton *buttonKeySoft_07;
    QPushButton *buttonKeySoft_01;
    QPushButton *buttonKeySoft_05;
    QPushButton *buttonKeySoft_12;
    QWidget *widgetRight;
    QPushButton *buttonKnob_RANGE;
    QPushButton *buttonKnob_CRS;
    QPushButton *buttonKnob_Vol_COM;
    QPushButton *buttonKnob_COM;
    QPushButton *buttonKey_COM;
    QPushButton *buttonKnob_FMS;
    QPushButton *buttonKey_FMS_DEST;
    QPushButton *buttonKey_FMS_FPL;
    QPushButton *buttonKey_FMS_ENT;
    QPushButton *buttonKey_FMS_PROC;
    QPushButton *buttonKey_FMS_MENU;
    QPushButton *buttonKey_FMS_CLR;
    QWidget *widgetLeft;
    QPushButton *buttonKnob_ALT;
    QPushButton *buttonKnob_Vol_NAV;
    QPushButton *buttonKnob_HDG;
    QPushButton *buttonKey_NAV;
    QPushButton *buttonKnob_NAV;
    QPushButton *buttonKey_AP_AP;
    QPushButton *buttonKey_AP_FD;
    QPushButton *buttonKey_AP_HDG;
    QPushButton *buttonKey_AP_ALT;
    QPushButton *buttonKey_AP_NAV;
    QPushButton *buttonKey_AP_VNV;
    QPushButton *buttonKey_AP_APR;
    QPushButton *buttonKey_AP_BC;
    QPushButton *buttonKey_AP_VS;
    QPushButton *buttonKey_AP_UP;
    QPushButton *buttonKey_AP_FLC;
    QPushButton *buttonKey_AP_DN;

    void setupUi(QWidget *WidgetGDU)
    {
        if (WidgetGDU->objectName().isEmpty())
            WidgetGDU->setObjectName("WidgetGDU");
        WidgetGDU->resize(1100, 720);
        WidgetGDU->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(WidgetGDU);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(WidgetGDU);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("#frame\n"
"{\n"
"	border-image:url(:/gui/images/g1000/background.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widgetCGI = new WidgetCGI(frame);
        widgetCGI->setObjectName("widgetCGI");
        widgetCGI->setGeometry(QRect(150, 45, 800, 600));
        widgetCGI->setMinimumSize(QSize(800, 600));
        widgetCGI->setMaximumSize(QSize(800, 600));
        widgetCGI->setStyleSheet(QString::fromUtf8("#widgetCGI\n"
"{\n"
"	background-color: #000;\n"
"	/* border-radius: 10px; */\n"
"}"));
        widgetBottom = new QWidget(frame);
        widgetBottom->setObjectName("widgetBottom");
        widgetBottom->setGeometry(QRect(150, 650, 800, 70));
        widgetBottom->setMinimumSize(QSize(800, 0));
        widgetBottom->setMaximumSize(QSize(800, 16777215));
        widgetBottom->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_soft.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_soft.png);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	border-image:url(:/gui/images/g1000/line.png);\n"
"}"));
        buttonKeySoft_11 = new QPushButton(widgetBottom);
        buttonKeySoft_11->setObjectName("buttonKeySoft_11");
        buttonKeySoft_11->setGeometry(QRect(675, 17, 44, 29));
        buttonKeySoft_11->setMinimumSize(QSize(44, 29));
        buttonKeySoft_11->setMaximumSize(QSize(44, 29));
        buttonKeySoft_11->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_10 = new QPushButton(widgetBottom);
        buttonKeySoft_10->setObjectName("buttonKeySoft_10");
        buttonKeySoft_10->setGeometry(QRect(609, 17, 44, 29));
        buttonKeySoft_10->setMinimumSize(QSize(44, 29));
        buttonKeySoft_10->setMaximumSize(QSize(44, 29));
        buttonKeySoft_10->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_09 = new QPushButton(widgetBottom);
        buttonKeySoft_09->setObjectName("buttonKeySoft_09");
        buttonKeySoft_09->setGeometry(QRect(542, 17, 44, 29));
        buttonKeySoft_09->setMinimumSize(QSize(44, 29));
        buttonKeySoft_09->setMaximumSize(QSize(44, 29));
        buttonKeySoft_09->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_02 = new QPushButton(widgetBottom);
        buttonKeySoft_02->setObjectName("buttonKeySoft_02");
        buttonKeySoft_02->setGeometry(QRect(80, 17, 44, 29));
        buttonKeySoft_02->setMinimumSize(QSize(44, 29));
        buttonKeySoft_02->setMaximumSize(QSize(44, 29));
        buttonKeySoft_02->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_08 = new QPushButton(widgetBottom);
        buttonKeySoft_08->setObjectName("buttonKeySoft_08");
        buttonKeySoft_08->setGeometry(QRect(476, 17, 44, 29));
        buttonKeySoft_08->setMinimumSize(QSize(44, 29));
        buttonKeySoft_08->setMaximumSize(QSize(44, 29));
        buttonKeySoft_08->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_04 = new QPushButton(widgetBottom);
        buttonKeySoft_04->setObjectName("buttonKeySoft_04");
        buttonKeySoft_04->setGeometry(QRect(212, 17, 44, 29));
        buttonKeySoft_04->setMinimumSize(QSize(44, 29));
        buttonKeySoft_04->setMaximumSize(QSize(44, 29));
        buttonKeySoft_04->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_06 = new QPushButton(widgetBottom);
        buttonKeySoft_06->setObjectName("buttonKeySoft_06");
        buttonKeySoft_06->setGeometry(QRect(344, 17, 44, 29));
        buttonKeySoft_06->setMinimumSize(QSize(44, 29));
        buttonKeySoft_06->setMaximumSize(QSize(44, 29));
        buttonKeySoft_06->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_03 = new QPushButton(widgetBottom);
        buttonKeySoft_03->setObjectName("buttonKeySoft_03");
        buttonKeySoft_03->setGeometry(QRect(146, 17, 44, 29));
        buttonKeySoft_03->setMinimumSize(QSize(44, 29));
        buttonKeySoft_03->setMaximumSize(QSize(44, 29));
        buttonKeySoft_03->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_07 = new QPushButton(widgetBottom);
        buttonKeySoft_07->setObjectName("buttonKeySoft_07");
        buttonKeySoft_07->setGeometry(QRect(410, 17, 44, 29));
        buttonKeySoft_07->setMinimumSize(QSize(44, 29));
        buttonKeySoft_07->setMaximumSize(QSize(44, 29));
        buttonKeySoft_07->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_01 = new QPushButton(widgetBottom);
        buttonKeySoft_01->setObjectName("buttonKeySoft_01");
        buttonKeySoft_01->setGeometry(QRect(14, 17, 44, 29));
        buttonKeySoft_01->setMinimumSize(QSize(44, 29));
        buttonKeySoft_01->setMaximumSize(QSize(44, 29));
        buttonKeySoft_01->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_05 = new QPushButton(widgetBottom);
        buttonKeySoft_05->setObjectName("buttonKeySoft_05");
        buttonKeySoft_05->setGeometry(QRect(278, 17, 44, 29));
        buttonKeySoft_05->setMinimumSize(QSize(44, 29));
        buttonKeySoft_05->setMaximumSize(QSize(44, 29));
        buttonKeySoft_05->setStyleSheet(QString::fromUtf8(""));
        buttonKeySoft_12 = new QPushButton(widgetBottom);
        buttonKeySoft_12->setObjectName("buttonKeySoft_12");
        buttonKeySoft_12->setGeometry(QRect(741, 17, 44, 29));
        buttonKeySoft_12->setMinimumSize(QSize(44, 29));
        buttonKeySoft_12->setMaximumSize(QSize(44, 29));
        buttonKeySoft_12->setStyleSheet(QString::fromUtf8(""));
        widgetRight = new QWidget(frame);
        widgetRight->setObjectName("widgetRight");
        widgetRight->setGeometry(QRect(950, 0, 150, 720));
        widgetRight->setStyleSheet(QString::fromUtf8(""));
        buttonKnob_RANGE = new QPushButton(widgetRight);
        buttonKnob_RANGE->setObjectName("buttonKnob_RANGE");
        buttonKnob_RANGE->setGeometry(QRect(60, 392, 41, 41));
        buttonKnob_RANGE->setMinimumSize(QSize(41, 41));
        buttonKnob_RANGE->setMaximumSize(QSize(41, 41));
        buttonKnob_RANGE->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_joy_pan.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_joy_pan.png);\n"
"}"));
        buttonKnob_CRS = new QPushButton(widgetRight);
        buttonKnob_CRS->setObjectName("buttonKnob_CRS");
        buttonKnob_CRS->setGeometry(QRect(52, 266, 57, 57));
        buttonKnob_CRS->setMinimumSize(QSize(57, 57));
        buttonKnob_CRS->setMaximumSize(QSize(57, 57));
        buttonKnob_CRS->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_crs.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_crs.png);\n"
"}"));
        buttonKnob_Vol_COM = new QPushButton(widgetRight);
        buttonKnob_Vol_COM->setObjectName("buttonKnob_Vol_COM");
        buttonKnob_Vol_COM->setGeometry(QRect(64, 35, 33, 33));
        buttonKnob_Vol_COM->setMinimumSize(QSize(33, 33));
        buttonKnob_Vol_COM->setMaximumSize(QSize(33, 33));
        buttonKnob_Vol_COM->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_vol.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_vol.png);\n"
"}"));
        buttonKnob_COM = new QPushButton(widgetRight);
        buttonKnob_COM->setObjectName("buttonKnob_COM");
        buttonKnob_COM->setGeometry(QRect(52, 133, 58, 58));
        buttonKnob_COM->setMinimumSize(QSize(58, 58));
        buttonKnob_COM->setMaximumSize(QSize(58, 58));
        buttonKnob_COM->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_dual.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_dual.png);\n"
"}"));
        buttonKey_COM = new QPushButton(widgetRight);
        buttonKey_COM->setObjectName("buttonKey_COM");
        buttonKey_COM->setGeometry(QRect(22, 79, 44, 29));
        buttonKey_COM->setMinimumSize(QSize(44, 29));
        buttonKey_COM->setMaximumSize(QSize(44, 29));
        buttonKey_COM->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_switch.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_switch.png);\n"
"}"));
        buttonKnob_FMS = new QPushButton(widgetRight);
        buttonKnob_FMS->setObjectName("buttonKnob_FMS");
        buttonKnob_FMS->setGeometry(QRect(52, 630, 58, 58));
        buttonKnob_FMS->setMinimumSize(QSize(58, 58));
        buttonKnob_FMS->setMaximumSize(QSize(58, 58));
        buttonKnob_FMS->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_dual.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_dual.png);\n"
"}"));
        buttonKey_FMS_DEST = new QPushButton(widgetRight);
        buttonKey_FMS_DEST->setObjectName("buttonKey_FMS_DEST");
        buttonKey_FMS_DEST->setGeometry(QRect(33, 482, 44, 29));
        buttonKey_FMS_DEST->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_DEST->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_DEST->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_dest.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_dest.png);\n"
"}"));
        buttonKey_FMS_FPL = new QPushButton(widgetRight);
        buttonKey_FMS_FPL->setObjectName("buttonKey_FMS_FPL");
        buttonKey_FMS_FPL->setGeometry(QRect(33, 523, 44, 29));
        buttonKey_FMS_FPL->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_FPL->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_FPL->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_fpl.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_fpl.png);\n"
"}"));
        buttonKey_FMS_ENT = new QPushButton(widgetRight);
        buttonKey_FMS_ENT->setObjectName("buttonKey_FMS_ENT");
        buttonKey_FMS_ENT->setGeometry(QRect(84, 563, 44, 29));
        buttonKey_FMS_ENT->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_ENT->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_ENT->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_ent.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_ent.png);\n"
"}"));
        buttonKey_FMS_PROC = new QPushButton(widgetRight);
        buttonKey_FMS_PROC->setObjectName("buttonKey_FMS_PROC");
        buttonKey_FMS_PROC->setGeometry(QRect(84, 523, 44, 29));
        buttonKey_FMS_PROC->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_PROC->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_PROC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_proc.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_proc.png);\n"
"}"));
        buttonKey_FMS_MENU = new QPushButton(widgetRight);
        buttonKey_FMS_MENU->setObjectName("buttonKey_FMS_MENU");
        buttonKey_FMS_MENU->setGeometry(QRect(84, 482, 44, 29));
        buttonKey_FMS_MENU->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_MENU->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_MENU->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_menu.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_menu.png);\n"
"}"));
        buttonKey_FMS_CLR = new QPushButton(widgetRight);
        buttonKey_FMS_CLR->setObjectName("buttonKey_FMS_CLR");
        buttonKey_FMS_CLR->setGeometry(QRect(33, 563, 44, 29));
        buttonKey_FMS_CLR->setMinimumSize(QSize(44, 29));
        buttonKey_FMS_CLR->setMaximumSize(QSize(44, 29));
        buttonKey_FMS_CLR->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_clr.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_clr.png);\n"
"}"));
        widgetLeft = new QWidget(frame);
        widgetLeft->setObjectName("widgetLeft");
        widgetLeft->setGeometry(QRect(0, 0, 150, 720));
        widgetLeft->setStyleSheet(QString::fromUtf8(""));
        buttonKnob_ALT = new QPushButton(widgetLeft);
        buttonKnob_ALT->setObjectName("buttonKnob_ALT");
        buttonKnob_ALT->setGeometry(QRect(40, 630, 58, 58));
        buttonKnob_ALT->setMinimumSize(QSize(58, 58));
        buttonKnob_ALT->setMaximumSize(QSize(58, 58));
        buttonKnob_ALT->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_dual.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_dual.png);\n"
"}"));
        buttonKnob_Vol_NAV = new QPushButton(widgetLeft);
        buttonKnob_Vol_NAV->setObjectName("buttonKnob_Vol_NAV");
        buttonKnob_Vol_NAV->setGeometry(QRect(52, 35, 33, 33));
        buttonKnob_Vol_NAV->setMinimumSize(QSize(33, 33));
        buttonKnob_Vol_NAV->setMaximumSize(QSize(33, 33));
        buttonKnob_Vol_NAV->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_vol.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_vol.png);\n"
"}"));
        buttonKnob_HDG = new QPushButton(widgetLeft);
        buttonKnob_HDG->setObjectName("buttonKnob_HDG");
        buttonKnob_HDG->setGeometry(QRect(40, 266, 57, 57));
        buttonKnob_HDG->setMinimumSize(QSize(57, 57));
        buttonKnob_HDG->setMaximumSize(QSize(57, 57));
        buttonKnob_HDG->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_hdg.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_hdg.png);\n"
"}"));
        buttonKey_NAV = new QPushButton(widgetLeft);
        buttonKey_NAV->setObjectName("buttonKey_NAV");
        buttonKey_NAV->setGeometry(QRect(83, 79, 44, 29));
        buttonKey_NAV->setMinimumSize(QSize(44, 29));
        buttonKey_NAV->setMaximumSize(QSize(44, 29));
        buttonKey_NAV->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_switch.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_switch.png);\n"
"}"));
        buttonKnob_NAV = new QPushButton(widgetLeft);
        buttonKnob_NAV->setObjectName("buttonKnob_NAV");
        buttonKnob_NAV->setGeometry(QRect(40, 133, 58, 58));
        buttonKnob_NAV->setMinimumSize(QSize(58, 58));
        buttonKnob_NAV->setMaximumSize(QSize(58, 58));
        buttonKnob_NAV->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_knob_dual.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_knob_dual.png);\n"
"}"));
        buttonKey_AP_AP = new QPushButton(widgetLeft);
        buttonKey_AP_AP->setObjectName("buttonKey_AP_AP");
        buttonKey_AP_AP->setGeometry(QRect(21, 362, 44, 29));
        buttonKey_AP_AP->setMinimumSize(QSize(44, 29));
        buttonKey_AP_AP->setMaximumSize(QSize(44, 29));
        buttonKey_AP_AP->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_ap.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_ap.png);\n"
"}"));
        buttonKey_AP_FD = new QPushButton(widgetLeft);
        buttonKey_AP_FD->setObjectName("buttonKey_AP_FD");
        buttonKey_AP_FD->setGeometry(QRect(72, 362, 44, 29));
        buttonKey_AP_FD->setMinimumSize(QSize(44, 29));
        buttonKey_AP_FD->setMaximumSize(QSize(44, 29));
        buttonKey_AP_FD->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_fd.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_fd.png);\n"
"}"));
        buttonKey_AP_HDG = new QPushButton(widgetLeft);
        buttonKey_AP_HDG->setObjectName("buttonKey_AP_HDG");
        buttonKey_AP_HDG->setGeometry(QRect(21, 402, 44, 29));
        buttonKey_AP_HDG->setMinimumSize(QSize(44, 29));
        buttonKey_AP_HDG->setMaximumSize(QSize(44, 29));
        buttonKey_AP_HDG->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_hdg.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_hdg.png);\n"
"}"));
        buttonKey_AP_ALT = new QPushButton(widgetLeft);
        buttonKey_AP_ALT->setObjectName("buttonKey_AP_ALT");
        buttonKey_AP_ALT->setGeometry(QRect(72, 402, 44, 29));
        buttonKey_AP_ALT->setMinimumSize(QSize(44, 29));
        buttonKey_AP_ALT->setMaximumSize(QSize(44, 29));
        buttonKey_AP_ALT->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_alt.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_alt.png);\n"
"}"));
        buttonKey_AP_NAV = new QPushButton(widgetLeft);
        buttonKey_AP_NAV->setObjectName("buttonKey_AP_NAV");
        buttonKey_AP_NAV->setGeometry(QRect(21, 442, 44, 29));
        buttonKey_AP_NAV->setMinimumSize(QSize(44, 29));
        buttonKey_AP_NAV->setMaximumSize(QSize(44, 29));
        buttonKey_AP_NAV->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_nav.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_nav.png);\n"
"}"));
        buttonKey_AP_VNV = new QPushButton(widgetLeft);
        buttonKey_AP_VNV->setObjectName("buttonKey_AP_VNV");
        buttonKey_AP_VNV->setGeometry(QRect(72, 442, 44, 29));
        buttonKey_AP_VNV->setMinimumSize(QSize(44, 29));
        buttonKey_AP_VNV->setMaximumSize(QSize(44, 29));
        buttonKey_AP_VNV->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_vnv.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_vnv.png);\n"
"}"));
        buttonKey_AP_APR = new QPushButton(widgetLeft);
        buttonKey_AP_APR->setObjectName("buttonKey_AP_APR");
        buttonKey_AP_APR->setGeometry(QRect(21, 482, 44, 29));
        buttonKey_AP_APR->setMinimumSize(QSize(44, 29));
        buttonKey_AP_APR->setMaximumSize(QSize(44, 29));
        buttonKey_AP_APR->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_apr.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_apr.png);\n"
"}"));
        buttonKey_AP_BC = new QPushButton(widgetLeft);
        buttonKey_AP_BC->setObjectName("buttonKey_AP_BC");
        buttonKey_AP_BC->setGeometry(QRect(72, 482, 44, 29));
        buttonKey_AP_BC->setMinimumSize(QSize(44, 29));
        buttonKey_AP_BC->setMaximumSize(QSize(44, 29));
        buttonKey_AP_BC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_bc.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_bc.png);\n"
"}"));
        buttonKey_AP_VS = new QPushButton(widgetLeft);
        buttonKey_AP_VS->setObjectName("buttonKey_AP_VS");
        buttonKey_AP_VS->setGeometry(QRect(21, 523, 44, 29));
        buttonKey_AP_VS->setMinimumSize(QSize(44, 29));
        buttonKey_AP_VS->setMaximumSize(QSize(44, 29));
        buttonKey_AP_VS->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_vs.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_vs.png);\n"
"}"));
        buttonKey_AP_UP = new QPushButton(widgetLeft);
        buttonKey_AP_UP->setObjectName("buttonKey_AP_UP");
        buttonKey_AP_UP->setGeometry(QRect(72, 523, 44, 29));
        buttonKey_AP_UP->setMinimumSize(QSize(44, 29));
        buttonKey_AP_UP->setMaximumSize(QSize(44, 29));
        buttonKey_AP_UP->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_up.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_up.png);\n"
"}"));
        buttonKey_AP_FLC = new QPushButton(widgetLeft);
        buttonKey_AP_FLC->setObjectName("buttonKey_AP_FLC");
        buttonKey_AP_FLC->setGeometry(QRect(21, 563, 44, 29));
        buttonKey_AP_FLC->setMinimumSize(QSize(44, 29));
        buttonKey_AP_FLC->setMaximumSize(QSize(44, 29));
        buttonKey_AP_FLC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_flc.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_flc.png);\n"
"}"));
        buttonKey_AP_DN = new QPushButton(widgetLeft);
        buttonKey_AP_DN->setObjectName("buttonKey_AP_DN");
        buttonKey_AP_DN->setGeometry(QRect(72, 563, 44, 29));
        buttonKey_AP_DN->setMinimumSize(QSize(44, 29));
        buttonKey_AP_DN->setMaximumSize(QSize(44, 29));
        buttonKey_AP_DN->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image:url(:/gui/images/g1000/up_btn_dn.png);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	border-image:url(:/gui/images/g1000/dn_btn_dn.png);\n"
"}"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        QWidget::setTabOrder(buttonKnob_Vol_NAV, buttonKey_NAV);
        QWidget::setTabOrder(buttonKey_NAV, buttonKnob_NAV);
        QWidget::setTabOrder(buttonKnob_NAV, buttonKnob_HDG);
        QWidget::setTabOrder(buttonKnob_HDG, buttonKey_AP_AP);
        QWidget::setTabOrder(buttonKey_AP_AP, buttonKey_AP_FD);
        QWidget::setTabOrder(buttonKey_AP_FD, buttonKey_AP_HDG);
        QWidget::setTabOrder(buttonKey_AP_HDG, buttonKey_AP_ALT);
        QWidget::setTabOrder(buttonKey_AP_ALT, buttonKey_AP_NAV);
        QWidget::setTabOrder(buttonKey_AP_NAV, buttonKey_AP_VNV);
        QWidget::setTabOrder(buttonKey_AP_VNV, buttonKey_AP_APR);
        QWidget::setTabOrder(buttonKey_AP_APR, buttonKey_AP_BC);
        QWidget::setTabOrder(buttonKey_AP_BC, buttonKey_AP_VS);
        QWidget::setTabOrder(buttonKey_AP_VS, buttonKey_AP_UP);
        QWidget::setTabOrder(buttonKey_AP_UP, buttonKey_AP_FLC);
        QWidget::setTabOrder(buttonKey_AP_FLC, buttonKey_AP_DN);
        QWidget::setTabOrder(buttonKey_AP_DN, buttonKnob_ALT);
        QWidget::setTabOrder(buttonKnob_ALT, buttonKnob_Vol_COM);
        QWidget::setTabOrder(buttonKnob_Vol_COM, buttonKey_COM);
        QWidget::setTabOrder(buttonKey_COM, buttonKnob_COM);
        QWidget::setTabOrder(buttonKnob_COM, buttonKnob_CRS);
        QWidget::setTabOrder(buttonKnob_CRS, buttonKnob_FMS);

        retranslateUi(WidgetGDU);

        QMetaObject::connectSlotsByName(WidgetGDU);
    } // setupUi

    void retranslateUi(QWidget *WidgetGDU)
    {
        WidgetGDU->setWindowTitle(QCoreApplication::translate("WidgetGDU", "Form", nullptr));
#if QT_CONFIG(tooltip)
        buttonKeySoft_11->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 11", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_11->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_10->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 10", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_10->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_09->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 9", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_09->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_02->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 2", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_02->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_08->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 8", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_08->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_04->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 4", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_04->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_06->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 6", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_06->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_03->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 3", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_03->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_07->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 7", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_07->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_01->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 1", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_01->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_05->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 5", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_05->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKeySoft_12->setToolTip(QCoreApplication::translate("WidgetGDU", "Soft Key 12", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKeySoft_12->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_RANGE->setToolTip(QCoreApplication::translate("WidgetGDU", "Joystick", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_RANGE->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_CRS->setToolTip(QCoreApplication::translate("WidgetGDU", "CRS/BARO Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_CRS->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_Vol_COM->setToolTip(QCoreApplication::translate("WidgetGDU", "COM VOL/SQ Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_Vol_COM->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_COM->setToolTip(QCoreApplication::translate("WidgetGDU", "Dual COM Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_COM->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_COM->setToolTip(QCoreApplication::translate("WidgetGDU", "COM Frequency Transfer Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_COM->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_FMS->setToolTip(QCoreApplication::translate("WidgetGDU", "Dual FMS Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_FMS->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_DEST->setToolTip(QCoreApplication::translate("WidgetGDU", "Direct-to Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_DEST->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_FPL->setToolTip(QCoreApplication::translate("WidgetGDU", "FPL Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_FPL->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_ENT->setToolTip(QCoreApplication::translate("WidgetGDU", "ENT Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_ENT->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_PROC->setToolTip(QCoreApplication::translate("WidgetGDU", "PROC Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_PROC->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_MENU->setToolTip(QCoreApplication::translate("WidgetGDU", "MENU Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_MENU->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_FMS_CLR->setToolTip(QCoreApplication::translate("WidgetGDU", "CLR Key (DFLT MAP)", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_FMS_CLR->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_ALT->setToolTip(QCoreApplication::translate("WidgetGDU", "Dual ALT Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_ALT->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_Vol_NAV->setToolTip(QCoreApplication::translate("WidgetGDU", "NAV VOL/ID Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_Vol_NAV->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_HDG->setToolTip(QCoreApplication::translate("WidgetGDU", "Heading Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_HDG->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_NAV->setToolTip(QCoreApplication::translate("WidgetGDU", "NAV Frequency Transfer Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_NAV->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKnob_NAV->setToolTip(QCoreApplication::translate("WidgetGDU", "Dual NAV Knob", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKnob_NAV->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_AP->setToolTip(QCoreApplication::translate("WidgetGDU", "AP Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_AP->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_FD->setToolTip(QCoreApplication::translate("WidgetGDU", "FD Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_FD->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_HDG->setToolTip(QCoreApplication::translate("WidgetGDU", "HDG Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_HDG->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_ALT->setToolTip(QCoreApplication::translate("WidgetGDU", "ALT Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_ALT->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_NAV->setToolTip(QCoreApplication::translate("WidgetGDU", "NAV Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_NAV->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_VNV->setToolTip(QCoreApplication::translate("WidgetGDU", "VNV Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_VNV->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_APR->setToolTip(QCoreApplication::translate("WidgetGDU", "APR Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_APR->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_BC->setToolTip(QCoreApplication::translate("WidgetGDU", "BC Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_BC->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_VS->setToolTip(QCoreApplication::translate("WidgetGDU", "VS Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_VS->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_UP->setToolTip(QCoreApplication::translate("WidgetGDU", "NOSE UP Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_UP->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_FLC->setToolTip(QCoreApplication::translate("WidgetGDU", "FLC Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_FLC->setText(QString());
#if QT_CONFIG(tooltip)
        buttonKey_AP_DN->setToolTip(QCoreApplication::translate("WidgetGDU", "NOSE DN Key", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKey_AP_DN->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WidgetGDU: public Ui_WidgetGDU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGDU_H
