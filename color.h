#ifndef COLOR_H
#define COLOR_H
#include <objetopersistente.h>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file color.h
 * @class Color
 * @brief Es la clase que representa la La Color de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "Color"
 */

class Color: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
public:
    Color(int _id,QString _nombre);
    Color(QString _nombre);
    Color();
    Color(int _id);

    static QList<Color*> listar();
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

#endif // COLOR_H
