/********************************************************************************
** Form generated from reading UI file 'ui_almacen_opciones.ui'
**
** Created: Thu Dec 13 01:20:09 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ALMACEN_OPCIONES_H
#define UI_UI_ALMACEN_OPCIONES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_almacen_opciones
{
public:
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_8;
    QLabel *label;
    QComboBox *comboEmpresa;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QGridLayout *gridLayout_2;
    QLineEdit *editAlmacen;
    QLineEdit *editAndamio;
    QLineEdit *editContenedor;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_11;
    QGridLayout *gridLayout_5;
    QComboBox *comboTienda;
    QComboBox *comboAlmacen;
    QComboBox *comboAndamio;
    QGridLayout *gridLayout_6;
    QPushButton *botonConfirmarAlmacen;
    QPushButton *botonConfirmarAndamio;
    QPushButton *botonConfirmarContenedor;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ui_almacen_opciones)
    {
        if (ui_almacen_opciones->objectName().isEmpty())
            ui_almacen_opciones->setObjectName(QString::fromUtf8("ui_almacen_opciones"));
        ui_almacen_opciones->resize(688, 206);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1348112114_notification_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_almacen_opciones->setWindowIcon(icon);
        gridLayout_13 = new QGridLayout(ui_almacen_opciones);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label = new QLabel(ui_almacen_opciones);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_8->addWidget(label, 0, 0, 1, 1);

        comboEmpresa = new QComboBox(ui_almacen_opciones);
        comboEmpresa->setObjectName(QString::fromUtf8("comboEmpresa"));

        gridLayout_8->addWidget(comboEmpresa, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_3, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(ui_almacen_opciones);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(ui_almacen_opciones);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(ui_almacen_opciones);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_8 = new QLabel(ui_almacen_opciones);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        editAlmacen = new QLineEdit(ui_almacen_opciones);
        editAlmacen->setObjectName(QString::fromUtf8("editAlmacen"));

        gridLayout_2->addWidget(editAlmacen, 0, 0, 1, 1);

        editAndamio = new QLineEdit(ui_almacen_opciones);
        editAndamio->setObjectName(QString::fromUtf8("editAndamio"));

        gridLayout_2->addWidget(editAndamio, 1, 0, 1, 1);

        editContenedor = new QLineEdit(ui_almacen_opciones);
        editContenedor->setObjectName(QString::fromUtf8("editContenedor"));

        gridLayout_2->addWidget(editContenedor, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(ui_almacen_opciones);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_7 = new QLabel(ui_almacen_opciones);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        label_9 = new QLabel(ui_almacen_opciones);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(ui_almacen_opciones);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        label_6 = new QLabel(ui_almacen_opciones);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        label_11 = new QLabel(ui_almacen_opciones);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 3, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        comboTienda = new QComboBox(ui_almacen_opciones);
        comboTienda->setObjectName(QString::fromUtf8("comboTienda"));

        gridLayout_5->addWidget(comboTienda, 0, 0, 1, 1);

        comboAlmacen = new QComboBox(ui_almacen_opciones);
        comboAlmacen->setObjectName(QString::fromUtf8("comboAlmacen"));

        gridLayout_5->addWidget(comboAlmacen, 1, 0, 1, 1);

        comboAndamio = new QComboBox(ui_almacen_opciones);
        comboAndamio->setObjectName(QString::fromUtf8("comboAndamio"));

        gridLayout_5->addWidget(comboAndamio, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 4, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        botonConfirmarAlmacen = new QPushButton(ui_almacen_opciones);
        botonConfirmarAlmacen->setObjectName(QString::fromUtf8("botonConfirmarAlmacen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716427_checkbox_checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        botonConfirmarAlmacen->setIcon(icon1);
        botonConfirmarAlmacen->setFlat(true);

        gridLayout_6->addWidget(botonConfirmarAlmacen, 0, 0, 1, 1);

        botonConfirmarAndamio = new QPushButton(ui_almacen_opciones);
        botonConfirmarAndamio->setObjectName(QString::fromUtf8("botonConfirmarAndamio"));
        botonConfirmarAndamio->setIcon(icon1);
        botonConfirmarAndamio->setFlat(true);

        gridLayout_6->addWidget(botonConfirmarAndamio, 1, 0, 1, 1);

        botonConfirmarContenedor = new QPushButton(ui_almacen_opciones);
        botonConfirmarContenedor->setObjectName(QString::fromUtf8("botonConfirmarContenedor"));
        botonConfirmarContenedor->setIcon(icon1);
        botonConfirmarContenedor->setFlat(true);

        gridLayout_6->addWidget(botonConfirmarContenedor, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 5, 1, 1);


        gridLayout_12->addLayout(gridLayout_7, 2, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        pushButton_7 = new QPushButton(ui_almacen_opciones);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_9->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(ui_almacen_opciones);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_9->addWidget(pushButton_8, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);


        retranslateUi(ui_almacen_opciones);

        QMetaObject::connectSlotsByName(ui_almacen_opciones);
    } // setupUi

    void retranslateUi(QWidget *ui_almacen_opciones)
    {
        ui_almacen_opciones->setWindowTitle(QApplication::translate("ui_almacen_opciones", "Opciones de Agregaado", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_almacen_opciones", "Empresa Seleccionada", 0, QApplication::UnicodeUTF8));
        comboEmpresa->clear();
        comboEmpresa->insertItems(0, QStringList()
         << QApplication::translate("ui_almacen_opciones", "Empresa 1 ", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("ui_almacen_opciones", "Agregar un Almacen con codigo ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_almacen_opciones", "Agregar un Andamio con codigo ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_almacen_opciones", "Agregar un Contenedor con codigo ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_almacen_opciones", "para la", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_almacen_opciones", "para el", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ui_almacen_opciones", "para el", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_almacen_opciones", "Tienda", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_almacen_opciones", "Almacen", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ui_almacen_opciones", "Andamio", 0, QApplication::UnicodeUTF8));
        botonConfirmarAlmacen->setText(QApplication::translate("ui_almacen_opciones", "Confimar", 0, QApplication::UnicodeUTF8));
        botonConfirmarAndamio->setText(QApplication::translate("ui_almacen_opciones", "Confimar", 0, QApplication::UnicodeUTF8));
        botonConfirmarContenedor->setText(QApplication::translate("ui_almacen_opciones", "Confimar", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ui_almacen_opciones", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("ui_almacen_opciones", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_almacen_opciones: public Ui_ui_almacen_opciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ALMACEN_OPCIONES_H
