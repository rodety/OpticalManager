#ifndef LUNA_H
#define LUNA_H
#include <QSqlQueryModel>
#include <producto.h>
#include <QDebug>
#include <tratamiento.h>
#include <diametro.h>
#include <QVariant>
#include <QSqlRecord>


/**
 * @author Josue Benjamin Arambide Quispe
 * @file luna.h
 * @class luna
 * @brief Es la clase que representa la luna de los productos en la optica
 */

class Luna: public Producto
{

private:
    int idluna;
    RangoMedida rangomedida;
    TipoLuna tipoluna;
    Calidad calidad;
    Tratamiento tratamiento;
    Diametro diametro;

public:
    Luna(int _id ,QString _descripcion, int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,RangoMedida _rangomedida, TipoLuna _tipoluna,Calidad _calidad,Tratamiento _tratamiento,Diametro _diametro);
    Luna(QString _descripcion,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,RangoMedida _rangomedida,TipoLuna _tipoluna,Calidad _calidad,Tratamiento _tratamiento,Diametro _diametro);
    Luna(int _id);
    Luna();

    void generarParaEditar(int _id);

    RangoMedida getRangoMedida();
    Calidad getCalidad();
    TipoLuna getTipoLuna();
    int getIdLuna();
    Tratamiento getTramiento();
    Diametro getDiametro();

    void setRangoMedida(RangoMedida _tipoluna);
    void setCalidad(Calidad _calidad);
    void setTipoLuna(TipoLuna _tipoluna);
    void setTratamiento(Tratamiento _tratamiento);
    void setDiametro(Diametro _diametro);

    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};



#endif // LUNA_H
