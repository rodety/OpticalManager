#include "vitrina.h"

vitrina::vitrina()
{
}
vitrina::vitrina(QString _idVitrina, QString _idTienda, QString _codigo, QString _alias, int _num_filas, int _num_columnas, int _num_niveles)
{
    idVitrina=_idVitrina;
    idTienda=_idTienda;
    codigo=_codigo;
    alias=_alias;
    num_filas=_num_filas;
    num_columnas=_num_columnas;
    num_niveles=_num_niveles;
}

QString vitrina::getIdVitrina()
{
    return idVitrina;

}

QString vitrina::getIdTienda()
{
    return idTienda;
}

QString vitrina::getAlias()
{
    return alias;
}


QString vitrina::getCodigo()
{
    return codigo;
}


int vitrina::getNum_Filas()
{
    return num_filas;
}


int vitrina::getNum_Columnas()
{
    return num_columnas;
}


int vitrina::getNum_Niveles()
{
    return num_niveles;
}


void vitrina::setIdVitrina(QString tmp)
{
    idVitrina=tmp;
}


void vitrina::setIdTienda(QString tmp)
{
    idTienda=tmp;
}


void vitrina::setAlias(QString tmp)
{
    alias=tmp;
}


void vitrina::setCodigo(QString tmp)
{
    codigo=tmp;
}


void vitrina::setNum_Filas(int tmp)
{
    num_filas=tmp;
}


void vitrina::setNum_Columnas(int tmp)
{
    num_columnas=tmp;
}


void vitrina::setNum_Niveles(int tmp)
{
    num_niveles=tmp;
}


bool vitrina::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO vitrina (idtienda,codigo,alias,num_filas,num_columnas,num_niveles) VALUES (?,?,?,?,?,?)");

    query.bindValue(0,idTienda);
    query.bindValue(1,codigo);
    query.bindValue(2,alias);
    query.bindValue(3,num_filas);
    query.bindValue(4,num_columnas);
    query.bindValue(5,num_niveles);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool vitrina::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE vitrina SET idtienda=?,codigo=?,alias=?,num_filas=?,num_columnas=?,num_niveles=? where idvitrina=?");

    query.bindValue(0,idTienda);
    query.bindValue(1,codigo);
    query.bindValue(2,alias);
    query.bindValue(3,num_filas);
    query.bindValue(4,num_columnas);
    query.bindValue(5,num_niveles);
    query.bindValue(6,idVitrina);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool vitrina::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM vitrina WHERE idvitrina='"+idVitrina+"'");

    if(query.exec())
        return true;
    else
        return false;
}

QSqlQueryModel* vitrina::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;

    model->setQuery("select codigo,alias,num_filas,num_columnas,num_niveles from vitrina ");

    return model;
}


bool vitrina::buscar()
{
    QSqlQuery query;
    query.prepare("select * from vitrina where codigo='"+codigo+"' alias='"+alias+"' and num_filas='"+num_filas+"' and num_columnas='"+num_columnas+"' and num_niveles='"+num_niveles+"'  ");
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            idVitrina=query.value(0).toString();
            idTienda=query.value(1).toString();
            codigo=query.value(2).toString();
            alias=query.value(3).toString();
            num_filas=query.value(4).toInt();
            num_columnas=query.value(5).toInt();
            num_niveles=query.value(6).toInt();
            return true;
        }
        return false;
    }
    else
        return false;
    return true;
}

