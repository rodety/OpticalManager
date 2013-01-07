#ifndef REPORTE_VENDEDOR_H
#define REPORTE_VENDEDOR_H
#include "reporte.h"
class reporte_vendedor:public reporte
{
private:
    QString name_vendedor;
public:
    reporte_vendedor();
    void set_file_name();
    void save_reporte_vendedor(QString t_name,QString vend_name);
    void make_querry_vendedor(QString & t_name, QString & vend_name);
    void draw_tabla_final_vendedor();
    QSqlQuery ver_reporte_vendedor(QString t_name,QString vend_name);
};

#endif // REPORTE_VENDEDOR_H
