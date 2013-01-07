/********************************************************************************
** Form generated from reading UI file 'ui_empresa.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_EMPRESA_H
#define UI_UI_EMPRESA_H

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

class Ui_ui_empresa
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *List;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_add_Empresa;
    QPushButton *pushButton_sup_Empresa;
    QPushButton *pushButton_edit_Empresa;
    QSpacerItem *horizontalSpacer_4;
    QWidget *details;

    void setupUi(QWidget *ui_empresa)
    {
        if (ui_empresa->objectName().isEmpty())
            ui_empresa->setObjectName(QString::fromUtf8("ui_empresa"));
        ui_empresa->resize(850, 450);
        gridLayout_7 = new QGridLayout(ui_empresa);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_3 = new QLabel(ui_empresa);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(ui_empresa);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(ui_empresa);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);

        gridLayout_10->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(ui_empresa);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setFlat(true);

        gridLayout_10->addWidget(pushButton_6, 0, 3, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(ui_empresa);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ui_empresa);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        List = new QWidget();
        List->setObjectName(QString::fromUtf8("List"));
        gridLayout_5 = new QGridLayout(List);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
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

        tableWidget = new QTableWidget(List);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_add_Empresa = new QPushButton(List);
        pushButton_add_Empresa->setObjectName(QString::fromUtf8("pushButton_add_Empresa"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_add_Empresa->sizePolicy().hasHeightForWidth());
        pushButton_add_Empresa->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add_Empresa->setIcon(icon2);
        pushButton_add_Empresa->setFlat(true);

        gridLayout->addWidget(pushButton_add_Empresa, 0, 1, 1, 1);

        pushButton_sup_Empresa = new QPushButton(List);
        pushButton_sup_Empresa->setObjectName(QString::fromUtf8("pushButton_sup_Empresa"));
        sizePolicy1.setHeightForWidth(pushButton_sup_Empresa->sizePolicy().hasHeightForWidth());
        pushButton_sup_Empresa->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sup_Empresa->setIcon(icon3);
        pushButton_sup_Empresa->setFlat(true);

        gridLayout->addWidget(pushButton_sup_Empresa, 0, 3, 1, 1);

        pushButton_edit_Empresa = new QPushButton(List);
        pushButton_edit_Empresa->setObjectName(QString::fromUtf8("pushButton_edit_Empresa"));
        sizePolicy1.setHeightForWidth(pushButton_edit_Empresa->sizePolicy().hasHeightForWidth());
        pushButton_edit_Empresa->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_edit_Empresa->setIcon(icon4);
        pushButton_edit_Empresa->setFlat(true);

        gridLayout->addWidget(pushButton_edit_Empresa, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(List, QString());
        details = new QWidget();
        details->setObjectName(QString::fromUtf8("details"));
        tabWidget->addTab(details, QString());

        gridLayout_6->addWidget(tabWidget, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(ui_empresa);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_empresa);
    } // setupUi

    void retranslateUi(QWidget *ui_empresa)
    {
        ui_empresa->setWindowTitle(QApplication::translate("ui_empresa", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_empresa", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        label_2->setText(QApplication::translate("ui_empresa", "Lista de Empresas", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ui_empresa", "Ruc", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ui_empresa", "Raz\303\263n Social", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ui_empresa", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ui_empresa", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        pushButton_add_Empresa->setText(QApplication::translate("ui_empresa", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_sup_Empresa->setText(QApplication::translate("ui_empresa", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        pushButton_edit_Empresa->setText(QApplication::translate("ui_empresa", "Editar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(List), QApplication::translate("ui_empresa", "Lista", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(details), QApplication::translate("ui_empresa", "Detalles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_empresa: public Ui_ui_empresa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_EMPRESA_H
