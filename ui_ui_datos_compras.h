/********************************************************************************
** Form generated from reading UI file 'ui_datos_compras.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DATOS_COMPRAS_H
#define UI_UI_DATOS_COMPRAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_datos_compras
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_proveedor;
    QLineEdit *lineEdit_ruc;
    QLineEdit *lineEdit_direccion;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_total;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_9;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ui_datos_compras)
    {
        if (ui_datos_compras->objectName().isEmpty())
            ui_datos_compras->setObjectName(QString::fromUtf8("ui_datos_compras"));
        ui_datos_compras->resize(622, 381);
        gridLayout_2 = new QGridLayout(ui_datos_compras);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(ui_datos_compras);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(ui_datos_compras);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(ui_datos_compras);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(ui_datos_compras);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_proveedor = new QLineEdit(ui_datos_compras);
        lineEdit_proveedor->setObjectName(QString::fromUtf8("lineEdit_proveedor"));

        gridLayout->addWidget(lineEdit_proveedor, 1, 1, 1, 2);

        lineEdit_ruc = new QLineEdit(ui_datos_compras);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));

        gridLayout->addWidget(lineEdit_ruc, 2, 1, 1, 2);

        lineEdit_direccion = new QLineEdit(ui_datos_compras);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        gridLayout->addWidget(lineEdit_direccion, 3, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(ui_datos_compras);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        lineEdit_total = new QLineEdit(ui_datos_compras);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));

        horizontalLayout_3->addWidget(lineEdit_total);


        gridLayout->addLayout(horizontalLayout_3, 6, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_4 = new QPushButton(ui_datos_compras);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 3);

        label_9 = new QLabel(ui_datos_compras);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        dateEdit = new QDateEdit(ui_datos_compras);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateEdit, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 0, 1, 2);

        tableWidget = new QTableWidget(ui_datos_compras);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 5, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ui_datos_compras);

        QMetaObject::connectSlotsByName(ui_datos_compras);
    } // setupUi

    void retranslateUi(QWidget *ui_datos_compras)
    {
        ui_datos_compras->setWindowTitle(QApplication::translate("ui_datos_compras", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_datos_compras", "Proveedor", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_datos_compras", "Ruc", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_datos_compras", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_datos_compras", "Productos", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_datos_compras", "Total incluido IGV", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ui_datos_compras", "Cerrar", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_datos_compras", "Fecha:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_datos_compras", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_datos_compras", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_datos_compras", "Accesorios", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_datos_compras", "Precio Unit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_datos_compras", "Cant", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_datos_compras", "Total", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_datos_compras: public Ui_ui_datos_compras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DATOS_COMPRAS_H
