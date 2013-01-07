#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <objetopersistente.h>

class Tratamiento:ObjetoPersistente
{

private:
    int id;
    QString nombre;
public:
    Tratamiento();
    Tratamiento(int _id,QString _nombre);
    Tratamiento(QString _nombre);
    Tratamiento(int _id);

    static QList<Tratamiento*> listar();
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

#endif // TRATAMIENTO_H
