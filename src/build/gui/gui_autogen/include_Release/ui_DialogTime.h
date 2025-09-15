/********************************************************************************
** Form generated from reading UI file 'DialogTime.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTIME_H
#define UI_DIALOGTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTime
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *labelZone;
    QComboBox *comboBoxZone;
    QTimeEdit *timeEdit;
    QLabel *labelTime;
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_06;
    QPushButton *pushButton_00;
    QPushButton *pushButton_12;
    QPushButton *pushButton_18;

    void setupUi(QDialog *DialogTime)
    {
        if (DialogTime->objectName().isEmpty())
            DialogTime->setObjectName("DialogTime");
        DialogTime->resize(410, 190);
        DialogTime->setModal(true);
        gridLayout = new QGridLayout(DialogTime);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 2);

        labelZone = new QLabel(DialogTime);
        labelZone->setObjectName("labelZone");
        labelZone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelZone, 0, 0, 1, 1);

        comboBoxZone = new QComboBox(DialogTime);
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->addItem(QString());
        comboBoxZone->setObjectName("comboBoxZone");

        gridLayout->addWidget(comboBoxZone, 0, 1, 1, 1);

        timeEdit = new QTimeEdit(DialogTime);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        labelTime = new QLabel(DialogTime);
        labelTime->setObjectName("labelTime");
        labelTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTime, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogTime);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        widget = new QWidget(DialogTime);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 50));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_06 = new QPushButton(widget);
        pushButton_06->setObjectName("pushButton_06");

        gridLayout_2->addWidget(pushButton_06, 0, 1, 1, 1);

        pushButton_00 = new QPushButton(widget);
        pushButton_00->setObjectName("pushButton_00");

        gridLayout_2->addWidget(pushButton_00, 0, 0, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout_2->addWidget(pushButton_12, 0, 2, 1, 1);

        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName("pushButton_18");

        gridLayout_2->addWidget(pushButton_18, 0, 3, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        labelZone->setBuddy(comboBoxZone);
        labelTime->setBuddy(timeEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DialogTime);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogTime, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogTime, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogTime);
    } // setupUi

    void retranslateUi(QDialog *DialogTime)
    {
        DialogTime->setWindowTitle(QCoreApplication::translate("DialogTime", "Change Assignment", nullptr));
        labelZone->setText(QCoreApplication::translate("DialogTime", "Time Zone:", nullptr));
        comboBoxZone->setItemText(0, QCoreApplication::translate("DialogTime", "UTC-12:00", nullptr));
        comboBoxZone->setItemText(1, QCoreApplication::translate("DialogTime", "UTC-11:00", nullptr));
        comboBoxZone->setItemText(2, QCoreApplication::translate("DialogTime", "UTC-10:00", nullptr));
        comboBoxZone->setItemText(3, QCoreApplication::translate("DialogTime", "UTC-09:00", nullptr));
        comboBoxZone->setItemText(4, QCoreApplication::translate("DialogTime", "UTC-08:00", nullptr));
        comboBoxZone->setItemText(5, QCoreApplication::translate("DialogTime", "UTC-07:00", nullptr));
        comboBoxZone->setItemText(6, QCoreApplication::translate("DialogTime", "UTC-06:00", nullptr));
        comboBoxZone->setItemText(7, QCoreApplication::translate("DialogTime", "UTC-05:00", nullptr));
        comboBoxZone->setItemText(8, QCoreApplication::translate("DialogTime", "UTC-04:00", nullptr));
        comboBoxZone->setItemText(9, QCoreApplication::translate("DialogTime", "UTC-03:00", nullptr));
        comboBoxZone->setItemText(10, QCoreApplication::translate("DialogTime", "UTC-02:00", nullptr));
        comboBoxZone->setItemText(11, QCoreApplication::translate("DialogTime", "UTC-01:00", nullptr));
        comboBoxZone->setItemText(12, QCoreApplication::translate("DialogTime", "UTC\302\26100:00", nullptr));
        comboBoxZone->setItemText(13, QCoreApplication::translate("DialogTime", "UTC+01:00", nullptr));
        comboBoxZone->setItemText(14, QCoreApplication::translate("DialogTime", "UTC+02:00", nullptr));
        comboBoxZone->setItemText(15, QCoreApplication::translate("DialogTime", "UTC+03:00", nullptr));
        comboBoxZone->setItemText(16, QCoreApplication::translate("DialogTime", "UTC+04:00", nullptr));
        comboBoxZone->setItemText(17, QCoreApplication::translate("DialogTime", "UTC+05:00", nullptr));
        comboBoxZone->setItemText(18, QCoreApplication::translate("DialogTime", "UTC+06:00", nullptr));
        comboBoxZone->setItemText(19, QCoreApplication::translate("DialogTime", "UTC+07:00", nullptr));
        comboBoxZone->setItemText(20, QCoreApplication::translate("DialogTime", "UTC+08:00", nullptr));
        comboBoxZone->setItemText(21, QCoreApplication::translate("DialogTime", "UTC+09:00", nullptr));
        comboBoxZone->setItemText(22, QCoreApplication::translate("DialogTime", "UTC+10:00", nullptr));
        comboBoxZone->setItemText(23, QCoreApplication::translate("DialogTime", "UTC+11:00", nullptr));
        comboBoxZone->setItemText(24, QCoreApplication::translate("DialogTime", "UTC+12:00", nullptr));

        labelTime->setText(QCoreApplication::translate("DialogTime", "Local Time:", nullptr));
        pushButton_06->setText(QCoreApplication::translate("DialogTime", "Dawn", nullptr));
        pushButton_00->setText(QCoreApplication::translate("DialogTime", "Midnight", nullptr));
        pushButton_12->setText(QCoreApplication::translate("DialogTime", "Noon", nullptr));
        pushButton_18->setText(QCoreApplication::translate("DialogTime", "Dusk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTime: public Ui_DialogTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTIME_H
