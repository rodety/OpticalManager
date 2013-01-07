/********************************************************************************
** Form generated from reading UI file 'ui_datos_proveedor.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DATOS_PROVEEDOR_H
#define UI_UI_DATOS_PROVEEDOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_datos_proveedor
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_razon_social;
    QLabel *label_3;
    QLineEdit *lineEdit_ruc;
    QLabel *label_4;
    QLineEdit *lineEdit_direccion;
    QLabel *label_5;
    QLineEdit *lineEdit_telefono1;
    QLabel *label_6;
    QLineEdit *lineEdit_telefono2;
    QLabel *label_7;
    QLineEdit *lineEdit_nombre_contacto;
    QLabel *label_10;
    QLineEdit *lineEdit_email;
    QLabel *label_8;
    QLineEdit *lineEdit_nombre_banco;
    QLabel *label_9;
    QLineEdit *lineEdit_numero_cuenta;
    QLabel *label_11;
    QLineEdit *lineEdit_comentario;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ui_datos_proveedor)
    {
        if (ui_datos_proveedor->objectName().isEmpty())
            ui_datos_proveedor->setObjectName(QString::fromUtf8("ui_datos_proveedor"));
        ui_datos_proveedor->resize(430, 298);
        gridLayoutWidget = new QWidget(ui_datos_proveedor);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 408, 280));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        lineEdit_razon_social = new QLineEdit(gridLayoutWidget);
        lineEdit_razon_social->setObjectName(QString::fromUtf8("lineEdit_razon_social"));

        gridLayout->addWidget(lineEdit_razon_social, 1, 2, 1, 3);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        lineEdit_ruc = new QLineEdit(gridLayoutWidget);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));

        gridLayout->addWidget(lineEdit_ruc, 2, 2, 1, 2);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        lineEdit_direccion = new QLineEdit(gridLayoutWidget);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        gridLayout->addWidget(lineEdit_direccion, 3, 2, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        lineEdit_telefono1 = new QLineEdit(gridLayoutWidget);
        lineEdit_telefono1->setObjectName(QString::fromUtf8("lineEdit_telefono1"));

        gridLayout->addWidget(lineEdit_telefono1, 4, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 3, 1, 1);

        lineEdit_telefono2 = new QLineEdit(gridLayoutWidget);
        lineEdit_telefono2->setObjectName(QString::fromUtf8("lineEdit_telefono2"));

        gridLayout->addWidget(lineEdit_telefono2, 4, 4, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 1, 1, 1);

        lineEdit_nombre_contacto = new QLineEdit(gridLayoutWidget);
        lineEdit_nombre_contacto->setObjectName(QString::fromUtf8("lineEdit_nombre_contacto"));

        gridLayout->addWidget(lineEdit_nombre_contacto, 5, 2, 1, 3);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 1, 1, 1);

        lineEdit_email = new QLineEdit(gridLayoutWidget);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        gridLayout->addWidget(lineEdit_email, 6, 2, 1, 3);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 1, 1, 1);

        lineEdit_nombre_banco = new QLineEdit(gridLayoutWidget);
        lineEdit_nombre_banco->setObjectName(QString::fromUtf8("lineEdit_nombre_banco"));

        gridLayout->addWidget(lineEdit_nombre_banco, 7, 2, 1, 3);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 1, 1, 1);

        lineEdit_numero_cuenta = new QLineEdit(gridLayoutWidget);
        lineEdit_numero_cuenta->setObjectName(QString::fromUtf8("lineEdit_numero_cuenta"));

        gridLayout->addWidget(lineEdit_numero_cuenta, 8, 2, 1, 3);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 9, 1, 1, 1);

        lineEdit_comentario = new QLineEdit(gridLayoutWidget);
        lineEdit_comentario->setObjectName(QString::fromUtf8("lineEdit_comentario"));

        gridLayout->addWidget(lineEdit_comentario, 9, 2, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(gridLayoutWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        horizontalLayout->addWidget(pushButton_save);

        pushButton_cancel = new QPushButton(gridLayoutWidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 10, 1, 1, 4);


        retranslateUi(ui_datos_proveedor);

        QMetaObject::connectSlotsByName(ui_datos_proveedor);
    } // setupUi

    void retranslateUi(QWidget *ui_datos_proveedor)
    {
        ui_datos_proveedor->setWindowTitle(QApplication::translate("ui_datos_proveedor", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_datos_proveedor", "Datos Proveedor", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_datos_proveedor", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_datos_proveedor", "Ruc", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_datos_proveedor", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_datos_proveedor", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_datos_proveedor", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_datos_proveedor", "Contacto", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ui_datos_proveedor", "Email", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_datos_proveedor", "Banco", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_datos_proveedor", "Cuenta Bancaria", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_datos_proveedor", "Comentario", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("ui_datos_proveedor", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("ui_datos_proveedor", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_datos_proveedor: public Ui_ui_datos_proveedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DATOS_PROVEEDOR_H
