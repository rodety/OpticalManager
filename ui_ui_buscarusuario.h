/********************************************************************************
** Form generated from reading UI file 'ui_buscarusuario.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_BUSCARUSUARIO_H
#define UI_UI_BUSCARUSUARIO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_BuscarUsuario
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *le_nombre;
    QLabel *label_2;
    QLineEdit *le_apellido;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_nick;
    QLineEdit *le_dni;

    void setupUi(QWidget *ui_BuscarUsuario)
    {
        if (ui_BuscarUsuario->objectName().isEmpty())
            ui_BuscarUsuario->setObjectName(QString::fromUtf8("ui_BuscarUsuario"));
        ui_BuscarUsuario->resize(366, 163);
        ui_BuscarUsuario->setMinimumSize(QSize(320, 158));
        gridLayout = new QGridLayout(ui_BuscarUsuario);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(ui_BuscarUsuario);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        le_nombre = new QLineEdit(ui_BuscarUsuario);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_nombre);

        label_2 = new QLabel(ui_BuscarUsuario);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        le_apellido = new QLineEdit(ui_BuscarUsuario);
        le_apellido->setObjectName(QString::fromUtf8("le_apellido"));

        formLayout->setWidget(1, QFormLayout::FieldRole, le_apellido);

        label_3 = new QLabel(ui_BuscarUsuario);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(ui_BuscarUsuario);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        le_nick = new QLineEdit(ui_BuscarUsuario);
        le_nick->setObjectName(QString::fromUtf8("le_nick"));
        le_nick->setMaxLength(32767);
        le_nick->setFrame(true);
        le_nick->setCursorPosition(0);

        formLayout->setWidget(3, QFormLayout::FieldRole, le_nick);

        le_dni = new QLineEdit(ui_BuscarUsuario);
        le_dni->setObjectName(QString::fromUtf8("le_dni"));
        le_dni->setMaxLength(32767);
        le_dni->setReadOnly(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, le_dni);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nombre, le_apellido);
        QWidget::setTabOrder(le_apellido, le_dni);
        QWidget::setTabOrder(le_dni, le_nick);

        retranslateUi(ui_BuscarUsuario);

        QMetaObject::connectSlotsByName(ui_BuscarUsuario);
    } // setupUi

    void retranslateUi(QWidget *ui_BuscarUsuario)
    {
        ui_BuscarUsuario->setWindowTitle(QApplication::translate("ui_BuscarUsuario", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_BuscarUsuario", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_BuscarUsuario", "Apellido", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_BuscarUsuario", "Dni", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_BuscarUsuario", "Nickname", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_BuscarUsuario: public Ui_ui_BuscarUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_BUSCARUSUARIO_H
