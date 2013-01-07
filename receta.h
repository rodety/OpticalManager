#ifndef RECETA_H
#define RECETA_H
#include "objetopersistente.h"
#include "QTime"
#include <QSqlQueryModel>

class receta: public ObjetoPersistente
{
private:
    int id;
    QTime fecha;
    QString tipodoc;
    QString nrodoc;
    QString nombres;
    QString primer_apellido;
    QString segundo_apellido;
    double oi_lejos;
    double oi_cerca;
    double od_lejos;
    double od_cerca;
    double oi_esferico;
    double od_esferico;
    double oi_cilidrico;
    double od_cilindrico;
    double oi_eje;
    double od_eje;
    double dist_pupilar;


public:
    receta(int _id, QTime _fecha, QString _tipodoc, QString _nrodoc, QString _nombres, QString _primer_apellido, QString _segundo_apellido, double _oi_lejos, double _oi_cerca, double _od_lejos, double _od_cerca, double _oi_esferico, double _od_esferico, double _oi_cilidrico, double _od_cilindrico, double _oi_eje, double _od_eje, double _dist_pupilar);
    receta();

    int getid();
    QTime getfecha();
    QString gettipodoc();
    QString getnrodoc();
    QString getnombres();
    QString getprimer_apellido();
    QString getsegundo_apellido();
    double getoi_lejos();
    double getoi_cerca();
    double getod_lejos();
    double getod_cerca();
    double getoi_esferico();
    double getod_esferico();
    double getoi_cilidrico();
    double getod_cilindrico();
    double getoi_eje();
    double getod_eje();
    double getdist_pupilar();


    void setid(int);
    void setfecha(QTime);
    void settipodoc(QString);
    void setnrodoc(QString);
    void setnombres(QString);
    void setprimer_apellido(QString);
    void setsegundo_apellido(QString);
    void setoi_lejos(double);
    void setoi_cerca(double);
    void setod_lejos(double);
    void setod_cerca(double);
    void setoi_esferico(double);
    void setod_esferico(double);
    void setoi_cilidrico(double);
    void setod_cilindrico(double);
    void setoi_eje(double);
    void setod_eje(double);
    void setdist_pupilar(double);

    bool agregar();
    bool actualizar();
    bool eliminar();




};

#endif // RECETA_H
