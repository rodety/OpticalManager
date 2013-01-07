/********************************************************************************
** Form generated from reading UI file 'ui_historial_clinico.ui'
**
** Created: Thu 27. Dec 12:00:27 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_HISTORIAL_CLINICO_H
#define UI_UI_HISTORIAL_CLINICO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_historial_clinico
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Aceptar_2;
    QPushButton *pushButton_Cancelar_2;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_5;
    QFrame *line_5;
    QLabel *label_40;
    QLabel *label_4;
    QLabel *label_35;
    QLabel *label_32;
    QLabel *label_39;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *lineEdit_ccd;
    QLabel *label_33;
    QLineEdit *lineEdit_dli;
    QLineEdit *lineEdit_ejci;
    QLineEdit *lineEdit_dcd;
    QLabel *label_3;
    QLineEdit *lineEdit_cld;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_20;
    QLineEdit *lineEdit_cci;
    QLineEdit *lineEdit_ejli;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_4;
    QLineEdit *lineEdit_ejld;
    QLineEdit *lineEdit_dci;
    QLineEdit *lineEdit_eci;
    QLineEdit *lineEdit_ejcd;
    QLineEdit *lineEdit_dld;
    QLabel *label_41;
    QLineEdit *lineEdit_cli;
    QLineEdit *lineEdit_eli;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEdit_ecd;
    QLabel *label_38;
    QLabel *label_37;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEdit_eld;
    QLabel *label_34;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_42;
    QLineEdit *lineEdit_doctor;
    QLabel *label_43;
    QDateEdit *dateEdit_fecha;

    void setupUi(QWidget *ui_historial_clinico)
    {
        if (ui_historial_clinico->objectName().isEmpty())
            ui_historial_clinico->setObjectName(QString::fromUtf8("ui_historial_clinico"));
        ui_historial_clinico->resize(1002, 292);
        layoutWidget = new QWidget(ui_historial_clinico);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 995, 286));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButton_Aceptar_2 = new QPushButton(layoutWidget);
        pushButton_Aceptar_2->setObjectName(QString::fromUtf8("pushButton_Aceptar_2"));

        gridLayout_6->addWidget(pushButton_Aceptar_2, 0, 1, 1, 1);

        pushButton_Cancelar_2 = new QPushButton(layoutWidget);
        pushButton_Cancelar_2->setObjectName(QString::fromUtf8("pushButton_Cancelar_2"));

        gridLayout_6->addWidget(pushButton_Cancelar_2, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_5, 4, 0, 1, 6);

        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_40, 8, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 3, 4, 1, 1);

        label_35 = new QLabel(layoutWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_35, 7, 0, 1, 1);

        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_32, 3, 2, 1, 1);

        label_39 = new QLabel(layoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_39, 7, 1, 1, 1);

        label_36 = new QLabel(layoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_36, 8, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 4, 1, 1);

        lineEdit_ccd = new QLineEdit(layoutWidget);
        lineEdit_ccd->setObjectName(QString::fromUtf8("lineEdit_ccd"));
        lineEdit_ccd->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ccd, 6, 3, 1, 1);

        label_33 = new QLabel(layoutWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_33, 3, 0, 1, 1);

        lineEdit_dli = new QLineEdit(layoutWidget);
        lineEdit_dli->setObjectName(QString::fromUtf8("lineEdit_dli"));
        lineEdit_dli->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_dli, 9, 5, 1, 1);

        lineEdit_ejci = new QLineEdit(layoutWidget);
        lineEdit_ejci->setObjectName(QString::fromUtf8("lineEdit_ejci"));
        lineEdit_ejci->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ejci, 7, 4, 1, 1);

        lineEdit_dcd = new QLineEdit(layoutWidget);
        lineEdit_dcd->setObjectName(QString::fromUtf8("lineEdit_dcd"));
        lineEdit_dcd->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_dcd, 6, 5, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 3, 3, 1, 1);

        lineEdit_cld = new QLineEdit(layoutWidget);
        lineEdit_cld->setObjectName(QString::fromUtf8("lineEdit_cld"));
        lineEdit_cld->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_cld, 8, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_20, 3, 1, 1, 1);

        lineEdit_cci = new QLineEdit(layoutWidget);
        lineEdit_cci->setObjectName(QString::fromUtf8("lineEdit_cci"));
        lineEdit_cci->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_cci, 7, 3, 1, 1);

        lineEdit_ejli = new QLineEdit(layoutWidget);
        lineEdit_ejli->setObjectName(QString::fromUtf8("lineEdit_ejli"));
        lineEdit_ejli->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ejli, 9, 4, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 3, 5, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 2, 0, 1, 6);

        lineEdit_ejld = new QLineEdit(layoutWidget);
        lineEdit_ejld->setObjectName(QString::fromUtf8("lineEdit_ejld"));
        lineEdit_ejld->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ejld, 8, 4, 1, 1);

        lineEdit_dci = new QLineEdit(layoutWidget);
        lineEdit_dci->setObjectName(QString::fromUtf8("lineEdit_dci"));
        lineEdit_dci->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_dci, 7, 5, 1, 1);

        lineEdit_eci = new QLineEdit(layoutWidget);
        lineEdit_eci->setObjectName(QString::fromUtf8("lineEdit_eci"));
        lineEdit_eci->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_eci, 7, 2, 1, 1);

        lineEdit_ejcd = new QLineEdit(layoutWidget);
        lineEdit_ejcd->setObjectName(QString::fromUtf8("lineEdit_ejcd"));
        lineEdit_ejcd->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ejcd, 6, 4, 1, 1);

        lineEdit_dld = new QLineEdit(layoutWidget);
        lineEdit_dld->setObjectName(QString::fromUtf8("lineEdit_dld"));
        lineEdit_dld->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_dld, 8, 5, 1, 1);

        label_41 = new QLabel(layoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_41, 9, 1, 1, 1);

        lineEdit_cli = new QLineEdit(layoutWidget);
        lineEdit_cli->setObjectName(QString::fromUtf8("lineEdit_cli"));
        lineEdit_cli->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_cli, 9, 3, 1, 1);

        lineEdit_eli = new QLineEdit(layoutWidget);
        lineEdit_eli->setObjectName(QString::fromUtf8("lineEdit_eli"));
        lineEdit_eli->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_eli, 9, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(150, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_14, 0, 3, 1, 1);

        lineEdit_ecd = new QLineEdit(layoutWidget);
        lineEdit_ecd->setObjectName(QString::fromUtf8("lineEdit_ecd"));
        lineEdit_ecd->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_ecd, 6, 2, 1, 1);

        label_38 = new QLabel(layoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_38, 6, 1, 1, 1);

        label_37 = new QLabel(layoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_37, 9, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 0, 2, 1, 1);

        lineEdit_eld = new QLineEdit(layoutWidget);
        lineEdit_eld->setObjectName(QString::fromUtf8("lineEdit_eld"));
        lineEdit_eld->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_eld, 8, 2, 1, 1);

        label_34 = new QLabel(layoutWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_34, 6, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_15, 0, 5, 1, 1);

        label_42 = new QLabel(layoutWidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_42, 1, 0, 1, 1);

        lineEdit_doctor = new QLineEdit(layoutWidget);
        lineEdit_doctor->setObjectName(QString::fromUtf8("lineEdit_doctor"));

        gridLayout_5->addWidget(lineEdit_doctor, 1, 1, 1, 1);

        label_43 = new QLabel(layoutWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_43, 1, 4, 1, 1);

        dateEdit_fecha = new QDateEdit(layoutWidget);
        dateEdit_fecha->setObjectName(QString::fromUtf8("dateEdit_fecha"));
        dateEdit_fecha->setMaximumDateTime(QDateTime(QDate(7999, 12, 31), QTime(23, 59, 59)));
        dateEdit_fecha->setCalendarPopup(true);

        gridLayout_5->addWidget(dateEdit_fecha, 1, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 0, 0, 1, 1);


        retranslateUi(ui_historial_clinico);

        QMetaObject::connectSlotsByName(ui_historial_clinico);
    } // setupUi

    void retranslateUi(QWidget *ui_historial_clinico)
    {
        ui_historial_clinico->setWindowTitle(QApplication::translate("ui_historial_clinico", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar_2->setText(QApplication::translate("ui_historial_clinico", "Guardar", 0, QApplication::UnicodeUTF8));
        pushButton_Aceptar_2->setShortcut(QApplication::translate("ui_historial_clinico", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar_2->setText(QApplication::translate("ui_historial_clinico", "Cancelar", 0, QApplication::UnicodeUTF8));
        pushButton_Cancelar_2->setShortcut(QApplication::translate("ui_historial_clinico", "Esc", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("ui_historial_clinico", "Ojo  Derecho", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_historial_clinico", "Eje", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ui_historial_clinico", "Cerca", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ui_historial_clinico", "Esferico", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ui_historial_clinico", "Ojo Izquierdo", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("ui_historial_clinico", "Lejos", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ui_historial_clinico", "Distancia", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_historial_clinico", "Cilindrico", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_historial_clinico", "Ojos", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_historial_clinico", "Distancia Pupilar", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("ui_historial_clinico", "Ojo Izquierdo", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("ui_historial_clinico", "Ojo  Derecho", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ui_historial_clinico", "Lejos", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ui_historial_clinico", "Cerca", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("ui_historial_clinico", "Doctor", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("ui_historial_clinico", "Fecha", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_historial_clinico: public Ui_ui_historial_clinico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_HISTORIAL_CLINICO_H
