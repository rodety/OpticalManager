/********************************************************************************
** Form generated from reading UI file 'ui_producto_agregar_luna.ui'
**
** Created: Thu 27. Dec 16:15:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_AGREGAR_LUNA_H
#define UI_UI_PRODUCTO_AGREGAR_LUNA_H

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

class Ui_ui_producto_agregar_luna
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_stock;
    QLabel *label_20;
    QLineEdit *lineEdit_precio_compra;
    QLabel *label_19;
    QLineEdit *lineEdit_precio_venta;
    QLabel *label_7;
    QLineEdit *lineEdit_p_descuento;
    QLabel *label_3;
    QLineEdit *lineEdit_descripcion;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QLineEdit *descripcion_rango_medida;
    QLabel *label_13;
    QLineEdit *lineEdit_vinicial;
    QLabel *label_14;
    QLineEdit *lineEdit_vfinal;
    QLabel *label_12;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    MyComboBox *comboBox_tratamiento;
    QPushButton *pushButton_xindice;
    QLabel *label_10;
    MyComboBox *comboBox_tipo_luna;
    QPushButton *pushButton_xtipo;
    QLabel *label_11;
    MyComboBox *comboBox_calidad;
    QPushButton *pushButton_xcalidad;
    QLabel *label_21;
    MyComboBox *comboBox_diametro;
    QPushButton *pushButton_xdiametro;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ui_producto_agregar_luna)
    {
        if (ui_producto_agregar_luna->objectName().isEmpty())
            ui_producto_agregar_luna->setObjectName(QString::fromUtf8("ui_producto_agregar_luna"));
        ui_producto_agregar_luna->setEnabled(true);
        ui_producto_agregar_luna->resize(543, 264);
        ui_producto_agregar_luna->setMinimumSize(QSize(0, 0));
        ui_producto_agregar_luna->setMaximumSize(QSize(712, 522));
        ui_producto_agregar_luna->setContextMenuPolicy(Qt::NoContextMenu);
        ui_producto_agregar_luna->setWindowFilePath(QString::fromUtf8(""));
        ui_producto_agregar_luna->setSizeGripEnabled(false);
        ui_producto_agregar_luna->setModal(false);
        gridLayout_5 = new QGridLayout(ui_producto_agregar_luna);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(ui_producto_agregar_luna);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_stock = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_stock->setObjectName(QString::fromUtf8("lineEdit_stock"));

        gridLayout->addWidget(lineEdit_stock, 0, 1, 1, 1);

        label_20 = new QLabel(ui_producto_agregar_luna);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        lineEdit_precio_compra = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_precio_compra->setObjectName(QString::fromUtf8("lineEdit_precio_compra"));

        gridLayout->addWidget(lineEdit_precio_compra, 1, 1, 1, 1);

        label_19 = new QLabel(ui_producto_agregar_luna);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 2, 0, 1, 1);

        lineEdit_precio_venta = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_precio_venta->setObjectName(QString::fromUtf8("lineEdit_precio_venta"));

        gridLayout->addWidget(lineEdit_precio_venta, 2, 1, 1, 1);

        label_7 = new QLabel(ui_producto_agregar_luna);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        lineEdit_p_descuento = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_p_descuento->setObjectName(QString::fromUtf8("lineEdit_p_descuento"));

        gridLayout->addWidget(lineEdit_p_descuento, 3, 1, 1, 1);

        label_3 = new QLabel(ui_producto_agregar_luna);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_descripcion = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(190, 0));

        gridLayout->addWidget(lineEdit_descripcion, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_16 = new QLabel(ui_producto_agregar_luna);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        descripcion_rango_medida = new QLineEdit(ui_producto_agregar_luna);
        descripcion_rango_medida->setObjectName(QString::fromUtf8("descripcion_rango_medida"));

        gridLayout_3->addWidget(descripcion_rango_medida, 1, 1, 1, 2);

        label_13 = new QLabel(ui_producto_agregar_luna);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        lineEdit_vinicial = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_vinicial->setObjectName(QString::fromUtf8("lineEdit_vinicial"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_vinicial->sizePolicy().hasHeightForWidth());
        lineEdit_vinicial->setSizePolicy(sizePolicy);
        lineEdit_vinicial->setMaximumSize(QSize(60, 27));

        gridLayout_3->addWidget(lineEdit_vinicial, 2, 1, 1, 1);

        label_14 = new QLabel(ui_producto_agregar_luna);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 2, 2, 1, 1);

        lineEdit_vfinal = new QLineEdit(ui_producto_agregar_luna);
        lineEdit_vfinal->setObjectName(QString::fromUtf8("lineEdit_vfinal"));
        lineEdit_vfinal->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(lineEdit_vfinal, 2, 3, 1, 1);

        label_12 = new QLabel(ui_producto_agregar_luna);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 2);


        verticalLayout->addLayout(gridLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(ui_producto_agregar_luna);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        comboBox_tratamiento = new MyComboBox(ui_producto_agregar_luna);
        comboBox_tratamiento->setObjectName(QString::fromUtf8("comboBox_tratamiento"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_tratamiento->sizePolicy().hasHeightForWidth());
        comboBox_tratamiento->setSizePolicy(sizePolicy2);
        comboBox_tratamiento->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(comboBox_tratamiento, 1, 0, 1, 1);

        pushButton_xindice = new QPushButton(ui_producto_agregar_luna);
        pushButton_xindice->setObjectName(QString::fromUtf8("pushButton_xindice"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_xindice->sizePolicy().hasHeightForWidth());
        pushButton_xindice->setSizePolicy(sizePolicy3);
        pushButton_xindice->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716373_monotone_close_exit_delete_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_xindice->setIcon(icon);
        pushButton_xindice->setAutoDefault(false);
        pushButton_xindice->setFlat(true);

        gridLayout_2->addWidget(pushButton_xindice, 1, 1, 1, 1);

        label_10 = new QLabel(ui_producto_agregar_luna);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        comboBox_tipo_luna = new MyComboBox(ui_producto_agregar_luna);
        comboBox_tipo_luna->setObjectName(QString::fromUtf8("comboBox_tipo_luna"));
        sizePolicy2.setHeightForWidth(comboBox_tipo_luna->sizePolicy().hasHeightForWidth());
        comboBox_tipo_luna->setSizePolicy(sizePolicy2);
        comboBox_tipo_luna->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(comboBox_tipo_luna, 3, 0, 1, 1);

        pushButton_xtipo = new QPushButton(ui_producto_agregar_luna);
        pushButton_xtipo->setObjectName(QString::fromUtf8("pushButton_xtipo"));
        sizePolicy3.setHeightForWidth(pushButton_xtipo->sizePolicy().hasHeightForWidth());
        pushButton_xtipo->setSizePolicy(sizePolicy3);
        pushButton_xtipo->setMinimumSize(QSize(0, 0));
        pushButton_xtipo->setIcon(icon);
        pushButton_xtipo->setAutoDefault(false);
        pushButton_xtipo->setFlat(true);

        gridLayout_2->addWidget(pushButton_xtipo, 3, 1, 1, 1);

        label_11 = new QLabel(ui_producto_agregar_luna);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        comboBox_calidad = new MyComboBox(ui_producto_agregar_luna);
        comboBox_calidad->setObjectName(QString::fromUtf8("comboBox_calidad"));
        sizePolicy2.setHeightForWidth(comboBox_calidad->sizePolicy().hasHeightForWidth());
        comboBox_calidad->setSizePolicy(sizePolicy2);
        comboBox_calidad->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(comboBox_calidad, 5, 0, 1, 1);

        pushButton_xcalidad = new QPushButton(ui_producto_agregar_luna);
        pushButton_xcalidad->setObjectName(QString::fromUtf8("pushButton_xcalidad"));
        sizePolicy3.setHeightForWidth(pushButton_xcalidad->sizePolicy().hasHeightForWidth());
        pushButton_xcalidad->setSizePolicy(sizePolicy3);
        pushButton_xcalidad->setMinimumSize(QSize(0, 0));
        pushButton_xcalidad->setIcon(icon);
        pushButton_xcalidad->setAutoDefault(false);
        pushButton_xcalidad->setFlat(true);

        gridLayout_2->addWidget(pushButton_xcalidad, 5, 1, 1, 1);

        label_21 = new QLabel(ui_producto_agregar_luna);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777215, 9));

        gridLayout_2->addWidget(label_21, 6, 0, 1, 2);

        comboBox_diametro = new MyComboBox(ui_producto_agregar_luna);
        comboBox_diametro->setObjectName(QString::fromUtf8("comboBox_diametro"));
        sizePolicy2.setHeightForWidth(comboBox_diametro->sizePolicy().hasHeightForWidth());
        comboBox_diametro->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(comboBox_diametro, 7, 0, 1, 1);

        pushButton_xdiametro = new QPushButton(ui_producto_agregar_luna);
        pushButton_xdiametro->setObjectName(QString::fromUtf8("pushButton_xdiametro"));
        sizePolicy3.setHeightForWidth(pushButton_xdiametro->sizePolicy().hasHeightForWidth());
        pushButton_xdiametro->setSizePolicy(sizePolicy3);
        pushButton_xdiametro->setIcon(icon);
        pushButton_xdiametro->setAutoDefault(false);
        pushButton_xdiametro->setFlat(true);

        gridLayout_2->addWidget(pushButton_xdiametro, 7, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(ui_producto_agregar_luna);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_cancelar = new QPushButton(ui_producto_agregar_luna);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout->addWidget(pushButton_cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        label_12->raise();
        QWidget::setTabOrder(lineEdit_stock, lineEdit_precio_compra);
        QWidget::setTabOrder(lineEdit_precio_compra, lineEdit_precio_venta);
        QWidget::setTabOrder(lineEdit_precio_venta, lineEdit_p_descuento);
        QWidget::setTabOrder(lineEdit_p_descuento, lineEdit_descripcion);
        QWidget::setTabOrder(lineEdit_descripcion, descripcion_rango_medida);
        QWidget::setTabOrder(descripcion_rango_medida, lineEdit_vinicial);
        QWidget::setTabOrder(lineEdit_vinicial, lineEdit_vfinal);
        QWidget::setTabOrder(lineEdit_vfinal, comboBox_tratamiento);
        QWidget::setTabOrder(comboBox_tratamiento, comboBox_tipo_luna);
        QWidget::setTabOrder(comboBox_tipo_luna, comboBox_calidad);
        QWidget::setTabOrder(comboBox_calidad, comboBox_diametro);
        QWidget::setTabOrder(comboBox_diametro, pushButton_xindice);
        QWidget::setTabOrder(pushButton_xindice, pushButton_xtipo);
        QWidget::setTabOrder(pushButton_xtipo, pushButton_xcalidad);
        QWidget::setTabOrder(pushButton_xcalidad, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_xdiametro);
        QWidget::setTabOrder(pushButton_xdiametro, pushButton_cancelar);

        retranslateUi(ui_producto_agregar_luna);

        QMetaObject::connectSlotsByName(ui_producto_agregar_luna);
    } // setupUi

    void retranslateUi(QDialog *ui_producto_agregar_luna)
    {
        ui_producto_agregar_luna->setWindowTitle(QApplication::translate("ui_producto_agregar_luna", "Luna", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_agregar_luna", "Stock", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_producto_agregar_luna", "Precio de Compra", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_producto_agregar_luna", "Precio De Venta", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_producto_agregar_luna", "Precio Descuento", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_producto_agregar_luna", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Inicial", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_producto_agregar_luna", "Valor Final", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ui_producto_agregar_luna", "Rango de Medida", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_producto_agregar_luna", "Tratamiento", 0, QApplication::UnicodeUTF8));
        pushButton_xindice->setText(QString());
        label_10->setText(QApplication::translate("ui_producto_agregar_luna", "Tipo de  Luna", 0, QApplication::UnicodeUTF8));
        pushButton_xtipo->setText(QString());
        label_11->setText(QApplication::translate("ui_producto_agregar_luna", "Calidad", 0, QApplication::UnicodeUTF8));
        pushButton_xcalidad->setText(QString());
        label_21->setText(QApplication::translate("ui_producto_agregar_luna", "Diametro", 0, QApplication::UnicodeUTF8));
        pushButton_xdiametro->setText(QString());
        pushButton_5->setText(QApplication::translate("ui_producto_agregar_luna", "Agregar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_producto_agregar_luna", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_agregar_luna: public Ui_ui_producto_agregar_luna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_AGREGAR_LUNA_H
