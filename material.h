#ifndef MATERIAL_H
#define MATERIAL_H
#include <objetopersistente.h>

class Material:public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    Material(int _id,QString _nombre);
    Material(QString _nombre);
    Material();
    Material(int _id);

    static QList<Material*> listar();
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

#endif // MATERIAL_H
