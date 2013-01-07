/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_otro.ui'
**
** Created: Thu 27. Dec 16:15:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_OTRO_H
#define UI_UI_PRODUCTO_AGREGAR_OTRO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_ui_producto_agregar_otro
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_titulo;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_codigo;
    QLabel *label_8;
    QLineEdit *lineEdit_stock;
    QLabel *label_3;
    QLineEdit *lineEdit_p_compra;
    QLabel *label_4;
    QLineEdit *lineEdit_p_venta;
    QLabel *label_5;
    QLineEdit *lineEdit_p_descuento;
    QLabel *label_7;
    QLineEdit *lineEdit_descripcion;
    QLabel *label_6;
    QLineEdit *lineEdit_accesorios;
    QLabel *label_9;
    MyComboBox *comboBox_marca;
    QPushButton *pushButton_x_marca;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *boton_agregar;
    QPushButton *boton_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ui_producto_agregar_otro)
    {
        if (ui_producto_agregar_otro->objectName().isEmpty())
            ui_producto_agregar_otro->setObjectName(QString::fromUtf8("ui_producto_agregar_otro"));
        ui_producto_agregar_otro->resize(270, 278);
        ui_producto_agregar_otro->setMinimumSize(QSize(0, 0));
        ui_producto_agregar_otro->setMaximumSize(QSize(663, 508));
        gridLayout_2 = new QGridLayout(ui_producto_agregar_otro);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_titulo = new QLabel(ui_producto_agregar_otro);
        label_titulo->setObjectName(QString::fromUtf8("label_titulo"));

        verticalLayout->addWidget(label_titulo);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(ui_producto_agregar_otro);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_codigo = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));

        gridLayout->addWidget(lineEdit_codigo, 0, 1, 1, 2);

        label_8 = new QLabel(ui_producto_agregar_otro);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_stock = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 1, 1, 1, 2);

        label_3 = new QLabel(ui_producto_agregar_otro);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_p_compra = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_p_compra->setObjectName(QString::fromUtf8("lineEdit_p_compra"));

        gridLayout->addWidget(lineEdit_p_compra, 2, 1, 1, 2);

        label_4 = new QLabel(ui_producto_agregar_otro);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_p_venta = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_p_venta->setObjectName(QString::fromUtf8("lineEdit_p_venta"));

        gridLayout->addWidget(lineEdit_p_venta, 3, 1, 1, 2);

        label_5 = new QLabel(ui_producto_agregar_otro);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_p_descuento = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));

        gridLayout->addWidget(lineEdit_p_descuento, 4, 1, 1, 2);

        label_7 = new QLabel(ui_producto_agregar_otro);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        lineEdit_descripcion = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));

        gridLayout->addWidget(lineEdit_descripcion, 5, 1, 1, 2);

        label_6 = new QLabel(ui_producto_agregar_otro);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_accesorios = new QLineEdit(ui_producto_agregar_otro);
        lineEdit_accesorios->setObjectName(QString::fromUtf8("lineEdit_accesorios"));

        gridLayout->addWidget(lineEdit_accesorios, 6, 1, 1, 2);

        label_9 = new QLabel(ui_producto_agregar_otro);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        comboBox_marca = new MyComboBox(ui_producto_agregar_otro);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));

        gridLayout->addWidget(comboBox_marca, 7, 1, 1, 1);

        pushButton_x_marca = new QPushButton(ui_producto_agregar_otro);
        pushButton_x_marca->setObjectName(QString::fromUtf8("pushButton_x_marca"));
        pushButton_x_marca->setEnabled(true);
        pushButton_x_marca->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_x_marca->setIcon(icon);
        pushButton_x_marca->setFlat(true);

        gridLayout->addWidget(pushButton_x_marca, 7, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        boton_agregar = new QPushButton(ui_producto_agregar_otro);
        boton_agregar->setObjectName(QString::fromUtf8("boton_agregar"));

        horizontalLayout->addWidget(boton_agregar);

        boton_cancelar = new QPushButton(ui_producto_agregar_otro);
        boton_cancelar->setObjectName(QString::fromUtf8("boton_cancelar"));

        horizontalLayout->addWidget(boton_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ui_producto_agregar_otro);

        QMetaObject::connectSlotsByName(ui_producto_agregar_otro);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_otro)
    {
        ui_producto_agregar_otro->setWindowTitle(QApplication::translate("ui_producto_agregar_otro", "Otros", 0, QApplication::UnicodeUTF8));
        label_titulo->setText(QApplication::translate("ui_producto_agregar_otro", "Agregar Otro Tipo Producto", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_otro", "Codigo", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_producto_agregar_otro", "Stock", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_producto_agregar_otro", "Precio de Descuento", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_otro", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_producto_agregar_otro", "Accesorios", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_producto_agregar_otro", "Marca", 0, QApplication::UnicodeUTF8));
        pushButton_x_marca->setText(QString());
        boton_agregar->setText(QApplication::translate("ui_producto_agregar_otro", "Agregar", 0, QApplication::UnicodeUTF8));
        boton_cancelar->setText(QApplication::translate("ui_producto_agregar_otro", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_otro: public Ui_ui_producto_agregar_otro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_OTRO_H
