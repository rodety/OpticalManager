#ifndef VENTA_H
#define VENTA_H

#include <objetopersistente.h>
#include "ui_agregar_venta.h"
#include "receta.h"
#include <QSqlQueryModel>

class venta:ObjetoPersistente
{
private:
    QString idVenta;
public:
    venta();

    QString getIdVenta();

    void setIdVenta(QString);

    bool agregar();
    bool eliminar();
    bool actualizar();
    bool buscar();
    static QSqlQueryModel* mostrar();
};

#endif // VENTA_H
