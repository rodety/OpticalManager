#include "lentecontacto.h"

LenteContacto::LenteContacto(int _id ,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,Marca _marca,QString _tintev,QString _cacuoso, QString _disenio,QString _rangok,Potencia _potencia,CurvaBase _curvabase, Diametro _diametro, TiempoUso _tiempouso,Material _material,TipoLente _tipolente):Producto(_marca,_stock,_precio_compra,_precio_venta,_p_descuento,_habilitado)
{
    id=_id;
    potencia=_potencia;
    curca_base=_curvabase;
    diametro=_diametro;
    tiempo_uso= _tiempouso;
    material=_material;
    tipo_lente=_tipolente;
    tinte_visibilidad=_tintev;
    contenido_acuoso=_cacuoso;
    disenio=_disenio;
    rango_k=_rangok;
}


LenteContacto::LenteContacto(int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,Marca _marca,QString _tintev,QString _cacuoso, QString _disenio,QString _rangok,Potencia _potencia,CurvaBase _curvabase, Diametro _diametro, TiempoUso _tiempouso,Material _material,TipoLente _tipolente):Producto(_marca,_stock,_precio_compra,_precio_venta,_p_descuento,_habilitado)
{
    id=0;
    potencia=_potencia;
    curca_base=_curvabase;
    diametro=_diametro;
    tiempo_uso= _tiempouso;
    material=_material;
    tipo_lente= _tipolente;
    tinte_visibilidad=_tintev;
    contenido_acuoso=_cacuoso;
    disenio=_disenio;
    rango_k=_rangok;
}

LenteContacto::LenteContacto(int _id)
{
    QSqlQuery query;
    query.prepare("SELECT idproducto FROM lente_contacto WHERE idlente_contacto="+QString::number(_id));
    query.exec();
    query.next();
    id=query.value(0).toInt();
    idLenteContacto=_id;
}

LenteContacto::LenteContacto()
{

}


void LenteContacto::generarParaEditar(int _id)
{

    QSqlQueryModel* model=new QSqlQueryModel();//model de la consulta
    idLenteContacto=_id;

    QString ids = QString::number(_id);//id convertido a string

    QString query="select idlente_contacto,tinte_visibilidad,contenido_acuoso,disenio,rango_k,\
            stock,precio_compra,precio_venta,p_descuento,\
            idpotencia,iddiametro,idtiempo_uso,idmaterial,idtipo_lente,idmarca,producto.idproducto,idcurva_base\
        from lente_contacto inner join producto\
        on producto.idproducto= lente_contacto.idproducto\
            where idlente_contacto="+ids;


    model->setQuery(query);
    qDebug()<<"hay resultado"<<model->rowCount();
    if(model->rowCount()>0)
    {

        tinte_visibilidad=model->record(0).value(1).toString();
        contenido_acuoso=model->record(0).value(2).toString();
        disenio=model->record(0).value(3).toString();
        rango_k=model->record(0).value(4).toString();
        stock=model->record(0).value(5).toInt();
        precio_compra=model->record(0).value(6).toDouble();
        precio_venta=model->record(0).value(7).toDouble();
        p_descuento=model->record(0).value(8).toDouble();

        Potencia _potencia(model->record(0).value(9).toInt());
        potencia=_potencia;

        Diametro nuevo_diame(model->record(0).value(10).toInt());
        diametro = nuevo_diame;

        TiempoUso nuevo_tiempouso(model->record(0).value(11).toInt());
        tiempo_uso=nuevo_tiempouso;

        Material nuevomaterial(model->record(0).value(12).toInt());
        material=nuevomaterial;

        TipoLente nuevotipo_lente(model->record(0).value(13).toInt());
        tipo_lente=nuevotipo_lente;

        Marca nuevamarca(model->record(0).value(14).toInt());
        marca=nuevamarca;

        id=model->record(0).value(15).toInt();

        CurvaBase nuevacurva(model->record(0).value(16).toInt());
        curca_base=nuevacurva;
    }



}



