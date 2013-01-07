#ifndef TIPODOC_IDENT_H
#define TIPODOC_IDENT_H

#include <objetopersistente.h>

class tipodoc_ident:ObjetoPersistente
{
private:
    QString idTipoDocIdent;
    QString nombre;
    QString size;
public:
    tipodoc_ident();

    QString getIdTipoDocIdent();
    QString getNombre();
    QString getSize();

    void setIdTipoDocIdent(QString);
    void setNombre(QString);
    void setSize(QString);

    bool agregar();
    bool actualizar();
    bool eliminar();

    static QSqlQueryModel* mostrar();
    bool buscar();
};

#endif // TIPODOC_IDENT_H
