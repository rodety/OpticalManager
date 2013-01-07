/********************************************************************************
** Form generated from reading UI file 'ui_traspaso_almacen.ui'
**
** Created: Thu 27. Dec 12:00:28 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_TRASPASO_ALMACEN_H
#define UI_UI_TRASPASO_ALMACEN_H

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

class Ui_ui_traspaso_almacen
{
public:
    QWidget *layoutWidget;
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
    QFrame *line;
    QGridLayout *gridLayout_9;
    QLabel *label_5;
    QTableWidget *tableWidget_griContenedores;
    QPushButton *pushButton_aceptar_traspaso;

    void setupUi(QWidget *ui_traspaso_almacen)
    {
        if (ui_traspaso_almacen->objectName().isEmpty())
            ui_traspaso_almacen->setObjectName(QString::fromUtf8("ui_traspaso_almacen"));
        ui_traspaso_almacen->resize(852, 436);
        layoutWidget = new QWidget(ui_traspaso_almacen);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 831, 381));
        gridLayout_13 = new QGridLayout(layoutWidget);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_Empresa = new QComboBox(layoutWidget);
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
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        comboBox_Almacen = new QComboBox(layoutWidget);
        comboBox_Almacen->setObjectName(QString::fromUtf8("comboBox_Almacen"));
        comboBox_Almacen->setMinimumSize(QSize(100, 0));
        comboBox_Almacen->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(comboBox_Almacen, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(0);

        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        comboBox_Tienda = new QComboBox(layoutWidget);
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
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        comboBox_Andamio = new QComboBox(layoutWidget);
        comboBox_Andamio->setObjectName(QString::fromUtf8("comboBox_Andamio"));
        comboBox_Andamio->setMinimumSize(QSize(100, 0));
        comboBox_Andamio->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(comboBox_Andamio, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);

        gridLayout_8->addLayout(gridLayout_6, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 1, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 0, 0, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line, 1, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_9->addWidget(label_5, 0, 0, 1, 1);

        tableWidget_griContenedores = new QTableWidget(layoutWidget);
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

        pushButton_aceptar_traspaso = new QPushButton(ui_traspaso_almacen);
        pushButton_aceptar_traspaso->setObjectName(QString::fromUtf8("pushButton_aceptar_traspaso"));
        pushButton_aceptar_traspaso->setGeometry(QRect(390, 400, 141, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/notification_done.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_aceptar_traspaso->setIcon(icon);
        pushButton_aceptar_traspaso->setFlat(true);

        retranslateUi(ui_traspaso_almacen);

        QMetaObject::connectSlotsByName(ui_traspaso_almacen);
    } // setupUi

    void retranslateUi(QWidget *ui_traspaso_almacen)
    {
        ui_traspaso_almacen->setWindowTitle(QApplication::translate("ui_traspaso_almacen", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_traspaso_almacen", "Empresa", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_traspaso_almacen", "Almacen", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_traspaso_almacen", "Tienda   ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_traspaso_almacen", "Andamio", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_traspaso_almacen", "Grilla de Contenedores", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar_traspaso->setText(QApplication::translate("ui_traspaso_almacen", "Aceptar Traspaso", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_traspaso_almacen: public Ui_ui_traspaso_almacen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_TRASPASO_ALMACEN_H
