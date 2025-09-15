/********************************************************************************
** Form generated from reading UI file 'DialogAction.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGACTION_H
#define UI_DIALOGACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAction
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageAxis;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QWidget *widgetAxisHead;
    QGridLayout *gridLayout_3;
    QLabel *labelAxisDevice;
    QLabel *labelAxisDeviceName;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widgetAxisBody;
    QGridLayout *gridLayout_4;
    QLabel *labelAxis;
    QComboBox *comboAxis;
    QSlider *sliderAxis;
    QCheckBox *checkAxisInverted;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *pageButt;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QWidget *widgetButtHead;
    QGridLayout *gridLayout_7;
    QLabel *labelButtDevice;
    QLabel *labelButtDeviceName;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetButtBody;
    QGridLayout *gridLayout_8;
    QPushButton *buttonButt;
    QLabel *labelButt;
    QComboBox *comboButt;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QWidget *pageKey;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QWidget *widgetKeysHead;
    QGridLayout *gridLayout_11;
    QLabel *labelKeysDevice;
    QLabel *labelKeysDeviceName;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widgetKeysBody;
    QGridLayout *gridLayout_12;
    QLabel *labelKey;
    QComboBox *comboKeys;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAction)
    {
        if (DialogAction->objectName().isEmpty())
            DialogAction->setObjectName("DialogAction");
        DialogAction->resize(400, 200);
        DialogAction->setModal(true);
        gridLayout_2 = new QGridLayout(DialogAction);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(DialogAction);
        stackedWidget->setObjectName("stackedWidget");
        pageAxis = new QWidget();
        pageAxis->setObjectName("pageAxis");
        gridLayout_6 = new QGridLayout(pageAxis);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        widgetAxisHead = new QWidget(pageAxis);
        widgetAxisHead->setObjectName("widgetAxisHead");
        gridLayout_3 = new QGridLayout(widgetAxisHead);
        gridLayout_3->setObjectName("gridLayout_3");
        labelAxisDevice = new QLabel(widgetAxisHead);
        labelAxisDevice->setObjectName("labelAxisDevice");
        labelAxisDevice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelAxisDevice, 0, 0, 1, 1);

        labelAxisDeviceName = new QLabel(widgetAxisHead);
        labelAxisDeviceName->setObjectName("labelAxisDeviceName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAxisDeviceName->sizePolicy().hasHeightForWidth());
        labelAxisDeviceName->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        labelAxisDeviceName->setFont(font);

        gridLayout_3->addWidget(labelAxisDeviceName, 0, 1, 1, 1);


        gridLayout_5->addWidget(widgetAxisHead, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        widgetAxisBody = new QWidget(pageAxis);
        widgetAxisBody->setObjectName("widgetAxisBody");
        gridLayout_4 = new QGridLayout(widgetAxisBody);
        gridLayout_4->setObjectName("gridLayout_4");
        labelAxis = new QLabel(widgetAxisBody);
        labelAxis->setObjectName("labelAxis");
        labelAxis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelAxis, 0, 0, 1, 1);

        comboAxis = new QComboBox(widgetAxisBody);
        comboAxis->setObjectName("comboAxis");

        gridLayout_4->addWidget(comboAxis, 0, 1, 1, 1);

        sliderAxis = new QSlider(widgetAxisBody);
        sliderAxis->setObjectName("sliderAxis");
        sliderAxis->setEnabled(false);
        sliderAxis->setMinimumSize(QSize(0, 18));
        sliderAxis->setMaximumSize(QSize(16777215, 18));
        sliderAxis->setStyleSheet(QString::fromUtf8("QSlider::groove\n"
"{\n"
"    border: 1px solid #323232;\n"
"    height: 16px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QSlider::groove:disabled\n"
"{\n"
"    border: 1px solid #999999;\n"
"    background: #cccccc;\n"
"}\n"
"\n"
"QSlider::handle:horizontal\n"
"{\n"
"    background: #032a63;\n"
"    border: 0;\n"
"    width: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled\n"
"{\n"
"    background: #999999;\n"
"}"));
        sliderAxis->setMinimum(-100);
        sliderAxis->setMaximum(100);
        sliderAxis->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(sliderAxis, 2, 1, 1, 1);

        checkAxisInverted = new QCheckBox(widgetAxisBody);
        checkAxisInverted->setObjectName("checkAxisInverted");

        gridLayout_4->addWidget(checkAxisInverted, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_5->addWidget(widgetAxisBody, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(pageAxis);
        pageButt = new QWidget();
        pageButt->setObjectName("pageButt");
        gridLayout_10 = new QGridLayout(pageButt);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        widgetButtHead = new QWidget(pageButt);
        widgetButtHead->setObjectName("widgetButtHead");
        gridLayout_7 = new QGridLayout(widgetButtHead);
        gridLayout_7->setObjectName("gridLayout_7");
        labelButtDevice = new QLabel(widgetButtHead);
        labelButtDevice->setObjectName("labelButtDevice");
        labelButtDevice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(labelButtDevice, 0, 0, 1, 1);

        labelButtDeviceName = new QLabel(widgetButtHead);
        labelButtDeviceName->setObjectName("labelButtDeviceName");
        sizePolicy.setHeightForWidth(labelButtDeviceName->sizePolicy().hasHeightForWidth());
        labelButtDeviceName->setSizePolicy(sizePolicy);
        labelButtDeviceName->setFont(font);

        gridLayout_7->addWidget(labelButtDeviceName, 0, 1, 1, 1);


        gridLayout_9->addWidget(widgetButtHead, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 1, 0, 1, 1);

        widgetButtBody = new QWidget(pageButt);
        widgetButtBody->setObjectName("widgetButtBody");
        gridLayout_8 = new QGridLayout(widgetButtBody);
        gridLayout_8->setObjectName("gridLayout_8");
        buttonButt = new QPushButton(widgetButtBody);
        buttonButt->setObjectName("buttonButt");
        buttonButt->setEnabled(false);
        buttonButt->setStyleSheet(QString::fromUtf8("QPushButton:disabled \n"
"{\n"
"	padding: 5px;\n"
"	background-color: #555;\n"
"	border-radius: 5px;\n"
"	color: #000;\n"
"}\n"
"\n"
"QPushButton:disabled:pressed \n"
"{\n"
"	background-color: #555;\n"
"}\n"
"\n"
"QPushButton:disabled:checked \n"
"{\n"
"	background-color: #0f0;\n"
"}"));
        buttonButt->setCheckable(true);

        gridLayout_8->addWidget(buttonButt, 1, 1, 1, 1);

        labelButt = new QLabel(widgetButtBody);
        labelButt->setObjectName("labelButt");
        labelButt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(labelButt, 0, 0, 1, 1);

        comboButt = new QComboBox(widgetButtBody);
        comboButt->setObjectName("comboButt");

        gridLayout_8->addWidget(comboButt, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout_9->addWidget(widgetButtBody, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 1, 2, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        stackedWidget->addWidget(pageButt);
        pageKey = new QWidget();
        pageKey->setObjectName("pageKey");
        gridLayout_14 = new QGridLayout(pageKey);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName("gridLayout_13");
        widgetKeysHead = new QWidget(pageKey);
        widgetKeysHead->setObjectName("widgetKeysHead");
        gridLayout_11 = new QGridLayout(widgetKeysHead);
        gridLayout_11->setObjectName("gridLayout_11");
        labelKeysDevice = new QLabel(widgetKeysHead);
        labelKeysDevice->setObjectName("labelKeysDevice");
        labelKeysDevice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(labelKeysDevice, 0, 0, 1, 1);

        labelKeysDeviceName = new QLabel(widgetKeysHead);
        labelKeysDeviceName->setObjectName("labelKeysDeviceName");
        sizePolicy.setHeightForWidth(labelKeysDeviceName->sizePolicy().hasHeightForWidth());
        labelKeysDeviceName->setSizePolicy(sizePolicy);
        labelKeysDeviceName->setFont(font);

        gridLayout_11->addWidget(labelKeysDeviceName, 0, 1, 1, 1);


        gridLayout_13->addWidget(widgetKeysHead, 0, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        widgetKeysBody = new QWidget(pageKey);
        widgetKeysBody->setObjectName("widgetKeysBody");
        gridLayout_12 = new QGridLayout(widgetKeysBody);
        gridLayout_12->setObjectName("gridLayout_12");
        labelKey = new QLabel(widgetKeysBody);
        labelKey->setObjectName("labelKey");

        gridLayout_12->addWidget(labelKey, 0, 0, 1, 1);

        comboKeys = new QComboBox(widgetKeysBody);
        comboKeys->setObjectName("comboKeys");

        gridLayout_12->addWidget(comboKeys, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 42, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_12->addItem(verticalSpacer_3, 1, 1, 1, 1);


        gridLayout_13->addWidget(widgetKeysBody, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_6, 1, 2, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        stackedWidget->addWidget(pageKey);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogAction);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        labelAxis->setBuddy(comboAxis);
        labelButt->setBuddy(comboButt);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DialogAction);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogAction, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogAction, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogAction);
    } // setupUi

    void retranslateUi(QDialog *DialogAction)
    {
        DialogAction->setWindowTitle(QCoreApplication::translate("DialogAction", "Change Assignment", nullptr));
        labelAxisDevice->setText(QCoreApplication::translate("DialogAction", "Device:", nullptr));
        labelAxisDeviceName->setText(QCoreApplication::translate("DialogAction", "DeviceName", nullptr));
        labelAxis->setText(QCoreApplication::translate("DialogAction", "Axis:", nullptr));
        checkAxisInverted->setText(QCoreApplication::translate("DialogAction", "Inverted", nullptr));
        labelButtDevice->setText(QCoreApplication::translate("DialogAction", "Device:", nullptr));
        labelButtDeviceName->setText(QCoreApplication::translate("DialogAction", "DeviceName", nullptr));
        buttonButt->setText(QCoreApplication::translate("DialogAction", "BUTTON", nullptr));
        labelButt->setText(QCoreApplication::translate("DialogAction", "Button:", nullptr));
        labelKeysDevice->setText(QCoreApplication::translate("DialogAction", "Device:", nullptr));
        labelKeysDeviceName->setText(QCoreApplication::translate("DialogAction", "Keyboard", nullptr));
        labelKey->setText(QCoreApplication::translate("DialogAction", "Key:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAction: public Ui_DialogAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGACTION_H
