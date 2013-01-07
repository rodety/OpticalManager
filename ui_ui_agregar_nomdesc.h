/********************************************************************************
** Form generated from reading UI file 'ui_agregar_nomdesc.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_AGREGAR_NOMDESC_H
#define UI_UI_AGREGAR_NOMDESC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_agregar_nomDesc
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_nombre_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *plainTextEdit_descripcion_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_guardar_2;
    QPushButton *pushButton_cancelar_2;

    void setupUi(QDialog *ui_agregar_nomDesc)
    {
        if (ui_agregar_nomDesc->objectName().isEmpty())
            ui_agregar_nomDesc->setObjectName(QString::fromUtf8("ui_agregar_nomDesc"));
        ui_agregar_nomDesc->resize(488, 297);
        layoutWidget = new QWidget(ui_agregar_nomDesc);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 461, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_4);

        lineEdit_nombre_2 = new QLineEdit(layoutWidget);
        lineEdit_nombre_2->setObjectName(QString::fromUtf8("lineEdit_nombre_2"));

        horizontalLayout_4->addWidget(lineEdit_nombre_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(31, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        plainTextEdit_descripcion_2 = new QPlainTextEdit(layoutWidget);
        plainTextEdit_descripcion_2->setObjectName(QString::fromUtf8("plainTextEdit_descripcion_2"));
        plainTextEdit_descripcion_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_descripcion_2->sizePolicy().hasHeightForWidth());
        plainTextEdit_descripcion_2->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(plainTextEdit_descripcion_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButton_guardar_2 = new QPushButton(layoutWidget);
        pushButton_guardar_2->setObjectName(QString::fromUtf8("pushButton_guardar_2"));

        horizontalLayout_6->addWidget(pushButton_guardar_2);

        pushButton_cancelar_2 = new QPushButton(layoutWidget);
        pushButton_cancelar_2->setObjectName(QString::fromUtf8("pushButton_cancelar_2"));

        horizontalLayout_6->addWidget(pushButton_cancelar_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(ui_agregar_nomDesc);

        QMetaObject::connectSlotsByName(ui_agregar_nomDesc);
    } // setupUi

    void retranslateUi(QDialog *ui_agregar_nomDesc)
    {
        ui_agregar_nomDesc->setWindowTitle(QApplication::translate("ui_agregar_nomDesc", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_agregar_nomDesc", "Agregar Nombre", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_agregar_nomDesc", "Agregar Descripci\303\263n", 0, QApplication::UnicodeUTF8));
        pushButton_guardar_2->setText(QApplication::translate("ui_agregar_nomDesc", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_cancelar_2->setText(QApplication::translate("ui_agregar_nomDesc", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_agregar_nomDesc: public Ui_ui_agregar_nomDesc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_AGREGAR_NOMDESC_H
