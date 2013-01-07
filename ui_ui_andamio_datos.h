/********************************************************************************
** Form generated from reading UI file 'ui_andamio_datos.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ANDAMIO_DATOS_H
#define UI_UI_ANDAMIO_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_andamio_datos
{
public:
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_nombre;
    QLineEdit *lineEdit_descripcion;
    QFrame *line;
    QGridLayout *gridLayout_9;
    QLabel *label_3;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_fila;
    QSpinBox *spinBox_columna;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_aceptar;

    void setupUi(QWidget *ui_andamio_datos)
    {
        if (ui_andamio_datos->objectName().isEmpty())
            ui_andamio_datos->setObjectName(QString::fromUtf8("ui_andamio_datos"));
        ui_andamio_datos->resize(330, 202);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/product.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_andamio_datos->setWindowIcon(icon);
        gridLayout_12 = new QGridLayout(ui_andamio_datos);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(ui_andamio_datos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ui_andamio_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineEdit_nombre = new QLineEdit(ui_andamio_datos);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_nombre->sizePolicy().hasHeightForWidth());
        lineEdit_nombre->setSizePolicy(sizePolicy);
        lineEdit_nombre->setMinimumSize(QSize(120, 0));
        lineEdit_nombre->setMaximumSize(QSize(120, 16777215));

        gridLayout_5->addWidget(lineEdit_nombre, 0, 0, 1, 1);

        lineEdit_descripcion = new QLineEdit(ui_andamio_datos);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(240, 0));
        lineEdit_descripcion->setMaximumSize(QSize(240, 16777215));

        gridLayout_5->addWidget(lineEdit_descripcion, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 0, 0, 1, 1);

        line = new QFrame(ui_andamio_datos);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_3 = new QLabel(ui_andamio_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(ui_andamio_datos);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(ui_andamio_datos);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinBox_fila = new QSpinBox(ui_andamio_datos);
        spinBox_fila->setObjectName(QString::fromUtf8("spinBox_fila"));

        gridLayout_2->addWidget(spinBox_fila, 0, 0, 1, 1);

        spinBox_columna = new QSpinBox(ui_andamio_datos);
        spinBox_columna->setObjectName(QString::fromUtf8("spinBox_columna"));

        gridLayout_2->addWidget(spinBox_columna, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 0, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 2, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_11->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_cancelar = new QPushButton(ui_andamio_datos);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        gridLayout->addWidget(pushButton_cancelar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        pushButton_aceptar = new QPushButton(ui_andamio_datos);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));

        gridLayout->addWidget(pushButton_aceptar, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout, 2, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);


        retranslateUi(ui_andamio_datos);

        QMetaObject::connectSlotsByName(ui_andamio_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_andamio_datos)
    {
        ui_andamio_datos->setWindowTitle(QApplication::translate("ui_andamio_datos", "Andamio", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_andamio_datos", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_andamio_datos", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_andamio_datos", "Dimension", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_andamio_datos", "Filas", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_andamio_datos", "Clolumnas", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("ui_andamio_datos", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar->setText(QApplication::translate("ui_andamio_datos", "Aceptar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_andamio_datos: public Ui_ui_andamio_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ANDAMIO_DATOS_H
