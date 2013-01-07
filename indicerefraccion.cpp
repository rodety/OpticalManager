#include "indicerefraccion.h"

IndiceRefraccion::IndiceRefraccion(int _id,QString _valor)
{
    id=_id;
    valor=_valor;
}

IndiceRefraccion::IndiceRefraccion()
{
    id=0;
    valor="";
}

IndiceRefraccion::IndiceRefraccion(QString _valor)
{
    id=0;
    valor=_valor;
}



//Constructo con solo tener el ID
IndiceRefraccion::IndiceRefraccion(int _id)
{
    QSqlQuery query;
    query.prepare("select * from indice_refraccion where idindice_refraccion="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;
    valor=query.value(1).toString();
}


/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las IndiceRefraccions existentes
 * @return QList IndiceRefraccions
 */
QList<IndiceRefraccion*> IndiceRefraccion::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM indice_refraccion");
    query.exec();
    QList<IndiceRefraccion*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _valor=query.value(1).toString();
        IndiceRefraccion* indicerefraccion=new IndiceRefraccion(_id,_valor);
        lista_resultado.push_back(indicerefraccion);
    }
    return lista_resultado;
}



QSqlQueryModel* IndiceRefraccion::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select valor from indice_refraccion");
    return model;
}






/**
 * @brief Ingresando el nombre de la IndiceRefraccion, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto IndiceRefraccion con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool IndiceRefraccion::existente(QString _valor)
{
    //Se realiza la consulta con el nombre de la IndiceRefraccion a buscar
    QSqlQuery query;
    query.prepare("select * from indice_refraccion where valor='"+_valor+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto IndiceRefraccion y retorna true

       valor=_valor;
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
 * @brief Entrega el id de la IndiceRefraccion
 * @return Int id
 */
int IndiceRefraccion::getId()
{
    return id;
}



/**
 * @brief Entrega el valor de la IndiceRefraccion
 * @return QString valor
 */
QString IndiceRefraccion::getValor()
{
    return valor;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void IndiceRefraccion::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el valor de la IndiceRefraccion
 * @param QString _valor que representa el nuevo valor
 */
void IndiceRefraccion::setValor(QString _valor)
{
    valor=_valor;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::agregar()
{
    if(valor!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO indice_refraccion (valor) VALUES ('"+valor+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT idindice_refraccion FROM indice_refraccion WHERE valor='"+valor+"'");
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
 * @brief Esta funcion ejecuta el actualizar una IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::actualizar()
{
    if(valor!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE indice_refraccion SET valor='"+valor+"' WHERE idindice_refraccion="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una IndiceRefraccion a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool IndiceRefraccion::eliminar()
{
    if(valor!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM indice_refraccion WHERE idindice_refraccion="+QString::number(id));
        return query.exec();
    }
    else
        return false;
}
