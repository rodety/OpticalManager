#include "luna.h"


Luna::Luna(int _idluna,QString _descripcion,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,RangoMedida _rangomedida, TipoLuna _tipoluna,Calidad _calidad, Tratamiento _tratamiento, Diametro _diametro):Producto(_descripcion,_stock,_precio_compra,_precio_venta,_p_descuento,_habilitado)
{
    idluna=_idluna;
    rangomedida =_rangomedida;    
    tipoluna =_tipoluna;
    calidad =_calidad;
    diametro =_diametro;
    tratamiento = _tratamiento;

}


Luna::Luna(QString _descripcion,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,RangoMedida _rangomedida,TipoLuna _tipoluna,Calidad _calidad,Tratamiento _tratamiento, Diametro _diametro):Producto(_descripcion,_stock,_precio_compra,_precio_venta,_p_descuento,_habilitado)
{
    idluna=0;
    rangomedida =_rangomedida;    
    tipoluna =_tipoluna;
    calidad =_calidad;
    diametro =_diametro;
    tratamiento = _tratamiento;
}



Luna::Luna()
{

}

//COnstructo con solo id, por lo normal solo lo usare para el eliminar y solo
//necesito el id de la lua y el id del producto
Luna::Luna(int _id)
{
    QSqlQuery query;
    query.prepare("SELECT idproducto FROM luna WHERE idluna="+QString::number(_id));
    query.exec();
    query.next();
    id=query.value(0).toInt();
    idluna=_id;

}



void Luna::generarParaEditar(int _id)
{
    QSqlQueryModel* model=new QSqlQueryModel();//model de la consulta
    idluna=_id;

    QString ids = QString::number(_id);//id convertido a string

    QString query="select idluna,descripcion,stock,precio_compra,precio_venta,p_descuento,\
            habilitado,idrango_medida,idtratamiento,iddiametro,idcalidad,idtipo_luna,luna.idproducto\
            from luna inner join producto\
            on luna.idproducto= luna.idproducto\
            where idluna="+ids;


    model->setQuery(query);
    qDebug()<<"hay resultado"<<model->rowCount();
    if(model->rowCount()>0)
    {        

        descripcion=model->record(0).value(1).toString();
        stock=model->record(0).value(2).toInt();
        precio_compra=model->record(0).value(3).toDouble();
        precio_venta=model->record(0).value(4).toDouble();
        p_descuento=model->record(0).value(5).toDouble();
        habilitado=model->record(0).value(6).toBool();
        RangoMedida nuevo_rango(model->record(0).value(7).toInt());
        rangomedida=nuevo_rango;
        Tratamiento nuevo_trata(model->record(0).value(8).toInt());
        tratamiento=nuevo_trata;
        Diametro nuevo_diame(model->record(0).value(9).toInt());
        diametro = nuevo_diame;
        Calidad nuevo_cali(model->record(0).value(10).toInt());
        calidad= nuevo_cali;
        TipoLuna nuevo_tipo(model->record(0).value(11).toInt());        
        tipoluna=nuevo_tipo;
        id=model->record(0).value(12).toInt();
    }
}

/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el rango Medida de la Luna
 * @return RangoMedida RangoMedida
 */
RangoMedida Luna::getRangoMedida()
{
    return rangomedida;
}



/**
 * @brief Entrega el calidad de la Luna
 * @return Calidad calidad
 */
Calidad Luna::getCalidad()
{
    return calidad;
}

/**
 * @brief Entrega el tipo de la Luna
 * @return TipoLuna tipoluna
 */
TipoLuna Luna::getTipoLuna()
{
    return tipoluna;
}

int Luna::getIdLuna()
{
    return idluna;
}


Tratamiento Luna::getTramiento()
{
    return tratamiento;
}


Diametro Luna::getDiametro()
{
    return diametro;
}

/**
 * @brief Permite cambiar el Rango de Medida de la Luna
 * @param RangoMedida _rangomedida que representa el nuevo nombre
 */
void Luna::setRangoMedida(RangoMedida _rangomedida)
{
    rangomedida=_rangomedida;
}


/**
 * @brief Permite cambiar el Calidad de la Luna
 * @param Caidad _calidad que representa el nuevo nombre
 */
void Luna::setCalidad(Calidad _calidad)
{
    calidad=_calidad;
}

/**
 * @brief Permite cambiar el Tipo de Luna de la Luna
 * @param TipoLuna _tipoluna que representa el nuevo nombre
 */
void Luna::setTipoLuna(TipoLuna _tipoluna)
{
    tipoluna=_tipoluna;
}


void Luna::setTratamiento(Tratamiento _tratamiento)
{
    tratamiento=_tratamiento;
}