/************************************************************************************/
/*************************** FUNCIONES GET Y SET ************************************/
/************************************************************************************/

Potencia LenteContacto::getPotencia()
{
    return potencia;
}

CurvaBase LenteContacto::getCurvaBase()
{
    return curca_base;
}

Diametro LenteContacto::getDiametro()
{
    return diametro;
}

TiempoUso LenteContacto::getTiempoUso()
{
    return tiempo_uso;
}

Material LenteContacto::getMaterial()
{
    return material;
}

TipoLente LenteContacto::getTipoLente()
{
    return tipo_lente;
}

QString LenteContacto::getTinteVisibilidad()
{
    return tinte_visibilidad;
}

QString LenteContacto::getContenidoAcuoso()
{
    return contenido_acuoso;
}

QString LenteContacto::getDisenio()
{
    return disenio;
}

QString LenteContacto::getRangoK()
{
    return rango_k;
}

/////////////////////////////////////// sets /////////////////////////////////////77
void LenteContacto::setPotencia(Potencia _potencia)
{
    potencia=_potencia;
}

void LenteContacto::setCurvaBase(CurvaBase _curvabase)
{
    curca_base=_curvabase;
}

void LenteContacto::setDiametro(Diametro _diametro)
{
    diametro=_diametro;
}

void LenteContacto::setTiempoUso(TiempoUso _tiempouso)
{
    tiempo_uso=_tiempouso;
}

void LenteContacto::setMaterial(Material _material)
{
    material=_material;
}

void LenteContacto::setTipoLente(TipoLente _tipolente)
{
    tipo_lente=_tipolente;
}

void LenteContacto::setTinteVisibilidad( QString _tinte)
{
    tinte_visibilidad=_tinte;
}

void LenteContacto::setContenidoAcuoso(QString _ConAcuo)
{
    contenido_acuoso=_ConAcuo;
}

void LenteContacto::setDisenio(QString _disenio)
{
    disenio=_disenio;
}

void LenteContacto::setRangoK(QString _rangok)
{
    rango_k=_rangok;
}






/************************************************************************************/
/******************************** FUNCION BUSCAR ************************************/
/************************************************************************************/
QSqlQueryModel* LenteContacto::buscar(QString _item)
{
    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("select idlente_contacto,\
                    tinte_visibilidad as Visibilidad,\
                    contenido_acuoso as Contenido_Acuoso,\
                    disenio as Diseño,\
                    rango_k as Rango_K,\
                    stock,\
                    precio_compra,\
                    precio_venta,\
                    p_descuento,\
                    po.valor as Potencia,\
                    cb.valor as Curva_Base,\
                    di.valor as Diametro,\
                    tu.valor as Tiempo_de_Uso,\
                    mt.nombre as Material,\
                    tl.nombre as Tipo_de_Lente,\
                    ma.nombre as Marca\
                             from lente_contacto lc\
                             inner join producto p \
                             on lc.idproducto=p.idproducto \
                             inner join potencia po \
                             on lc.idpotencia=po.idpotencia\
                             inner join curva_base cb\
                             on lc.idcurva_base=cb.idcurva_base \
                             inner join diametro di\
                             on lc.iddiametro=di.iddiametro\
                             inner join tiempo_uso tu\
                             on lc.idtiempo_uso=tu.idtiempo_uso  \
                             inner join material mt\
                             on lc.idmaterial=mt.idmaterial\
                             inner join tipo_lente tl\
                             on lc.idtipo_lente=tl.idtipo_lente\
                             inner join marca ma\
                         on p.idmarca=ma.idmarca\
                         where tinte_visibilidad like '%"+ _item +"%' or\
                         contenido_acuoso like '%"+ _item +"%' or\
                         disenio like '%"+ _item +"%' or\
                         rango_k like '%"+ _item +"%' or\
                         stock like '%"+ _item +"%' or \
                         precio_compra like '%"+ _item +"%' or\
                        precio_venta like '%"+ _item +"%' or \
                         p_descuento like '%"+ _item +"%' or\
                        po.valor like '%"+ _item +"%' or \
                         cb.valor like '%"+ _item +"%' or  \
                        di.valor like '%"+ _item +"%' or \
                         tu.valor like '%"+ _item +"%' or \
                         mt.nombre like '%"+ _item +"%' or \
                         tl.nombre like '%"+ _item +"%' or \
                         ma.nombre like '%"+ _item +"%'");

    return model;
}




