/********************************************************************************
** Form generated from reading UI file 'ui_vitrina.ui'
**
** Created: Wed 19. Dec 09:28:17 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_VITRINA_H
#define UI_UI_VITRINA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_vitrina
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *List;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QPushButton *agregar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *editar;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ui_vitrina)
    {
        if (ui_vitrina->objectName().isEmpty())
            ui_vitrina->setObjectName(QString::fromUtf8("ui_vitrina"));
        ui_vitrina->resize(770, 459);
        layoutWidget = new QWidget(ui_vitrina);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 676, 382));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));

        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);

        tabWidget = new QTabWidget(layoutWidget);
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


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        agregar = new QPushButton(List);
        agregar->setObjectName(QString::fromUtf8("agregar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(agregar->sizePolicy().hasHeightForWidth());
        agregar->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        agregar->setIcon(icon);
        agregar->setFlat(true);

        gridLayout->addWidget(agregar, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        editar = new QPushButton(List);
        editar->setObjectName(QString::fromUtf8("editar"));
        sizePolicy1.setHeightForWidth(editar->sizePolicy().hasHeightForWidth());
        editar->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editar->setIcon(icon1);
        editar->setFlat(true);

        gridLayout->addWidget(editar, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(List);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 4, 1, 1);

        pushButton_7 = new QPushButton(List);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716391_monotone_printer_hardware.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setFlat(true);

        gridLayout->addWidget(pushButton_7, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        tableView = new QTableView(List);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(List, QString());

        gridLayout_6->addWidget(tabWidget, 2, 0, 1, 1);


        retranslateUi(ui_vitrina);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_vitrina);
    } // setupUi

    void retranslateUi(QWidget *ui_vitrina)
    {
        ui_vitrina->setWindowTitle(QApplication::translate("ui_vitrina", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_vitrina", "Lista de Vitrinas", 0, QApplication::UnicodeUTF8));
        agregar->setText(QApplication::translate("ui_vitrina", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        editar->setText(QApplication::translate("ui_vitrina", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_vitrina", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("ui_vitrina", "Imprimir Productos", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(List), QApplication::translate("ui_vitrina", "Lista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_vitrina: public Ui_ui_vitrina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_VITRINA_H
