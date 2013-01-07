#include "tipolente.h"

#include <QDebug>

TipoLente::TipoLente(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

TipoLente::TipoLente()
{
    id=0;
    nombre="";
}

TipoLente::TipoLente(QString _nombre)
{
    id=0;
    nombre=_nombre;
}


//Constructo con solo tener el ID
TipoLente::TipoLente(int _id)
{
    QSqlQuery query;
    query.prepare("select * from tipo_lente where idtipo_lente="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las TipoLentes existentes
 * @return QList TipoLentes
 */
QList<TipoLente*> TipoLente::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM tipo_lente");
    query.exec();
    QList<TipoLente*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        qDebug()<<_id;
        QString _nombre=query.value(1).toString();
        qDebug()<<_nombre;
        TipoLente* tipolente=new TipoLente(_id,_nombre);
        lista_resultado.push_back(tipolente);
    }
    return lista_resultado;
}



QSqlQueryModel* TipoLente::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select nombre from tipo_lente");
    return model;
}


/**
 * @brief Ingresando el nombre de la TipoLente, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto TipoLente con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool TipoLente::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la TipoLente a buscar
    QSqlQuery query;
    query.prepare("select * from tipo_lente where nombre='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto TipoLente y retorna true
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
 * @brief Entrega el id de la TipoLente
 * @return Int id
 */
int TipoLente::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la TipoLente
 * @return QString nombre
 */
QString TipoLente::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void TipoLente::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la TipoLente
 * @param QString _nombre que representa el nuevo nombre
 */
void TipoLente::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva TipoLente a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLente::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO tipo_lente (nombre) VALUES ('"+nombre+"')");
        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idtipo_lente) FROM tipo_lente");
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
 * @brief Esta funcion ejecuta el actualizar una TipoLente a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLente::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE tipo_lente SET nombre='"+nombre+"' WHERE idtipo_lente="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una TipoLente a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool TipoLente::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM tipo_lente WHERE idtipo_lente="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}

