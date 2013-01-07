#include "ui_producto.h"
#include "ui_ui_producto.h"
#include <QVector>
#include <QDebug>


ui_producto::ui_producto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_producto)
{
    ui->setupUi(this);
    posicion=0;

    //Se agrega al vector de funciones las funciones de busqueda de
    //todos los productos
    vec_funciones.push_back(&(Luna::buscar));
    vec_funciones.push_back(&(Montura::buscar));
    vec_funciones.push_back(&(LenteContacto::buscar));
    vec_funciones.push_back(&(Otro::buscar));

    //se incializa el puntero a producto seleccionado, el cual guardará
    //el model de cada producto que se selecciones segun la busqueda
    //tambien este model tendra los id de los productos al contrario del que se muestra
    model_actual=new QSqlQueryModel;


}

ui_producto::~ui_producto()
{
    delete ui;



}




/**
 * @brief Funcion del boton de busqueda
 */


void ui_producto::on_pushButton_busqueda_barra_clicked()
{
    QSqlQueryModel* resultado= (vec_funciones[posicion])(ui->lineEdit->text());
    qDebug()<<"la posicion es "<<posicion;
    //se copea el query para que model actual seactualize
    model_actual->setQuery(resultado->query());
    //borramos la columna donde esta el id de la luna(id de la BD)
    resultado->removeColumn(0);//atento en esta parte a a hora del testing
    ui->tableView->setModel(resultado);
    ui->lineEdit->clear();

}





/**
 * @brief Funcion del boton de aregar que dependiendo de la seleccion de la categoria
 * generará una ventana segun el tipo de producto
 */

void ui_producto::on_pushButton_agregar_clicked()
{
    if(posicion==0)
    {
        ui_producto_agregar_luna* ventana_agregar=new ui_producto_agregar_luna;
        this->connect(ventana_agregar,SIGNAL(senial()),this,SLOT(actualizar_view()));
        ventana_agregar->show();
    }
    else if(posicion==1)
    {
        ui_producto_agregar_montura* ventana_agregar=new ui_producto_agregar_montura;
        this->connect(ventana_agregar,SIGNAL(senial()),this,SLOT(actualizar_view()));
        ventana_agregar->show();
    }
    else if(posicion==2)
    {
        ui_producto_agregar_lente_contacto* ventana_agregar=new ui_producto_agregar_lente_contacto;
        this->connect(ventana_agregar,SIGNAL(senial()),this,SLOT(actualizar_view()));
        ventana_agregar->show();

    }
    else if(posicion==3)
    {                
        ui_producto_agregar_otro* ventana_agregar=new ui_producto_agregar_otro;
        this->connect(ventana_agregar,SIGNAL(senial()),this,SLOT(actualizar_view()));
        ventana_agregar->show();
    }
}






/**
 * @brief Funcion del boton de aregar que dependiendo de la seleccion de la categoria
 * generará una ventana segun el tipo de producto para poder editar, el cual se llenará
 * dependiendo del producto seleccionado
 */
