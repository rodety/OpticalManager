#ifndef CLIENTE_H
#define CLIENTE_H

#include <objetopersistente.h>

class cliente:ObjetoPersistente
{
private:
    QString idCliente;
public:
    cliente();

    QString getIdCliente();

    void setIdCliente(QString);

    bool agregar();
    bool actualizar();
    bool eliminar();

    static QSqlQueryModel* mostrar();
    bool buscar();
};

#endif // CLIENTE_H
