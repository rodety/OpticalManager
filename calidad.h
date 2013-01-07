#ifndef CALIDAD_H
#define CALIDAD_H
#include <objetopersistente.h>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file calidad.h
 * @class Calidad
 * @brief Es la clase que representa la Calidad de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "Calidad"
 */

class Calidad: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    Calidad(int _id,QString _nombre);
    Calidad(QString _nombre);
    Calidad();
    Calidad(int _id);

    static QList<Calidad*> listar();
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


#endif // CALIDAD_H
