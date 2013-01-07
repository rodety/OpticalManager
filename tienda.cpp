#include "tienda.h"

tienda::tienda()
{
}
tienda::tienda(QString _idtienda, QString _idempresa, QString _alias, QString _direccion, QString _telefono, QString _permisoMunicipal)
{
    idTienda=_idtienda;
    idEmpresa=_idempresa;
    alias=_alias;
    direccion=_direccion;
    telefono=_telefono;
    permisoMunicipal=_permisoMunicipal;
}


QString tienda::getIdTienda()
{
    return idTienda;
}

QString tienda::getIdEmpresa()
{
    return idEmpresa;
}

QString tienda::getAlias()
{
    return alias;
}

QString tienda::getDireccion()
{
    return direccion;
}

QString tienda::getTelefono()
{
    return telefono;
}

QString tienda::getPermisoMunicipal()
{
    return permisoMunicipal;
}

void tienda::setIdTienda(QString tmp)
{
    idTienda=tmp;
}

void tienda::setIdEmpresa(QString tmp)
{
    idEmpresa=tmp;
}

void tienda::setAlias(QString tmp)
{
    alias=tmp;
}

void tienda::setDireccion(QString tmp)
{
    direccion=tmp;
}

void tienda::setTelefono(QString tmp)
{
    telefono=tmp;
}

void tienda::setPermisoMunicipal(QString tmp)
{
    permisoMunicipal=tmp;
}

bool tienda::validar(QString texto_a_validar, QString tipo_validacion)
{
    bool tmp=false;
    string cadena=texto_a_validar.toStdString();
    if(tipo_validacion=="numerico")
    {
        for (int i = 0; i <texto_a_validar.size() - 1; i++)
        {
              if ((isdigit((int)(cadena[i]))))
              {
                 tmp=true;
              }
              else
              {
                  tmp=false;
              }
        }
        return tmp;
    }
    else
    {
        return false;
    }

}

bool tienda::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO tienda (idempresa,alias,direccion,telefono,permiso_municipal) VALUES (?,?,?,?,?)");

    query.bindValue(0,idEmpresa);
    query.bindValue(1,alias);
    query.bindValue(2,direccion);
    query.bindValue(3,telefono);
    query.bindValue(4,permisoMunicipal);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool tienda::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE tienda SET idempresa=?,alias=?,direccion=?,telefono=?,permiso_municipal=? where idtienda=?");

    query.bindValue(0,idEmpresa);
    query.bindValue(1,alias);
    query.bindValue(2,direccion);
    query.bindValue(3,telefono);
    query.bindValue(4,permisoMunicipal);
    query.bindValue(5,idTienda);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool tienda::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM tienda WHERE idtienda='"+idTienda+"'");

    if(query.exec())
        return true;
    else
        return false;
}

QSqlQueryModel* tienda::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("select alias,direccion,telefono,permiso_municipal from tienda");
    return model;
}
