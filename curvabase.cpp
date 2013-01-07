#include "curvabase.h"

#include <QDebug>

CurvaBase::CurvaBase(int _id,QString _nombre)
{
    id=_id;
    nombre=_nombre;
}

CurvaBase::CurvaBase()
{
    id=0;
    nombre="";
}

CurvaBase::CurvaBase(QString _nombre)
{
    id=0;
    nombre=_nombre;
}


//Constructo con solo tener el ID
CurvaBase::CurvaBase(int _id)
{

    qDebug()<<"generadado la curva base"<<_id;
    QSqlQuery query;
    query.prepare("select * from curva_base where idcurva_base="+QString::number(_id));
    query.exec();
    query.next();
    id=_id;

    nombre=query.value(1).toString();
    qDebug()<<"el nomrbe que salio es "<<nombre;
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las CurvaBases existentes
 * @return QList CurvaBases
 */
QList<CurvaBase*> CurvaBase::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM curva_base");
    query.exec();
    QList<CurvaBase*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        qDebug()<<_id;
        QString _nombre=query.value(1).toString();
        qDebug()<<_nombre;
        CurvaBase* curvabase=new CurvaBase(_id,_nombre);
        lista_resultado.push_back(curvabase);
    }
    return lista_resultado;
}



QSqlQueryModel* CurvaBase::listarNombres()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select valor from curva_base");
    return model;
}







/**
 * @brief Ingresando el nombre de la CurvaBase, puede verificar si esta en la base de datos
 *        o no, en caso de que si este llena el objeto CurvaBase con los datos de la tabla
 * @return Bool si es exite return true, y si no exite return false
 */
bool CurvaBase::existente(QString _nombre)
{
    //Se realiza la consulta con el nombre de la CurvaBase a buscar
    QSqlQuery query;
    query.prepare("select * from curva_base where valor='"+_nombre+"'");
    query.exec();

    //se verifica si el resultado de la consulta esta vacia
    if(query.size()>0)
   {
       //si tiene contenido el resultado de la consulta se comienza a llenar
       //los datos del objeto CurvaBase y retorna true
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
 * @brief Entrega el id de la CurvaBase
 * @return Int id
 */
int CurvaBase::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la CurvaBase
 * @return QString nombre
 */
QString CurvaBase::getNombre()
{
    return nombre;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void CurvaBase::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la CurvaBase
 * @param QString _nombre que representa el nuevo nombre
 */
void CurvaBase::setNombre(QString _nombre)
{
    nombre=_nombre;
}





/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva CurvaBase a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool CurvaBase::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO curva_base (valor) VALUES ('"+nombre+"')");
        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idcurva_base) FROM curva_base");
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
 * @brief Esta funcion ejecuta el actualizar una CurvaBase a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool CurvaBase::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE curva_base SET valor='"+nombre+"' WHERE idcurva_base="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una CurvaBase a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool CurvaBase::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM curva_base WHERE idcurva_base="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}

