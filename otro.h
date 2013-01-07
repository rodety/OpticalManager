#ifndef OTRO_H
#define OTRO_H
#include <QString>
#include <producto.h>
#include <QSqlRecord>
#include <QVariant>

class Otro:public Producto
{
private:
    int idOtro;
public:
    Otro(int _idOtro,QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado);
    Otro(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado);
    Otro();
    Otro(int _id);

    void generarParaEditar(int _id);

    int getIdOtro();

    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};


#endif // OTRO_H
