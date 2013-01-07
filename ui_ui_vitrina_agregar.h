/********************************************************************************
** Form generated from reading UI file 'ui_vitrina_agregar.ui'
**
** Created: Thu 27. Dec 16:59:19 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_VITRINA_AGREGAR_H
#define UI_UI_VITRINA_AGREGAR_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_vitrina_agregar
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_25;
    QLineEdit *textCodigo;
    QLabel *label_24;
    QLineEdit *textAlias;
    QLabel *label_28;
    QSpinBox *spinBoxFilas;
    QLabel *label_22;
    QSpinBox *spinBoxcolumnas;
    QLabel *label_23;
    QSpinBox *spinBoxniveles;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *guardar;
    QPushButton *cancelar;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ui_vitrina_agregar)
    {
        if (ui_vitrina_agregar->objectName().isEmpty())
            ui_vitrina_agregar->setObjectName(QString::fromUtf8("ui_vitrina_agregar"));
        ui_vitrina_agregar->resize(190, 175);
        gridLayout = new QGridLayout(ui_vitrina_agregar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_25 = new QLabel(ui_vitrina_agregar);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_25);

        textCodigo = new QLineEdit(ui_vitrina_agregar);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textCodigo);

        label_24 = new QLabel(ui_vitrina_agregar);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_24);

        textAlias = new QLineEdit(ui_vitrina_agregar);
        textAlias->setObjectName(QString::fromUtf8("textAlias"));

        formLayout->setWidget(1, QFormLayout::FieldRole, textAlias);

        label_28 = new QLabel(ui_vitrina_agregar);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_28);

        spinBoxFilas = new QSpinBox(ui_vitrina_agregar);
        spinBoxFilas->setObjectName(QString::fromUtf8("spinBoxFilas"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBoxFilas);

        label_22 = new QLabel(ui_vitrina_agregar);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_22);

        spinBoxcolumnas = new QSpinBox(ui_vitrina_agregar);
        spinBoxcolumnas->setObjectName(QString::fromUtf8("spinBoxcolumnas"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxcolumnas);

        label_23 = new QLabel(ui_vitrina_agregar);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_23);

        spinBoxniveles = new QSpinBox(ui_vitrina_agregar);
        spinBoxniveles->setObjectName(QString::fromUtf8("spinBoxniveles"));

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxniveles);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        guardar = new QPushButton(ui_vitrina_agregar);
        guardar->setObjectName(QString::fromUtf8("guardar"));

        horizontalLayout->addWidget(guardar);

        cancelar = new QPushButton(ui_vitrina_agregar);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));

        horizontalLayout->addWidget(cancelar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(ui_vitrina_agregar);

        QMetaObject::connectSlotsByName(ui_vitrina_agregar);
    } // setupUi

    void retranslateUi(QWidget *ui_vitrina_agregar)
    {
        ui_vitrina_agregar->setWindowTitle(QApplication::translate("ui_vitrina_agregar", "Form", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_vitrina_agregar", "Codigo:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_vitrina_agregar", "Alias:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_vitrina_agregar", "Filas:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_vitrina_agregar", "Columnas:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ui_vitrina_agregar", "Niveles:", 0, QApplication::UnicodeUTF8));
        guardar->setText(QApplication::translate("ui_vitrina_agregar", "Guardar", 0, QApplication::UnicodeUTF8));
        cancelar->setText(QApplication::translate("ui_vitrina_agregar", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_vitrina_agregar: public Ui_ui_vitrina_agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_VITRINA_AGREGAR_H
