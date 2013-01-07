/********************************************************************************
** Form generated from reading UI file 'ui_tienda.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TIENDA_H
#define UI_UI_TIENDA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_tienda
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QComboBox *comboBox_empresa;
    QPushButton *imprimir_vitrina;
    QPushButton *agregar_vitrina;
    QSpacerItem *horizontalSpacer;
    QPushButton *editar_vitrina;
    QComboBox *comboBox_niveles;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deshabilitar_vitrina;
    QTableWidget *grilla;
    QPushButton *agregar_tienda;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *imprimir_tienda;
    QComboBox *comboBox_vitrina;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *editar_tienda;
    QComboBox *comboBox_tienda;
    QPushButton *deshabilitar_tienda;
    QPushButton *pushButton_aceptar_traspaso;
    QPushButton *pushButton_traspaso;
    QPushButton *button_traspaso_almacen;

    void setupUi(QWidget *ui_tienda)
    {
        if (ui_tienda->objectName().isEmpty())
            ui_tienda->setObjectName(QString::fromUtf8("ui_tienda"));
        ui_tienda->resize(868, 443);
        gridLayout_7 = new QGridLayout(ui_tienda);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        comboBox_empresa = new QComboBox(ui_tienda);
        comboBox_empresa->setObjectName(QString::fromUtf8("comboBox_empresa"));

        gridLayout_6->addWidget(comboBox_empresa, 0, 1, 1, 1);

        imprimir_vitrina = new QPushButton(ui_tienda);
        imprimir_vitrina->setObjectName(QString::fromUtf8("imprimir_vitrina"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716391_monotone_printer_hardware.png"), QSize(), QIcon::Normal, QIcon::Off);
        imprimir_vitrina->setIcon(icon);
        imprimir_vitrina->setFlat(true);

        gridLayout_6->addWidget(imprimir_vitrina, 2, 5, 1, 1);

        agregar_vitrina = new QPushButton(ui_tienda);
        agregar_vitrina->setObjectName(QString::fromUtf8("agregar_vitrina"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1348112114_notification_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        agregar_vitrina->setIcon(icon1);
        agregar_vitrina->setFlat(true);

        gridLayout_6->addWidget(agregar_vitrina, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 8, 1, 1);

        editar_vitrina = new QPushButton(ui_tienda);
        editar_vitrina->setObjectName(QString::fromUtf8("editar_vitrina"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1348112116_file_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editar_vitrina->setIcon(icon2);
        editar_vitrina->setFlat(true);

        gridLayout_6->addWidget(editar_vitrina, 2, 3, 1, 1);

        comboBox_niveles = new QComboBox(ui_tienda);
        comboBox_niveles->setObjectName(QString::fromUtf8("comboBox_niveles"));

        gridLayout_6->addWidget(comboBox_niveles, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 8, 1, 1);

        deshabilitar_vitrina = new QPushButton(ui_tienda);
        deshabilitar_vitrina->setObjectName(QString::fromUtf8("deshabilitar_vitrina"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/notification_error.png"), QSize(), QIcon::Normal, QIcon::Off);
        deshabilitar_vitrina->setIcon(icon3);
        deshabilitar_vitrina->setFlat(true);

        gridLayout_6->addWidget(deshabilitar_vitrina, 2, 4, 1, 1);

        grilla = new QTableWidget(ui_tienda);
        grilla->setObjectName(QString::fromUtf8("grilla"));

        gridLayout_6->addWidget(grilla, 5, 0, 1, 9);

        agregar_tienda = new QPushButton(ui_tienda);
        agregar_tienda->setObjectName(QString::fromUtf8("agregar_tienda"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(agregar_tienda->sizePolicy().hasHeightForWidth());
        agregar_tienda->setSizePolicy(sizePolicy);
        agregar_tienda->setIcon(icon1);
        agregar_tienda->setFlat(true);

        gridLayout_6->addWidget(agregar_tienda, 1, 2, 1, 1);

        label = new QLabel(ui_tienda);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 2, 8, 1, 1);

        imprimir_tienda = new QPushButton(ui_tienda);
        imprimir_tienda->setObjectName(QString::fromUtf8("imprimir_tienda"));
        imprimir_tienda->setIcon(icon);
        imprimir_tienda->setFlat(true);

        gridLayout_6->addWidget(imprimir_tienda, 1, 5, 1, 1);

        comboBox_vitrina = new QComboBox(ui_tienda);
        comboBox_vitrina->setObjectName(QString::fromUtf8("comboBox_vitrina"));

        gridLayout_6->addWidget(comboBox_vitrina, 2, 1, 1, 1);

        label_2 = new QLabel(ui_tienda);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_2, 4, 0, 1, 9);

        label_5 = new QLabel(ui_tienda);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 3, 0, 1, 1);

        label_3 = new QLabel(ui_tienda);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(ui_tienda);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 2, 0, 1, 1);

        editar_tienda = new QPushButton(ui_tienda);
        editar_tienda->setObjectName(QString::fromUtf8("editar_tienda"));
        sizePolicy.setHeightForWidth(editar_tienda->sizePolicy().hasHeightForWidth());
        editar_tienda->setSizePolicy(sizePolicy);
        editar_tienda->setIcon(icon2);
        editar_tienda->setFlat(true);

        gridLayout_6->addWidget(editar_tienda, 1, 3, 1, 1);

        comboBox_tienda = new QComboBox(ui_tienda);
        comboBox_tienda->setObjectName(QString::fromUtf8("comboBox_tienda"));

        gridLayout_6->addWidget(comboBox_tienda, 1, 1, 1, 1);

        deshabilitar_tienda = new QPushButton(ui_tienda);
        deshabilitar_tienda->setObjectName(QString::fromUtf8("deshabilitar_tienda"));
        sizePolicy.setHeightForWidth(deshabilitar_tienda->sizePolicy().hasHeightForWidth());
        deshabilitar_tienda->setSizePolicy(sizePolicy);
        deshabilitar_tienda->setIcon(icon3);
        deshabilitar_tienda->setFlat(true);

        gridLayout_6->addWidget(deshabilitar_tienda, 1, 4, 1, 1);

        pushButton_aceptar_traspaso = new QPushButton(ui_tienda);
        pushButton_aceptar_traspaso->setObjectName(QString::fromUtf8("pushButton_aceptar_traspaso"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/notification_done.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_aceptar_traspaso->setIcon(icon4);
        pushButton_aceptar_traspaso->setFlat(true);

        gridLayout_6->addWidget(pushButton_aceptar_traspaso, 6, 8, 1, 1);

        pushButton_traspaso = new QPushButton(ui_tienda);
        pushButton_traspaso->setObjectName(QString::fromUtf8("pushButton_traspaso"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/stock_task-assigned-to.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_traspaso->setIcon(icon5);
        pushButton_traspaso->setFlat(true);

        gridLayout_6->addWidget(pushButton_traspaso, 6, 4, 1, 2);

        button_traspaso_almacen = new QPushButton(ui_tienda);
        button_traspaso_almacen->setObjectName(QString::fromUtf8("button_traspaso_almacen"));
        button_traspaso_almacen->setIcon(icon5);
        button_traspaso_almacen->setFlat(true);

        gridLayout_6->addWidget(button_traspaso_almacen, 6, 6, 1, 2);


        gridLayout_7->addLayout(gridLayout_6, 5, 0, 1, 1);


        retranslateUi(ui_tienda);

        QMetaObject::connectSlotsByName(ui_tienda);
    } // setupUi

    void retranslateUi(QWidget *ui_tienda)
    {
        ui_tienda->setWindowTitle(QApplication::translate("ui_tienda", "Form", 0, QApplication::UnicodeUTF8));
        imprimir_vitrina->setText(QApplication::translate("ui_tienda", "Imprimir", 0, QApplication::UnicodeUTF8));
        agregar_vitrina->setText(QApplication::translate("ui_tienda", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        editar_vitrina->setText(QApplication::translate("ui_tienda", "Editar", 0, QApplication::UnicodeUTF8));
        deshabilitar_vitrina->setText(QApplication::translate("ui_tienda", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        agregar_tienda->setText(QApplication::translate("ui_tienda", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_tienda", "Empresa: ", 0, QApplication::UnicodeUTF8));
        imprimir_tienda->setText(QApplication::translate("ui_tienda", "Imprimir", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_tienda", "Productos", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_tienda", "Nivel:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_tienda", "Tienda: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_tienda", "Vitrina: ", 0, QApplication::UnicodeUTF8));
        editar_tienda->setText(QApplication::translate("ui_tienda", "Editar", 0, QApplication::UnicodeUTF8));
        deshabilitar_tienda->setText(QApplication::translate("ui_tienda", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar_traspaso->setText(QApplication::translate("ui_tienda", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_traspaso->setText(QApplication::translate("ui_tienda", "Traspaso a Vitrina", 0, QApplication::UnicodeUTF8));
        button_traspaso_almacen->setText(QApplication::translate("ui_tienda", "Traspaso a Almacen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tienda: public Ui_ui_tienda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TIENDA_H
