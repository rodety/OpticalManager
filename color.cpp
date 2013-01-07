#include "color.h"
#include <QDebug>

Color::Color(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Color::Color()
{
    id=0;
    nombre="";
}

Color::Color(QString _nombre)
{
    id=0;
    nombre=_nombre;
}


//Constructo con solo tener el ID
Color::Color(int _id)
{
    QSqlQuery query;
    query.prepare("select * from color where idcolor="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Colors existentes
 * @return QList Colors
 */
QList<Color*> Color::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM color");
    query.exec();
    QList<Color*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        qDebug()<<_id;
        QString _nombre=query.value(1).toString();
        qDebug()<<_nombre;
        Color* color=new Color(_id,_nombre);
        lista_resultado.push_back(color);
    }
    return lista_resultado;
}



QSqlQueryModel* Color::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select color from color");
    return model;
}







/**
 * @brief Ingresando el nombre de la Color, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto Color con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool Color::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la Color a buscar
    QSqlQuery query;
    query.prepare("select * from color where color='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto Color y retorna true

       nombre=_nombre;
       query.next();
       id=query.value(0).toInt();
        return true;
   }
   else
       return false;
}




/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Color
 * @return Int id
 */
int Color::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Color
 * @return QString nombre
 */
QString Color::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Color::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Color
 * @param QString _nombre que representa el nuevo nombre
 */
void Color::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO color (color) VALUES ('"+nombre+"')");
        if(query.exec()==true)
        {
            query.prepare("SELECT idcolor FROM color WHERE color='"+nombre+"'");
            query.exec();
            query.next();
            id=query.value(0).toInt();
            return true;
        }
        else
            return false;
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE color SET color='"+nombre+"' WHERE idcolor="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Color a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Color::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM color WHERE idcolor="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
