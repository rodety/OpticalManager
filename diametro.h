#ifndef DIAMETRO_H
#define DIAMETRO_H
#include <objetopersistente.h>
#include <QString>


class Diametro
{
private:
    int id;
    QString nombre;
public:
    Diametro(int _id,QString _nombre);
    Diametro(QString _nombre);
    Diametro();
    Diametro(int _id);

    static QList<Diametro*> listar();
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

#endif // DIAMETRO_H
