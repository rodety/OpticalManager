#include "historialclinico.h"

historialClinico::historialClinico()
{
    fechaCambiada=false;
}

QString historialClinico::getIdHistorialClinico()
{
    return idHistorialClinico;
}

QString historialClinico::getIdCliente()
{
    return idCliente;
}

QString historialClinico::getDoctor()
{
    return doctor;
}

QString historialClinico::getFecha()
{
    return fecha;
}

medidasHistorial& historialClinico::getMedidasCercaDerecha()
{
    return mCercaDerecha;
}

medidasHistorial& historialClinico::getMedidasCercaIzquierda()
{
    return mCercaIzquierda;
}

medidasHistorial& historialClinico::getMedidasLejosDerecha()
{
    return mLejosDerecha;
}

medidasHistorial& historialClinico::getMedidasLejosIzquierda()
{
    return mLejosIzquierda;
}

void historialClinico::setIdHistorialClinico(QString tmp)
{
    idHistorialClinico=tmp;
}

void historialClinico::setIdCliente(QString tmp)
{
    idCliente = tmp;
}

void historialClinico::setDoctor(QString tmp)
{
    doctor = tmp;
}

void historialClinico::setFecha(QString tmp)
{
    fechaCambiada=true;
    fecha = tmp;
}

void historialClinico::setMedidasCercaDerecha(medidasHistorial tmp)
{
    mCercaDerecha=tmp;
}

void historialClinico::setMedidasCercaIzquierda(medidasHistorial tmp)
{
    mCercaIzquierda=tmp;
}

void historialClinico::setMedidasLejosDerecha(medidasHistorial tmp)
{
    mLejosDerecha=tmp;
}

void historialClinico::setMedidasLejosIzquierda(medidasHistorial tmp)
{
    mLejosIzquierda=tmp;
}

void historialClinico::setFlag(bool tmp)
{
    fechaCambiada=tmp;
}

bool historialClinico::agregar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM historial_clinico where fecha=? and idcliente=?");
    query.bindValue(0,fecha);
    query.bindValue(1,idCliente);
    if(query.exec())
    {
        if(query.size()!=0)
        {
            return false;
        }
    }
    query.clear();

    if(mCercaDerecha.agregar()&&mCercaIzquierda.agregar()&&mLejosDerecha.agregar()&&mLejosIzquierda.agregar())
    {
        query.prepare("INSERT INTO historial_clinico (idcliente,doctor,fecha,medida_cerder,medida_cerizq,medida_lejder,medida_lejizq) VALUES (?,?,?,?,?,?,?);");
        query.bindValue(0,idCliente);
        query.bindValue(1,doctor);
        query.bindValue(2,fecha);
        query.bindValue(3,mCercaDerecha.getIdMedidasHistorial());
        query.bindValue(4,mCercaIzquierda.getIdMedidasHistorial());
        query.bindValue(5,mLejosDerecha.getIdMedidasHistorial());
        query.bindValue(6,mLejosIzquierda.getIdMedidasHistorial());
        if(query.exec())
            return true;
        else
            return false;
    }
    return false;
}

