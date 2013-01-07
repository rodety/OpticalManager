#include "tiempouso.h"

#include <QDebug>

TiempoUso::TiempoUso(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

TiempoUso::TiempoUso()
{
    id=0;
    nombre="";
}

TiempoUso::TiempoUso(QString _nombre)
{
    id=0;
    nombre=_nombre;
}


//Constructo con solo tener el ID
TiempoUso::TiempoUso(int _id)
{
    QSqlQuery query;
    query.prepare("select * from tiempo_uso where idtiempo_uso="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las TiempoUsos existentes
 * @return QList TiempoUsos
 */
QList<TiempoUso*> TiempoUso::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM tiempo_uso");
    query.exec();
    QList<TiempoUso*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        qDebug()<<_id;
        QString _nombre=query.value(1).toString();
        qDebug()<<_nombre;
        TiempoUso* tiempouso=new TiempoUso(_id,_nombre);
        lista_resultado.push_back(tiempouso);
    }
    return lista_resultado;
}



QSqlQueryModel* TiempoUso::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select valor from tiempo_uso");
    return model;
}


/**
 * @brief Ingresando el nombre de la TiempoUso, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto TiempoUso con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool TiempoUso::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la TiempoUso a buscar
    QSqlQuery query;
    query.prepare("select * from tiempo_uso where valor='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto TiempoUso y retorna true
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
 * @brief Entrega el id de la TiempoUso
 * @return Int id
 */
int TiempoUso::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la TiempoUso
 * @return QString nombre
 */
QString TiempoUso::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void TiempoUso::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la TiempoUso
 * @param QString _nombre que representa el nuevo nombre
 */
void TiempoUso::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva TiempoUso a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TiempoUso::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO tiempo_uso (valor) VALUES ('"+nombre+"')");
        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idtiempo_uso) FROM tiempo_uso");
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
 * @brief Esta funcion ejecuta el actualizar una TiempoUso a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TiempoUso::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE tiempo_uso SET nombre='"+nombre+"' WHERE idtiempo_uso="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una TiempoUso a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TiempoUso::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM tiempo_uso WHERE idtiempo_uso="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}

