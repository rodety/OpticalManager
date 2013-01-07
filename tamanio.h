#ifndef TAMANIO_H
#define TAMANIO_H
#include <objetopersistente.h>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file tamanio.h
 * @class Tamanio
 * @brief Es la clase que representa la La Tamanio de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "Tamanio"
 */

class Tamanio: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    Tamanio(int _id,QString _nombre);
    Tamanio(QString _nombre);
    Tamanio();
    Tamanio(int _id);

    static QList<Tamanio*> listar();
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

#endif // TAMANIO_H