////////////////////////////////////funciones para agregar/////////////////
bool LenteContacto::agregar()
{

    //Primero se crea el producto es decir primero se llena en la tabla producto
    QSqlQuery query;
    query.prepare("INSERT INTO producto (stock,precio_compra,precio_venta,p_descuento,habilitado,idmarca)"
                  "VALUES (?,?,?,?,?,?)");
    query.bindValue(0,stock);
    query.bindValue(1,precio_compra);
    query.bindValue(2,precio_venta);
    query.bindValue(3,p_descuento);
    query.bindValue(4,habilitado);
    query.bindValue(5,marca.getId());


    if(query.exec()==true)
    {
        qDebug()<<"acabo de ingreasar un nuevo producto";
        query.prepare("SELECT MAX(idproducto) FROM producto");
        query.exec();
        query.next();
        id=query.value(0).toInt();

        qDebug()<<"id producto "<<id;

        query.prepare("INSERT INTO lente_contacto (idproducto,idpotencia,idcurva_base,iddiametro,idtiempo_uso,idmaterial,idtipo_lente,tinte_visibilidad, contenido_acuoso,disenio,rango_k)"
                      "VALUES (?,?,?,?,?,?,?,?,?,?,?)");

        query.bindValue(0,id);
        query.bindValue(1,potencia.getId());
        query.bindValue(2,curca_base.getId());
        query.bindValue(3,diametro.getId());
        query.bindValue(4,tiempo_uso.getId());
        query.bindValue(5,material.getId());
        query.bindValue(6,tipo_lente.getId());
        query.bindValue(7,tinte_visibilidad);
        query.bindValue(8,contenido_acuoso);
        query.bindValue(9,disenio);
        query.bindValue(10,rango_k);


        if(query.exec()==true)
        {
            query.prepare("SELECT MAX(idlente_contacto) FROM lente_contacto");
            query.exec();
            query.next();
            idLenteContacto=query.value(0).toInt();
            return true;
        }
        else return false;
    }
    else
        return false;
}



bool LenteContacto::actualizar()
{
    QSqlQuery query;
    QSqlQuery query2;
    query.prepare("UPDATE producto SET  idmarca="+QString::number(marca.getId())+" , stock="+QString::number(stock)+" , precio_compra="+QString::number(precio_compra)+" , precio_venta=" + QString::number(precio_venta)+" , p_descuento="+ QString::number(p_descuento)+" , accesorios='"+accesorios+"'  WHERE idproducto="+QString::number(id));
    query.exec();


    query2.prepare("UPDATE lente_contacto SET idpotencia="+QString::number(potencia.getId())+" , idcurva_base ="+QString::number(curca_base.getId())+" , iddiametro="+QString::number(diametro.getId())+" , idtiempo_uso="+QString::number(tiempo_uso.getId())+", idmaterial="+QString::number(material.getId())+" , idtipo_lente="+QString::number(tipo_lente.getId())+" ,tinte_visibilidad='"+tinte_visibilidad+"' ,contenido_acuoso='"+contenido_acuoso+"', disenio='"+disenio+"' ,rango_k='"+rango_k+"'  WHERE idlente_contacto="+QString::number(idLenteContacto));
    qDebug()<<"resultado de actualziar"<<query2.exec();
    return true;

}

bool LenteContacto::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM lente_contacto WHERE idlente_contacto="+ QString::number(idLenteContacto));
    if(query.exec()==true)
    {
        query.prepare("DELETE FROM producto WHERE idproducto="+ QString::number(id));
        return query.exec();
    }
    else
        return false;

}
