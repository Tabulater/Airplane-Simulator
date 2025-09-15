/********************************************************************************
** Form generated from reading UI file 'DialogConf.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONF_H
#define UI_DIALOGCONF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include "gui/PageControls.h"
#include "gui/PageGeneral.h"

QT_BEGIN_NAMESPACE

class Ui_DialogConf
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QListWidget *listMenu;
    QStackedWidget *stackedContents;
    PageGeneral *pageGeneral;
    PageControls *pageControls;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogConf)
    {
        if (DialogConf->objectName().isEmpty())
            DialogConf->setObjectName("DialogConf");
        DialogConf->resize(800, 600);
        DialogConf->setModal(true);
        gridLayout_2 = new QGridLayout(DialogConf);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(DialogConf);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        listMenu = new QListWidget(splitter);
        new QListWidgetItem(listMenu);
        new QListWidgetItem(listMenu);
        listMenu->setObjectName("listMenu");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listMenu->sizePolicy().hasHeightForWidth());
        listMenu->setSizePolicy(sizePolicy);
        splitter->addWidget(listMenu);
        stackedContents = new QStackedWidget(splitter);
        stackedContents->setObjectName("stackedContents");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedContents->sizePolicy().hasHeightForWidth());
        stackedContents->setSizePolicy(sizePolicy1);
        stackedContents->setFrameShape(QFrame::StyledPanel);
        stackedContents->setFrameShadow(QFrame::Sunken);
        pageGeneral = new PageGeneral();
        pageGeneral->setObjectName("pageGeneral");
        stackedContents->addWidget(pageGeneral);
        pageControls = new PageControls();
        pageControls->setObjectName("pageControls");
        stackedContents->addWidget(pageControls);
        splitter->addWidget(stackedContents);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogConf);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(DialogConf);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogConf, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogConf, qOverload<>(&QDialog::reject));

        listMenu->setCurrentRow(0);
        stackedContents->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogConf);
    } // setupUi

    void retranslateUi(QDialog *DialogConf)
    {
        DialogConf->setWindowTitle(QCoreApplication::translate("DialogConf", "Preferences", nullptr));

        const bool __sortingEnabled = listMenu->isSortingEnabled();
        listMenu->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listMenu->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("DialogConf", "General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listMenu->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("DialogConf", "Controls", nullptr));
        listMenu->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class DialogConf: public Ui_DialogConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONF_H
