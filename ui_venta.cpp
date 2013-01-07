#include "ui_venta.h"
#include "ui_ui_venta.h"
#include "ui_agregar_venta.h"

ui_venta::ui_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_venta)
{
    ui->setupUi(this);
    actualizar_table();
}

ui_venta::~ui_venta()
{
    delete ui;
}

void ui_venta::on_pushButton_20_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}

void ui_venta::on_pushButton_2_clicked()
{
    //
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;    
    this->connect(venta_agregar,SIGNAL(senial()),this,SLOT(actualizar_table()));
    venta_agregar->show();
}

void ui_venta::on_pushButton_3_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}

void ui_venta::on_pushButton_13_clicked()
{
    ui_agregar_venta* venta_agregar=new ui_agregar_venta;
    venta_agregar->show();
}


void ui_venta::actualizar_table()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select precio,fecha,descripcion,stock,precio_venta from linea_venta\
                    inner join producto p\
                    on linea_venta.idproducto=p.idproducto");
    ui->tableView_luna->setModel(model);
}


