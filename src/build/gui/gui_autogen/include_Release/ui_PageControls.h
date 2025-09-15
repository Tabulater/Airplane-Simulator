/********************************************************************************
** Form generated from reading UI file 'PageControls.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECONTROLS_H
#define UI_PAGECONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageControls
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *labelDevice;
    QComboBox *comboDevice;
    QTableWidget *tableControls;
    QGridLayout *gridLayout;
    QPushButton *buttonAssignmentChange;
    QPushButton *buttonAssignmentClear;

    void setupUi(QWidget *PageControls)
    {
        if (PageControls->objectName().isEmpty())
            PageControls->setObjectName("PageControls");
        PageControls->resize(600, 600);
        gridLayout_3 = new QGridLayout(PageControls);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelDevice = new QLabel(PageControls);
        labelDevice->setObjectName("labelDevice");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDevice->sizePolicy().hasHeightForWidth());
        labelDevice->setSizePolicy(sizePolicy);
        labelDevice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelDevice, 0, 0, 1, 1);

        comboDevice = new QComboBox(PageControls);
        comboDevice->addItem(QString());
        comboDevice->setObjectName("comboDevice");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboDevice->sizePolicy().hasHeightForWidth());
        comboDevice->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(comboDevice, 0, 1, 1, 1);

        tableControls = new QTableWidget(PageControls);
        if (tableControls->columnCount() < 1)
            tableControls->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableControls->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableControls->setObjectName("tableControls");
        tableControls->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableControls->setProperty("showDropIndicator", QVariant(false));
        tableControls->setSelectionMode(QAbstractItemView::SingleSelection);
        tableControls->horizontalHeader()->setDefaultSectionSize(200);
        tableControls->horizontalHeader()->setHighlightSections(true);
        tableControls->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableControls, 1, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        buttonAssignmentChange = new QPushButton(PageControls);
        buttonAssignmentChange->setObjectName("buttonAssignmentChange");
        buttonAssignmentChange->setEnabled(false);

        gridLayout->addWidget(buttonAssignmentChange, 0, 1, 1, 1);

        buttonAssignmentClear = new QPushButton(PageControls);
        buttonAssignmentClear->setObjectName("buttonAssignmentClear");
        buttonAssignmentClear->setEnabled(false);

        gridLayout->addWidget(buttonAssignmentClear, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        QWidget::setTabOrder(tableControls, buttonAssignmentClear);
        QWidget::setTabOrder(buttonAssignmentClear, buttonAssignmentChange);

        retranslateUi(PageControls);

        QMetaObject::connectSlotsByName(PageControls);
    } // setupUi

    void retranslateUi(QWidget *PageControls)
    {
        PageControls->setWindowTitle(QCoreApplication::translate("PageControls", "Controls", nullptr));
        labelDevice->setText(QCoreApplication::translate("PageControls", "Input Device:", nullptr));
        comboDevice->setItemText(0, QCoreApplication::translate("PageControls", "Keyboard", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableControls->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PageControls", "Input Assignment", nullptr));
        buttonAssignmentChange->setText(QCoreApplication::translate("PageControls", "Change Assignment", nullptr));
        buttonAssignmentClear->setText(QCoreApplication::translate("PageControls", "Clear Assignment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PageControls: public Ui_PageControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECONTROLS_H
