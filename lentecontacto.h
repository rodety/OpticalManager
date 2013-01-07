#ifndef LENTECONTACTO_H
#define LENTECONTACTO_H
#include <marca.h>
#include <potencia.h>
#include <curvabase.h>
#include <diametro.h>
#include <tiempouso.h>
#include <material.h>
#include <tipolente.h>
#include <objetopersistente.h>
#include <producto.h>
#include <QSqlRecord>
#include <QVariant>

class LenteContacto: public Producto
{
private:
    int idLenteContacto;
    Potencia potencia;
    CurvaBase curca_base;
    Diametro diametro;
    TiempoUso tiempo_uso;
    Material material;
    TipoLente tipo_lente;
    QString tinte_visibilidad;
    QString contenido_acuoso;
    QString disenio;
    QString rango_k;

public:
    LenteContacto(int _id ,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,Marca _marca,QString _tintev,QString _cacuoso, QString _disenio,QString _rangok,Potencia _potencia,CurvaBase _curvabase, Diametro _diametro, TiempoUso _tiempouso,Material _material,TipoLente _tipolente);
    LenteContacto(int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado,Marca _marca,QString _tintev,QString _cacuoso, QString _disenio,QString _rangok,Potencia _potencia,CurvaBase _curvabase, Diametro _diametro, TiempoUso _tiempouso,Material _material,TipoLente _tipolente);
    LenteContacto(int _id);
    LenteContacto();

    void generarParaEditar(int _id);

    Potencia getPotencia();
    CurvaBase getCurvaBase();
    Diametro getDiametro();
    TiempoUso getTiempoUso();
    Material getMaterial();
    TipoLente getTipoLente();
    QString getTinteVisibilidad();
    QString getContenidoAcuoso();
    QString getDisenio();
    QString getRangoK();


    void setPotencia(Potencia _potencia);
    void setCurvaBase(CurvaBase _curvabase);
    void setDiametro(Diametro _diametro);
    void setTiempoUso(TiempoUso _tiempouso);
    void setMaterial(Material _material);
    void setTipoLente(TipoLente _tipolente);
    void setTinteVisibilidad( QString _tinte);
    void setContenidoAcuoso(QString _ConAcuo);
    void setDisenio(QString _disenio);
    void setRangoK(QString _rangok);


    static QSqlQueryModel* buscar(QString _item);

    bool agregar();
    bool actualizar();
    bool eliminar();
};

#endif // LENTECONTACTO_H
