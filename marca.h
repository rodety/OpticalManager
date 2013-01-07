#ifndef MARCA_H
#define MARCA_H
#include <objetopersistente.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file marca.h
 * @class Marca
 * @brief Es la clase que representa la La Marca de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripcion las
 * cuales estan almacenadas en la base de datos como la tabla "Marca"
 */

class Marca: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
    QString descripcion;
public:
    Marca(int _id,QString _nombre, QString _descripcion );
    Marca(QString _nombre, QString _descripcion );
    Marca();
    Marca(int _id);

    static QList<Marca*> listar();
    static QSqlQueryModel* listarNombres();

    int getId();
    QString getNombre();
    QString getdescripcion();
    void setId(int _id);
    void setNombre(QString _nombre);
    void setdescripcion(QString _descripcion);


    bool existente(QString _nombre);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // MARCA_H
