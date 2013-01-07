#include "mycombobox.h"
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QVariant>

MyComboBox::MyComboBox(QWidget* parent):QComboBox(parent)
{

    ventana_agregar_1=0;
    ventana_agregar_2=0;


    //Inicializamos los punteros a funcion para poder llenar el combobox

    map_funciones["calidad"]=(&(Calidad::listarNombres));
    map_funciones["color"]=(&(Color::listarNombres));
    map_funciones["tratamiento"]=(&(Tratamiento::listarNombres));
    map_funciones["marca"]=(&(Marca::listarNombres));
    map_funciones["tamanio"]=(&(Tamanio::listarNombres));
    map_funciones["tipoluna"]=(&(TipoLuna::listarNombres));
    map_funciones["forma"]=(&(Forma::listarNombres));
    map_funciones["diametro"]=(&(Diametro::listarNombres));
    map_funciones["tipolente"]=(&(TipoLente::listarNombres));
    map_funciones["potencia"]=(&(Potencia::listarNombres));
    map_funciones["curvabase"]=(&(CurvaBase::listarNombres));
    map_funciones["tiempouso"]=(&(TiempoUso::listarNombres));
    map_funciones["material"]=(&(Material::listarNombres));



    this->connect(this,SIGNAL(activated(QString)),this,SLOT(Show_Agregar()));

    icono_agregar=new QIcon("Icons/1348112114_notification_add.png");

}

//esa funcion es muy importante ya que si no se da el tipo el combo
//no sabra con que datos trabajar
void MyComboBox::IngresarTipo(QString _tipo)
{
    tipo=_tipo;
}

void MyComboBox::Actualizar_Items()
{
    //AUn tiene un problemas se espera mejora
    this->clear();

    QSqlQueryModel* resultado=(map_funciones[tipo])();
    for(int i=0;i<resultado->rowCount();i++)
        this->addItem(resultado->record(i).value(0).toString());
    this->addItem(*icono_agregar,"...Nuevo...");

}


bool MyComboBox::Eliminar_Item()
{
    QString nombre=this->currentText();
    bool exitoso;//este bool lamacena si elimno con exito o no

    if(tipo=="calidad"){
        Calidad calidad;
        calidad.existente(nombre);
        exitoso=calidad.eliminar();
    }
    if(tipo=="color"){
        Color color;
        color.existente(nombre);
        exitoso=color.eliminar();
    }
    if(tipo=="tratamiento"){
        Tratamiento _tratamiento;
        _tratamiento.existente(nombre);
        exitoso=_tratamiento.eliminar();
    }
    if(tipo=="marca"){
        Marca marca;
        marca.existente(nombre);
        exitoso=marca.eliminar();
    }
    if(tipo=="tamanio"){
        Tamanio tamanio;
        tamanio.existente(nombre);        
        exitoso=tamanio.eliminar();
    }
    if(tipo=="tipoluna"){
        TipoLuna tipoluna;
        tipoluna.existente(nombre);
        exitoso=tipoluna.eliminar();
    }
    if(tipo=="forma"){
        Forma forma;
        forma.existente(nombre);
        exitoso=forma.eliminar();
    }
    if(tipo=="diametro"){
        Diametro _diametro;
        _diametro.existente(nombre);
        exitoso=_diametro.eliminar();
    }
    if(tipo=="curvabase"){
        CurvaBase curvabase;
        curvabase.existente(nombre);
        exitoso=curvabase.eliminar();
    }
    if(tipo=="material"){
        Material material;
        material.existente(nombre);
        exitoso=material.eliminar();
    }
    if(tipo=="potencia"){
        Potencia potencia;
        potencia.existente(nombre);
        exitoso=potencia.eliminar();
    }
    if(tipo=="tiempouso"){
        TiempoUso tiempouso;
        tiempouso.existente(nombre);
        exitoso=tiempouso.eliminar();
    }
    if(tipo=="tipolente"){
        TipoLente tipolente;
        tipolente.existente(nombre);
        exitoso=tipolente.eliminar();
    }
    if(exitoso==true)
    {
        this->Actualizar_Items();
        return true;
    }
    else
        return false;
}

 void MyComboBox::Show_Agregar()
 {
     if(this->currentText()=="...Nuevo...")
     {
        if(tipo=="marca")
        {
           ventana_agregar_1=new ui_agregar_nomDesc;
           ventana_agregar_1->recibir_tipo(tipo);

           this->connect(ventana_agregar_1,SIGNAL(envia_senial(int)),this,SLOT(Actualizar_Items()));

           QString nombre_ventana="Agregar "+tipo;
           ventana_agregar_1->setWindowTitle(nombre_ventana);
           ventana_agregar_1->show();
        }
        else
        {
            ventana_agregar_2=new ui_agregar_nombre;
            ventana_agregar_2->recibir_tipo(tipo);

            this->connect(ventana_agregar_2,SIGNAL(envia_senial(int)),this,SLOT(Actualizar_Items()));

            QString nombre_ventana="Agregar "+tipo;
            ventana_agregar_2->setWindowTitle(nombre_ventana);
            ventana_agregar_2->show();
        }
     }
 }
