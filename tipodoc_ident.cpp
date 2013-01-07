#include "tipodoc_ident.h"

tipodoc_ident::tipodoc_ident()
{

}

QString tipodoc_ident::getIdTipoDocIdent()
{
    return idTipoDocIdent;
}

QString tipodoc_ident::getNombre()
{
    return nombre;
}

QString tipodoc_ident::getSize()
{
    return size;
}

void tipodoc_ident::setIdTipoDocIdent(QString tmp)
{
    idTipoDocIdent=tmp;
}

void tipodoc_ident::setNombre(QString tmp)
{
    nombre=tmp;
}

void tipodoc_ident::setSize(QString tmp)
{
    size=tmp;
}

bool tipodoc_ident::agregar()
{

}

bool tipodoc_ident::actualizar()
{

}

bool tipodoc_ident::eliminar()
{

}

QSqlQueryModel* tipodoc_ident::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select nombre from tipodoc_ident");
    return model;
}

bool tipodoc_ident::buscar()
{
    QSqlQuery query;
    query.prepare("select * from tipodoc_ident where nombre='"+nombre+"'");
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            idTipoDocIdent=query.value(0).toString();
            nombre=query.value(1).toString();
            size=query.value(2).toString();
            return true;
        }
        return false;
    }
    else
        return false;
    return true;
}
