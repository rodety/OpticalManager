#include "diametro.h"

Diametro::Diametro(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Diametro::Diametro()
{
    id=0;
    nombre="";
}

Diametro::Diametro(QString _nombre)
{
    id=0;
    nombre=_nombre;
}



//Constructo con solo tener el ID
Diametro::Diametro(int _id)
{
    QSqlQuery query;
    query.prepare("select * from diametro where iddiametro="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}


/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Diametroes existentes
 * @return QList Diametroes
 */
QList<Diametro*> Diametro::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM diametro");
    query.exec();
    QList<Diametro*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        Diametro* _diametro=new Diametro(_id,_nombre);
        lista_resultado.push_back(_diametro);
    }
    return lista_resultado;
}





QSqlQueryModel* Diametro::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select valor from diametro");
    return model;
}










/**
 * @brief Ingresando el nombre de la Diametro, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto Diametro con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool Diametro::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la Diametro a buscar
    QSqlQuery query;
    query.prepare("select * from diametro where valor='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto Diametro y retorna true

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
 * @brief Entrega el id de la Diametro
 * @return Int id
 */
int Diametro::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Diametro
 * @return QString nombre
 */
QString Diametro::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Diametro::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Diametro
 * @param QString _nombre que representa el nuevo nombre
 */
void Diametro::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Diametro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Diametro::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO diametro (valor) VALUES ('"+nombre+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(iddiametro) FROM diametro");
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
 * @brief Esta funcion ejecuta el actualizar una Diametro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Diametro::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE diametro SET valor='"+nombre+"' WHERE iddiametro="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Diametro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Diametro::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM diametro WHERE iddiametro="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
