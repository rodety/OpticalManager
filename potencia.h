#ifndef POTENCIA_H
#define POTENCIA_H
#include <objetopersistente.h>

class Potencia: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    Potencia(int _id,QString _nombre);
    Potencia(QString _nombre);
    Potencia();
    Potencia(int _id);

    static QList<Potencia*> listar();
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

#endif // POTENCIA_H
