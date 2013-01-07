#ifndef INDICEREFRACCION_H
#define INDICEREFRACCION_H
#include <objetopersistente.h>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file indicerefraccion.h
 * @class IndiceRefraccion
 * @brief Es la clase que representa la La IndiceRefraccion de los productos en la optica
 *  Esta clase cuenta con caracteristicas como id, Valor y descripsion las
 * cuales estan almacenadas en la base de datos como la tabla "IndiceRefraccion"
 */

class IndiceRefraccion: public ObjetoPersistente
{
private:
    int id;
    QString valor;
public:
    IndiceRefraccion(int _id,QString _valor);
    IndiceRefraccion(QString _valor);
    IndiceRefraccion();
    IndiceRefraccion(int _id);

    static QList<IndiceRefraccion*> listar();
    static QSqlQueryModel* listarNombres();

    int getId();
    QString getValor();
    void setId(int _id);
    void setValor(QString _valor);

    bool existente(QString _valor);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // INDICEREFRACCION_H
