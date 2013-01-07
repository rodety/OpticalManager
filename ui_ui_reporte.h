/********************************************************************************
** Form generated from reading UI file 'ui_reporte.ui'
**
** Created: Thu 27. Dec 16:59:19 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_REPORTE_H
#define UI_UI_REPORTE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_reporte
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QTabWidget *Reporte;
    QWidget *vendedor;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QLineEdit *primer_apelido;
    QLabel *label_5;
    QLabel *label_2;
    QDateEdit *fecha_inicio;
    QComboBox *cmb_tipo_busqueda;
    QDateEdit *fecha_final;
    QLabel *label_4;
    QComboBox *cmb_tienda_vendedor;
    QLabel *label_3;
    QLabel *label;
    QPushButton *generar_pdf_vendedor;
    QLineEdit *Nombres;
    QLineEdit *segundo_apellido;
    QLineEdit *lines_busqueda;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *sig_vendedor;
    QPushButton *btn_buscar_vendedor;
    QPushButton *view_reporte_vendedor;
    QWidget *tienda;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_7;
    QLabel *label_24;
    QComboBox *cmb_tienda_t;
    QPushButton *view_reporte_tienda;
    QPushButton *generar_pdf_tienda;
    QLabel *label_30;
    QDateEdit *fecha_inicio_tienda;
    QCheckBox *chk_tiendas_t;
    QWidget *cliente;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_8;
    QLabel *label_28;
    QLineEdit *primer_apelido_cliente;
    QLabel *label_8;
    QLabel *label_13;
    QDateEdit *fecha_inicio_cliente;
    QComboBox *cmb_tipo_busqueda_cliente;
    QDateEdit *fecha_final_cliente;
    QLabel *label_15;
    QPushButton *generar_pdf_cliente;
    QLineEdit *Nombres_cliente;
    QLineEdit *segundo_apellido_cliente;
    QLineEdit *lines_busqueda_cliente;
    QLabel *label_27;
    QPushButton *btn_buscar_cliente;
    QPushButton *sig_cliente;
    QLabel *label_14;
    QPushButton *view_reporte_cliente;
    QComboBox *cmb_t_reporte;
    QLabel *label_25;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QDateEdit *fecha_final_pago;
    QLabel *label_26;
    QLabel *label_31;
    QComboBox *cmb_pago;
    QDateEdit *fecha_inicio_pago;
    QLabel *label_32;
    QComboBox *cmb_tienda_pago;
    QLabel *label_35;
    QPushButton *generar_pdf_forma_pago;
    QPushButton *view_reporte_forma_pago;
    QWidget *vitrina;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QDateEdit *fecha_inicio_vitrina;
    QDateEdit *fecha_final_vitrina;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *cmb_vitrina_v;
    QLabel *label_19;
    QComboBox *cmb_tienda_vitrina;
    QLabel *label_20;
    QPushButton *generar_pdf_vitrina;
    QPushButton *view_reporte_vitrina;
    QWidget *hist_vendedor;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_9;
    QPushButton *btn_buscar_vendedor_hv;
    QLineEdit *primer_apelido_hv;
    QLabel *label_16;
    QLabel *label_29;
    QComboBox *cmb_busqueda_vendedor;
    QPushButton *generar_pdf_hv_vendedor;
    QLineEdit *Nombres_hv;
    QLineEdit *segundo_apellido_hv;
    QLineEdit *lines_busqueda_vendedor_hv;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *sig_vendedor_hv;
    QPushButton *view_reporte_hv_vendedor;
    QVBoxLayout *verticalLayout;
    QLabel *draw_label;
    QTableView *tableView;

    void setupUi(QWidget *ui_reporte)
    {
        if (ui_reporte->objectName().isEmpty())
            ui_reporte->setObjectName(QString::fromUtf8("ui_reporte"));
        ui_reporte->resize(855, 289);
        gridLayout_6 = new QGridLayout(ui_reporte);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Reporte = new QTabWidget(ui_reporte);
        Reporte->setObjectName(QString::fromUtf8("Reporte"));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        Reporte->setFont(font);
        vendedor = new QWidget();
        vendedor->setObjectName(QString::fromUtf8("vendedor"));
        gridLayoutWidget_2 = new QWidget(vendedor);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 361, 357));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        primer_apelido = new QLineEdit(gridLayoutWidget_2);
        primer_apelido->setObjectName(QString::fromUtf8("primer_apelido"));
        primer_apelido->setEnabled(false);

        gridLayout_4->addWidget(primer_apelido, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(false);
        label_2->setTextFormat(Qt::AutoText);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        fecha_inicio = new QDateEdit(gridLayoutWidget_2);
        fecha_inicio->setObjectName(QString::fromUtf8("fecha_inicio"));
        fecha_inicio->setDateTime(QDateTime(QDate(2012, 11, 5), QTime(0, 0, 0)));
        fecha_inicio->setDate(QDate(2012, 11, 5));
        fecha_inicio->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_inicio->setCalendarPopup(true);

        gridLayout_4->addWidget(fecha_inicio, 6, 1, 1, 1);

        cmb_tipo_busqueda = new QComboBox(gridLayoutWidget_2);
        cmb_tipo_busqueda->setObjectName(QString::fromUtf8("cmb_tipo_busqueda"));

        gridLayout_4->addWidget(cmb_tipo_busqueda, 1, 1, 1, 1);

        fecha_final = new QDateEdit(gridLayoutWidget_2);
        fecha_final->setObjectName(QString::fromUtf8("fecha_final"));
        fecha_final->setDateTime(QDateTime(QDate(2012, 11, 25), QTime(0, 0, 0)));
        fecha_final->setDate(QDate(2012, 11, 25));
        fecha_final->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_final->setCalendarPopup(true);

        gridLayout_4->addWidget(fecha_final, 7, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 7, 0, 1, 1);

        cmb_tienda_vendedor = new QComboBox(gridLayoutWidget_2);
        cmb_tienda_vendedor->setObjectName(QString::fromUtf8("cmb_tienda_vendedor"));

        gridLayout_4->addWidget(cmb_tienda_vendedor, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        generar_pdf_vendedor = new QPushButton(gridLayoutWidget_2);
        generar_pdf_vendedor->setObjectName(QString::fromUtf8("generar_pdf_vendedor"));

        gridLayout_4->addWidget(generar_pdf_vendedor, 8, 0, 1, 1);

        Nombres = new QLineEdit(gridLayoutWidget_2);
        Nombres->setObjectName(QString::fromUtf8("Nombres"));
        Nombres->setEnabled(false);

        gridLayout_4->addWidget(Nombres, 5, 1, 1, 1);

        segundo_apellido = new QLineEdit(gridLayoutWidget_2);
        segundo_apellido->setObjectName(QString::fromUtf8("segundo_apellido"));
        segundo_apellido->setEnabled(false);

        gridLayout_4->addWidget(segundo_apellido, 4, 1, 1, 1);

        lines_busqueda = new QLineEdit(gridLayoutWidget_2);
        lines_busqueda->setObjectName(QString::fromUtf8("lines_busqueda"));

        gridLayout_4->addWidget(lines_busqueda, 2, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 5, 0, 1, 1);

        sig_vendedor = new QPushButton(gridLayoutWidget_2);
        sig_vendedor->setObjectName(QString::fromUtf8("sig_vendedor"));
        sig_vendedor->setEnabled(false);

        gridLayout_4->addWidget(sig_vendedor, 5, 2, 1, 1);

        btn_buscar_vendedor = new QPushButton(gridLayoutWidget_2);
        btn_buscar_vendedor->setObjectName(QString::fromUtf8("btn_buscar_vendedor"));

        gridLayout_4->addWidget(btn_buscar_vendedor, 2, 2, 1, 1);

        view_reporte_vendedor = new QPushButton(gridLayoutWidget_2);
        view_reporte_vendedor->setObjectName(QString::fromUtf8("view_reporte_vendedor"));

        gridLayout_4->addWidget(view_reporte_vendedor, 8, 1, 1, 1);

        Reporte->addTab(vendedor, QString());
        tienda = new QWidget();
        tienda->setObjectName(QString::fromUtf8("tienda"));
        gridLayoutWidget_5 = new QWidget(tienda);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(20, 60, 351, 151));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(gridLayoutWidget_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 1, 0, 1, 1);

        cmb_tienda_t = new QComboBox(gridLayoutWidget_5);
        cmb_tienda_t->setObjectName(QString::fromUtf8("cmb_tienda_t"));

        gridLayout_7->addWidget(cmb_tienda_t, 1, 1, 1, 1);

        view_reporte_tienda = new QPushButton(gridLayoutWidget_5);
        view_reporte_tienda->setObjectName(QString::fromUtf8("view_reporte_tienda"));

        gridLayout_7->addWidget(view_reporte_tienda, 4, 1, 1, 1);

        generar_pdf_tienda = new QPushButton(gridLayoutWidget_5);
        generar_pdf_tienda->setObjectName(QString::fromUtf8("generar_pdf_tienda"));

        gridLayout_7->addWidget(generar_pdf_tienda, 4, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 2, 0, 1, 1);

        fecha_inicio_tienda = new QDateEdit(gridLayoutWidget_5);
        fecha_inicio_tienda->setObjectName(QString::fromUtf8("fecha_inicio_tienda"));
        fecha_inicio_tienda->setDateTime(QDateTime(QDate(2012, 11, 5), QTime(0, 0, 0)));
        fecha_inicio_tienda->setDate(QDate(2012, 11, 5));
        fecha_inicio_tienda->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_inicio_tienda->setCalendarPopup(false);

        gridLayout_7->addWidget(fecha_inicio_tienda, 2, 1, 1, 1);

        chk_tiendas_t = new QCheckBox(gridLayoutWidget_5);
        chk_tiendas_t->setObjectName(QString::fromUtf8("chk_tiendas_t"));

        gridLayout_7->addWidget(chk_tiendas_t, 0, 1, 1, 1);

        Reporte->addTab(tienda, QString());
        cliente = new QWidget();
        cliente->setObjectName(QString::fromUtf8("cliente"));
        gridLayoutWidget_6 = new QWidget(cliente);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 10, 361, 381));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(gridLayoutWidget_6);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_8->addWidget(label_28, 5, 0, 1, 1);

        primer_apelido_cliente = new QLineEdit(gridLayoutWidget_6);
        primer_apelido_cliente->setObjectName(QString::fromUtf8("primer_apelido_cliente"));
        primer_apelido_cliente->setEnabled(false);

        gridLayout_8->addWidget(primer_apelido_cliente, 3, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_8->addWidget(label_8, 3, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setAutoFillBackground(false);
        label_13->setTextFormat(Qt::AutoText);

        gridLayout_8->addWidget(label_13, 1, 0, 1, 1);

        fecha_inicio_cliente = new QDateEdit(gridLayoutWidget_6);
        fecha_inicio_cliente->setObjectName(QString::fromUtf8("fecha_inicio_cliente"));
        fecha_inicio_cliente->setDateTime(QDateTime(QDate(2012, 11, 5), QTime(0, 0, 0)));
        fecha_inicio_cliente->setDate(QDate(2012, 11, 5));
        fecha_inicio_cliente->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_inicio_cliente->setCalendarPopup(true);

        gridLayout_8->addWidget(fecha_inicio_cliente, 6, 1, 1, 1);

        cmb_tipo_busqueda_cliente = new QComboBox(gridLayoutWidget_6);
        cmb_tipo_busqueda_cliente->setObjectName(QString::fromUtf8("cmb_tipo_busqueda_cliente"));

        gridLayout_8->addWidget(cmb_tipo_busqueda_cliente, 1, 1, 1, 1);

        fecha_final_cliente = new QDateEdit(gridLayoutWidget_6);
        fecha_final_cliente->setObjectName(QString::fromUtf8("fecha_final_cliente"));
        fecha_final_cliente->setDateTime(QDateTime(QDate(2012, 11, 25), QTime(0, 0, 0)));
        fecha_final_cliente->setDate(QDate(2012, 11, 25));
        fecha_final_cliente->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_final_cliente->setCalendarPopup(true);

        gridLayout_8->addWidget(fecha_final_cliente, 7, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_8->addWidget(label_15, 6, 0, 1, 1);

        generar_pdf_cliente = new QPushButton(gridLayoutWidget_6);
        generar_pdf_cliente->setObjectName(QString::fromUtf8("generar_pdf_cliente"));

        gridLayout_8->addWidget(generar_pdf_cliente, 8, 0, 1, 1);

        Nombres_cliente = new QLineEdit(gridLayoutWidget_6);
        Nombres_cliente->setObjectName(QString::fromUtf8("Nombres_cliente"));
        Nombres_cliente->setEnabled(false);

        gridLayout_8->addWidget(Nombres_cliente, 5, 1, 1, 1);

        segundo_apellido_cliente = new QLineEdit(gridLayoutWidget_6);
        segundo_apellido_cliente->setObjectName(QString::fromUtf8("segundo_apellido_cliente"));
        segundo_apellido_cliente->setEnabled(false);

        gridLayout_8->addWidget(segundo_apellido_cliente, 4, 1, 1, 1);

        lines_busqueda_cliente = new QLineEdit(gridLayoutWidget_6);
        lines_busqueda_cliente->setObjectName(QString::fromUtf8("lines_busqueda_cliente"));

        gridLayout_8->addWidget(lines_busqueda_cliente, 2, 1, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_8->addWidget(label_27, 4, 0, 1, 1);

        btn_buscar_cliente = new QPushButton(gridLayoutWidget_6);
        btn_buscar_cliente->setObjectName(QString::fromUtf8("btn_buscar_cliente"));

        gridLayout_8->addWidget(btn_buscar_cliente, 2, 2, 1, 1);

        sig_cliente = new QPushButton(gridLayoutWidget_6);
        sig_cliente->setObjectName(QString::fromUtf8("sig_cliente"));
        sig_cliente->setEnabled(false);

        gridLayout_8->addWidget(sig_cliente, 5, 2, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_8->addWidget(label_14, 7, 0, 1, 1);

        view_reporte_cliente = new QPushButton(gridLayoutWidget_6);
        view_reporte_cliente->setObjectName(QString::fromUtf8("view_reporte_cliente"));

        gridLayout_8->addWidget(view_reporte_cliente, 8, 1, 1, 1);

        cmb_t_reporte = new QComboBox(gridLayoutWidget_6);
        cmb_t_reporte->setObjectName(QString::fromUtf8("cmb_t_reporte"));

        gridLayout_8->addWidget(cmb_t_reporte, 0, 1, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setLayoutDirection(Qt::LeftToRight);
        label_25->setAutoFillBackground(false);
        label_25->setTextFormat(Qt::AutoText);

        gridLayout_8->addWidget(label_25, 0, 0, 1, 1);

        Reporte->addTab(cliente, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        fecha_final_pago = new QDateEdit(tab);
        fecha_final_pago->setObjectName(QString::fromUtf8("fecha_final_pago"));
        fecha_final_pago->setDateTime(QDateTime(QDate(2012, 11, 25), QTime(0, 0, 0)));
        fecha_final_pago->setDate(QDate(2012, 11, 25));
        fecha_final_pago->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_final_pago->setCalendarPopup(true);

        gridLayout_3->addWidget(fecha_final_pago, 3, 1, 1, 1);

        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_3->addWidget(label_31, 2, 0, 1, 1);

        cmb_pago = new QComboBox(tab);
        cmb_pago->setObjectName(QString::fromUtf8("cmb_pago"));

        gridLayout_3->addWidget(cmb_pago, 1, 1, 1, 1);

        fecha_inicio_pago = new QDateEdit(tab);
        fecha_inicio_pago->setObjectName(QString::fromUtf8("fecha_inicio_pago"));
        fecha_inicio_pago->setDateTime(QDateTime(QDate(2012, 11, 5), QTime(0, 0, 0)));
        fecha_inicio_pago->setDate(QDate(2012, 11, 5));
        fecha_inicio_pago->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_inicio_pago->setCalendarPopup(true);

        gridLayout_3->addWidget(fecha_inicio_pago, 2, 1, 1, 1);

        label_32 = new QLabel(tab);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_3->addWidget(label_32, 3, 0, 1, 1);

        cmb_tienda_pago = new QComboBox(tab);
        cmb_tienda_pago->setObjectName(QString::fromUtf8("cmb_tienda_pago"));
        cmb_tienda_pago->setEnabled(true);

        gridLayout_3->addWidget(cmb_tienda_pago, 0, 1, 1, 1);

        label_35 = new QLabel(tab);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_3->addWidget(label_35, 0, 0, 1, 1);

        generar_pdf_forma_pago = new QPushButton(tab);
        generar_pdf_forma_pago->setObjectName(QString::fromUtf8("generar_pdf_forma_pago"));

        gridLayout_3->addWidget(generar_pdf_forma_pago, 4, 0, 1, 1);

        view_reporte_forma_pago = new QPushButton(tab);
        view_reporte_forma_pago->setObjectName(QString::fromUtf8("view_reporte_forma_pago"));

        gridLayout_3->addWidget(view_reporte_forma_pago, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);

        Reporte->addTab(tab, QString());
        vitrina = new QWidget();
        vitrina->setObjectName(QString::fromUtf8("vitrina"));
        gridLayoutWidget_3 = new QWidget(vitrina);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 341, 251));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        fecha_inicio_vitrina = new QDateEdit(gridLayoutWidget_3);
        fecha_inicio_vitrina->setObjectName(QString::fromUtf8("fecha_inicio_vitrina"));
        fecha_inicio_vitrina->setDateTime(QDateTime(QDate(2012, 11, 5), QTime(0, 0, 0)));
        fecha_inicio_vitrina->setDate(QDate(2012, 11, 5));
        fecha_inicio_vitrina->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_inicio_vitrina->setCalendarPopup(true);

        gridLayout_5->addWidget(fecha_inicio_vitrina, 2, 1, 1, 1);

        fecha_final_vitrina = new QDateEdit(gridLayoutWidget_3);
        fecha_final_vitrina->setObjectName(QString::fromUtf8("fecha_final_vitrina"));
        fecha_final_vitrina->setDateTime(QDateTime(QDate(2012, 11, 25), QTime(0, 0, 0)));
        fecha_final_vitrina->setDate(QDate(2012, 11, 25));
        fecha_final_vitrina->setMinimumDateTime(QDateTime(QDate(1752, 12, 14), QTime(0, 0, 0)));
        fecha_final_vitrina->setCalendarPopup(true);

        gridLayout_5->addWidget(fecha_final_vitrina, 3, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 1, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 2, 0, 1, 1);

        cmb_vitrina_v = new QComboBox(gridLayoutWidget_3);
        cmb_vitrina_v->setObjectName(QString::fromUtf8("cmb_vitrina_v"));

        gridLayout_5->addWidget(cmb_vitrina_v, 1, 1, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 3, 0, 1, 1);

        cmb_tienda_vitrina = new QComboBox(gridLayoutWidget_3);
        cmb_tienda_vitrina->setObjectName(QString::fromUtf8("cmb_tienda_vitrina"));

        gridLayout_5->addWidget(cmb_tienda_vitrina, 0, 1, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);

        generar_pdf_vitrina = new QPushButton(gridLayoutWidget_3);
        generar_pdf_vitrina->setObjectName(QString::fromUtf8("generar_pdf_vitrina"));

        gridLayout_5->addWidget(generar_pdf_vitrina, 5, 0, 1, 1);

        view_reporte_vitrina = new QPushButton(gridLayoutWidget_3);
        view_reporte_vitrina->setObjectName(QString::fromUtf8("view_reporte_vitrina"));

        gridLayout_5->addWidget(view_reporte_vitrina, 5, 1, 1, 1);

        Reporte->addTab(vitrina, QString());
        hist_vendedor = new QWidget();
        hist_vendedor->setObjectName(QString::fromUtf8("hist_vendedor"));
        gridLayoutWidget_7 = new QWidget(hist_vendedor);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 10, 361, 351));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        btn_buscar_vendedor_hv = new QPushButton(gridLayoutWidget_7);
        btn_buscar_vendedor_hv->setObjectName(QString::fromUtf8("btn_buscar_vendedor_hv"));

        gridLayout_9->addWidget(btn_buscar_vendedor_hv, 1, 2, 1, 1);

        primer_apelido_hv = new QLineEdit(gridLayoutWidget_7);
        primer_apelido_hv->setObjectName(QString::fromUtf8("primer_apelido_hv"));
        primer_apelido_hv->setEnabled(false);

        gridLayout_9->addWidget(primer_apelido_hv, 2, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_9->addWidget(label_16, 2, 0, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_7);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setLayoutDirection(Qt::LeftToRight);
        label_29->setAutoFillBackground(false);
        label_29->setTextFormat(Qt::AutoText);

        gridLayout_9->addWidget(label_29, 0, 0, 1, 1);

        cmb_busqueda_vendedor = new QComboBox(gridLayoutWidget_7);
        cmb_busqueda_vendedor->setObjectName(QString::fromUtf8("cmb_busqueda_vendedor"));

        gridLayout_9->addWidget(cmb_busqueda_vendedor, 0, 1, 1, 1);

        generar_pdf_hv_vendedor = new QPushButton(gridLayoutWidget_7);
        generar_pdf_hv_vendedor->setObjectName(QString::fromUtf8("generar_pdf_hv_vendedor"));

        gridLayout_9->addWidget(generar_pdf_hv_vendedor, 5, 0, 1, 1);

        Nombres_hv = new QLineEdit(gridLayoutWidget_7);
        Nombres_hv->setObjectName(QString::fromUtf8("Nombres_hv"));
        Nombres_hv->setEnabled(false);

        gridLayout_9->addWidget(Nombres_hv, 4, 1, 1, 1);

        segundo_apellido_hv = new QLineEdit(gridLayoutWidget_7);
        segundo_apellido_hv->setObjectName(QString::fromUtf8("segundo_apellido_hv"));
        segundo_apellido_hv->setEnabled(false);

        gridLayout_9->addWidget(segundo_apellido_hv, 3, 1, 1, 1);

        lines_busqueda_vendedor_hv = new QLineEdit(gridLayoutWidget_7);
        lines_busqueda_vendedor_hv->setObjectName(QString::fromUtf8("lines_busqueda_vendedor_hv"));

        gridLayout_9->addWidget(lines_busqueda_vendedor_hv, 1, 1, 1, 1);

        label_33 = new QLabel(gridLayoutWidget_7);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_9->addWidget(label_33, 3, 0, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_9->addWidget(label_34, 4, 0, 1, 1);

        sig_vendedor_hv = new QPushButton(gridLayoutWidget_7);
        sig_vendedor_hv->setObjectName(QString::fromUtf8("sig_vendedor_hv"));
        sig_vendedor_hv->setEnabled(false);

        gridLayout_9->addWidget(sig_vendedor_hv, 4, 2, 1, 1);

        view_reporte_hv_vendedor = new QPushButton(gridLayoutWidget_7);
        view_reporte_hv_vendedor->setObjectName(QString::fromUtf8("view_reporte_hv_vendedor"));

        gridLayout_9->addWidget(view_reporte_hv_vendedor, 5, 1, 1, 1);

        btn_buscar_vendedor_hv->raise();
        primer_apelido_hv->raise();
        label_16->raise();
        label_29->raise();
        cmb_busqueda_vendedor->raise();
        generar_pdf_hv_vendedor->raise();
        Nombres_hv->raise();
        segundo_apellido_hv->raise();
        lines_busqueda_vendedor_hv->raise();
        label_33->raise();
        label_34->raise();
        sig_vendedor_hv->raise();
        view_reporte_hv_vendedor->raise();
        Reporte->addTab(hist_vendedor, QString());

        gridLayout_2->addWidget(Reporte, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        draw_label = new QLabel(ui_reporte);
        draw_label->setObjectName(QString::fromUtf8("draw_label"));
        draw_label->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(draw_label);

        tableView = new QTableView(ui_reporte);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(ui_reporte);

        Reporte->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ui_reporte);
    } // setupUi

    void retranslateUi(QWidget *ui_reporte)
    {
        ui_reporte->setWindowTitle(QApplication::translate("ui_reporte", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ui_reporte", "Primer\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ui_reporte", "Buscar\n"
"Vendedor\n"
"por:", 0, QApplication::UnicodeUTF8));
        cmb_tipo_busqueda->clear();
        cmb_tipo_busqueda->insertItems(0, QStringList()
         << QApplication::translate("ui_reporte", "DNI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_reporte", "Apellido Paterno", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("ui_reporte", "Fecha Final", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ui_reporte", "Fecha Inicio:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ui_reporte", "Tienda: ", 0, QApplication::UnicodeUTF8));
        generar_pdf_vendedor->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ui_reporte", "Segundor\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ui_reporte", "Nombre(s)", 0, QApplication::UnicodeUTF8));
        sig_vendedor->setText(QApplication::translate("ui_reporte", ">", 0, QApplication::UnicodeUTF8));
        btn_buscar_vendedor->setText(QApplication::translate("ui_reporte", "&Buscar", 0, QApplication::UnicodeUTF8));
        view_reporte_vendedor->setText(QApplication::translate("ui_reporte", "&Ver\n"
"Reporte", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(vendedor), QApplication::translate("ui_reporte", "Vendedor", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ui_reporte", "Tienda:", 0, QApplication::UnicodeUTF8));
        view_reporte_tienda->setText(QApplication::translate("ui_reporte", "&View \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        generar_pdf_tienda->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ui_reporte", "Mes y A~no", 0, QApplication::UnicodeUTF8));
        fecha_inicio_tienda->setDisplayFormat(QApplication::translate("ui_reporte", "MM yyyy", 0, QApplication::UnicodeUTF8));
        chk_tiendas_t->setText(QApplication::translate("ui_reporte", "Todas las Tiendas", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(tienda), QApplication::translate("ui_reporte", "Tienda", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ui_reporte", "Nombre(s)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ui_reporte", "Primer\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ui_reporte", "Buscar\n"
"Cliente\n"
"por:", 0, QApplication::UnicodeUTF8));
        cmb_tipo_busqueda_cliente->clear();
        cmb_tipo_busqueda_cliente->insertItems(0, QStringList()
         << QApplication::translate("ui_reporte", "DNI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_reporte", "Apellido Paterno", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("ui_reporte", "Fecha Inicio:", 0, QApplication::UnicodeUTF8));
        generar_pdf_cliente->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ui_reporte", "Segundor\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        btn_buscar_cliente->setText(QApplication::translate("ui_reporte", "&Buscar", 0, QApplication::UnicodeUTF8));
        sig_cliente->setText(QApplication::translate("ui_reporte", ">", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ui_reporte", "Fecha Final", 0, QApplication::UnicodeUTF8));
        view_reporte_cliente->setText(QApplication::translate("ui_reporte", "&Ver\n"
"Reporte", 0, QApplication::UnicodeUTF8));
        cmb_t_reporte->clear();
        cmb_t_reporte->insertItems(0, QStringList()
         << QApplication::translate("ui_reporte", "Venta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_reporte", "Historial", 0, QApplication::UnicodeUTF8)
        );
        label_25->setText(QApplication::translate("ui_reporte", "Reporte:", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(cliente), QApplication::translate("ui_reporte", "Cliente", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ui_reporte", "Forma de Pago:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ui_reporte", "Fecha Inicio:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ui_reporte", "Fecha Final", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ui_reporte", "Tienda: ", 0, QApplication::UnicodeUTF8));
        generar_pdf_forma_pago->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        view_reporte_forma_pago->setText(QApplication::translate("ui_reporte", "&Ver \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(tab), QApplication::translate("ui_reporte", "Pago", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ui_reporte", "Vitrina:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ui_reporte", "Fecha Inicio:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ui_reporte", "Fecha Final", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ui_reporte", "Tienda: ", 0, QApplication::UnicodeUTF8));
        generar_pdf_vitrina->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        view_reporte_vitrina->setText(QApplication::translate("ui_reporte", "&View \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(vitrina), QApplication::translate("ui_reporte", "Vitrina", 0, QApplication::UnicodeUTF8));
        btn_buscar_vendedor_hv->setText(QApplication::translate("ui_reporte", "&Buscar", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ui_reporte", "Primer\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("ui_reporte", "Buscar\n"
"Vendedor\n"
"por:", 0, QApplication::UnicodeUTF8));
        cmb_busqueda_vendedor->clear();
        cmb_busqueda_vendedor->insertItems(0, QStringList()
         << QApplication::translate("ui_reporte", "DNI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ui_reporte", "Apellido Paterno", 0, QApplication::UnicodeUTF8)
        );
        generar_pdf_hv_vendedor->setText(QApplication::translate("ui_reporte", "&Generar \n"
" Reporte", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ui_reporte", "Segundor\n"
"Apellido", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ui_reporte", "Nombre(s)", 0, QApplication::UnicodeUTF8));
        sig_vendedor_hv->setText(QApplication::translate("ui_reporte", ">", 0, QApplication::UnicodeUTF8));
        view_reporte_hv_vendedor->setText(QApplication::translate("ui_reporte", "&Ver\n"
"Reporte", 0, QApplication::UnicodeUTF8));
        Reporte->setTabText(Reporte->indexOf(hist_vendedor), QApplication::translate("ui_reporte", "Historial de Vendedor", 0, QApplication::UnicodeUTF8));
        draw_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_reporte: public Ui_ui_reporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_REPORTE_H
