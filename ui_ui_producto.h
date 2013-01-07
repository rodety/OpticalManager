/********************************************************************************
** Form generated from reading UI file 'ui_producto.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRODUCTO_H
#define UI_UI_PRODUCTO_H

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
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_producto
{
public:
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_10;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_busqueda_barra;
    QPushButton *pushButton_busqueda_avanzada;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *Tipo_poroducto_combo;
    QLabel *label;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *Tab1;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_agregar;
    QPushButton *pushButton_aditar_luna;
    QPushButton *pushButton_eliminar_luna;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *ui_producto)
    {
        if (ui_producto->objectName().isEmpty())
            ui_producto->setObjectName(QString::fromUtf8("ui_producto"));
        ui_producto->resize(850, 450);
        gridLayout_14 = new QGridLayout(ui_producto);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(11, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_3 = new QLabel(ui_producto);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_10->addWidget(label_3, 0, 0, 1, 1);

        lineEdit = new QLineEdit(ui_producto);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_busqueda_barra = new QPushButton(ui_producto);
        pushButton_busqueda_barra->setObjectName(QString::fromUtf8("pushButton_busqueda_barra"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_busqueda_barra->sizePolicy().hasHeightForWidth());
        pushButton_busqueda_barra->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_busqueda_barra->setIcon(icon);
        pushButton_busqueda_barra->setFlat(true);

        gridLayout_10->addWidget(pushButton_busqueda_barra, 0, 2, 1, 1);

        pushButton_busqueda_avanzada = new QPushButton(ui_producto);
        pushButton_busqueda_avanzada->setObjectName(QString::fromUtf8("pushButton_busqueda_avanzada"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/1349716435_cog.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_busqueda_avanzada->setIcon(icon1);
        pushButton_busqueda_avanzada->setFlat(true);

        gridLayout_10->addWidget(pushButton_busqueda_avanzada, 0, 3, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 0, 4, 1, 1);

        Tipo_poroducto_combo = new QComboBox(ui_producto);
        Tipo_poroducto_combo->setObjectName(QString::fromUtf8("Tipo_poroducto_combo"));
        Tipo_poroducto_combo->setMinimumSize(QSize(180, 0));

        gridLayout_11->addWidget(Tipo_poroducto_combo, 0, 1, 1, 1);

        label = new QLabel(ui_producto);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_11->addWidget(label, 0, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 0, 0, 1, 1);

        line = new QFrame(ui_producto);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_13->addWidget(line, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ui_producto);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Tab1 = new QWidget();
        Tab1->setObjectName(QString::fromUtf8("Tab1"));
        gridLayout_12 = new QGridLayout(Tab1);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout_9->addLayout(gridLayout_7, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(Tab1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        tableView = new QTableView(Tab1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setDefaultSectionSize(130);

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_agregar = new QPushButton(Tab1);
        pushButton_agregar->setObjectName(QString::fromUtf8("pushButton_agregar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_agregar->sizePolicy().hasHeightForWidth());
        pushButton_agregar->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/1349716423_sq_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_agregar->setIcon(icon2);
        pushButton_agregar->setFlat(true);

        gridLayout->addWidget(pushButton_agregar, 0, 1, 1, 1);

        pushButton_aditar_luna = new QPushButton(Tab1);
        pushButton_aditar_luna->setObjectName(QString::fromUtf8("pushButton_aditar_luna"));
        sizePolicy2.setHeightForWidth(pushButton_aditar_luna->sizePolicy().hasHeightForWidth());
        pushButton_aditar_luna->setSizePolicy(sizePolicy2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_aditar_luna->setIcon(icon3);
        pushButton_aditar_luna->setFlat(true);

        gridLayout->addWidget(pushButton_aditar_luna, 0, 2, 1, 1);

        pushButton_eliminar_luna = new QPushButton(Tab1);
        pushButton_eliminar_luna->setObjectName(QString::fromUtf8("pushButton_eliminar_luna"));
        sizePolicy2.setHeightForWidth(pushButton_eliminar_luna->sizePolicy().hasHeightForWidth());
        pushButton_eliminar_luna->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716432_round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_eliminar_luna->setIcon(icon4);
        pushButton_eliminar_luna->setFlat(true);

        gridLayout->addWidget(pushButton_eliminar_luna, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(650, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 0, 0, 1, 1);

        tabWidget->addTab(Tab1, QString());

        gridLayout_13->addWidget(tabWidget, 2, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 0, 0, 1, 1);


        retranslateUi(ui_producto);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ui_producto);
    } // setupUi

    void retranslateUi(QWidget *ui_producto)
    {
        ui_producto->setWindowTitle(QApplication::translate("ui_producto", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_producto", "Buscar", 0, QApplication::UnicodeUTF8));
        pushButton_busqueda_barra->setText(QString());
        pushButton_busqueda_avanzada->setText(QString());
        Tipo_poroducto_combo->clear();
        Tipo_poroducto_combo->insertItems(0, QStringList()
         << QApplication::translate("ui_producto", "Lunas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_producto", "Monturas", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_producto", "Lentes de Contacto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_producto", "Otros", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("ui_producto", "Tipo de Luna   ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_producto", "Lista  de Productos", 0, QApplication::UnicodeUTF8));
        pushButton_agregar->setText(QApplication::translate("ui_producto", "A\303\261adir", 0, QApplication::UnicodeUTF8));
        pushButton_aditar_luna->setText(QApplication::translate("ui_producto", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_eliminar_luna->setText(QApplication::translate("ui_producto", "Deshabilitar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Tab1), QApplication::translate("ui_producto", "Lista", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_producto: public Ui_ui_producto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRODUCTO_H
