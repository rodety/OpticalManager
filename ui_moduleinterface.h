/********************************************************************************
** Form generated from reading UI file 'moduleinterface.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEINTERFACE_H
#define UI_MODULEINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleInterface
{
public:
    QAction *actionUp;
    QAction *actionDown;
    QGridLayout *gridLayout_2;
    QTabWidget *Module_tabWidget;
    QWidget *list_tab;
    QGridLayout *gridLayout;
    QTableView *list_tableView;

    void setupUi(QWidget *ModuleInterface)
    {
        if (ModuleInterface->objectName().isEmpty())
            ModuleInterface->setObjectName(QString::fromUtf8("ModuleInterface"));
        ModuleInterface->resize(296, 262);
        ModuleInterface->setMouseTracking(false);
        ModuleInterface->setLayoutDirection(Qt::LeftToRight);
        ModuleInterface->setAutoFillBackground(false);
        actionUp = new QAction(ModuleInterface);
        actionUp->setObjectName(QString::fromUtf8("actionUp"));
        actionDown = new QAction(ModuleInterface);
        actionDown->setObjectName(QString::fromUtf8("actionDown"));
        gridLayout_2 = new QGridLayout(ModuleInterface);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Module_tabWidget = new QTabWidget(ModuleInterface);
        Module_tabWidget->setObjectName(QString::fromUtf8("Module_tabWidget"));
        list_tab = new QWidget();
        list_tab->setObjectName(QString::fromUtf8("list_tab"));
        gridLayout = new QGridLayout(list_tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        list_tableView = new QTableView(list_tab);
        list_tableView->setObjectName(QString::fromUtf8("list_tableView"));
        list_tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::CurrentChanged|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        list_tableView->setAlternatingRowColors(true);
        list_tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        list_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        list_tableView->setGridStyle(Qt::DashLine);
        list_tableView->setSortingEnabled(false);

        gridLayout->addWidget(list_tableView, 0, 0, 1, 1);

        Module_tabWidget->addTab(list_tab, QString());

        gridLayout_2->addWidget(Module_tabWidget, 0, 0, 1, 1);


        retranslateUi(ModuleInterface);

        Module_tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ModuleInterface);
    } // setupUi

    void retranslateUi(QWidget *ModuleInterface)
    {
        ModuleInterface->setWindowTitle(QApplication::translate("ModuleInterface", "Form", 0, QApplication::UnicodeUTF8));
        actionUp->setText(QApplication::translate("ModuleInterface", "up", 0, QApplication::UnicodeUTF8));
        actionUp->setShortcut(QApplication::translate("ModuleInterface", "Up", 0, QApplication::UnicodeUTF8));
        actionDown->setText(QApplication::translate("ModuleInterface", "down", 0, QApplication::UnicodeUTF8));
        actionDown->setShortcut(QApplication::translate("ModuleInterface", "Down", 0, QApplication::UnicodeUTF8));
        Module_tabWidget->setTabText(Module_tabWidget->indexOf(list_tab), QApplication::translate("ModuleInterface", "Lista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModuleInterface: public Ui_ModuleInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEINTERFACE_H
