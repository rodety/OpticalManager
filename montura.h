#ifndef MONTURA_H
#define MONTURA_H
#include <producto.h>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QVariant>

/**
 * @author Josue Benjamin Arambide Quispe
 * @file montura.h
 * @class Montura
 * @brief Es la clase que representa la Montura de los productos en la optica
 */

class Montura: public Producto
{

private:
    int idmontura;
    Color color;
    Forma forma;
    Calidad calidad;
    Tamanio tamanio;

public:
    Montura(int _idmontura,QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado,Color _color,Forma _forma, Calidad _calidad, Tamanio _tamanio);
    Montura();
    Montura(int _id);

    void generarParaEditar(int _id);

    Color getColor();
    Forma getForma();
    Calidad getCalidad();
    Tamanio getTamanio();
    int getIdMontura();

    void setColor(Color _color);
    void setForma(Forma _forma);
    void setCalidad(Calidad _calidad);
    void setTamanio(Tamanio _tamanio);

    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // MONTURA_H
