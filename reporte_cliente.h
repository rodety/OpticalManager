#ifndef REPORTE_CLIENTE_H
#define REPORTE_CLIENTE_H
#include  "reporte.h"
class reporte_cliente:public reporte
{    
public:
    reporte_cliente();
    void set_file_name();
    void save_reporte(QString p_apellido,QString s_apellido,QString nombre);
    void make_query_cliente(QString &p_apellido,QString &s_apellido,QString &nombre);
    QSqlQuery view_reporte(QString p_apellido,QString s_apellido,QString nombre);
};

#endif // REPORTE_CLIENTE_H
