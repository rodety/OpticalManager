#include "ui_producto_datos.h"
#include "ui_ui_producto_datos.h"
#include <QDebug>


ui_producto_datos::ui_producto_datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_producto_datos)
{
    ui->setupUi(this);

    ui->calidad_luna->IngresarTipo("calidad");
    ui->tipo_luna->IngresarTipo("tipoluna");
    ui->diametro_c->IngresarTipo("diametro");

    ui->calidad_luna->Actualizar_Items();
    ui->tipo_luna->Actualizar_Items();
    ui->diametro_c->Actualizar_Items();
}

ui_producto_datos::~ui_producto_datos()
{
    delete ui;
}

void ui_producto_datos::on_Buscar_clicked()
{
    QString calidad=ui->calidad_luna->currentText();
    QString tipo_luna=ui->tipo_luna->currentText();
    QString medida=ui->medida->text();
    QString diametro=ui->diametro_c->currentText();

    Calidad _calidad;
    _calidad.existente(calidad);

    QString idca=QString::number(_calidad.getId());

    TipoLuna _tipo_luna;
    _tipo_luna.existente(tipo_luna);
    QString idtpl=QString::number(_tipo_luna.getId());

    Diametro _diametro;
    _diametro.existente(diametro);
     QString iddi=QString::number(_diametro.getId());

    QSqlQueryModel* model=new QSqlQueryModel();
    QString query="select idluna, c.nombre as calidad, tpl.nombre as Tipo_Luna,di.valor as Diametro,tr.tipo as Tratamiento,precio_compra,precio_venta,p_descuento,stock,descripcion \
            from (select idluna,idproducto,idtipo_luna,idcalidad,idtratamiento,iddiametro,val_ini,val_fin from ((select * from luna where idcalidad="+idca+" and idtipo_luna="+idtpl+" and iddiametro="+iddi+") as tabla inner join rango_medida rm on tabla.idrango_medida = rm.idrango_medida)\
                  where val_ini<="+medida +" and val_fin>="+medida+") \
            as tabla2 inner join producto p \
            on tabla2.idproducto= p.idproducto \
            inner join calidad c \
            on tabla2.idcalidad=c.idcalidad \
            inner join tipo_luna tpl \
            on tabla2.idtipo_luna=tpl.idtipo_luna \
            inner join tratamiento tr \
            on tabla2.idtratamiento=tr.idtratamiento \
            inner join diametro di \
            on tabla2.iddiametro=di.iddiametro";
    model->setQuery(query);
    emit enviar_resultado(model);
    this->close();
}

