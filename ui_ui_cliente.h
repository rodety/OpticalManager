/********************************************************************************
** Form generated from reading UI file 'ui_cliente.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CLIENTE_H
#define UI_UI_CLIENTE_H

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
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_cliente
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *list;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *history;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_12;
    QLabel *label_4;
    QTableView *tableView_2;
    QGridLayout *gridLayout_13;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *NuevoHistorial;
    QPushButton *EditarHistorial;
    QPushButton *BorrarHistorial;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLineEdit *buscar;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;

    void setupUi(QWidget *ui_cliente)
    {
        if (ui_cliente->objectName().isEmpty())
            ui_cliente->setObjectName(QString::fromUtf8("ui_cliente"));
        ui_cliente->resize(850, 450);
        gridLayout_7 = new QGridLayout(ui_cliente);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tabWidget = new QTabWidget(ui_cliente);
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

        tableView = new QTableView(list);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton = new QPushButton(list);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(list);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(list);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(list, QString());
        history = new QWidget();
        history->setObjectName(QString::fromUtf8("history"));
        history->setMaximumSize(QSize(826, 351));
        gridLayout_14 = new QGridLayout(history);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_4 = new QLabel(history);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_12->addWidget(label_4, 0, 0, 1, 1);

        tableView_2 = new QTableView(history);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_12->addWidget(tableView_2, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        NuevoHistorial = new QPushButton(history);
        NuevoHistorial->setObjectName(QString::fromUtf8("NuevoHistorial"));
        sizePolicy1.setHeightForWidth(NuevoHistorial->sizePolicy().hasHeightForWidth());
        NuevoHistorial->setSizePolicy(sizePolicy1);
        NuevoHistorial->setIcon(icon);
        NuevoHistorial->setFlat(true);

        gridLayout_13->addWidget(NuevoHistorial, 0, 1, 1, 1);

        EditarHistorial = new QPushButton(history);
        EditarHistorial->setObjectName(QString::fromUtf8("EditarHistorial"));
        sizePolicy1.setHeightForWidth(EditarHistorial->sizePolicy().hasHeightForWidth());
        EditarHistorial->setSizePolicy(sizePolicy1);
        EditarHistorial->setIcon(icon1);
        EditarHistorial->setFlat(true);

        gridLayout_13->addWidget(EditarHistorial, 0, 2, 1, 1);

        BorrarHistorial = new QPushButton(history);
        BorrarHistorial->setObjectName(QString::fromUtf8("BorrarHistorial"));
        sizePolicy1.setHeightForWidth(BorrarHistorial->sizePolicy().hasHeightForWidth());
        BorrarHistorial->setSizePolicy(sizePolicy1);
        BorrarHistorial->setIcon(icon2);
        BorrarHistorial->setFlat(true);

        gridLayout_13->addWidget(BorrarHistorial, 0, 3, 1, 1);


        gridLayout_9->addLayout(gridLayout_13, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_9, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(history, QString());

        gridLayout_6->addWidget(tabWidget, 2, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_3 = new QLabel(ui_cliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        buscar = new QLineEdit(ui_cliente);
        buscar->setObjectName(QString::fromUtf8("buscar"));
        buscar->setMinimumSize(QSize(250, 0));
        buscar->setMaximumSize(QSize(250, 16777215));

        gridLayout_10->addWidget(buscar, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(ui_cliente);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setFlat(true);

        gridLayout_10->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(ui_cliente);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setFlat(true);

        gridLayout_10->addWidget(pushButton_6, 0, 3, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(ui_cliente);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        retranslateUi(ui_cliente);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ui_cliente);
    } // setupUi

    void retranslateUi(QWidget *ui_cliente)
    {
        ui_cliente->setWindowTitle(QApplication::translate("ui_cliente", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_cliente", "Lista de Clientes", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ui_cliente", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("ui_cliente", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ui_cliente", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("ui_cliente", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ui_cliente", "Eliminar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("ui_cliente", "Del", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(list), QApplication::translate("ui_cliente", "Lista", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_cliente", "Historia Clinica de Cliente :", 0, QApplication::UnicodeUTF8));
        NuevoHistorial->setText(QApplication::translate("ui_cliente", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        NuevoHistorial->setShortcut(QApplication::translate("ui_cliente", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        EditarHistorial->setText(QApplication::translate("ui_cliente", "Editar", 0, QApplication::UnicodeUTF8));
        EditarHistorial->setShortcut(QApplication::translate("ui_cliente", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        BorrarHistorial->setText(QApplication::translate("ui_cliente", "Eliminar", 0, QApplication::UnicodeUTF8));
        BorrarHistorial->setShortcut(QApplication::translate("ui_cliente", "Del", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(history), QApplication::translate("ui_cliente", "Historia Clinica", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_cliente", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_cliente: public Ui_ui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CLIENTE_H