bool historialClinico::actualizar()
{
    QSqlQuery query;
    if(fechaCambiada)
    {
        query.prepare("SELECT * FROM historial_clinico where fecha=? and idcliente=?");
        query.bindValue(0,fecha);
        query.bindValue(1,idCliente);
        if(query.exec())
        {
            if(query.size()!=0)
            {
                return false;
            }
        }
        query.clear();
        if(mCercaDerecha.actualizar()&&mCercaIzquierda.actualizar()&&mLejosDerecha.actualizar()&&mLejosIzquierda.actualizar())
        {
            query.prepare("UPDATE historial_clinico SET doctor=?,fecha=?,medida_cerder=?,medida_cerizq=?,medida_lejder=?,medida_lejizq=? where idhistorial_clinico=?");
            query.bindValue(0,doctor);
            query.bindValue(1,fecha);
            query.bindValue(2,mCercaDerecha.getIdMedidasHistorial());
            query.bindValue(3,mCercaIzquierda.getIdMedidasHistorial());
            query.bindValue(4,mLejosDerecha.getIdMedidasHistorial());
            query.bindValue(5,mLejosIzquierda.getIdMedidasHistorial());
            query.bindValue(6,idHistorialClinico);
            if(query.exec())
                return true;
            else
                return false;
        }
    }
    else
    {
        if(mCercaDerecha.actualizar()&&mCercaIzquierda.actualizar()&&mLejosDerecha.actualizar()&&mLejosIzquierda.actualizar())
        {
            query.prepare("UPDATE historial_clinico SET doctor=?,medida_cerder=?,medida_cerizq=?,medida_lejder=?,medida_lejizq=? where idhistorial_clinico=?");
            query.bindValue(0,doctor);
            query.bindValue(1,mCercaDerecha.getIdMedidasHistorial());
            query.bindValue(2,mCercaIzquierda.getIdMedidasHistorial());
            query.bindValue(3,mLejosDerecha.getIdMedidasHistorial());
            query.bindValue(4,mLejosIzquierda.getIdMedidasHistorial());
            query.bindValue(5,idHistorialClinico);
            if(query.exec())
                return true;
            else
                return false;
        }
    }
    return false;
}

bool historialClinico::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM historial_clinico WHERE idhistorial_clinico=?");
    query.bindValue(0,idHistorialClinico);
    if(query.exec())
    {
        if(mCercaDerecha.eliminar()&&mCercaIzquierda.eliminar()&&mLejosDerecha.eliminar()&&mLejosIzquierda.eliminar())
            return true;
        else
            return false;
    }
    else
        return false;
    return true;
}

QSqlQueryModel* historialClinico::mostrar()
{
    QSqlQueryModel* model=new QSqlQueryModel;
    model->setQuery("SELECT 'cerca' as distancia,'derecho' as ojo,esferico,cilindrico,eje,distancia_pupilar,doctor,fecha FROM historial_clinico,medidas_historial WHERE idcliente="+idCliente+" and medida_cerder=idmedidas_historial UNION SELECT 'cerca' as distancia,'izquierdo' as ojo,esferico,cilindrico,eje,distancia_pupilar,doctor,fecha FROM historial_clinico,medidas_historial WHERE idcliente="+idCliente+" and medida_cerizq=idmedidas_historial UNION SELECT 'lejos' as distancia,'derecho' as ojo,esferico,cilindrico,eje,distancia_pupilar,doctor,fecha FROM historial_clinico,medidas_historial WHERE idcliente="+idCliente+" and medida_lejder=idmedidas_historial UNION SELECT 'lejos' as distancia,'izquierdo' as ojo,esferico,cilindrico,eje,distancia_pupilar,doctor,fecha FROM historial_clinico,medidas_historial WHERE idcliente="+idCliente+" and medida_lejizq=idmedidas_historial ORDER BY fecha DESC,distancia,ojo");
    return model;
}

bool historialClinico::buscar()
{
    QSqlQuery query;
    query.prepare("select * from historial_clinico where idcliente=? and doctor=? and fecha=?");
    query.bindValue(0,idCliente);
    query.bindValue(1,doctor);
    query.bindValue(2,fecha);
    if(query.exec())
    {
        if(query.size()!=0)
        {
            query.first();
            idHistorialClinico=query.value(0).toString();
            mCercaDerecha.setIdMedidasHistorial(query.value(4).toString());
            mCercaIzquierda.setIdMedidasHistorial(query.value(5).toString());
            mLejosDerecha.setIdMedidasHistorial(query.value(6).toString());
            mLejosIzquierda.setIdMedidasHistorial(query.value(7).toString());
            if(mCercaDerecha.buscar()&&mCercaIzquierda.buscar()&&mLejosDerecha.buscar()&&mLejosIzquierda.buscar())
                return true;
            else
                return false;
        }
        return false;
    }
    else
        return false;
    return false;
}
