/********************************************************************************
** Form generated from reading UI file 'ui_item_posicion.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ITEM_POSICION_H
#define UI_UI_ITEM_POSICION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_item_posicion
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_salir;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_deleteProducto;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_codigoProducto;
    QPushButton *pushButton_addProducto;
    QLabel *label_8;
    QPushButton *pushButton_guardar;
    QGridLayout *gridLayout_14;
    QTableWidget *tableWidget_list_productos;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_item_posicion)
    {
        if (ui_item_posicion->objectName().isEmpty())
            ui_item_posicion->setObjectName(QString::fromUtf8("ui_item_posicion"));
        ui_item_posicion->resize(566, 179);
        layoutWidget = new QWidget(ui_item_posicion);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 561, 171));
        gridLayout_18 = new QGridLayout(layoutWidget);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));

        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setHorizontalSpacing(0);
        horizontalSpacer_2 = new QSpacerItem(668, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_salir = new QPushButton(layoutWidget);
        pushButton_salir->setObjectName(QString::fromUtf8("pushButton_salir"));

        gridLayout_12->addWidget(pushButton_salir, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_18->addLayout(gridLayout_12, 2, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(0);
        pushButton_deleteProducto = new QPushButton(layoutWidget);
        pushButton_deleteProducto->setObjectName(QString::fromUtf8("pushButton_deleteProducto"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716428_trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteProducto->setIcon(icon);
        pushButton_deleteProducto->setFlat(true);

        gridLayout_10->addWidget(pushButton_deleteProducto, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 5, 1, 1);

        lineEdit_codigoProducto = new QLineEdit(layoutWidget);
        lineEdit_codigoProducto->setObjectName(QString::fromUtf8("lineEdit_codigoProducto"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_codigoProducto->sizePolicy().hasHeightForWidth());
        lineEdit_codigoProducto->setSizePolicy(sizePolicy);
        lineEdit_codigoProducto->setMinimumSize(QSize(120, 0));
        lineEdit_codigoProducto->setMaximumSize(QSize(120, 16777215));

        gridLayout_10->addWidget(lineEdit_codigoProducto, 0, 1, 1, 1);

        pushButton_addProducto = new QPushButton(layoutWidget);
        pushButton_addProducto->setObjectName(QString::fromUtf8("pushButton_addProducto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addProducto->setIcon(icon1);
        pushButton_addProducto->setFlat(true);

        gridLayout_10->addWidget(pushButton_addProducto, 0, 2, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        pushButton_guardar = new QPushButton(layoutWidget);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));
        pushButton_guardar->setFlat(true);

        gridLayout_10->addWidget(pushButton_guardar, 0, 4, 1, 1);


        gridLayout_13->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_13, 0, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setHorizontalSpacing(0);
        tableWidget_list_productos = new QTableWidget(layoutWidget);
        if (tableWidget_list_productos->columnCount() < 5)
            tableWidget_list_productos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_list_productos->setObjectName(QString::fromUtf8("tableWidget_list_productos"));

        gridLayout_14->addWidget(tableWidget_list_productos, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_11, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 1, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_15, 1, 0, 1, 1);


        retranslateUi(ui_item_posicion);

        QMetaObject::connectSlotsByName(ui_item_posicion);
    } // setupUi

    void retranslateUi(QWidget *ui_item_posicion)
    {
        ui_item_posicion->setWindowTitle(QApplication::translate("ui_item_posicion", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_salir->setText(QApplication::translate("ui_item_posicion", "Salir", 0, QApplication::UnicodeUTF8));
        pushButton_deleteProducto->setText(QString());
        pushButton_addProducto->setText(QString());
        label_8->setText(QApplication::translate("ui_item_posicion", "C\303\263digo de Producto ", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QApplication::translate("ui_item_posicion", "Guardar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_list_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_item_posicion", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_list_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_item_posicion", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_list_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_item_posicion", "Marca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_list_productos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_item_posicion", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_list_productos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_item_posicion", "Stock", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_item_posicion: public Ui_ui_item_posicion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ITEM_POSICION_H
