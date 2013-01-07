#include "ui_agregar_nombre.h"
#include "ui_ui_agregar_nombre.h"

ui_agregar_nombre::ui_agregar_nombre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_nombre)
{
    ui->setupUi(this);
}

ui_agregar_nombre::~ui_agregar_nombre()
{
    delete ui;
}

void ui_agregar_nombre::on_pushButton_cancelar_clicked()
{
    this->close();
}

void ui_agregar_nombre::recibir_tipo(QString _tipo)
{
    tipo=_tipo;
}

void ui_agregar_nombre::on_pushButton_guardar_clicked()
{

    QString nombre=ui->lineEdit_nombre->text();

    if(tipo=="calidad"){
        Calidad calidad(nombre);
        calidad.agregar();

    }
    if(tipo=="color"){
        Color color(nombre);
        color.agregar();
    }
    if(tipo=="tratamiento"){
        Tratamiento _tratamiento(nombre);
        _tratamiento.agregar();
    }
    if(tipo=="tamanio"){
        Tamanio tamanio(nombre);
        tamanio.agregar();
    }
    if(tipo=="tipoluna"){
        TipoLuna tipoluna(nombre);
        tipoluna.agregar();
    }
    if(tipo=="forma"){
        Forma forma(nombre);
        forma.agregar();
    }
    if(tipo=="diametro"){
        Diametro diametro(nombre);
        diametro.agregar();
    }
    if(tipo=="curvabase"){
        CurvaBase curvabase(nombre);
        curvabase.agregar();
    }
    if(tipo=="material"){
        Material material(nombre);
        material.agregar();
    }
    if(tipo=="potencia"){
        Potencia potencia(nombre);
        potencia.agregar();
    }
    if(tipo=="tiempouso"){
        TiempoUso tiempouso(nombre);
        tiempouso.agregar();
    }
    if(tipo=="tipolente"){
        TipoLente tipolente(nombre);
        tipolente.agregar();
    }
    emit envia_senial(1);
    this->close();    
}
