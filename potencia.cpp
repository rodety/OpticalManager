#include "potencia.h"

#include <QDebug>

Potencia::Potencia(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Potencia::Potencia()
{
    id=0;
    nombre="";
}

Potencia::Potencia(QString _nombre)
{
    id=0;
    nombre=_nombre;
}


//Constructo con solo tener el ID
Potencia::Potencia(int _id)
{
    QSqlQuery query;
    query.prepare("select * from potencia where idpotencia="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Potencias existentes
 * @return QList Potencias
 */
QList<Potencia*> Potencia::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM potencia");
    query.exec();
    QList<Potencia*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        qDebug()<<_id;
        QString _nombre=query.value(1).toString();
        qDebug()<<_nombre;
        Potencia* potencia=new Potencia(_id,_nombre);
        lista_resultado.push_back(potencia);
    }
    return lista_resultado;
}



QSqlQueryModel* Potencia::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select valor from potencia");
    return model;
}


/**
 * @brief Ingresando el nombre de la Potencia, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto Potencia con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool Potencia::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la Potencia a buscar
    QSqlQuery query;
    query.prepare("select * from potencia where valor='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto Potencia y retorna true
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
 * @brief Entrega el id de la Potencia
 * @return Int id
 */
int Potencia::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Potencia
 * @return QString nombre
 */
QString Potencia::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Potencia::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Potencia
 * @param QString _nombre que representa el nuevo nombre
 */
void Potencia::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Potencia a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Potencia::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO potencia (valor) VALUES ('"+nombre+"')");
        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idpotencia) FROM potencia");
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
 * @brief Esta funcion ejecuta el actualizar una Potencia a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Potencia::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE potencia SET valor='"+nombre+"' WHERE idpotencia="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Potencia a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Potencia::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM potencia WHERE idpotencia="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}