void ui_producto::on_pushButton_aditar_luna_clicked()
{
    int id= model_actual->data(model_actual->index(ui->tableView->currentIndex().row(),0)).toInt();
    if(id==0)
    {
         QMessageBox::information(this,"Error","Debe Seleccionar un Producto Primero");
    }
    else
    {
        //verifica que no este nulo para que no se cuelgue, siempre debe aver seleccionado
        if(model_actual!=NULL)
        {

            if(posicion==0 && id!=0)
            {

                Luna luna_nueva;//creo una luna
                luna_nueva.generarParaEditar(id);//genero todo los datos

                //creo ventana
                ui_producto_agregar_luna* ventana_editar_luna=new ui_producto_agregar_luna();
                this->connect(ventana_editar_luna,SIGNAL(senial()),this,SLOT(actualizar_view()));
                ventana_editar_luna->tipoEditar(luna_nueva);
                ventana_editar_luna->show();
            }
            else if(posicion==1)
            {
                Montura montura_nueva;
                montura_nueva.generarParaEditar(id);
                ui_producto_agregar_montura* ventana_editar=new ui_producto_agregar_montura();
                this->connect(ventana_editar,SIGNAL(senial()),this,SLOT(actualizar_view()));

                ventana_editar->tipoEditar(montura_nueva);
                ventana_editar->show();
            }
            else if(posicion==2)
            {
               LenteContacto lente_nuevo;
                lente_nuevo.generarParaEditar(id);
                ui_producto_agregar_lente_contacto* ventana_editar=new ui_producto_agregar_lente_contacto();
                this->connect(ventana_editar,SIGNAL(senial()),this,SLOT(actualizar_view()));
                ventana_editar->tipoEditar(lente_nuevo);
                ventana_editar->show();
            }
            else if(posicion==3)
            {
                Otro otro_nuevo;
                otro_nuevo.generarParaEditar(id);
                ui_producto_agregar_otro* ventana_editar=new ui_producto_agregar_otro();
                this->connect(ventana_editar,SIGNAL(senial()),this,SLOT(actualizar_view()));
                ventana_editar->tipoEditar(otro_nuevo);
                ventana_editar->show();
            }
        }
        actualizar_view();
    }
}

void ui_producto::on_pushButton_eliminar_luna_clicked()
{
    int id= model_actual->data(model_actual->index(ui->tableView->currentIndex().row(),0)).toInt();
    if(id==0)
    {
         QMessageBox::information(this,"Error","Debe Seleccionar un Producto Primero");
    }
    else
    {
        QMessageBox::StandardButton resultado;
        resultado=QMessageBox::question(this,"Eliminar","¿Esta seguro que desea Eliminar el Producto?",QMessageBox::Yes | QMessageBox::No);

        if(resultado==QMessageBox::Yes)
        {
            if(model_actual!=NULL)
            {
                //Toma el id del producto seleccionado

                if(posicion==0)
                {
                    Luna luna_nueva(id);
                    luna_nueva.eliminar();
                }
                else if(posicion==1)
                {
                    Montura montura_nueva(id);
                    montura_nueva.eliminar();
                }
                else if(posicion==2)
                {
                    LenteContacto lente_nuevo(id);
                    lente_nuevo.eliminar();

                }
                else if(posicion==3)
                {
                    Otro otro_nuevo(id);
                    otro_nuevo.eliminar();
                }
            }
            actualizar_view();
        }
    }
}



void ui_producto::on_pushButton_busqueda_avanzada_clicked()
{
    if(posicion==0)
    {
        ventana_busqueda_avansada=new ui_producto_datos();
        ventana_busqueda_avansada->show();
        this->connect(ventana_busqueda_avansada,SIGNAL(enviar_resultado(QSqlQueryModel*)),this,SLOT(cambiar_model(QSqlQueryModel*)));
    }    
}


void ui_producto::cambiar_model(QSqlQueryModel* nmodel)
{
     ui->tableView->setModel(nmodel);
}

//fucnion que actualiza el view
void ui_producto::actualizar_view()
{

    qDebug()<<"SE ENVIO LA SENIAL Y ENTONCES SE DEBE ACTUALIZAR ELTABLE";
    QSqlQueryModel* resultado= (vec_funciones[posicion])("");

    //se copea el query para que model actual seactualize
    model_actual->setQuery(resultado->query());

    //borramos la columna donde esta el id de la luna(id de la BD)
    resultado->removeColumn(0);//atento en esta parte a a hora del testing
    ui->tableView->setModel(resultado);
}



void ui_producto::on_Tipo_poroducto_combo_activated(int index)
{

    posicion=index;
    QSqlQueryModel* resultado= (vec_funciones[index])("");

    //se copea el query para que model actual seactualize
    model_actual->setQuery(resultado->query());

    //borramos la columna donde esta el id de la luna(id de la BD)
    resultado->removeColumn(0);//atento en esta parte a a hora del testing
    ui->tableView->setModel(resultado);


}
