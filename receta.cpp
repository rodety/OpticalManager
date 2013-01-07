#include "receta.h"
#include <QDebug>
receta::receta()
{

}
receta::receta(int _id, QTime _fecha,  QString _tipodoc, QString _nrodoc, QString _nombres, QString _primer_apellido, QString _segundo_apellido, double _oi_lejos, double _oi_cerca, double _od_lejos, double _od_cerca, double _oi_esferico, double _od_esferico, double _oi_cilidrico, double _od_cilindrico, double _oi_eje, double _od_eje, double _dist_pupilar)
{

    id=_id;
    fecha=_fecha;
    tipodoc=_tipodoc;
    nrodoc=_nrodoc;
    nombres=_nombres;
    primer_apellido=_primer_apellido;
    segundo_apellido=_segundo_apellido;
    oi_lejos=_oi_lejos;
    oi_cerca=_oi_cerca;
    od_lejos=_od_lejos;
    od_cerca=_od_cerca;
    oi_esferico=_oi_esferico;
    od_esferico=_od_esferico;
    oi_cilidrico=_oi_cilidrico;
    od_cilindrico=_od_cilindrico;
    oi_eje=_oi_eje;
    od_eje=_od_eje;
    dist_pupilar=_dist_pupilar;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int receta::getid()
{
    return id;
}

QTime receta::getfecha()
{
    return fecha;
}

QString receta::gettipodoc()
{
    return tipodoc;
}

QString receta::getnrodoc()
{
    return nrodoc;
}

QString receta::getnombres()
{
    return nombres;
}

QString receta::getprimer_apellido()
{
    return primer_apellido;
}

QString receta::getsegundo_apellido()
{
    return segundo_apellido;
}

double receta::getoi_lejos()
{
    return oi_lejos;
}
double receta::getoi_cerca()
{
    return oi_cerca;
}

double receta::getod_lejos()
{
    return od_lejos;
}

double receta::getod_cerca()
{
    return od_cerca;
}

double receta::getoi_esferico()
{
    return oi_esferico;
}

double receta::getod_esferico()
{
    return od_esferico;
}

double receta::getoi_cilidrico()
{
    return oi_cilidrico;
}

double receta::getod_cilindrico()
{
    return od_cilindrico;
}

double receta::getoi_eje()
{
    return oi_eje;
}

double receta::getod_eje()
{
    return od_eje;
}

double receta::getdist_pupilar()
{
    return dist_pupilar;
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void receta::setid(int _id)
{
    id=_id;

}

void receta::setfecha(QTime _fecha)
{
    fecha=_fecha;

}
void receta::settipodoc(QString _tipodoc)
{
    tipodoc=_tipodoc;

}

void receta::setnrodoc(QString _nrodoc)
{
    nrodoc=_nrodoc;

}

void receta::setnombres(QString _nombres)
{
    nombres=_nombres;

}

void receta::setprimer_apellido(QString _primer_apellido)
{
    primer_apellido=_primer_apellido;

}

void receta::setsegundo_apellido(QString _segundo_apellido)
{
    segundo_apellido=_segundo_apellido;

}

void receta::setoi_lejos(double _oi_lejos)
{
    oi_lejos=_oi_lejos;

}

void receta::setoi_cerca(double _oi_cerca)
{
    oi_cerca=_oi_cerca;

}

void receta::setod_lejos(double _od_lejos)
{
    od_lejos=_od_lejos;

}

void receta::setod_cerca(double _od_cerca)
{
    od_cerca=_od_cerca;

}

void receta::setoi_esferico(double _oi_esferico)
{
    oi_esferico=_oi_esferico;

}

void receta::setod_esferico(double _od_esferico)
{
    od_esferico=_od_esferico;

}

void receta::setoi_cilidrico(double _oi_cilidrico)
{
    oi_cilidrico=_oi_cilidrico;

}

void receta::setod_cilindrico(double _od_cilindrico)
{
    od_cilindrico=_od_cilindrico;

}

void receta::setoi_eje(double _oi_eje)
{
    oi_eje=_oi_eje;

}

void receta::setod_eje(double _od_eje)
{
    od_eje=_od_eje;

}

void receta::setdist_pupilar(double _dist_pupilar)
{
   dist_pupilar=_dist_pupilar;
}

bool receta::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO receta (odlejos,odcerca,odcilind,odeje,oilejos,oicerca,oicilind,oieje,distanciapupilar)"
                  "VALUES (?,?,?,?,?,?,?,?,?)");

    query.bindValue(0,od_lejos);
    query.bindValue(1,od_cerca);
    query.bindValue(2,od_cilindrico);
    query.bindValue(3,od_eje);
    query.bindValue(4,oi_lejos);
    query.bindValue(5,oi_cerca);
    query.bindValue(6,oi_cilidrico);
    query.bindValue(7,oi_eje);
    query.bindValue(8,dist_pupilar);
    if(query.exec())
    {
        //ahora vamos a recureperar el id
        query.prepare("SELECT MAX(idreceta) FROM receta");
        query.exec();
        query.next();
        id=query.value(0).toInt();
        return true;
    }
    else
        return false;
}

bool receta::actualizar()
{

}


bool receta::eliminar()
{

}
