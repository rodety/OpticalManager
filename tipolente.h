#ifndef TIPOLENTE_H
#define TIPOLENTE_H
#include <objetopersistente.h>

class TipoLente: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    TipoLente(int _id,QString _nombre);
    TipoLente(QString _nombre);
    TipoLente();
    TipoLente(int _id);

    static QList<TipoLente*> listar();
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

#endif // TIPOLENTE_H
