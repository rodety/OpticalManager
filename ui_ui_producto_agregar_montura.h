/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_montura.ui'
**
** Created: Thu 27. Dec 16:21:59 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_MONTURA_H
#define UI_UI_PRODUCTO_AGREGAR_MONTURA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
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

class Ui_ui_producto_agregar_montura
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_tiulo;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_codigo;
    QLabel *label_4;
    QLineEdit *lineEdit_stock;
    QLabel *label_13;
    QLineEdit *lineEdit_precio_compra;
    QLabel *label_12;
    QLineEdit *lineEdit_precio_venta;
    QLabel *label_7;
    QLineEdit *lineEdit_p_descuento;
    QLabel *label_6;
    QLineEdit *lineEdit_accesorios;
    QLabel *label_3;
    QLineEdit *lineEdit_descripcion;
    QGridLayout *gridLayout;
    QLabel *label_8;
    MyComboBox *myComboBox_marca;
    QPushButton *pushButton_xmarca;
    QLabel *label_9;
    MyComboBox *comboBox_tamanio;
    QPushButton *pushButton_xtamanio;
    QLabel *label_10;
    MyComboBox *comboBox_forma;
    QPushButton *pushButton_xforma;
    QLabel *label_11;
    MyComboBox *comboBox_calidad;
    QPushButton *pushButton_4;
    QLabel *label_15;
    MyComboBox *comboBox_color;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_agregar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ui_producto_agregar_montura)
    {
        if (ui_producto_agregar_montura->objectName().isEmpty())
            ui_producto_agregar_montura->setObjectName(QString::fromUtf8("ui_producto_agregar_montura"));
        ui_producto_agregar_montura->resize(453, 250);
        ui_producto_agregar_montura->setMinimumSize(QSize(0, 0));
        ui_producto_agregar_montura->setMaximumSize(QSize(663, 508));
        gridLayout_2 = new QGridLayout(ui_producto_agregar_montura);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_tiulo = new QLabel(ui_producto_agregar_montura);
        label_tiulo->setObjectName(QString::fromUtf8("label_tiulo"));

        verticalLayout->addWidget(label_tiulo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(ui_producto_agregar_montura);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_codigo = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_codigo->setObjectName(QString::fromUtf8("lineEdit_codigo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_codigo);

        label_4 = new QLabel(ui_producto_agregar_montura);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_stock = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_stock);

        label_13 = new QLabel(ui_producto_agregar_montura);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        lineEdit_precio_compra = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_precio_compra->setObjectName(QString::fromUtf8("lineEdit_precio_compra"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_precio_compra);

        label_12 = new QLabel(ui_producto_agregar_montura);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_12);

        lineEdit_precio_venta = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_precio_venta->setObjectName(QString::fromUtf8("lineEdit_precio_venta"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_precio_venta);

        label_7 = new QLabel(ui_producto_agregar_montura);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        lineEdit_p_descuento = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));
        lineEdit_p_descuento->setMinimumSize(QSize(170, 0));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_p_descuento);

        label_6 = new QLabel(ui_producto_agregar_montura);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_accesorios = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_accesorios->setObjectName(QString::fromUtf8("lineEdit_accesorios"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_accesorios);

        label_3 = new QLabel(ui_producto_agregar_montura);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        lineEdit_descripcion = new QLineEdit(ui_producto_agregar_montura);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_descripcion);


        horizontalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(ui_producto_agregar_montura);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        myComboBox_marca = new MyComboBox(ui_producto_agregar_montura);
        myComboBox_marca->setObjectName(QString::fromUtf8("myComboBox_marca"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(myComboBox_marca->sizePolicy().hasHeightForWidth());
        myComboBox_marca->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(myComboBox_marca, 0, 1, 1, 1);

        pushButton_xmarca = new QPushButton(ui_producto_agregar_montura);
        pushButton_xmarca->setObjectName(QString::fromUtf8("pushButton_xmarca"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_xmarca->sizePolicy().hasHeightForWidth());
        pushButton_xmarca->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_xmarca->setIcon(icon);
        pushButton_xmarca->setAutoDefault(false);
        pushButton_xmarca->setFlat(true);

        gridLayout->addWidget(pushButton_xmarca, 0, 2, 1, 1);

        label_9 = new QLabel(ui_producto_agregar_montura);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        comboBox_tamanio = new MyComboBox(ui_producto_agregar_montura);
        comboBox_tamanio->setObjectName(QString::fromUtf8("comboBox_tamanio"));
        sizePolicy1.setHeightForWidth(comboBox_tamanio->sizePolicy().hasHeightForWidth());
        comboBox_tamanio->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_tamanio, 1, 1, 1, 1);

        pushButton_xtamanio = new QPushButton(ui_producto_agregar_montura);
        pushButton_xtamanio->setObjectName(QString::fromUtf8("pushButton_xtamanio"));
        sizePolicy2.setHeightForWidth(pushButton_xtamanio->sizePolicy().hasHeightForWidth());
        pushButton_xtamanio->setSizePolicy(sizePolicy2);
        pushButton_xtamanio->setIcon(icon);
        pushButton_xtamanio->setAutoDefault(false);
        pushButton_xtamanio->setFlat(true);

        gridLayout->addWidget(pushButton_xtamanio, 1, 2, 1, 1);

        label_10 = new QLabel(ui_producto_agregar_montura);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        comboBox_forma = new MyComboBox(ui_producto_agregar_montura);
        comboBox_forma->setObjectName(QString::fromUtf8("comboBox_forma"));
        sizePolicy1.setHeightForWidth(comboBox_forma->sizePolicy().hasHeightForWidth());
        comboBox_forma->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_forma, 2, 1, 1, 1);

        pushButton_xforma = new QPushButton(ui_producto_agregar_montura);
        pushButton_xforma->setObjectName(QString::fromUtf8("pushButton_xforma"));
        sizePolicy2.setHeightForWidth(pushButton_xforma->sizePolicy().hasHeightForWidth());
        pushButton_xforma->setSizePolicy(sizePolicy2);
        pushButton_xforma->setIcon(icon);
        pushButton_xforma->setAutoDefault(false);
        pushButton_xforma->setFlat(true);

        gridLayout->addWidget(pushButton_xforma, 2, 2, 1, 1);

        label_11 = new QLabel(ui_producto_agregar_montura);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        comboBox_calidad = new MyComboBox(ui_producto_agregar_montura);
        comboBox_calidad->setObjectName(QString::fromUtf8("comboBox_calidad"));
        sizePolicy1.setHeightForWidth(comboBox_calidad->sizePolicy().hasHeightForWidth());
        comboBox_calidad->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_calidad, 3, 1, 1, 1);

        pushButton_4 = new QPushButton(ui_producto_agregar_montura);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setIcon(icon);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 3, 2, 1, 1);

        label_15 = new QLabel(ui_producto_agregar_montura);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        comboBox_color = new MyComboBox(ui_producto_agregar_montura);
        comboBox_color->setObjectName(QString::fromUtf8("comboBox_color"));
        sizePolicy1.setHeightForWidth(comboBox_color->sizePolicy().hasHeightForWidth());
        comboBox_color->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_color, 4, 1, 1, 1);

        pushButton_8 = new QPushButton(ui_producto_agregar_montura);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setIcon(icon);
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(true);

        gridLayout->addWidget(pushButton_8, 4, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_agregar = new QPushButton(ui_producto_agregar_montura);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));

        horizontalLayout_2->addWidget(pushButton_agregar);

        pushButton_cancelar = new QPushButton(ui_producto_agregar_montura);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_2->addWidget(pushButton_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_codigo, lineEdit_stock);
        QWidget::setTabOrder(lineEdit_stock, lineEdit_precio_compra);
        QWidget::setTabOrder(lineEdit_precio_compra, lineEdit_precio_venta);
        QWidget::setTabOrder(lineEdit_precio_venta, lineEdit_p_descuento);
        QWidget::setTabOrder(lineEdit_p_descuento, lineEdit_accesorios);
        QWidget::setTabOrder(lineEdit_accesorios, lineEdit_descripcion);
        QWidget::setTabOrder(lineEdit_descripcion, myComboBox_marca);
        QWidget::setTabOrder(myComboBox_marca, comboBox_tamanio);
        QWidget::setTabOrder(comboBox_tamanio, comboBox_forma);
        QWidget::setTabOrder(comboBox_forma, comboBox_calidad);
        QWidget::setTabOrder(comboBox_calidad, comboBox_color);
        QWidget::setTabOrder(comboBox_color, pushButton_xmarca);
        QWidget::setTabOrder(pushButton_xmarca, pushButton_xtamanio);
        QWidget::setTabOrder(pushButton_xtamanio, pushButton_xforma);
        QWidget::setTabOrder(pushButton_xforma, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_agregar);
        QWidget::setTabOrder(pushButton_agregar, pushButton_cancelar);

        retranslateUi(ui_producto_agregar_montura);

        QMetaObject::connectSlotsByName(ui_producto_agregar_montura);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_montura)
    {
        ui_producto_agregar_montura->setWindowTitle(QApplication::translate("ui_producto_agregar_montura", "Montura", 0, QApplication::UnicodeUTF8));
        label_tiulo->setText(QApplication::translate("ui_producto_agregar_montura", "Agregar Montura", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_montura", "Codigo", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_montura", "Stock", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_producto_agregar_montura", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_producto_agregar_montura", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_montura", "Precio De Descuento", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_producto_agregar_montura", "Accesorios", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_montura", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_producto_agregar_montura", "Marca", 0, QApplication::UnicodeUTF8));
        pushButton_xmarca->setText(QString());
        label_9->setText(QApplication::translate("ui_producto_agregar_montura", "Tama\303\261o", 0, QApplication::UnicodeUTF8));
        pushButton_xtamanio->setText(QString());
        label_10->setText(QApplication::translate("ui_producto_agregar_montura", "Forma", 0, QApplication::UnicodeUTF8));
        pushButton_xforma->setText(QString());
        label_11->setText(QApplication::translate("ui_producto_agregar_montura", "Calidad", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        label_15->setText(QApplication::translate("ui_producto_agregar_montura", "Color", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QString());
        pushButton_agregar->setText(QApplication::translate("ui_producto_agregar_montura", "Agregar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_producto_agregar_montura", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_montura: public Ui_ui_producto_agregar_montura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_MONTURA_H
