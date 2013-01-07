#include "tratamiento.h"

Tratamiento::Tratamiento(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

Tratamiento::Tratamiento()
{
    id=0;
    nombre="";
}

Tratamiento::Tratamiento(QString _nombre)
{
    id=0;
    nombre=_nombre;
}



//Constructo con solo tener el ID
Tratamiento::Tratamiento(int _id)
{
    QSqlQuery query;
    query.prepare("select * from tratamiento where idtratamiento="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    nombre=query.value(1).toString();
}

/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Tratamientos existentes
 * @return QList Tratamientos
 */
QList<Tratamiento*> Tratamiento::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM tratamiento");
    query.exec();
    QList<Tratamiento*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        Tratamiento* _tratamiento=new Tratamiento(_id,_nombre);
        lista_resultado.push_back(_tratamiento);
    }
    return lista_resultado;
}



QSqlQueryModel* Tratamiento::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select tipo from tratamiento");
    return model;
}




/**
 * @brief Ingresando el nombre de la Tratamiento, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto Tratamiento con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool Tratamiento::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la Tratamiento a buscar
    QSqlQuery query;
    query.prepare("select * from tratamiento where tipo='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto Tratamiento y retorna true

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
 * @brief Entrega el id de la Tratamiento
 * @return Int id
 */
int Tratamiento::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Tratamiento
 * @return QString nombre
 */
QString Tratamiento::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Tratamiento::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Tratamiento
 * @param QString _nombre que representa el nuevo nombre
 */
void Tratamiento::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Tratamiento a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tratamiento::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO tratamiento (tipo) VALUES ('"+nombre+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idtratamiento) FROM tratamiento");
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
 * @brief Esta funcion ejecuta el actualizar una Tratamiento a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tratamiento::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE tratamiento SET tipo='"+nombre+"' WHERE idtratamiento="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Tratamiento a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Tratamiento::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM tratamiento WHERE idtratamiento="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
