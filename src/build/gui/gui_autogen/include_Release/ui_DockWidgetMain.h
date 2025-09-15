/********************************************************************************
** Form generated from reading UI file 'DockWidgetMain.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWIDGETMAIN_H
#define UI_DOCKWIDGETMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWidgetMain
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxState;
    QGridLayout *gridLayout;
    QPushButton *buttonStateInpStop;
    QPushButton *buttonStateOutReady;
    QPushButton *buttonStateOutStopped;
    QPushButton *buttonStateInpWork;
    QPushButton *buttonStateOutWorking;
    QPushButton *buttonStateInpIdle;
    QPushButton *buttonStateInpInit;
    QPushButton *buttonStateOutIdle;
    QPushButton *buttonStateOutPaused;
    QPushButton *buttonStateInpPause;
    QGroupBox *groupBoxTime;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *spinFreq;
    QDoubleSpinBox *spinStep;
    QLabel *labelStep;
    QLabel *labelFreq;
    QTimeEdit *timeFlightTime;
    QLabel *labelTime;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBoxFreezes;
    QGridLayout *gridLayout_5;
    QPushButton *buttonFreezePosition;
    QPushButton *buttonFreezeAttitude;
    QPushButton *buttonFreezeVelocity;
    QPushButton *buttonFrozenPosition;
    QPushButton *buttonFrozenAttitude;
    QPushButton *buttonFrozenVelocity;
    QButtonGroup *buttonGroupStateOut;
    QButtonGroup *buttonGroupStateInp;

    void setupUi(QDockWidget *DockWidgetMain)
    {
        if (DockWidgetMain->objectName().isEmpty())
            DockWidgetMain->setObjectName("DockWidgetMain");
        DockWidgetMain->resize(400, 617);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 590));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName("gridLayout_4");
        groupBoxState = new QGroupBox(scrollAreaWidgetContents);
        groupBoxState->setObjectName("groupBoxState");
        gridLayout = new QGridLayout(groupBoxState);
        gridLayout->setObjectName("gridLayout");
        buttonStateInpStop = new QPushButton(groupBoxState);
        buttonGroupStateInp = new QButtonGroup(DockWidgetMain);
        buttonGroupStateInp->setObjectName("buttonGroupStateInp");
        buttonGroupStateInp->addButton(buttonStateInpStop);
        buttonStateInpStop->setObjectName("buttonStateInpStop");
        buttonStateInpStop->setCheckable(true);

        gridLayout->addWidget(buttonStateInpStop, 5, 0, 1, 1);

        buttonStateOutReady = new QPushButton(groupBoxState);
        buttonGroupStateOut = new QButtonGroup(DockWidgetMain);
        buttonGroupStateOut->setObjectName("buttonGroupStateOut");
        buttonGroupStateOut->setExclusive(false);
        buttonGroupStateOut->addButton(buttonStateOutReady);
        buttonStateOutReady->setObjectName("buttonStateOutReady");
        buttonStateOutReady->setEnabled(false);
        buttonStateOutReady->setFocusPolicy(Qt::NoFocus);
        buttonStateOutReady->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonStateOutReady->setCheckable(true);
        buttonStateOutReady->setChecked(false);

        gridLayout->addWidget(buttonStateOutReady, 1, 1, 1, 1);

        buttonStateOutStopped = new QPushButton(groupBoxState);
        buttonGroupStateOut->addButton(buttonStateOutStopped);
        buttonStateOutStopped->setObjectName("buttonStateOutStopped");
        buttonStateOutStopped->setEnabled(false);
        buttonStateOutStopped->setFocusPolicy(Qt::NoFocus);
        buttonStateOutStopped->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonStateOutStopped->setCheckable(true);

        gridLayout->addWidget(buttonStateOutStopped, 5, 1, 1, 1);

        buttonStateInpWork = new QPushButton(groupBoxState);
        buttonGroupStateInp->addButton(buttonStateInpWork);
        buttonStateInpWork->setObjectName("buttonStateInpWork");
        buttonStateInpWork->setCheckable(true);

        gridLayout->addWidget(buttonStateInpWork, 2, 0, 1, 1);

        buttonStateOutWorking = new QPushButton(groupBoxState);
        buttonGroupStateOut->addButton(buttonStateOutWorking);
        buttonStateOutWorking->setObjectName("buttonStateOutWorking");
        buttonStateOutWorking->setEnabled(false);
        buttonStateOutWorking->setFocusPolicy(Qt::NoFocus);
        buttonStateOutWorking->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonStateOutWorking->setCheckable(true);

        gridLayout->addWidget(buttonStateOutWorking, 2, 1, 1, 1);

        buttonStateInpIdle = new QPushButton(groupBoxState);
        buttonGroupStateInp->addButton(buttonStateInpIdle);
        buttonStateInpIdle->setObjectName("buttonStateInpIdle");
        buttonStateInpIdle->setCheckable(true);
        buttonStateInpIdle->setChecked(true);

        gridLayout->addWidget(buttonStateInpIdle, 0, 0, 1, 1);

        buttonStateInpInit = new QPushButton(groupBoxState);
        buttonGroupStateInp->addButton(buttonStateInpInit);
        buttonStateInpInit->setObjectName("buttonStateInpInit");
        buttonStateInpInit->setCheckable(true);

        gridLayout->addWidget(buttonStateInpInit, 1, 0, 1, 1);

        buttonStateOutIdle = new QPushButton(groupBoxState);
        buttonGroupStateOut->addButton(buttonStateOutIdle);
        buttonStateOutIdle->setObjectName("buttonStateOutIdle");
        buttonStateOutIdle->setEnabled(false);
        buttonStateOutIdle->setFocusPolicy(Qt::NoFocus);
        buttonStateOutIdle->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonStateOutIdle->setCheckable(true);
        buttonStateOutIdle->setChecked(true);

        gridLayout->addWidget(buttonStateOutIdle, 0, 1, 1, 1);

        buttonStateOutPaused = new QPushButton(groupBoxState);
        buttonGroupStateOut->addButton(buttonStateOutPaused);
        buttonStateOutPaused->setObjectName("buttonStateOutPaused");
        buttonStateOutPaused->setEnabled(false);
        buttonStateOutPaused->setFocusPolicy(Qt::NoFocus);
        buttonStateOutPaused->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonStateOutPaused->setCheckable(true);

        gridLayout->addWidget(buttonStateOutPaused, 3, 1, 1, 1);

        buttonStateInpPause = new QPushButton(groupBoxState);
        buttonGroupStateInp->addButton(buttonStateInpPause);
        buttonStateInpPause->setObjectName("buttonStateInpPause");
        buttonStateInpPause->setCheckable(true);

        gridLayout->addWidget(buttonStateInpPause, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxState, 1, 0, 1, 1);

        groupBoxTime = new QGroupBox(scrollAreaWidgetContents);
        groupBoxTime->setObjectName("groupBoxTime");
        groupBoxTime->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(groupBoxTime);
        gridLayout_2->setObjectName("gridLayout_2");
        spinFreq = new QDoubleSpinBox(groupBoxTime);
        spinFreq->setObjectName("spinFreq");
        spinFreq->setEnabled(true);
        QFont font;
        font.setBold(true);
        spinFreq->setFont(font);
        spinFreq->setFocusPolicy(Qt::NoFocus);
        spinFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinFreq->setReadOnly(true);
        spinFreq->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinFreq->setDecimals(0);
        spinFreq->setMinimum(-99999.000000000000000);
        spinFreq->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(spinFreq, 2, 1, 1, 1);

        spinStep = new QDoubleSpinBox(groupBoxTime);
        spinStep->setObjectName("spinStep");
        spinStep->setEnabled(true);
        spinStep->setFont(font);
        spinStep->setFocusPolicy(Qt::NoFocus);
        spinStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinStep->setReadOnly(true);
        spinStep->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinStep->setDecimals(0);
        spinStep->setMinimum(-99999.000000000000000);
        spinStep->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(spinStep, 1, 1, 1, 1);

        labelStep = new QLabel(groupBoxTime);
        labelStep->setObjectName("labelStep");
        labelStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelStep, 1, 0, 1, 1);

        labelFreq = new QLabel(groupBoxTime);
        labelFreq->setObjectName("labelFreq");
        labelFreq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelFreq, 2, 0, 1, 1);

        timeFlightTime = new QTimeEdit(groupBoxTime);
        timeFlightTime->setObjectName("timeFlightTime");
        timeFlightTime->setEnabled(true);
        timeFlightTime->setFont(font);
        timeFlightTime->setFocusPolicy(Qt::NoFocus);
        timeFlightTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        timeFlightTime->setReadOnly(true);
        timeFlightTime->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(timeFlightTime, 0, 1, 1, 1);

        labelTime = new QLabel(groupBoxTime);
        labelTime->setObjectName("labelTime");
        labelTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelTime, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBoxTime, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 83, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        groupBoxFreezes = new QGroupBox(scrollAreaWidgetContents);
        groupBoxFreezes->setObjectName("groupBoxFreezes");
        gridLayout_5 = new QGridLayout(groupBoxFreezes);
        gridLayout_5->setObjectName("gridLayout_5");
        buttonFreezePosition = new QPushButton(groupBoxFreezes);
        buttonFreezePosition->setObjectName("buttonFreezePosition");
        buttonFreezePosition->setCheckable(true);

        gridLayout_5->addWidget(buttonFreezePosition, 0, 0, 1, 1);

        buttonFreezeAttitude = new QPushButton(groupBoxFreezes);
        buttonFreezeAttitude->setObjectName("buttonFreezeAttitude");
        buttonFreezeAttitude->setCheckable(true);

        gridLayout_5->addWidget(buttonFreezeAttitude, 1, 0, 1, 1);

        buttonFreezeVelocity = new QPushButton(groupBoxFreezes);
        buttonFreezeVelocity->setObjectName("buttonFreezeVelocity");
        buttonFreezeVelocity->setCheckable(true);

        gridLayout_5->addWidget(buttonFreezeVelocity, 2, 0, 1, 1);

        buttonFrozenPosition = new QPushButton(groupBoxFreezes);
        buttonFrozenPosition->setObjectName("buttonFrozenPosition");
        buttonFrozenPosition->setEnabled(false);
        buttonFrozenPosition->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonFrozenPosition->setCheckable(true);

        gridLayout_5->addWidget(buttonFrozenPosition, 0, 1, 1, 1);

        buttonFrozenAttitude = new QPushButton(groupBoxFreezes);
        buttonFrozenAttitude->setObjectName("buttonFrozenAttitude");
        buttonFrozenAttitude->setEnabled(false);
        buttonFrozenAttitude->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonFrozenAttitude->setCheckable(true);

        gridLayout_5->addWidget(buttonFrozenAttitude, 1, 1, 1, 1);

        buttonFrozenVelocity = new QPushButton(groupBoxFreezes);
        buttonFrozenVelocity->setObjectName("buttonFrozenVelocity");
        buttonFrozenVelocity->setEnabled(false);
        buttonFrozenVelocity->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed\n"
"{\n"
"	background-color: #ff0;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonFrozenVelocity->setCheckable(true);

        gridLayout_5->addWidget(buttonFrozenVelocity, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxFreezes, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        DockWidgetMain->setWidget(dockWidgetContents);
        QWidget::setTabOrder(scrollArea, buttonStateInpIdle);
        QWidget::setTabOrder(buttonStateInpIdle, buttonStateInpInit);
        QWidget::setTabOrder(buttonStateInpInit, buttonStateInpWork);
        QWidget::setTabOrder(buttonStateInpWork, buttonStateInpPause);
        QWidget::setTabOrder(buttonStateInpPause, buttonStateInpStop);

        retranslateUi(DockWidgetMain);
        QObject::connect(buttonFreezePosition, &QPushButton::toggled, buttonFrozenPosition, &QPushButton::setChecked);
        QObject::connect(buttonFreezeAttitude, &QPushButton::toggled, buttonFrozenAttitude, &QPushButton::setChecked);
        QObject::connect(buttonFreezeVelocity, &QPushButton::toggled, buttonFrozenVelocity, &QPushButton::setChecked);

        QMetaObject::connectSlotsByName(DockWidgetMain);
    } // setupUi

    void retranslateUi(QDockWidget *DockWidgetMain)
    {
        DockWidgetMain->setWindowTitle(QCoreApplication::translate("DockWidgetMain", "Main", nullptr));
        groupBoxState->setTitle(QCoreApplication::translate("DockWidgetMain", "Simulation State", nullptr));
        buttonStateInpStop->setText(QCoreApplication::translate("DockWidgetMain", "Stop", nullptr));
        buttonStateOutReady->setText(QCoreApplication::translate("DockWidgetMain", "READY", nullptr));
        buttonStateOutStopped->setText(QCoreApplication::translate("DockWidgetMain", "STOPPED", nullptr));
        buttonStateInpWork->setText(QCoreApplication::translate("DockWidgetMain", "Run", nullptr));
        buttonStateOutWorking->setText(QCoreApplication::translate("DockWidgetMain", "RUNNING", nullptr));
        buttonStateInpIdle->setText(QCoreApplication::translate("DockWidgetMain", "Idle", nullptr));
        buttonStateInpInit->setText(QCoreApplication::translate("DockWidgetMain", "Initialize", nullptr));
        buttonStateOutIdle->setText(QCoreApplication::translate("DockWidgetMain", "IDLE", nullptr));
        buttonStateOutPaused->setText(QCoreApplication::translate("DockWidgetMain", "PAUSED", nullptr));
        buttonStateInpPause->setText(QCoreApplication::translate("DockWidgetMain", "Pause", nullptr));
        groupBoxTime->setTitle(QCoreApplication::translate("DockWidgetMain", "Simulation Time", nullptr));
        labelStep->setText(QCoreApplication::translate("DockWidgetMain", "Time Step [ms]:", nullptr));
        labelFreq->setText(QCoreApplication::translate("DockWidgetMain", "Frequency [Hz]:", nullptr));
        timeFlightTime->setDisplayFormat(QCoreApplication::translate("DockWidgetMain", "HH:mm:ss.zzz", nullptr));
        labelTime->setText(QCoreApplication::translate("DockWidgetMain", "Flight Time:", nullptr));
        groupBoxFreezes->setTitle(QCoreApplication::translate("DockWidgetMain", "Simulation Freeze", nullptr));
        buttonFreezePosition->setText(QCoreApplication::translate("DockWidgetMain", "Position", nullptr));
        buttonFreezeAttitude->setText(QCoreApplication::translate("DockWidgetMain", "Attitude", nullptr));
        buttonFreezeVelocity->setText(QCoreApplication::translate("DockWidgetMain", "Velocity", nullptr));
        buttonFrozenPosition->setText(QCoreApplication::translate("DockWidgetMain", "FROZEN", nullptr));
        buttonFrozenAttitude->setText(QCoreApplication::translate("DockWidgetMain", "FROZEN", nullptr));
        buttonFrozenVelocity->setText(QCoreApplication::translate("DockWidgetMain", "FROZEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockWidgetMain: public Ui_DockWidgetMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWIDGETMAIN_H
