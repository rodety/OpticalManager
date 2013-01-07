#include "cliente.h"

cliente::cliente()
{
}

QString cliente::getIdCliente()
{
    return idCliente;
}

void cliente::setIdCliente(QString tmp)
{
    idCliente=tmp;
}

bool cliente::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO cliente (idcliente) VALUES (?)");

    query.bindValue(0,idCliente);

    if(query.exec())
        return true;
    else
        return false;
    return true;
}

bool cliente::actualizar()
{
    return true;
}

bool cliente::eliminar()
{
    int* idmedidas;
    int cant;
    QSqlQuery query;
    query.prepare("SELECT medida_cerder,medida_cerizq,medida_lejder,medida_lejizq FROM historial_clinico WHERE idcliente=?");
    query.bindValue(0,idCliente);
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            cant=query.size()*4;
            idmedidas=new int[cant];
            for(int i=0;i<cant;i+=4)
            {
                idmedidas[i]=query.value(0).toInt();
                idmedidas[i+1]=query.value(1).toInt();
                idmedidas[i+2]=query.value(2).toInt();
                idmedidas[i+3]=query.value(3).toInt();
                query.next();
            }
        }
        query.clear();
        query.prepare("DELETE FROM historial_clinico WHERE idcliente=?");
        query.bindValue(0,idCliente);
        if(query.exec())
        {
            query.clear();
            for(int i=0;i<cant;i++)
            {
                query.clear();
                query.prepare("DELETE FROM medidas_historial WHERE idmedidas_historial=?");
                query.bindValue(0,idmedidas[i]);
                query.exec();
            }
            //delete idmedidas;
            query.clear();
            query.prepare("DELETE FROM cliente WHERE idcliente=?");
            query.bindValue(0,idCliente);
            if(query.exec())
            {
                query.clear();
                query.prepare("DELETE FROM persona WHERE idpersona=?");
                query.bindValue(0,idCliente);
                if(query.exec())
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
    }
    return false;
}

QSqlQueryModel* cliente::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("SELECT nombres,primer_apellido,segundo_apellido,nro_doc,telefono,celular FROM persona,cliente WHERE idcliente=idpersona");
    return model;
}

bool cliente::buscar()
{
    QSqlQuery query;
    query.prepare("select * from cliente where idcliente='"+idCliente+"'");
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
