#ifndef CURVABASE_H
#define CURVABASE_H
#include <objetopersistente.h>

class CurvaBase: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    CurvaBase(int _id,QString _nombre);
    CurvaBase(QString _nombre);
    CurvaBase();
    CurvaBase(int _id);

    static QList<CurvaBase*> listar();
    static QSqlQueryModel* listarNombres();

    int getId();
    QString getNombre();
    void setId(int _id);
    void setNombre(QString _nombre);

    bool existente(QString _nombre);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // CURVABASE_H