void Luna::setDiametro(Diametro _diametro)
{
    diametro=_diametro;
}




bool Luna::agregar()
{
        //Primero se crea el producto es decir primero se llena en la tabla producto

        QSqlQuery query;
        query.prepare("INSERT INTO producto (descripcion,stock,precio_compra,precio_venta,p_descuento,habilitado)"
                      "VALUES (?,?,?,?,?,?)");

        query.bindValue(0,descripcion);
        query.bindValue(1,stock);
        query.bindValue(2,precio_compra);
        query.bindValue(3,precio_venta);
        query.bindValue(4,p_descuento);
        query.bindValue(5,habilitado);


        if(query.exec()==true)
        {
            qDebug()<<"acabo de ingreasar un nuevo producto";

            query.prepare("SELECT MAX(idproducto) FROM producto");
            query.exec();
            query.next();
            id=query.value(0).toInt();

            qDebug()<<"id producto "<<id;

            query.prepare("INSERT INTO luna (idproducto,idrango_medida,idtipo_luna,idcalidad,idtratamiento,iddiametro)"
                          "VALUES (?,?,?,?,?,?)");

            query.bindValue(0,id);
            query.bindValue(1,rangomedida.getId());                        
            query.bindValue(2,tipoluna.getId());
            query.bindValue(3,calidad.getId());
            query.bindValue(4,tratamiento.getId());
            query.bindValue(5,diametro.getId());

            if(query.exec()==true)
            {                
                query.prepare("SELECT MAX(idluna) FROM luna");
                query.exec();
                query.next();
                idluna=query.value(0).toInt();
                return true;
            }
            else return false;
        }
        else
            return false;        
}


bool Luna::actualizar()
{

    QSqlQuery query;
    QSqlQuery query2;    
    query.prepare("UPDATE producto SET stock= "+QString::number(stock)+", descripcion='"+descripcion+"',precio_compra="+QString::number(precio_compra)+" , precio_venta=" + QString::number(precio_venta)+" , p_descuento="+ QString::number(p_descuento)+"  WHERE idproducto="+QString::number(id));
    qDebug()<<"resuñltado del query update"<<query.exec();
    qDebug()<<"este es el id de la luna"<<idluna;
    query2.prepare("UPDATE luna SET idrango_medida="+QString::number(rangomedida.getId())+" , idtipo_luna="+QString::number(tipoluna.getId())+" ,idcalidad ="+QString::number(calidad.getId())+" , idtratamiento="+QString::number(tratamiento.getId())+" , iddiametro="+QString::number(diametro.getId())+" where idluna="+QString::number(idluna));
    query2.exec();
    //qDebug()<<"resuñltado del query update2 "<<query2.exec();
    return true;
}

bool Luna::eliminar()
{
        QSqlQuery query;
        query.prepare("DELETE FROM luna WHERE idluna="+ QString::number(idluna));
        if(query.exec()==true)
        {
            query.prepare("DELETE FROM producto WHERE idproducto="+ QString::number(id));
            return query.exec();
        }
        else
            return false;
}





QSqlQueryModel* Luna::buscar(QString _item)
{
    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select idluna,\
                         c.nombre as calidad,\
                         di.valor as Diametro,\
                         rm.val_ini as Valor_Inicial, \
                         rm.val_fin as Valor_Final, \
                         tl.nombre as Tipo_luna,\
                         descripcion,stock,precio_compra,precio_venta,p_descuento \
                         from luna l \
                         inner join producto p \
                         on l.idproducto=p.idproducto \
                         inner join calidad c \
                         on l.idcalidad=c.idcalidad \
                         inner join rango_medida rm \
                         on l.idrango_medida=rm.idrango_medida \
                         inner join tratamiento tr \
                         on l.idtratamiento=tr.idtratamiento \
                        inner join diametro di \
                         on l.iddiametro=di.iddiametro \
                         inner join tipo_luna tl \
                         on l.idtipo_luna=tl.idtipo_luna \
                         where precio_compra like '%"+ _item +"%' or \
                        tr.tipo like '%"+ _item +"%' or \
                        di.valor like '%"+ _item +"%' or \
                         c.nombre like '%"+ _item +"%' or \
                         rm.val_fin like '%"+ _item +"%' or \
                         rm.val_fin like '%"+ _item +"%' or \
                         rm.val_fin like '%"+ _item +"%' or \
                         tl.nombre like '%"+ _item +"%' or \
                        descripcion like '%"+ _item +"%' or \
                         stock like '%"+ _item +"%' or  \
                         precio_venta like '%"+ _item +"%' or \
                         p_descuento like '%"+ _item +"%'");
         return model;
}
