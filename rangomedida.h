#ifndef RANGOMEDIDA_H
#define RANGOMEDIDA_H
#include <objetopersistente.h>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file rangomedida.h
 * @class RangoMedida
 * @brief Es la clase que representa el RangoMedida de los las lunas de los lentes de la optica
 *  Esta clase cuenta con caracteristicas como id, nombre y descripcion las
 * cuales estan almacenadas en la base de datos como la tabla "RangoMedida"
 */

class RangoMedida: public ObjetoPersistente
{
private:
    int id;
    double valorini;
    double valorfin;
    QString descripcion;
public:
    RangoMedida(int _id,double _valorIni,double valorFin, QString _descripcion);
    RangoMedida(double _valorIni,double valorFin, QString _descripcion);
    RangoMedida();
    RangoMedida(int _id);

    static QList<RangoMedida*> listar();

    int getId();
    QString getdescripcion();
    double getValorInicial();
    double getValorFinal();
    void setId(int _id);
    void setdescripcion(QString _descripcion);
    void setValorIncial(double _valorIncial);
    void setValorFinal(double _valorFinal);

    //bool existente(double _valorini,double _valorfin);

    bool agregar();
    bool actualizar();
    bool eliminar();
};
#endif // RANGOMEDIDA_H
