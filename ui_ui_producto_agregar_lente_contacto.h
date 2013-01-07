/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_lente_contacto.ui'
**
** Created: Thu 27. Dec 16:42:50 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
#define UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
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

class Ui_ui_producto_agregar_lente_contacto
{
public:
    QGridLayout *gridLayout_2;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *line_stock;
    QLabel *label_14;
    QLineEdit *line_compra;
    QLabel *label_15;
    QLineEdit *line_venta;
    QLabel *label_16;
    QLineEdit *line_descuento;
    QLabel *label_17;
    QLineEdit *line_visibilidad;
    QLabel *label_18;
    QLineEdit *line_acuoso;
    QLabel *label_19;
    QLineEdit *line_disenio;
    QLabel *label_20;
    QLineEdit *line_rango_k;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    MyComboBox *comboBox_marca;
    QPushButton *marca_x;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    MyComboBox *comboBox_tipo_lente;
    QPushButton *topolente_x;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    MyComboBox *comboBox_potencia;
    QPushButton *portencia_x;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    MyComboBox *comboBox_curva_base;
    QPushButton *curvabase_x;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    MyComboBox *comboBox_diametro;
    QPushButton *diametro_x;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    MyComboBox *comboBox_tiempo_uso;
    QPushButton *tiempouso_x;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    MyComboBox *comboBox_material;
    QPushButton *material_x;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *boton_agregar;
    QPushButton *boton_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ui_producto_agregar_lente_contacto)
    {
        if (ui_producto_agregar_lente_contacto->objectName().isEmpty())
            ui_producto_agregar_lente_contacto->setObjectName(QString::fromUtf8("ui_producto_agregar_lente_contacto"));
        ui_producto_agregar_lente_contacto->resize(521, 436);
        ui_producto_agregar_lente_contacto->setMinimumSize(QSize(0, 0));
        ui_producto_agregar_lente_contacto->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(ui_producto_agregar_lente_contacto);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line = new QFrame(ui_producto_agregar_lente_contacto);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(ui_producto_agregar_lente_contacto);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        line_stock = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_stock->setObjectName(QString::fromUtf8("line_stock"));
        line_stock->setAutoFillBackground(false);

        gridLayout->addWidget(line_stock, 0, 1, 1, 1);

        label_14 = new QLabel(ui_producto_agregar_lente_contacto);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        line_compra = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_compra->setObjectName(QString::fromUtf8("line_compra"));

        gridLayout->addWidget(line_compra, 1, 1, 1, 1);

        label_15 = new QLabel(ui_producto_agregar_lente_contacto);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 2, 0, 1, 1);

        line_venta = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_venta->setObjectName(QString::fromUtf8("line_venta"));

        gridLayout->addWidget(line_venta, 2, 1, 1, 1);

        label_16 = new QLabel(ui_producto_agregar_lente_contacto);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 3, 0, 1, 1);

        line_descuento = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_descuento->setObjectName(QString::fromUtf8("line_descuento"));

        gridLayout->addWidget(line_descuento, 3, 1, 1, 1);

        label_17 = new QLabel(ui_producto_agregar_lente_contacto);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 4, 0, 1, 1);

        line_visibilidad = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_visibilidad->setObjectName(QString::fromUtf8("line_visibilidad"));

        gridLayout->addWidget(line_visibilidad, 4, 1, 1, 1);

        label_18 = new QLabel(ui_producto_agregar_lente_contacto);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        line_acuoso = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_acuoso->setObjectName(QString::fromUtf8("line_acuoso"));

        gridLayout->addWidget(line_acuoso, 5, 1, 1, 1);

        label_19 = new QLabel(ui_producto_agregar_lente_contacto);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 6, 0, 1, 1);

        line_disenio = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_disenio->setObjectName(QString::fromUtf8("line_disenio"));

        gridLayout->addWidget(line_disenio, 6, 1, 1, 1);

        label_20 = new QLabel(ui_producto_agregar_lente_contacto);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 7, 0, 1, 1);

        line_rango_k = new QLineEdit(ui_producto_agregar_lente_contacto);
        line_rango_k->setObjectName(QString::fromUtf8("line_rango_k"));

        gridLayout->addWidget(line_rango_k, 7, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(ui_producto_agregar_lente_contacto);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_marca = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));
        comboBox_marca->setMinimumSize(QSize(230, 0));
        comboBox_marca->setMaximumSize(QSize(100, 100));

        horizontalLayout_2->addWidget(comboBox_marca);

        marca_x = new QPushButton(ui_producto_agregar_lente_contacto);
        marca_x->setObjectName(QString::fromUtf8("marca_x"));
        marca_x->setMinimumSize(QSize(38, 27));
        marca_x->setMaximumSize(QSize(38, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        marca_x->setIcon(icon);
        marca_x->setFlat(true);

        horizontalLayout_2->addWidget(marca_x);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(ui_producto_agregar_lente_contacto);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_tipo_lente = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_tipo_lente->setObjectName(QString::fromUtf8("comboBox_tipo_lente"));

        horizontalLayout_3->addWidget(comboBox_tipo_lente);

        topolente_x = new QPushButton(ui_producto_agregar_lente_contacto);
        topolente_x->setObjectName(QString::fromUtf8("topolente_x"));
        topolente_x->setMinimumSize(QSize(38, 27));
        topolente_x->setMaximumSize(QSize(38, 27));
        topolente_x->setIcon(icon);
        topolente_x->setFlat(true);

        horizontalLayout_3->addWidget(topolente_x);


        verticalLayout->addLayout(horizontalLayout_3);

        label_5 = new QLabel(ui_producto_agregar_lente_contacto);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBox_potencia = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_potencia->setObjectName(QString::fromUtf8("comboBox_potencia"));

        horizontalLayout_4->addWidget(comboBox_potencia);

        portencia_x = new QPushButton(ui_producto_agregar_lente_contacto);
        portencia_x->setObjectName(QString::fromUtf8("portencia_x"));
        portencia_x->setMinimumSize(QSize(38, 27));
        portencia_x->setMaximumSize(QSize(38, 27));
        portencia_x->setIcon(icon);
        portencia_x->setFlat(true);

        horizontalLayout_4->addWidget(portencia_x);


        verticalLayout->addLayout(horizontalLayout_4);

        label_6 = new QLabel(ui_producto_agregar_lente_contacto);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox_curva_base = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_curva_base->setObjectName(QString::fromUtf8("comboBox_curva_base"));

        horizontalLayout_5->addWidget(comboBox_curva_base);

        curvabase_x = new QPushButton(ui_producto_agregar_lente_contacto);
        curvabase_x->setObjectName(QString::fromUtf8("curvabase_x"));
        curvabase_x->setMinimumSize(QSize(38, 27));
        curvabase_x->setMaximumSize(QSize(38, 27));
        curvabase_x->setIcon(icon);
        curvabase_x->setFlat(true);

        horizontalLayout_5->addWidget(curvabase_x);


        verticalLayout->addLayout(horizontalLayout_5);

        label_7 = new QLabel(ui_producto_agregar_lente_contacto);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        comboBox_diametro = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_diametro->setObjectName(QString::fromUtf8("comboBox_diametro"));

        horizontalLayout_6->addWidget(comboBox_diametro);

        diametro_x = new QPushButton(ui_producto_agregar_lente_contacto);
        diametro_x->setObjectName(QString::fromUtf8("diametro_x"));
        diametro_x->setMinimumSize(QSize(38, 27));
        diametro_x->setMaximumSize(QSize(38, 27));
        diametro_x->setIcon(icon);
        diametro_x->setFlat(true);

        horizontalLayout_6->addWidget(diametro_x);


        verticalLayout->addLayout(horizontalLayout_6);

        label_8 = new QLabel(ui_producto_agregar_lente_contacto);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_tiempo_uso = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_tiempo_uso->setObjectName(QString::fromUtf8("comboBox_tiempo_uso"));

        horizontalLayout_7->addWidget(comboBox_tiempo_uso);

        tiempouso_x = new QPushButton(ui_producto_agregar_lente_contacto);
        tiempouso_x->setObjectName(QString::fromUtf8("tiempouso_x"));
        tiempouso_x->setMinimumSize(QSize(38, 27));
        tiempouso_x->setMaximumSize(QSize(38, 27));
        tiempouso_x->setIcon(icon);
        tiempouso_x->setFlat(true);

        horizontalLayout_7->addWidget(tiempouso_x);


        verticalLayout->addLayout(horizontalLayout_7);

        label_9 = new QLabel(ui_producto_agregar_lente_contacto);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBox_material = new MyComboBox(ui_producto_agregar_lente_contacto);
        comboBox_material->setObjectName(QString::fromUtf8("comboBox_material"));

        horizontalLayout_8->addWidget(comboBox_material);

        material_x = new QPushButton(ui_producto_agregar_lente_contacto);
        material_x->setObjectName(QString::fromUtf8("material_x"));
        material_x->setMinimumSize(QSize(38, 27));
        material_x->setMaximumSize(QSize(38, 27));
        material_x->setIcon(icon);
        material_x->setFlat(true);

        horizontalLayout_8->addWidget(material_x);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        boton_agregar = new QPushButton(ui_producto_agregar_lente_contacto);
        boton_agregar->setObjectName(QString::fromUtf8("boton_agregar"));

        horizontalLayout_9->addWidget(boton_agregar);

        boton_cancelar = new QPushButton(ui_producto_agregar_lente_contacto);
        boton_cancelar->setObjectName(QString::fromUtf8("boton_cancelar"));

        horizontalLayout_9->addWidget(boton_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_9);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        QWidget::setTabOrder(line_stock, line_compra);
        QWidget::setTabOrder(line_compra, line_venta);
        QWidget::setTabOrder(line_venta, line_descuento);
        QWidget::setTabOrder(line_descuento, line_visibilidad);
        QWidget::setTabOrder(line_visibilidad, line_acuoso);
        QWidget::setTabOrder(line_acuoso, line_disenio);
        QWidget::setTabOrder(line_disenio, line_rango_k);
        QWidget::setTabOrder(line_rango_k, comboBox_marca);
        QWidget::setTabOrder(comboBox_marca, comboBox_tipo_lente);
        QWidget::setTabOrder(comboBox_tipo_lente, comboBox_potencia);
        QWidget::setTabOrder(comboBox_potencia, comboBox_curva_base);
        QWidget::setTabOrder(comboBox_curva_base, comboBox_diametro);
        QWidget::setTabOrder(comboBox_diametro, comboBox_tiempo_uso);
        QWidget::setTabOrder(comboBox_tiempo_uso, comboBox_material);
        QWidget::setTabOrder(comboBox_material, marca_x);
        QWidget::setTabOrder(marca_x, topolente_x);
        QWidget::setTabOrder(topolente_x, portencia_x);
        QWidget::setTabOrder(portencia_x, curvabase_x);
        QWidget::setTabOrder(curvabase_x, diametro_x);
        QWidget::setTabOrder(diametro_x, tiempouso_x);
        QWidget::setTabOrder(tiempouso_x, material_x);
        QWidget::setTabOrder(material_x, boton_agregar);
        QWidget::setTabOrder(boton_agregar, boton_cancelar);

        retranslateUi(ui_producto_agregar_lente_contacto);

        QMetaObject::connectSlotsByName(ui_producto_agregar_lente_contacto);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_lente_contacto)
    {
        ui_producto_agregar_lente_contacto->setWindowTitle(QApplication::translate("ui_producto_agregar_lente_contacto", "Lente de Contacto", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Stock", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Venta", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Precio de Descuento", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tinte de Visibilidad", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Contenido Acuoso", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Dise\303\261o", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Rango K", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Marca", 0, QApplication::UnicodeUTF8));
        marca_x->setText(QString());
        label_4->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tipo de Lente", 0, QApplication::UnicodeUTF8));
        topolente_x->setText(QString());
        label_5->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Potencia", 0, QApplication::UnicodeUTF8));
        portencia_x->setText(QString());
        label_6->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Curva Base", 0, QApplication::UnicodeUTF8));
        curvabase_x->setText(QString());
        label_7->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Diametro", 0, QApplication::UnicodeUTF8));
        diametro_x->setText(QString());
        label_8->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Tiempo de Uso", 0, QApplication::UnicodeUTF8));
        tiempouso_x->setText(QString());
        label_9->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Material", 0, QApplication::UnicodeUTF8));
        material_x->setText(QString());
        boton_agregar->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Agregar", 0, QApplication::UnicodeUTF8));
        boton_cancelar->setText(QApplication::translate("ui_producto_agregar_lente_contacto", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_lente_contacto: public Ui_ui_producto_agregar_lente_contacto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
