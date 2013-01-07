/********************************************************************************
** Form generated from reading UI file 'ui_usuario_datos.ui'
**
** Created: Thu 27. Dec 16:53:08 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_USUARIO_DATOS_H
#define UI_UI_USUARIO_DATOS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_usuario_datos
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_25;
    QLineEdit *le_nombre;
    QLabel *label_21;
    QLineEdit *le_pApellido;
    QLabel *label_29;
    QLineEdit *le_sApellido;
    QLabel *label_24;
    QComboBox *cB_tDoc;
    QLabel *label_16;
    QLineEdit *le_numDoc;
    QLabel *label_28;
    QDateEdit *de_fechaNac;
    QLabel *label_17;
    QComboBox *cb_tienda;
    QLabel *label_19;
    QLineEdit *le_direccion;
    QLabel *label_22;
    QLineEdit *le_telf;
    QLabel *label_27;
    QLineEdit *le_cell;
    QLabel *label;
    QLineEdit *lE_telfFam;
    QLabel *label_4;
    QComboBox *cB_tipoCol;
    QLabel *label_2;
    QLineEdit *le_Usuario;
    QLabel *label_3;
    QPushButton *pB_cambiarPass;
    QLabel *label_30;
    QCheckBox *checkBox_habilitado;
    QPlainTextEdit *tE_obs;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QTableView *tableView_permisos;

    void setupUi(QWidget *ui_usuario_datos)
    {
        if (ui_usuario_datos->objectName().isEmpty())
            ui_usuario_datos->setObjectName(QString::fromUtf8("ui_usuario_datos"));
        ui_usuario_datos->resize(776, 306);
        gridLayout_2 = new QGridLayout(ui_usuario_datos);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_25 = new QLabel(ui_usuario_datos);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 0, 0, 1, 1);

        le_nombre = new QLineEdit(ui_usuario_datos);
        le_nombre->setObjectName(QString::fromUtf8("le_nombre"));

        gridLayout->addWidget(le_nombre, 0, 1, 1, 1);

        label_21 = new QLabel(ui_usuario_datos);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 1, 0, 1, 1);

        le_pApellido = new QLineEdit(ui_usuario_datos);
        le_pApellido->setObjectName(QString::fromUtf8("le_pApellido"));

        gridLayout->addWidget(le_pApellido, 1, 1, 1, 1);

        label_29 = new QLabel(ui_usuario_datos);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout->addWidget(label_29, 1, 2, 1, 1);

        le_sApellido = new QLineEdit(ui_usuario_datos);
        le_sApellido->setObjectName(QString::fromUtf8("le_sApellido"));

        gridLayout->addWidget(le_sApellido, 1, 3, 1, 1);

        label_24 = new QLabel(ui_usuario_datos);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 2, 0, 1, 1);

        cB_tDoc = new QComboBox(ui_usuario_datos);
        cB_tDoc->setObjectName(QString::fromUtf8("cB_tDoc"));

        gridLayout->addWidget(cB_tDoc, 2, 1, 1, 1);

        label_16 = new QLabel(ui_usuario_datos);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 2, 2, 1, 1);

        le_numDoc = new QLineEdit(ui_usuario_datos);
        le_numDoc->setObjectName(QString::fromUtf8("le_numDoc"));

        gridLayout->addWidget(le_numDoc, 2, 3, 1, 1);

        label_28 = new QLabel(ui_usuario_datos);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout->addWidget(label_28, 3, 0, 1, 1);

        de_fechaNac = new QDateEdit(ui_usuario_datos);
        de_fechaNac->setObjectName(QString::fromUtf8("de_fechaNac"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(de_fechaNac->sizePolicy().hasHeightForWidth());
        de_fechaNac->setSizePolicy(sizePolicy);
        de_fechaNac->setCalendarPopup(true);

        gridLayout->addWidget(de_fechaNac, 3, 1, 1, 1);

        label_17 = new QLabel(ui_usuario_datos);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 3, 2, 1, 1);

        cb_tienda = new QComboBox(ui_usuario_datos);
        cb_tienda->setObjectName(QString::fromUtf8("cb_tienda"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_tienda->sizePolicy().hasHeightForWidth());
        cb_tienda->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cb_tienda, 3, 3, 1, 1);

        label_19 = new QLabel(ui_usuario_datos);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 4, 0, 1, 1);

        le_direccion = new QLineEdit(ui_usuario_datos);
        le_direccion->setObjectName(QString::fromUtf8("le_direccion"));

        gridLayout->addWidget(le_direccion, 4, 1, 1, 1);

        label_22 = new QLabel(ui_usuario_datos);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 5, 0, 1, 1);

        le_telf = new QLineEdit(ui_usuario_datos);
        le_telf->setObjectName(QString::fromUtf8("le_telf"));

        gridLayout->addWidget(le_telf, 5, 1, 1, 1);

        label_27 = new QLabel(ui_usuario_datos);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout->addWidget(label_27, 5, 2, 1, 1);

        le_cell = new QLineEdit(ui_usuario_datos);
        le_cell->setObjectName(QString::fromUtf8("le_cell"));

        gridLayout->addWidget(le_cell, 5, 3, 1, 1);

        label = new QLabel(ui_usuario_datos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 6, 0, 1, 1);

        lE_telfFam = new QLineEdit(ui_usuario_datos);
        lE_telfFam->setObjectName(QString::fromUtf8("lE_telfFam"));

        gridLayout->addWidget(lE_telfFam, 6, 1, 1, 1);

        label_4 = new QLabel(ui_usuario_datos);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 2, 1, 1);

        cB_tipoCol = new QComboBox(ui_usuario_datos);
        cB_tipoCol->setObjectName(QString::fromUtf8("cB_tipoCol"));

        gridLayout->addWidget(cB_tipoCol, 6, 3, 1, 1);

        label_2 = new QLabel(ui_usuario_datos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        le_Usuario = new QLineEdit(ui_usuario_datos);
        le_Usuario->setObjectName(QString::fromUtf8("le_Usuario"));
        le_Usuario->setReadOnly(false);

        gridLayout->addWidget(le_Usuario, 7, 1, 1, 1);

        label_3 = new QLabel(ui_usuario_datos);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 2, 1, 1);

        pB_cambiarPass = new QPushButton(ui_usuario_datos);
        pB_cambiarPass->setObjectName(QString::fromUtf8("pB_cambiarPass"));

        gridLayout->addWidget(pB_cambiarPass, 7, 3, 1, 1);

        label_30 = new QLabel(ui_usuario_datos);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout->addWidget(label_30, 8, 0, 1, 1);

        checkBox_habilitado = new QCheckBox(ui_usuario_datos);
        checkBox_habilitado->setObjectName(QString::fromUtf8("checkBox_habilitado"));
        checkBox_habilitado->setChecked(true);

        gridLayout->addWidget(checkBox_habilitado, 8, 1, 1, 1);

        tE_obs = new QPlainTextEdit(ui_usuario_datos);
        tE_obs->setObjectName(QString::fromUtf8("tE_obs"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tE_obs->sizePolicy().hasHeightForWidth());
        tE_obs->setSizePolicy(sizePolicy2);
        tE_obs->setMinimumSize(QSize(0, 0));
        tE_obs->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(tE_obs, 9, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 2, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        tableView_permisos = new QTableView(ui_usuario_datos);
        tableView_permisos->setObjectName(QString::fromUtf8("tableView_permisos"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView_permisos->sizePolicy().hasHeightForWidth());
        tableView_permisos->setSizePolicy(sizePolicy3);
        tableView_permisos->setMinimumSize(QSize(0, 0));
        tableView_permisos->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);

        horizontalLayout->addWidget(tableView_permisos);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nombre, le_pApellido);
        QWidget::setTabOrder(le_pApellido, le_sApellido);
        QWidget::setTabOrder(le_sApellido, cB_tDoc);
        QWidget::setTabOrder(cB_tDoc, le_numDoc);
        QWidget::setTabOrder(le_numDoc, de_fechaNac);
        QWidget::setTabOrder(de_fechaNac, cb_tienda);
        QWidget::setTabOrder(cb_tienda, le_direccion);
        QWidget::setTabOrder(le_direccion, le_telf);
        QWidget::setTabOrder(le_telf, le_cell);
        QWidget::setTabOrder(le_cell, lE_telfFam);
        QWidget::setTabOrder(lE_telfFam, cB_tipoCol);
        QWidget::setTabOrder(cB_tipoCol, le_Usuario);
        QWidget::setTabOrder(le_Usuario, pB_cambiarPass);
        QWidget::setTabOrder(pB_cambiarPass, checkBox_habilitado);
        QWidget::setTabOrder(checkBox_habilitado, tE_obs);
        QWidget::setTabOrder(tE_obs, tableView_permisos);

        retranslateUi(ui_usuario_datos);

        QMetaObject::connectSlotsByName(ui_usuario_datos);
    } // setupUi

    void retranslateUi(QWidget *ui_usuario_datos)
    {
        ui_usuario_datos->setWindowTitle(QApplication::translate("ui_usuario_datos", "Form", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ui_usuario_datos", "Nombres", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ui_usuario_datos", "Primer Apellido", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_usuario_datos", "Segundo Apellido", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_usuario_datos", "Tipo de Documento", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_usuario_datos", "N\303\272mero de Documento", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_usuario_datos", "Fecha de Nacimiento", 0, QApplication::UnicodeUTF8));
        de_fechaNac->setDisplayFormat(QApplication::translate("ui_usuario_datos", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ui_usuario_datos", "Tienda :", 0, QApplication::UnicodeUTF8));
        cb_tienda->clear();
        cb_tienda->insertItems(0, QStringList()
         << QApplication::translate("ui_usuario_datos", "Masculino", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_usuario_datos", "Femenino", 0, QApplication::UnicodeUTF8)
        );
        label_19->setText(QApplication::translate("ui_usuario_datos", "Direcci\303\263n", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ui_usuario_datos", "Tel\303\251fono", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_usuario_datos", "Celular", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_usuario_datos", "Tel\303\251fono Fam.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ui_usuario_datos", "Tipo Colaborador", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_usuario_datos", "Nombre de Usuario", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_usuario_datos", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        pB_cambiarPass->setText(QApplication::translate("ui_usuario_datos", "Cambiar Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ui_usuario_datos", "Observaciones", 0, QApplication::UnicodeUTF8));
        checkBox_habilitado->setText(QApplication::translate("ui_usuario_datos", "Habilitado", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ui_usuario_datos: public Ui_ui_usuario_datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_USUARIO_DATOS_H
