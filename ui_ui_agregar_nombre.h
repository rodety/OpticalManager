/********************************************************************************
** Form generated from reading UI file 'ui_agregar_nombre.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_AGREGAR_NOMBRE_H
#define UI_UI_AGREGAR_NOMBRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_agregar_nombre
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_nombre;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;

    void setupUi(QDialog *ui_agregar_nombre)
    {
        if (ui_agregar_nombre->objectName().isEmpty())
            ui_agregar_nombre->setObjectName(QString::fromUtf8("ui_agregar_nombre"));
        ui_agregar_nombre->resize(481, 123);
        widget = new QWidget(ui_agregar_nombre);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 461, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        lineEdit_nombre = new QLineEdit(widget);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));

        horizontalLayout->addWidget(lineEdit_nombre);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_guardar = new QPushButton(widget);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));

        horizontalLayout_3->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(widget);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_3->addWidget(pushButton_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ui_agregar_nombre);

        QMetaObject::connectSlotsByName(ui_agregar_nombre);
    } // setupUi

    void retranslateUi(QDialog *ui_agregar_nombre)
    {
        ui_agregar_nombre->setWindowTitle(QApplication::translate("ui_agregar_nombre", "Agregar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_agregar_nombre", "Agregar Nombre", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QApplication::translate("ui_agregar_nombre", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_agregar_nombre", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_agregar_nombre: public Ui_ui_agregar_nombre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_AGREGAR_NOMBRE_H
