#ifndef REPORTE_TIENDA_H
#define REPORTE_TIENDA_H
#include "reporte.h"
class reporte_tienda:public reporte
{
public:
    reporte_tienda();
    void set_file_name();
    void save_reporte(QString alias,int no_tienda);
    void make_query_tienda(QString alias,int no_tienda);
    QSqlQuery view_reporte(QString alias,int no_tienda);
};

#endif // REPORTE_TIENDA_H
