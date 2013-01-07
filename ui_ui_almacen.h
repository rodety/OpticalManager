/********************************************************************************
** Form generated from reading UI file 'ui_almacen.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ALMACEN_H
#define UI_UI_ALMACEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_almacen
{
public:
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_Empresa;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_Almacen;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_addAlmacen;
    QPushButton *pushButton_editAlmacen;
    QPushButton *pushButton_deleteAlmacen;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_Tienda;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_Andamio;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_addAndamio;
    QPushButton *pushButton_editAndamio;
    QPushButton *pushButton_deleteAndamio;
    QFrame *line;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QTableWidget *tableWidget_griContenedores;
    QPushButton *botonGenerarReporte;

    void setupUi(QWidget *ui_almacen)
    {
        if (ui_almacen->objectName().isEmpty())
            ui_almacen->setObjectName(QString::fromUtf8("ui_almacen"));
        ui_almacen->resize(850, 450);
        gridLayout_14 = new QGridLayout(ui_almacen);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ui_almacen);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_Empresa = new QComboBox(ui_almacen);
        comboBox_Empresa->setObjectName(QString::fromUtf8("comboBox_Empresa"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_Empresa->sizePolicy().hasHeightForWidth());
        comboBox_Empresa->setSizePolicy(sizePolicy);
        comboBox_Empresa->setMinimumSize(QSize(100, 0));
        comboBox_Empresa->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(comboBox_Empresa, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(ui_almacen);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        comboBox_Almacen = new QComboBox(ui_almacen);
        comboBox_Almacen->setObjectName(QString::fromUtf8("comboBox_Almacen"));
        comboBox_Almacen->setMinimumSize(QSize(100, 0));
        comboBox_Almacen->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(comboBox_Almacen, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);
        pushButton_addAlmacen = new QPushButton(ui_almacen);
        pushButton_addAlmacen->setObjectName(QString::fromUtf8("pushButton_addAlmacen"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_addAlmacen->sizePolicy().hasHeightForWidth());
        pushButton_addAlmacen->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addAlmacen->setIcon(icon);
        pushButton_addAlmacen->setFlat(true);

        gridLayout_5->addWidget(pushButton_addAlmacen, 0, 0, 1, 1);

        pushButton_editAlmacen = new QPushButton(ui_almacen);
        pushButton_editAlmacen->setObjectName(QString::fromUtf8("pushButton_editAlmacen"));
        sizePolicy1.setHeightForWidth(pushButton_editAlmacen->sizePolicy().hasHeightForWidth());
        pushButton_editAlmacen->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_editAlmacen->setIcon(icon1);
        pushButton_editAlmacen->setFlat(true);

        gridLayout_5->addWidget(pushButton_editAlmacen, 0, 1, 1, 1);

        pushButton_deleteAlmacen = new QPushButton(ui_almacen);
        pushButton_deleteAlmacen->setObjectName(QString::fromUtf8("pushButton_deleteAlmacen"));
        sizePolicy1.setHeightForWidth(pushButton_deleteAlmacen->sizePolicy().hasHeightForWidth());
        pushButton_deleteAlmacen->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteAlmacen->setIcon(icon2);
        pushButton_deleteAlmacen->setFlat(true);

        gridLayout_5->addWidget(pushButton_deleteAlmacen, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(ui_almacen);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        comboBox_Tienda = new QComboBox(ui_almacen);
        comboBox_Tienda->setObjectName(QString::fromUtf8("comboBox_Tienda"));
        comboBox_Tienda->setMinimumSize(QSize(100, 0));
        comboBox_Tienda->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(comboBox_Tienda, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(448, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(ui_almacen);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        comboBox_Andamio = new QComboBox(ui_almacen);
        comboBox_Andamio->setObjectName(QString::fromUtf8("comboBox_Andamio"));
        comboBox_Andamio->setMinimumSize(QSize(100, 0));
        comboBox_Andamio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(comboBox_Andamio, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        pushButton_addAndamio = new QPushButton(ui_almacen);
        pushButton_addAndamio->setObjectName(QString::fromUtf8("pushButton_addAndamio"));
        sizePolicy1.setHeightForWidth(pushButton_addAndamio->sizePolicy().hasHeightForWidth());
        pushButton_addAndamio->setSizePolicy(sizePolicy1);
        pushButton_addAndamio->setIcon(icon);
        pushButton_addAndamio->setFlat(true);

        gridLayout_6->addWidget(pushButton_addAndamio, 0, 0, 1, 1);

        pushButton_editAndamio = new QPushButton(ui_almacen);
        pushButton_editAndamio->setObjectName(QString::fromUtf8("pushButton_editAndamio"));
        sizePolicy1.setHeightForWidth(pushButton_editAndamio->sizePolicy().hasHeightForWidth());
        pushButton_editAndamio->setSizePolicy(sizePolicy1);
        pushButton_editAndamio->setIcon(icon1);
        pushButton_editAndamio->setFlat(true);

        gridLayout_6->addWidget(pushButton_editAndamio, 0, 1, 1, 1);

        pushButton_deleteAndamio = new QPushButton(ui_almacen);
        pushButton_deleteAndamio->setObjectName(QString::fromUtf8("pushButton_deleteAndamio"));
        sizePolicy1.setHeightForWidth(pushButton_deleteAndamio->sizePolicy().hasHeightForWidth());
        pushButton_deleteAndamio->setSizePolicy(sizePolicy1);
        pushButton_deleteAndamio->setIcon(icon2);
        pushButton_deleteAndamio->setFlat(true);

        gridLayout_6->addWidget(pushButton_deleteAndamio, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        line = new QFrame(ui_almacen);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_5 = new QLabel(ui_almacen);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_9->addWidget(label_5, 0, 0, 1, 1);

        tableWidget_griContenedores = new QTableWidget(ui_almacen);
        tableWidget_griContenedores->setObjectName(QString::fromUtf8("tableWidget_griContenedores"));
        tableWidget_griContenedores->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_griContenedores->setTabKeyNavigation(false);
        tableWidget_griContenedores->setProperty("showDropIndicator", QVariant(false));
        tableWidget_griContenedores->setDragDropOverwriteMode(false);
        tableWidget_griContenedores->setDragDropMode(QAbstractItemView::NoDragDrop);
        tableWidget_griContenedores->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_griContenedores->setGridStyle(Qt::SolidLine);
        tableWidget_griContenedores->setWordWrap(false);
        tableWidget_griContenedores->setCornerButtonEnabled(false);

        gridLayout_9->addWidget(tableWidget_griContenedores, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_9, 2, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);

        botonGenerarReporte = new QPushButton(ui_almacen);
        botonGenerarReporte->setObjectName(QString::fromUtf8("botonGenerarReporte"));

        gridLayout_14->addWidget(botonGenerarReporte, 1, 0, 1, 1);


        retranslateUi(ui_almacen);

        QMetaObject::connectSlotsByName(ui_almacen);
    } // setupUi

    void retranslateUi(QWidget *ui_almacen)
    {
        ui_almacen->setWindowTitle(QApplication::translate("ui_almacen", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_almacen", "Empresa", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_almacen", "Almacen", 0, QApplication::UnicodeUTF8));
        pushButton_addAlmacen->setText(QString());
        pushButton_editAlmacen->setText(QString());
        pushButton_deleteAlmacen->setText(QString());
        label_2->setText(QApplication::translate("ui_almacen", "Tienda   ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_almacen", "Andamio", 0, QApplication::UnicodeUTF8));
        pushButton_addAndamio->setText(QString());
        pushButton_editAndamio->setText(QString());
        pushButton_deleteAndamio->setText(QString());
        label_5->setText(QApplication::translate("ui_almacen", "Grilla de Contenedores", 0, QApplication::UnicodeUTF8));
        botonGenerarReporte->setText(QApplication::translate("ui_almacen", "Generar Reporte de Contenedor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_almacen: public Ui_ui_almacen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ALMACEN_H
