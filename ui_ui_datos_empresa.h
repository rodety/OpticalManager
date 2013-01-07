/********************************************************************************
** Form generated from reading UI file 'ui_datos_empresa.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DATOS_EMPRESA_H
#define UI_UI_DATOS_EMPRESA_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_datos_empresa
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_raz_social;
    QLabel *label_3;
    QLineEdit *lineEdit__ruc;
    QLabel *label_4;
    QLineEdit *lineEdit__direccion;
    QLabel *label_5;
    QLineEdit *lineEdit_telefono;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_accept;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *ui_datos_empresa)
    {
        if (ui_datos_empresa->objectName().isEmpty())
            ui_datos_empresa->setObjectName(QString::fromUtf8("ui_datos_empresa"));
        ui_datos_empresa->resize(230, 150);
        widget = new QWidget(ui_datos_empresa);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 205, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_raz_social = new QLineEdit(widget);
        lineEdit_raz_social->setObjectName(QString::fromUtf8("lineEdit_raz_social"));

        gridLayout->addWidget(lineEdit_raz_social, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit__ruc = new QLineEdit(widget);
        lineEdit__ruc->setObjectName(QString::fromUtf8("lineEdit__ruc"));

        gridLayout->addWidget(lineEdit__ruc, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lineEdit__direccion = new QLineEdit(widget);
        lineEdit__direccion->setObjectName(QString::fromUtf8("lineEdit__direccion"));

        gridLayout->addWidget(lineEdit__direccion, 2, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        lineEdit_telefono = new QLineEdit(widget);
        lineEdit_telefono->setObjectName(QString::fromUtf8("lineEdit_telefono"));

        gridLayout->addWidget(lineEdit_telefono, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_accept = new QPushButton(widget);
        pushButton_accept->setObjectName(QString::fromUtf8("pushButton_accept"));

        horizontalLayout->addWidget(pushButton_accept);

        pushButton_cancel = new QPushButton(widget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        retranslateUi(ui_datos_empresa);

        QMetaObject::connectSlotsByName(ui_datos_empresa);
    } // setupUi

    void retranslateUi(QWidget *ui_datos_empresa)
    {
        ui_datos_empresa->setWindowTitle(QApplication::translate("ui_datos_empresa", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_datos_empresa", "Raz\303\263n Social:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_datos_empresa", "Ruc:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_datos_empresa", "Direcci\303\263n:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_datos_empresa", "Tel\303\251lfono:", 0, QApplication::UnicodeUTF8));
        pushButton_accept->setText(QApplication::translate("ui_datos_empresa", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("ui_datos_empresa", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_datos_empresa: public Ui_ui_datos_empresa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DATOS_EMPRESA_H
