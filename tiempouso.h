#ifndef TIEMPOUSO_H
#define TIEMPOUSO_H
#include <objetopersistente.h>

class TiempoUso:public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    TiempoUso(int _id,QString _nombre);
    TiempoUso(QString _nombre);
    TiempoUso();
    TiempoUso(int _id);

    static QList<TiempoUso*> listar();
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

#endif // TIEMPOUSO_H
