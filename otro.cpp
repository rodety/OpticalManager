#include "otro.h"
#include <QDebug>

Otro::Otro(int _idOtro,QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado):Producto(_codigo,_descripcion,_marca,_stock,_precio_compra, _precio_venta, _p_descuento,_accesorios,_habilitado)
{
    idOtro=_idOtro;
}

Otro::Otro(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado):Producto(_codigo,_descripcion,_marca,_stock,_precio_compra, _precio_venta, _p_descuento,_accesorios,_habilitado)
{
    idOtro=0;
}


Otro::Otro()
{

}



//COnstructo con solo id, por lo normal solo lo usare para el eliminar y solo
//necesito el id de la Otro y el id del producto
Otro::Otro(int _id)
{
    QSqlQuery query;
    query.prepare("SELECT idproducto FROM otro WHERE idotro="+QString::number(_id));
    query.exec();
    query.next();
    id=query.value(0).toInt();
    idOtro=_id;
}


void Otro::generarParaEditar(int _id)
{
    QSqlQueryModel* model=new QSqlQueryModel();//model de la consulta
    QString idS=QString::number(_id);
    idOtro=_id;
    QString query="select idotro,codigo,descripcion,stock,precio_compra,precio_venta,p_descuento,accesorios,habilitado,\
                    idmarca,producto.idproducto\
                from otro inner join producto\
                on otro.idproducto= producto.idproducto\
            where idotro="+idS;


    model->setQuery(query);
    if(model->rowCount()>0)
    {
        codigo=model->record(0).value(1).toString();
        descripcion=model->record(0).value(2).toString();
        stock=model->record(0).value(3).toInt();

        precio_compra=model->record(0).value(4).toDouble();
        precio_venta=model->record(0).value(5).toDouble();
        p_descuento=model->record(0).value(6).toDouble();
        accesorios=model->record(0).value(7).toString();
        habilitado=model->record(0).value(8).toBool();

        Marca _marca(model->record(0).value(9).toInt());
        marca=_marca;
        id=model->record(0).value(10).toInt();

    }
}





/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

int Otro::getIdOtro()
{
    return idOtro;
}


/*--------------------------------------------------------------------
               FUNCIONES DEL OBJETO PRESISTENTE
---------------------------------------------------------------------*/


/**
 * @brief Esta funcion ejecuta el agregar una nueva Otro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Otro::agregar()
{
        QSqlQuery query;
        query.prepare("INSERT INTO producto (codigo,descripcion,idmarca,stock,precio_compra,precio_venta,p_descuento,accesorios,habilitado)"
                      "VALUES (?,?,?,?,?,?,?,?,?)");

        query.bindValue(0,codigo);
        query.bindValue(1,descripcion);
        query.bindValue(2,marca.getId());
        query.bindValue(3,stock);
        query.bindValue(4,precio_compra);
        query.bindValue(5,precio_venta);
        query.bindValue(6,p_descuento);
        query.bindValue(7,accesorios);
        query.bindValue(8,habilitado);

        if(query.exec()==true)
        {
            qDebug()<<"debi haber ingresado el producto ";
            query.prepare("SELECT MAX(idproducto) FROM producto");
            query.exec();
            query.next();
            id=query.value(0).toInt();

            query.prepare("INSERT INTO otro (idproducto)"
                          "VALUES (?)");
            query.bindValue(0,id);

            if(query.exec()==true)
            {

                query.prepare("SELECT idotro FROM otro WHERE idproducto='"+QString::number(id)+"'");
                query.exec();
                query.next();
                idOtro=query.value(0).toInt();
                return true;
            }
            else return false;
        }
        else
            return false;
}


/**
 * @brief Esta funcion ejecuta el actualizar una Otro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Otro::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE producto SET  idmarca="+QString::number(marca.getId())+" , stock="+QString::number(stock)+" , codigo='"+codigo+"' , descripcion='"+descripcion+"', precio_compra="+QString::number(precio_compra)+" , precio_venta=" + QString::number(precio_venta)+" , p_descuento="+ QString::number(p_descuento)+" , accesorios='"+accesorios+"'  WHERE idproducto="+QString::number(id));
    query.exec();
    return true;
}


/**
 * @brief Esta funcion ejecuta el eliminar una Otro a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */

bool Otro::eliminar()
{
        QSqlQuery query;
        QSqlQuery query2;
        query.prepare("DELETE FROM otro WHERE idotro="+ QString::number(idOtro));
        if(query.exec()==true)
        {
            qDebug()<<"el id del producto a eliminar "<<id;
            query2.prepare("DELETE FROM producto WHERE idproducto="+ QString::number(id));
            qDebug()<<"este es el resultado de elimnar"<<query2.exec();
            return query.exec();
        }
        else
            return false;
}



QSqlQueryModel* Otro::buscar(QString _item)
{

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select idotro,codigo,\
                         p.descripcion as Descricion,\
                         ma.nombre as Marca,\
                         stock,accesorios,precio_compra,precio_venta,p_descuento \
                         from otro o \
                         inner join producto p \
                         on o.idproducto=p.idproducto \
                         inner join marca ma \
                         on p.idmarca=ma.idmarca \
                         where codigo like '%"+_item+"%' or\
                         p.descripcion like '%"+_item+"%' or\
                         stock like '%"+_item+"%' or \
                         precio_compra like '%"+_item+"%' or \
                         accesorios like '%"+_item+"%' or \
                         p_descuento like '%"+_item+"%'");

    return model;
}
