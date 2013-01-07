/********************************************************************************
** Form generated from reading UI file 'ui_contenedor_datos.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CONTENEDOR_DATOS_H
#define UI_UI_CONTENEDOR_DATOS_H

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
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_contenedor_datos
{
public:
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_nombre;
    QLineEdit *lineEdit_descripcion;
    QFrame *line;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QGridLayout *gridLayout_5;
    QSpinBox *spinBox_fila;
    QSpinBox *spinBox_columna;
    QFrame *line_2;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QSpinBox *spinBox_capacidad;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_16;
    QPushButton *pushButton_saveContenedor;
    QPushButton *pushButton_deleteContenedor;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_3;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_13;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_codigoProducto;
    QPushButton *pushButton_addProducto;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_deleteProducto;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget_list_productos;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_salir;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *traspaso;

    void setupUi(QWidget *ui_contenedor_datos)
    {
        if (ui_contenedor_datos->objectName().isEmpty())
            ui_contenedor_datos->setObjectName(QString::fromUtf8("ui_contenedor_datos"));
        ui_contenedor_datos->resize(799, 519);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/product.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_contenedor_datos->setWindowIcon(icon);
        gridLayout_19 = new QGridLayout(ui_contenedor_datos);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(9, -1, 9, -1);
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(ui_contenedor_datos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ui_contenedor_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_nombre = new QLineEdit(ui_contenedor_datos);
        lineEdit_nombre->setObjectName(QString::fromUtf8("lineEdit_nombre"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_nombre->sizePolicy().hasHeightForWidth());
        lineEdit_nombre->setSizePolicy(sizePolicy);
        lineEdit_nombre->setMinimumSize(QSize(120, 0));
        lineEdit_nombre->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(lineEdit_nombre, 0, 0, 1, 1);

        lineEdit_descripcion = new QLineEdit(ui_contenedor_datos);
        lineEdit_descripcion->setObjectName(QString::fromUtf8("lineEdit_descripcion"));
        lineEdit_descripcion->setMinimumSize(QSize(240, 0));
        lineEdit_descripcion->setMaximumSize(QSize(240, 16777215));

        gridLayout->addWidget(lineEdit_descripcion, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_3, 0, 0, 1, 1);

        line = new QFrame(ui_contenedor_datos);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 0, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_4 = new QLabel(ui_contenedor_datos);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(ui_contenedor_datos);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        spinBox_fila = new QSpinBox(ui_contenedor_datos);
        spinBox_fila->setObjectName(QString::fromUtf8("spinBox_fila"));
        spinBox_fila->setEnabled(false);
        spinBox_fila->setMinimum(1);

        gridLayout_5->addWidget(spinBox_fila, 0, 0, 1, 1);

        spinBox_columna = new QSpinBox(ui_contenedor_datos);
        spinBox_columna->setObjectName(QString::fromUtf8("spinBox_columna"));
        spinBox_columna->setEnabled(false);
        spinBox_columna->setMinimum(1);

        gridLayout_5->addWidget(spinBox_columna, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 2, 1, 1);

        line_2 = new QFrame(ui_contenedor_datos);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_2, 0, 3, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(ui_contenedor_datos);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        spinBox_capacidad = new QSpinBox(ui_contenedor_datos);
        spinBox_capacidad->setObjectName(QString::fromUtf8("spinBox_capacidad"));

        gridLayout_4->addWidget(spinBox_capacidad, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_4, 0, 4, 1, 1);


        gridLayout_17->addLayout(gridLayout_9, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        pushButton_saveContenedor = new QPushButton(ui_contenedor_datos);
        pushButton_saveContenedor->setObjectName(QString::fromUtf8("pushButton_saveContenedor"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716427_checkbox_checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_saveContenedor->setIcon(icon1);
        pushButton_saveContenedor->setFlat(true);

        gridLayout_16->addWidget(pushButton_saveContenedor, 0, 0, 1, 1);

        pushButton_deleteContenedor = new QPushButton(ui_contenedor_datos);
        pushButton_deleteContenedor->setObjectName(QString::fromUtf8("pushButton_deleteContenedor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteContenedor->setIcon(icon2);
        pushButton_deleteContenedor->setFlat(true);

        gridLayout_16->addWidget(pushButton_deleteContenedor, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        gridLayout_17->addLayout(gridLayout_16, 0, 2, 1, 1);


        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 1);

        line_3 = new QFrame(ui_contenedor_datos);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_18->addWidget(line_3, 1, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_7 = new QLabel(ui_contenedor_datos);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_13->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setHorizontalSpacing(0);
        label_8 = new QLabel(ui_contenedor_datos);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_codigoProducto = new QLineEdit(ui_contenedor_datos);
        lineEdit_codigoProducto->setObjectName(QString::fromUtf8("lineEdit_codigoProducto"));
        sizePolicy.setHeightForWidth(lineEdit_codigoProducto->sizePolicy().hasHeightForWidth());
        lineEdit_codigoProducto->setSizePolicy(sizePolicy);
        lineEdit_codigoProducto->setMinimumSize(QSize(120, 0));
        lineEdit_codigoProducto->setMaximumSize(QSize(120, 16777215));

        gridLayout_10->addWidget(lineEdit_codigoProducto, 0, 1, 1, 1);

        pushButton_addProducto = new QPushButton(ui_contenedor_datos);
        pushButton_addProducto->setObjectName(QString::fromUtf8("pushButton_addProducto"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addProducto->setIcon(icon3);
        pushButton_addProducto->setFlat(true);

        gridLayout_10->addWidget(pushButton_addProducto, 0, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_10, 0, 2, 1, 1);


        gridLayout_15->addLayout(gridLayout_13, 0, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setHorizontalSpacing(0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        pushButton_deleteProducto = new QPushButton(ui_contenedor_datos);
        pushButton_deleteProducto->setObjectName(QString::fromUtf8("pushButton_deleteProducto"));
        pushButton_deleteProducto->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716428_trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deleteProducto->setIcon(icon4);
        pushButton_deleteProducto->setFlat(true);

        gridLayout_11->addWidget(pushButton_deleteProducto, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 208, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_11, 0, 1, 1, 1);

        tableWidget_list_productos = new QTableWidget(ui_contenedor_datos);
        if (tableWidget_list_productos->columnCount() < 4)
            tableWidget_list_productos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_list_productos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_list_productos->setObjectName(QString::fromUtf8("tableWidget_list_productos"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget_list_productos->sizePolicy().hasHeightForWidth());
        tableWidget_list_productos->setSizePolicy(sizePolicy1);

        gridLayout_14->addWidget(tableWidget_list_productos, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 1, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_15, 2, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setHorizontalSpacing(0);
        horizontalSpacer_2 = new QSpacerItem(668, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_salir = new QPushButton(ui_contenedor_datos);
        pushButton_salir->setObjectName(QString::fromUtf8("pushButton_salir"));

        gridLayout_12->addWidget(pushButton_salir, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        traspaso = new QPushButton(ui_contenedor_datos);
        traspaso->setObjectName(QString::fromUtf8("traspaso"));

        gridLayout_12->addWidget(traspaso, 0, 1, 1, 1);


        gridLayout_18->addLayout(gridLayout_12, 3, 0, 1, 1);


        gridLayout_19->addLayout(gridLayout_18, 0, 0, 1, 1);


        retranslateUi(ui_contenedor_datos);

        QMetaObject::connectSlotsByName(ui_contenedor_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_contenedor_datos)
    {
        ui_contenedor_datos->setWindowTitle(QApplication::translate("ui_contenedor_datos", "Contenedor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_contenedor_datos", "Nombre", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_contenedor_datos", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_contenedor_datos", "Fila", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_contenedor_datos", "Columna", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_contenedor_datos", "Capacidad", 0, QApplication::UnicodeUTF8));
        pushButton_saveContenedor->setText(QApplication::translate("ui_contenedor_datos", "Crear", 0, QApplication::UnicodeUTF8));
        pushButton_deleteContenedor->setText(QApplication::translate("ui_contenedor_datos", "Eliminar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_contenedor_datos", "Lista de Productos ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_contenedor_datos", "C\303\263digo de Producto ", 0, QApplication::UnicodeUTF8));
        pushButton_addProducto->setText(QString());
        pushButton_deleteProducto->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_list_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_contenedor_datos", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_list_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_contenedor_datos", "Descripcion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_list_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_contenedor_datos", "Marca", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_list_productos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_contenedor_datos", "Precio", 0, QApplication::UnicodeUTF8));
        pushButton_salir->setText(QApplication::translate("ui_contenedor_datos", "Salir", 0, QApplication::UnicodeUTF8));
        traspaso->setText(QApplication::translate("ui_contenedor_datos", "Traspaso a Vitrina", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_contenedor_datos: public Ui_ui_contenedor_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CONTENEDOR_DATOS_H
