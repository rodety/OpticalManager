/********************************************************************************
** Form generated from reading UI file 'ui_producto_datos.ui'
**
** Created: Thu 27. Dec 16:15:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_DATOS_H
#define UI_UI_PRODUCTO_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_ui_producto_datos
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    MyComboBox *calidad_luna;
    QLabel *label;
    MyComboBox *tipo_luna;
    QLabel *label_3;
    QLineEdit *medida;
    QLabel *label_4;
    MyComboBox *diametro_c;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Buscar;
    QPushButton *Cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ui_producto_datos)
    {
        if (ui_producto_datos->objectName().isEmpty())
            ui_producto_datos->setObjectName(QString::fromUtf8("ui_producto_datos"));
        ui_producto_datos->resize(270, 151);
        gridLayout = new QGridLayout(ui_producto_datos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(ui_producto_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        calidad_luna = new MyComboBox(ui_producto_datos);
        calidad_luna->setObjectName(QString::fromUtf8("calidad_luna"));

        formLayout->setWidget(0, QFormLayout::FieldRole, calidad_luna);

        label = new QLabel(ui_producto_datos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        tipo_luna = new MyComboBox(ui_producto_datos);
        tipo_luna->setObjectName(QString::fromUtf8("tipo_luna"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tipo_luna);

        label_3 = new QLabel(ui_producto_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        medida = new QLineEdit(ui_producto_datos);
        medida->setObjectName(QString::fromUtf8("medida"));

        formLayout->setWidget(2, QFormLayout::FieldRole, medida);

        label_4 = new QLabel(ui_producto_datos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        diametro_c = new MyComboBox(ui_producto_datos);
        diametro_c->setObjectName(QString::fromUtf8("diametro_c"));

        formLayout->setWidget(3, QFormLayout::FieldRole, diametro_c);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Buscar = new QPushButton(ui_producto_datos);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));

        horizontalLayout->addWidget(Buscar);

        Cancelar = new QPushButton(ui_producto_datos);
        Cancelar->setObjectName(QString::fromUtf8("Cancelar"));

        horizontalLayout->addWidget(Cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ui_producto_datos);

        QMetaObject::connectSlotsByName(ui_producto_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_producto_datos)
    {
        ui_producto_datos->setWindowTitle(QApplication::translate("ui_producto_datos", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto_datos", "Calidad de Luna", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_producto_datos", "Tipo de Luna", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto_datos", "Medida", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_producto_datos", "Diametro", 0, QApplication::UnicodeUTF8));
        Buscar->setText(QApplication::translate("ui_producto_datos", "Buscar", 0, QApplication::UnicodeUTF8));
        Cancelar->setText(QApplication::translate("ui_producto_datos", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto_datos: public Ui_ui_producto_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_DATOS_H
