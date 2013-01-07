#include "ui_agregar_venta.h"
#include "ui_ui_agregar_venta.h"
#include <QMessageBox>
#include <QDebug>

ui_agregar_venta::ui_agregar_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_venta)
{
    ui->setupUi(this);
    model_actual=new QSqlQueryModel;
    //llena primero el table
    model_actual=Luna::buscar("");
    ui->tv_productos->setModel(model_actual);
    idluna=0;
}

ui_agregar_venta::~ui_agregar_venta()
{
    delete ui;
}

void ui_agregar_venta::on_pushButton_Cancelar_clicked()
{
    this->close();
    delete this;
}

void ui_agregar_venta::on_pushButton_Cancelar_4_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Cancelar_3_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Cancelar_7_clicked()
{
    this->close();
}

void ui_agregar_venta::on_pushButton_Aceptar_clicked()
{
    if(idluna!=0)
    {

    QSqlQuery query1;
    query1.prepare("SELECT idproducto FROM luna WHERE idluna="+QString::number(idluna));
    query1.exec();
    query1.next();
    int id = query1.value(0).toInt();

    qDebug()<<"el id selectcionado"<<id;
    QString idd=QString::number(id);
    QString fecha=ui->dateEdit_fecha->text();
    QString precio=ui->le_total->text();

    QSqlQuery query;
    query.prepare("INSERT INTO linea_venta(idproducto,precio,fecha) VALUES("+idd+","+precio+" ,'"+fecha+"')");
    if(query.exec()==false)
        QMessageBox::warning(this,"error","Error al vender!");
    else
        QMessageBox::information(this,"Mensaje","se vendio con exito");

    emit senial();
    this->close();
    }
    else
    {
        return;
    }
}

void ui_agregar_venta::on_pb_buscar_clicked()
{
    receta nueva_receta;
    //nueva_receta.setfecha(ui->dateEdit_fecha->date());
    //nueva_receta.setid(1);
    nueva_receta.settipodoc("1");
    nueva_receta.setnombres(ui->le_nombres->text());
    nueva_receta.setprimer_apellido(ui->le_primerApellido->text());
    nueva_receta.setsegundo_apellido(ui->le_segundoApellido->text());
    nueva_receta.setoi_lejos(ui->sb_oilejos->value());
    nueva_receta.setoi_cerca(ui->sb_oicerca->value());
    nueva_receta.setod_lejos(ui->sb_odlejos->value());
    nueva_receta.setod_cerca(ui->sb_odcerca->value());
    nueva_receta.setoi_esferico(ui->sb_oiesferico->value());
    nueva_receta.setod_esferico(ui->sb_odesferico->value());
    nueva_receta.setoi_cilidrico(ui->sb_oicilindrico->value());
    nueva_receta.setod_cilindrico(ui->sb_odcilindrico->value());
    nueva_receta.setoi_eje(ui->sb_oieje->value());
    nueva_receta.setod_eje(ui->sb_odeje->value());
    nueva_receta.setdist_pupilar(ui->sb_distpupilar->value());
    if (nueva_receta.agregar()==true)
    {
        QMessageBox::information(this,"Mensaje","Su receta fue agregada con exito!!");
    }
    else
    {
        QMessageBox::warning(this,"Error", "Hubo un error al agregar la receta");
    }

}

void ui_agregar_venta::on_pb_buscaprod_clicked()
{
    qDebug()<<"bueno voy a incialisar";
    ui_producto_datos* ventana=new ui_producto_datos;
    qDebug()<<"es escrbit";
    this->connect(ventana,SIGNAL(enviar_resultado(QSqlQueryModel*)),this,SLOT(recibir_model(QSqlQueryModel*)));
    ventana->show();
    qDebug()<<"noseeee";
}


void ui_agregar_venta::recibir_model(QSqlQueryModel* model)
{
    qDebug()<<"si enviada señal";
    model_actual=model;
    ui->tv_productos->setModel(model_actual);
}

void ui_agregar_venta::actualizar_table()
{

}

void ui_agregar_venta::on_tv_productos_doubleClicked(const QModelIndex &index)
{
    QMessageBox::StandardButton resultado;
    resultado = QMessageBox::question(this,"Vender","¡Desea escoger este prodcuto para la venta?",QMessageBox::Yes | QMessageBox::No);

    qDebug()<<index.row();
    if(resultado==QMessageBox::Yes)
    {
        idluna= model_actual->data(model_actual->index(index.row(),0)).toInt();
    }
    else
    {
        return;
    }

}

void ui_agregar_venta::on_pushButton_Aceptar_3_clicked()
{

}
