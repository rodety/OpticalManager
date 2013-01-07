#include "montura.h"
#include <QDebug>

Montura::Montura(int _idmontura,QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_marca,_stock,_precio_compra, _precio_venta, _p_descuento,_accesorios,_habilitado)
{
    idmontura=_idmontura;
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}

Montura::Montura(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio):Producto(_codigo,_descripcion,_marca,_stock,_precio_compra, _precio_venta, _p_descuento,_accesorios,_habilitado)
{

    idmontura=0;
    color=_color;
    calidad=_calidad;
    forma=_forma;
    tamanio=_tamanio;
}


Montura::Montura()
{

}



//COnstructo con solo id, por lo normal solo lo usare para el eliminar y solo
//necesito el id de la montura y el id del producto
Montura::Montura(int _id)
{
    QSqlQuery query;
    query.prepare("SELECT idproducto FROM montura WHERE idmontura="+QString::number(_id));
    query.exec();
    query.next();
    id=query.value(0).toInt();
    idmontura=_id;
}


void Montura::generarParaEditar(int _id)
{
    QSqlQueryModel* model=new QSqlQueryModel();//model de la consulta
    QString idS=QString::number(_id);
    idmontura=_id;
    QString query="select idmontura,codigo,descripcion,stock,precio_compra,precio_venta,p_descuento,accesorios,habilitado,\
                    idmarca,idtamanio,idforma,idcalidad,idcolor,producto.idproducto\
                from montura inner join producto\
                on montura.idproducto= producto.idproducto\
            where idmontura="+idS;


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

        Tamanio _tamanio(model->record(0).value(10).toInt());
        tamanio=_tamanio;

        Forma _forma(model->record(0).value(11).toInt());
        forma=_forma;

        Calidad _calidad(model->record(0).value(12).toInt());
        calidad=_calidad;

        Color _color(model->record(0).value(13).toInt());
        color=_color;

        id=model->record(0).value(14).toInt();

    }
}





/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el color de la Montura
 * @return Color color
 */
Color Montura::getColor()
{
    return color;
}


/**
 * @brief Entrega la forma de la Montura
 * @return Forma forma
 */
Forma Montura::getForma()
{
    return forma;
}

/**
 * @brief Entrega el calidad de la Montura
 * @return Calidad calidad
 */
Calidad Montura::getCalidad()
{
    return calidad;
}

/**
 * @brief Entrega el tamanio de la Montura
 * @return Tamanio tamanio
 */
Tamanio Montura::getTamanio()
{
    return tamanio;
}

int Montura::getIdMontura()
{
    return idmontura;
}




/**
 * @brief Permite cambiar el color de la Montura
 * @param Color _color que representa el nuevo nombre
 */
void Montura::setColor(Color _color)
{
    color=_color;
}

/**
 * @brief Permite cambiar la forma de la Montura
 * @param Forma _forma que representa el nuevo nombre
 */
void Montura::setForma(Forma _forma)
{
    forma=_forma;
}

/**
 * @brief Permite cambiar el Calidad de la Montura
 * @param Caidad _calidad que representa el nuevo nombre
 */
void Montura::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

/**
 * @brief Permite cambiar el tamanio de la Montura
 * @param Tamanio _tamanio que representa el nuevo nombre
 */
void Montura::setTamanio(Tamanio _tamanio)
{
    tamanio=_tamanio;
}




/*--------------------------------------------------------------------
               FUNCIONES DEL OBJETO PRESISTENTE
---------------------------------------------------------------------*/


/**
 * @brief Esta funcion ejecuta el agregar una nueva Montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Montura::agregar()
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

            qDebug()<<"este el id"<<id;

            query.prepare("INSERT INTO montura (idproducto,idcalidad,idforma,idcolor,idtamanio)"
                          "VALUES (?,?,?,?,?)");


            query.bindValue(0,id);

            qDebug()<<calidad.getId();
            query.bindValue(1,calidad.getId());

            qDebug()<<forma.getId();
            query.bindValue(2,forma.getId());

            qDebug()<<color.getId();
            query.bindValue(3,color.getId());

            qDebug()<<tamanio.getId();
            query.bindValue(4,tamanio.getId());
            if(query.exec()==true)
            {

                query.prepare("SELECT idmontura FROM montura WHERE idproducto='"+QString::number(id)+"'");
                query.exec();
                query.next();
                idmontura=query.value(0).toInt();
                return true;
            }
            else return false;
        }
        else
            return false;    
}


/**
 * @brief Esta funcion ejecuta el actualizar una Montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Montura::actualizar()
{
    QSqlQuery query;
    QSqlQuery query2;            
    query.prepare("UPDATE producto SET  idmarca="+QString::number(marca.getId())+" , stock="+QString::number(stock)+" , codigo='"+codigo+"' , descripcion='"+descripcion+"', precio_compra="+QString::number(precio_compra)+" , precio_venta=" + QString::number(precio_venta)+" , p_descuento="+ QString::number(p_descuento)+" , accesorios='"+accesorios+"'  WHERE idproducto="+QString::number(id));
    query.exec();


    query2.prepare("UPDATE montura SET idtamanio="+QString::number(tamanio.getId())+" , idforma ="+QString::number(forma.getId())+" , idcalidad="+QString::number(calidad.getId())+" , idcolor="+QString::number(color.getId())+" WHERE idmontura="+QString::number(idmontura));
    query2.exec();
    return true;
}


/**
 * @brief Esta funcion ejecuta el eliminar una montura a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */

bool Montura::eliminar()
{
        QSqlQuery query;
        QSqlQuery query2;
        query.prepare("DELETE FROM montura WHERE idmontura="+ QString::number(idmontura));
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



QSqlQueryModel* Montura::buscar(QString _item)
{

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select idmontura,codigo,\
                         c.nombre as calidad, \
                         f.nombre as forma, \
                         t.nombre as tamanio, \
                         p.descripcion as Descricion,\
                         ma.nombre as Marca,\
                         color,stock,accesorios,precio_compra,precio_venta,p_descuento \
                         from montura m \
                         inner join producto p \
                         on m.idproducto=p.idproducto \
                         inner join calidad c \
                         on m.idcalidad=c.idcalidad \
                         inner join forma f \
                         on m.idforma=f.idforma \
                         inner join color co \
                         on m.idcolor=co.idcolor \
                         inner join tamanio t \
                         on m.idtamanio=t.idtamanio\
                         inner join marca ma \
                         on p.idmarca=ma.idmarca \
                         where codigo like '%"+_item+"%' or\
                         c.nombre like '%"+_item+"%' or\
                         f.nombre like '%"+_item+"%' or\
                         t.nombre like '%"+_item+"%' or \
                         co.color like '%"+_item+"%' or \
                         p.descripcion like '%"+_item+"%' or\
                         stock like '%"+_item+"%' or \
                         precio_compra like '%"+_item+"%' or \
                         accesorios like '%"+_item+"%' or \
                         p_descuento like '%"+_item+"%'");

    return model;
}



