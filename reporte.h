#ifndef REPORTE_H
#define REPORTE_H

#include <QPainter>
#include <QPrinter>
#include <QPen>
#include <QString>
#include <QDate>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <vector>
#include <QSqlQueryModel>
#include <QPixmap>
#include <stdlib.h>


#include "ncreport.h"
#include "ncreportoutput.h"
#include "ncreportpreviewoutput.h"
#include "ncreportpreviewwindow.h"

typedef std::vector<QString> vector_header;

class reporte
{
protected:
    QString header_optica;
    QString header_reporte;
    QString header_fecha_inicio;
    QString header_fecha_fin;
    QString header_current_hora;
    QString header_current_date;
    QString header_current_user;
    QString name_reporte;

    /*Nombres para Reporte*/
    QString name_optica;
    //QString name_reporte;
    QString fecha_inicio_s;
    QString fecha_final_s;
    QString current_user;

    //si es el mismo dia
    QString header_date_especial;

    //almacena las fechas para vefificar si es el mismo dia o semana o mes
    QDate fecha_inicio;
    QDate fecha_fin;
    //estado true = es el mismo dia o semana o mes
    //estado false = diferentes fechas
    bool estado;

    QDate current_date;
    QTime current_time;

    /*Draw pdf*/
    QPainter painter;
    QPrinter printer;
    QPen withline;

    QSqlQuery query;
    vector_header vec_head;

    NCReport * report;

    QString quer;
public:
    reporte();
    void load_headers();

    void load_file_set();
    vector_header get_header();

    virtual void clear_headers();
    virtual bool validacion(QDate ini,QDate fin);
    virtual void verificar_fecha();
    virtual void add_name_optica(QString name);
    virtual void add_name_reporte(QString name);
    virtual void set_fecha_inicio(QDate name);
    virtual void set_fecha_final(QDate name);
    virtual void set_current_user(QString name);

    virtual void set_file_name()=0;

    /*Consultas comunes*/
    virtual QSqlQuery find_tienda();
    virtual QSqlQuery find_vitrina(QString tienda);
    virtual QSqlQuery find_cliente(QString name,int t);
    virtual QSqlQuery find_vendedor(QString name,int t);
    virtual QSqlQuery find_mostrador(QString tienda);

};

#endif // REPORTE_H
