/********************************************************************************
** Form generated from reading UI file 'compras.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRAS_H
#define UI_COMPRAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_compras
{
public:
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_4;
    QFrame *line;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget;
    QWidget *List;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_ver_compra;
    QPushButton *pushButton_eliminar_compra;
    QTableWidget *tableWidget_Compras;
    QWidget *agregar;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_proveedor;
    QPushButton *pushButton_buscar_proveedor;
    QLabel *label_5;
    QLineEdit *lineEdit_ruc;
    QLabel *label_6;
    QLineEdit *lineEdit_direccion;
    QLabel *label_7;
    QLineEdit *lineEdit_productos;
    QPushButton *pushButton_buscar_producto;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout;
    QLabel *label_12;
    QTableWidget *tableWidget_proveedores;
    QLabel *label_13;
    QTableWidget *tableWidget_productos;
    QTableWidget *tableWidget__items_productos;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_8;
    QLineEdit *lineEdit_subtotal;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_9;
    QLineEdit *lineEdit_igv;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_10;
    QLineEdit *lineEdit_total;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_guardar;
    QPushButton *pushButton_cancelar;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit;

    void setupUi(QWidget *compras)
    {
        if (compras->objectName().isEmpty())
            compras->setObjectName(QString::fromUtf8("compras"));
        compras->resize(822, 552);
        gridLayout_9 = new QGridLayout(compras);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        gridLayout_9->addLayout(verticalLayout_4, 0, 0, 1, 1);

        line = new QFrame(compras);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 2, 1, 1, 6);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tabWidget = new QTabWidget(compras);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        List = new QWidget();
        List->setObjectName(QString::fromUtf8("List"));
        gridLayout_6 = new QGridLayout(List);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(List);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_ver_compra = new QPushButton(List);
        pushButton_ver_compra->setObjectName(QString::fromUtf8("pushButton_ver_compra"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_ver_compra->sizePolicy().hasHeightForWidth());
        pushButton_ver_compra->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ver_compra->setIcon(icon);
        pushButton_ver_compra->setFlat(true);

        gridLayout->addWidget(pushButton_ver_compra, 0, 1, 1, 1);

        pushButton_eliminar_compra = new QPushButton(List);
        pushButton_eliminar_compra->setObjectName(QString::fromUtf8("pushButton_eliminar_compra"));
        sizePolicy1.setHeightForWidth(pushButton_eliminar_compra->sizePolicy().hasHeightForWidth());
        pushButton_eliminar_compra->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar_compra->setIcon(icon1);
        pushButton_eliminar_compra->setFlat(true);

        gridLayout->addWidget(pushButton_eliminar_compra, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        tableWidget_Compras = new QTableWidget(List);
        if (tableWidget_Compras->columnCount() < 3)
            tableWidget_Compras->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_Compras->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_Compras->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_Compras->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Compras->setObjectName(QString::fromUtf8("tableWidget_Compras"));

        gridLayout_3->addWidget(tableWidget_Compras, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(List, QString());
        agregar = new QWidget();
        agregar->setObjectName(QString::fromUtf8("agregar"));
        gridLayout_11 = new QGridLayout(agregar);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(agregar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        lineEdit_proveedor = new QLineEdit(agregar);
        lineEdit_proveedor->setObjectName(QString::fromUtf8("lineEdit_proveedor"));

        gridLayout_5->addWidget(lineEdit_proveedor, 1, 1, 1, 1);

        pushButton_buscar_proveedor = new QPushButton(agregar);
        pushButton_buscar_proveedor->setObjectName(QString::fromUtf8("pushButton_buscar_proveedor"));

        gridLayout_5->addWidget(pushButton_buscar_proveedor, 1, 2, 1, 1);

        label_5 = new QLabel(agregar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_ruc = new QLineEdit(agregar);
        lineEdit_ruc->setObjectName(QString::fromUtf8("lineEdit_ruc"));

        gridLayout_5->addWidget(lineEdit_ruc, 2, 1, 1, 1);

        label_6 = new QLabel(agregar);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 3, 0, 1, 1);

        lineEdit_direccion = new QLineEdit(agregar);
        lineEdit_direccion->setObjectName(QString::fromUtf8("lineEdit_direccion"));

        gridLayout_5->addWidget(lineEdit_direccion, 3, 1, 1, 1);

        label_7 = new QLabel(agregar);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_productos = new QLineEdit(agregar);
        lineEdit_productos->setObjectName(QString::fromUtf8("lineEdit_productos"));

        gridLayout_5->addWidget(lineEdit_productos, 4, 1, 1, 1);

        pushButton_buscar_producto = new QPushButton(agregar);
        pushButton_buscar_producto->setObjectName(QString::fromUtf8("pushButton_buscar_producto"));

        gridLayout_5->addWidget(pushButton_buscar_producto, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(agregar);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        dateEdit = new QDateEdit(agregar);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout_5->addWidget(dateEdit, 0, 2, 1, 1);

        label_11 = new QLabel(agregar);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 2, 2, 1, 2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 3, 2, 1, 2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_16, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_12 = new QLabel(agregar);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        tableWidget_proveedores = new QTableWidget(agregar);
        if (tableWidget_proveedores->columnCount() < 2)
            tableWidget_proveedores->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_proveedores->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_proveedores->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        tableWidget_proveedores->setObjectName(QString::fromUtf8("tableWidget_proveedores"));

        verticalLayout->addWidget(tableWidget_proveedores);

        label_13 = new QLabel(agregar);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);

        tableWidget_productos = new QTableWidget(agregar);
        if (tableWidget_productos->columnCount() < 4)
            tableWidget_productos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_productos->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_productos->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_productos->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_productos->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableWidget_productos->setObjectName(QString::fromUtf8("tableWidget_productos"));

        verticalLayout->addWidget(tableWidget_productos);


        gridLayout_8->addLayout(verticalLayout, 0, 1, 3, 1);

        tableWidget__items_productos = new QTableWidget(agregar);
        if (tableWidget__items_productos->columnCount() < 6)
            tableWidget__items_productos->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget__items_productos->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        tableWidget__items_productos->setObjectName(QString::fromUtf8("tableWidget__items_productos"));

        gridLayout_8->addWidget(tableWidget__items_productos, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        label_8 = new QLabel(agregar);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 0, 1, 1, 1);

        lineEdit_subtotal = new QLineEdit(agregar);
        lineEdit_subtotal->setObjectName(QString::fromUtf8("lineEdit_subtotal"));

        gridLayout_7->addWidget(lineEdit_subtotal, 0, 2, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        label_9 = new QLabel(agregar);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 1, 1, 1, 1);

        lineEdit_igv = new QLineEdit(agregar);
        lineEdit_igv->setObjectName(QString::fromUtf8("lineEdit_igv"));

        gridLayout_7->addWidget(lineEdit_igv, 1, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 2, 0, 1, 1);

        label_10 = new QLabel(agregar);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_7->addWidget(label_10, 2, 1, 1, 1);

        lineEdit_total = new QLineEdit(agregar);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));

        gridLayout_7->addWidget(lineEdit_total, 2, 2, 1, 2);

        spinBox = new QSpinBox(agregar);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setValue(18);

        gridLayout_7->addWidget(spinBox, 1, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 2, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 0, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_3);

        pushButton_guardar = new QPushButton(agregar);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));

        horizontalLayout_20->addWidget(pushButton_guardar);

        pushButton_cancelar = new QPushButton(agregar);
        pushButton_cancelar->setObjectName(QString::fromUtf8("pushButton_cancelar"));

        horizontalLayout_20->addWidget(pushButton_cancelar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer);


        gridLayout_11->addLayout(horizontalLayout_20, 1, 0, 1, 1);

        tabWidget->addTab(agregar, QString());

        gridLayout_10->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 3, 1, 1, 6);

        horizontalSpacer_5 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(211, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 1, 6, 1, 1);

        pushButton_5 = new QPushButton(compras);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);

        gridLayout_9->addWidget(pushButton_5, 1, 4, 1, 1);

        label_3 = new QLabel(compras);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(compras);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setFlat(true);

        gridLayout_9->addWidget(pushButton_6, 1, 5, 1, 1);

        lineEdit = new QLineEdit(compras);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_9->addWidget(lineEdit, 1, 3, 1, 1);


        retranslateUi(compras);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(compras);
    } // setupUi

    void retranslateUi(QWidget *compras)
    {
        compras->setWindowTitle(QApplication::translate("compras", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("compras", "Lista de Compras", 0, QApplication::UnicodeUTF8));
        pushButton_ver_compra->setText(QApplication::translate("compras", "Ver", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar_compra->setText(QApplication::translate("compras", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Compras->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("compras", "Fecha", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Compras->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("compras", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Compras->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("compras", "Monto Total", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(List), QApplication::translate("compras", "Lista", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("compras", "Proveedor", 0, QApplication::UnicodeUTF8));
        pushButton_buscar_proveedor->setText(QApplication::translate("compras", "Buscar", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("compras", "Ruc", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("compras", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("compras", "Productos", 0, QApplication::UnicodeUTF8));
        pushButton_buscar_producto->setText(QApplication::translate("compras", "Buscar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("compras", "COMPRAS", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("compras", "Fecha:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("compras", "Lista de Proveedores", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_proveedores->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("compras", "Ruc", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_proveedores->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("compras", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("compras", "Lista de Productos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("compras", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("compras", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("compras", "Accesorios", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_productos->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("compras", "Precio", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget__items_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("compras", "C\303\263digo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget__items_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("compras", "Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget__items_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("compras", "Accesorios", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget__items_productos->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("compras", "Precio Unt", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget__items_productos->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("compras", "Cant", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget__items_productos->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("compras", "Total", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("compras", "Sub Total", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("compras", "IGV %", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("compras", "Total", 0, QApplication::UnicodeUTF8));
        pushButton_guardar->setText(QApplication::translate("compras", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar->setText(QApplication::translate("compras", "Cancelar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(agregar), QApplication::translate("compras", "Agregar Compra", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        label_3->setText(QApplication::translate("compras", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class compras: public Ui_compras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRAS_H
