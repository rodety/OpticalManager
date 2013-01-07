/********************************************************************************
** Form generated from reading UI file 'ui_venta.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_VENTA_H
#define UI_UI_VENTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_venta
{
public:
    QTabWidget *tabWidget_ventas;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_13;
    QLabel *label_3;
    QTableView *tableView_luna;
    QGridLayout *gridLayout_24;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_15;
    QSpacerItem *horizontalSpacer_8;
    QWidget *tab_2;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_18;
    QSpacerItem *horizontalSpacer_11;
    QGridLayout *gridLayout_19;
    QSpacerItem *horizontalSpacer_12;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_25;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_12;
    QGridLayout *gridLayout_22;
    QLabel *label_5;
    QTableView *tableView_2;
    QWidget *tab_3;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_23;
    QGridLayout *gridLayout_26;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_37;
    QSpacerItem *horizontalSpacer_19;
    QGridLayout *gridLayout_38;
    QGridLayout *gridLayout_39;
    QGridLayout *gridLayout_40;
    QLabel *label_10;
    QGridLayout *gridLayout_41;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButton_13;
    QPushButton *pushButton_18;
    QTableView *tableView_5;
    QWidget *tab_4;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_42;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_21;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_44;
    QSpacerItem *horizontalSpacer_23;
    QGridLayout *gridLayout_45;
    QGridLayout *gridLayout_46;
    QGridLayout *gridLayout_47;
    QLabel *label_12;
    QTableView *tableView_6;
    QGridLayout *gridLayout_48;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;

    void setupUi(QDialog *ui_venta)
    {
        if (ui_venta->objectName().isEmpty())
            ui_venta->setObjectName(QString::fromUtf8("ui_venta"));
        ui_venta->resize(1189, 687);
        tabWidget_ventas = new QTabWidget(ui_venta);
        tabWidget_ventas->setObjectName(QString::fromUtf8("tabWidget_ventas"));
        tabWidget_ventas->setGeometry(QRect(10, 0, 1171, 681));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 1161, 611));
        gridLayout_9 = new QGridLayout(layoutWidget);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalSpacer_6 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_13->addWidget(label_3, 0, 0, 1, 1);

        tableView_luna = new QTableView(layoutWidget);
        tableView_luna->setObjectName(QString::fromUtf8("tableView_luna"));

        gridLayout_13->addWidget(tableView_luna, 1, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_13, 0, 0, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setFlat(true);

        gridLayout_24->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon1);
        pushButton_10->setFlat(true);

        gridLayout_24->addWidget(pushButton_10, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_24, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(tab);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 1161, 31));
        gridLayout_14 = new QGridLayout(layoutWidget_2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));

        gridLayout_14->addLayout(gridLayout_15, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        tabWidget_ventas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 1171, 31));
        gridLayout_18 = new QGridLayout(layoutWidget_3);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_11, 0, 2, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));

        gridLayout_18->addLayout(gridLayout_19, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        layoutWidget_4 = new QWidget(tab_2);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 30, 1161, 611));
        gridLayout_16 = new QGridLayout(layoutWidget_4);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        horizontalSpacer_9 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_25->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setIcon(icon);
        pushButton_3->setFlat(true);

        gridLayout_25->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setIcon(icon1);
        pushButton_12->setFlat(true);

        gridLayout_25->addWidget(pushButton_12, 0, 2, 1, 1);


        gridLayout_21->addLayout(gridLayout_25, 1, 0, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout_22->addWidget(label_5, 0, 0, 1, 1);

        tableView_2 = new QTableView(layoutWidget_4);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_22->addWidget(tableView_2, 1, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_22, 0, 0, 1, 1);


        gridLayout_20->addLayout(gridLayout_21, 0, 0, 1, 1);


        gridLayout_17->addLayout(gridLayout_20, 0, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_17, 0, 0, 1, 1);

        tabWidget_ventas->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget_5 = new QWidget(tab_3);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(0, 0, 1161, 31));
        gridLayout_23 = new QGridLayout(layoutWidget_5);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));

        gridLayout_23->addLayout(gridLayout_26, 0, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_13, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        layoutWidget_6 = new QWidget(tab_3);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(0, 30, 1161, 611));
        gridLayout_37 = new QGridLayout(layoutWidget_6);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        gridLayout_37->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_19 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_37->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        gridLayout_38 = new QGridLayout();
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        gridLayout_39 = new QGridLayout();
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_40 = new QGridLayout();
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        label_10 = new QLabel(layoutWidget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout_40->addWidget(label_10, 0, 0, 1, 1);


        gridLayout_39->addLayout(gridLayout_40, 0, 0, 1, 1);

        gridLayout_41 = new QGridLayout();
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_41->addItem(horizontalSpacer_20, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget_6);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setIcon(icon);
        pushButton_13->setFlat(true);

        gridLayout_41->addWidget(pushButton_13, 0, 1, 1, 1);

        pushButton_18 = new QPushButton(layoutWidget_6);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setIcon(icon1);
        pushButton_18->setFlat(true);

        gridLayout_41->addWidget(pushButton_18, 0, 2, 1, 1);


        gridLayout_39->addLayout(gridLayout_41, 2, 0, 1, 1);

        tableView_5 = new QTableView(layoutWidget_6);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));

        gridLayout_39->addWidget(tableView_5, 1, 0, 1, 1);


        gridLayout_38->addLayout(gridLayout_39, 0, 0, 1, 1);


        gridLayout_37->addLayout(gridLayout_38, 0, 0, 1, 1);

        tabWidget_ventas->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        layoutWidget_7 = new QWidget(tab_4);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(0, 0, 1161, 31));
        gridLayout_42 = new QGridLayout(layoutWidget_7);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_42->addItem(horizontalSpacer_22, 0, 0, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_42->addItem(horizontalSpacer_21, 0, 1, 1, 1);

        layoutWidget_8 = new QWidget(tab_4);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 30, 1161, 611));
        gridLayout_44 = new QGridLayout(layoutWidget_8);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_23 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_23, 1, 0, 1, 1);

        gridLayout_45 = new QGridLayout();
        gridLayout_45->setObjectName(QString::fromUtf8("gridLayout_45"));
        gridLayout_46 = new QGridLayout();
        gridLayout_46->setObjectName(QString::fromUtf8("gridLayout_46"));
        gridLayout_47 = new QGridLayout();
        gridLayout_47->setObjectName(QString::fromUtf8("gridLayout_47"));
        label_12 = new QLabel(layoutWidget_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout_47->addWidget(label_12, 0, 0, 1, 1);

        tableView_6 = new QTableView(layoutWidget_8);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));

        gridLayout_47->addWidget(tableView_6, 1, 0, 1, 1);


        gridLayout_46->addLayout(gridLayout_47, 0, 0, 1, 1);

        gridLayout_48 = new QGridLayout();
        gridLayout_48->setObjectName(QString::fromUtf8("gridLayout_48"));
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_48->addItem(horizontalSpacer_24, 0, 0, 1, 1);

        pushButton_20 = new QPushButton(layoutWidget_8);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setIcon(icon);
        pushButton_20->setFlat(true);

        gridLayout_48->addWidget(pushButton_20, 0, 1, 1, 1);

        pushButton_22 = new QPushButton(layoutWidget_8);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setIcon(icon1);
        pushButton_22->setFlat(true);

        gridLayout_48->addWidget(pushButton_22, 0, 2, 1, 1);


        gridLayout_46->addLayout(gridLayout_48, 1, 0, 1, 1);


        gridLayout_45->addLayout(gridLayout_46, 0, 0, 1, 1);


        gridLayout_44->addLayout(gridLayout_45, 0, 0, 1, 1);

        tabWidget_ventas->addTab(tab_4, QString());

        retranslateUi(ui_venta);

        tabWidget_ventas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_venta);
    } // setupUi

    void retranslateUi(QDialog *ui_venta)
    {
        ui_venta->setWindowTitle(QApplication::translate("ui_venta", "form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_venta", "Ventas:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_venta", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("ui_venta", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        tabWidget_ventas->setTabText(tabWidget_ventas->indexOf(tab), QApplication::translate("ui_venta", "Lentes", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_venta", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("ui_venta", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_venta", "Ventas:", 0, QApplication::UnicodeUTF8));
        tabWidget_ventas->setTabText(tabWidget_ventas->indexOf(tab_2), QApplication::translate("ui_venta", "Contactos", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_venta", "Ventas:", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("ui_venta", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("ui_venta", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        tabWidget_ventas->setTabText(tabWidget_ventas->indexOf(tab_3), QApplication::translate("ui_venta", "Monturas", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_venta", "Ventas:", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("ui_venta", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_22->setText(QApplication::translate("ui_venta", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        tabWidget_ventas->setTabText(tabWidget_ventas->indexOf(tab_4), QApplication::translate("ui_venta", "Accesorios", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_venta: public Ui_ui_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_VENTA_H
