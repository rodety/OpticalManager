/********************************************************************************
** Form generated from reading UI file 'ui_tienda_agregar.ui'
**
** Created: Thu 27. Dec 16:59:19 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TIENDA_AGREGAR_H
#define UI_UI_TIENDA_AGREGAR_H

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

QT_BEGIN_NAMESPACE

class Ui_ui_tienda_agregar
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_24;
    QLineEdit *textAlias;
    QLabel *label_19;
    QLineEdit *textDireccion;
    QLabel *label_22;
    QLineEdit *textTelefono;
    QLabel *label_23;
    QLineEdit *textPermisoMunicipal;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Aceptar;
    QPushButton *pushButton_Cancelar;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ui_tienda_agregar)
    {
        if (ui_tienda_agregar->objectName().isEmpty())
            ui_tienda_agregar->setObjectName(QString::fromUtf8("ui_tienda_agregar"));
        ui_tienda_agregar->resize(261, 149);
        gridLayout = new QGridLayout(ui_tienda_agregar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_24 = new QLabel(ui_tienda_agregar);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_24);

        textAlias = new QLineEdit(ui_tienda_agregar);
        textAlias->setObjectName(QString::fromUtf8("textAlias"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textAlias);

        label_19 = new QLabel(ui_tienda_agregar);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_19);

        textDireccion = new QLineEdit(ui_tienda_agregar);
        textDireccion->setObjectName(QString::fromUtf8("textDireccion"));

        formLayout->setWidget(1, QFormLayout::FieldRole, textDireccion);

        label_22 = new QLabel(ui_tienda_agregar);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_22);

        textTelefono = new QLineEdit(ui_tienda_agregar);
        textTelefono->setObjectName(QString::fromUtf8("textTelefono"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textTelefono);

        label_23 = new QLabel(ui_tienda_agregar);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_23);

        textPermisoMunicipal = new QLineEdit(ui_tienda_agregar);
        textPermisoMunicipal->setObjectName(QString::fromUtf8("textPermisoMunicipal"));

        formLayout->setWidget(3, QFormLayout::FieldRole, textPermisoMunicipal);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Aceptar = new QPushButton(ui_tienda_agregar);
        pushButton_Aceptar->setObjectName(QString::fromUtf8("pushButton_Aceptar"));

        horizontalLayout->addWidget(pushButton_Aceptar);

        pushButton_Cancelar = new QPushButton(ui_tienda_agregar);
        pushButton_Cancelar->setObjectName(QString::fromUtf8("pushButton_Cancelar"));

        horizontalLayout->addWidget(pushButton_Cancelar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(ui_tienda_agregar);

        QMetaObject::connectSlotsByName(ui_tienda_agregar);
    } // setupUi

    void retranslateUi(QDialog *ui_tienda_agregar)
    {
        ui_tienda_agregar->setWindowTitle(QApplication::translate("ui_tienda_agregar", "Agregar Tienda", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_tienda_agregar", "Alias:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_tienda_agregar", "Direcci\303\263n:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_tienda_agregar", "Tel\303\251fono:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ui_tienda_agregar", "Permiso Municipal:", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar->setText(QApplication::translate("ui_tienda_agregar", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar->setText(QApplication::translate("ui_tienda_agregar", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_tienda_agregar: public Ui_ui_tienda_agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TIENDA_AGREGAR_H
