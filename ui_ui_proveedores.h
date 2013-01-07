/********************************************************************************
** Form generated from reading UI file 'ui_proveedores.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PROVEEDORES_H
#define UI_UI_PROVEEDORES_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_proveedores
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *list;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_add_proveedor;
    QPushButton *pushButton_edit_proveedor;
    QPushButton *pushButton_sup_proveedor;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ui_proveedores)
    {
        if (ui_proveedores->objectName().isEmpty())
            ui_proveedores->setObjectName(QString::fromUtf8("ui_proveedores"));
        ui_proveedores->resize(704, 377);
        gridLayout_6 = new QGridLayout(ui_proveedores);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label_3 = new QLabel(ui_proveedores);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 0, 1, 1, 1);

        lineEdit = new QLineEdit(ui_proveedores);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_6->addWidget(lineEdit, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(ui_proveedores);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);

        gridLayout_6->addWidget(pushButton_5, 0, 3, 1, 1);

        pushButton_6 = new QPushButton(ui_proveedores);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setFlat(true);

        gridLayout_6->addWidget(pushButton_6, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        line = new QFrame(ui_proveedores);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ui_proveedores);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        list = new QWidget();
        list->setObjectName(QString::fromUtf8("list"));
        gridLayout_5 = new QGridLayout(list);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(list);
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

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_add_proveedor = new QPushButton(list);
        pushButton_add_proveedor->setObjectName(QString::fromUtf8("pushButton_add_proveedor"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_add_proveedor->sizePolicy().hasHeightForWidth());
        pushButton_add_proveedor->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add_proveedor->setIcon(icon2);
        pushButton_add_proveedor->setFlat(true);

        gridLayout->addWidget(pushButton_add_proveedor, 1, 1, 1, 1);

        pushButton_edit_proveedor = new QPushButton(list);
        pushButton_edit_proveedor->setObjectName(QString::fromUtf8("pushButton_edit_proveedor"));
        sizePolicy1.setHeightForWidth(pushButton_edit_proveedor->sizePolicy().hasHeightForWidth());
        pushButton_edit_proveedor->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_edit_proveedor->setIcon(icon3);
        pushButton_edit_proveedor->setFlat(true);

        gridLayout->addWidget(pushButton_edit_proveedor, 1, 2, 1, 1);

        pushButton_sup_proveedor = new QPushButton(list);
        pushButton_sup_proveedor->setObjectName(QString::fromUtf8("pushButton_sup_proveedor"));
        sizePolicy1.setHeightForWidth(pushButton_sup_proveedor->sizePolicy().hasHeightForWidth());
        pushButton_sup_proveedor->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sup_proveedor->setIcon(icon4);
        pushButton_sup_proveedor->setFlat(true);

        gridLayout->addWidget(pushButton_sup_proveedor, 1, 3, 1, 1);

        tableWidget = new QTableWidget(list);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 4);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(list, QString());

        gridLayout_6->addWidget(tabWidget, 2, 0, 1, 6);


        retranslateUi(ui_proveedores);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_proveedores);
    } // setupUi

    void retranslateUi(QWidget *ui_proveedores)
    {
        ui_proveedores->setWindowTitle(QApplication::translate("ui_proveedores", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_proveedores", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("ui_proveedores", "Lista de Proveedor", 0, QApplication::UnicodeUTF8));
        pushButton_add_proveedor->setText(QApplication::translate("ui_proveedores", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_add_proveedor->setShortcut(QApplication::translate("ui_proveedores", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_edit_proveedor->setText(QApplication::translate("ui_proveedores", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_edit_proveedor->setShortcut(QApplication::translate("ui_proveedores", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        pushButton_sup_proveedor->setText(QApplication::translate("ui_proveedores", "Eliminar", 0, QApplication::UnicodeUTF8));
        pushButton_sup_proveedor->setShortcut(QApplication::translate("ui_proveedores", "Del", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_proveedores", "Ruc", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_proveedores", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_proveedores", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_proveedores", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ui_proveedores", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ui_proveedores", "Contacto", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ui_proveedores", "e-mail", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("ui_proveedores", "Banco", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("ui_proveedores", "Cuenta", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("ui_proveedores", "Comentario", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(list), QApplication::translate("ui_proveedores", "Lista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_proveedores: public Ui_ui_proveedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PROVEEDORES_H
