#include "venta.h"

venta::venta()
{
}

QString venta::getIdVenta()
{
    return idVenta;
}

void venta::setIdVenta(QString temp)
{
    idVenta = temp;
}

bool venta::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO venta (idventa) VALUES (?)");

    query.bindValue(0,idVenta);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool venta::actualizar()
{
    return true;
}

bool venta::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM venta WHERE idventa=?");

    query.bindValue(0,idVenta);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool venta::buscar()
{
    QSqlQuery query;
    query.prepare("select * from venta where idventa='"+idVenta+"'");
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            return true;
        }
        return false;
    }
    else
        return false;
    return true;
}

QSqlQueryModel* venta::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select idventa,idtienda,idcolaborador,idcliente,fecha,total from ventas *");
    return model;
}
