#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>
#include <objetopersistente.h>
#include <color.h>
#include <tamanio.h>
#include <calidad.h>
#include <forma.h>
#include <marca.h>
#include <rangomedida.h>
#include <tipoluna.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file producto.h
 * @class Producto
 * @brief Es la clase que generaliza los productos de la óptica
 * Incluye sus propias caracteristicas q son id, codigo, descripcion, nombre y marca
 * tambien cuenta con las funciones del objeto persistente.
 */

class Producto: public ObjetoPersistente
{

protected:
    int id;
    QString codigo;
    QString descripcion;    
    Marca marca;
    int stock;
    double precio_compra;
    double precio_venta;
    double p_descuento;
    QString accesorios;    
    bool habilitado;

public:
    Producto(int _id, QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado);
    Producto(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado);
    Producto();
    Producto(QString _descripcion,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado);    
    Producto(Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado);
    int getId();
    QString getCodigo();
    QString getDescripcion();
    QString getNombre();
    Marca getMarca();
    int getStock();
    double getPrecioCompra();
    double getPrecioVenta();
    double getP_descuento();
    QString getAccesorios();

    bool getHabilitado();


    void setId(int _id);
    void setCodigo(QString _codigo);
    void setDescripcion(QString _descripcion);
    void setNombre(QString _nombre);
    void setMarca(Marca _marca);
    void setStock(int _stock);
    void setPrecio_compra(double _precio);
    void setPrecio_venta(double _precio);
    void SetP_descuento(double _p_descuento);
    void setAccesorios(QString _accesorios);    
    void SetHabilitado(bool _habilitado);

    static bool validar(QString texto_a_validad, QString tipo_validacion);

};

#endif // PRODUCTO_H
