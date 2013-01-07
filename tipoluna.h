#ifndef TIPOLUNA_H
#define TIPOLUNA_H
#include <objetopersistente.h>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file TipoLuna.h
 * @class TipoLuna
 * @brief Es la clase que representa la La TipoLuna de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "TipoLuna"
 */

class TipoLuna: public ObjetoPersistente
{
private:
    int id;
    QString nombre;
public:
    TipoLuna(int _id,QString _nombre);
    TipoLuna();
    TipoLuna(int _id);

    TipoLuna(QString _nombre);
    static QList<TipoLuna*> listar();
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
#endif // TIPOLUNA_H
