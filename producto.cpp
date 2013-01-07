#include "producto.h"
Producto::Producto(int _id, QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado)
{
    id=_id;
    codigo=_codigo;
    descripcion=_descripcion;    
    marca=_marca;
    stock=_stock;
    precio_compra=_precio_compra;
    precio_venta=_precio_venta;
    accesorios=_accesorios;
    p_descuento=_p_descuento;
    habilitado=_habilitado;

}

Producto::Producto(QString _codigo,QString _descripcion, Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,QString _accesorios,bool _habilitado)
{
    id=0;
    codigo=_codigo;
    descripcion=_descripcion;    
    marca=_marca;
    stock=_stock;
    precio_compra=_precio_compra;
    precio_venta=_precio_venta;
    accesorios=_accesorios;
    p_descuento=_p_descuento;
    habilitado=_habilitado;
}



Producto::Producto(QString _descripcion,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado)
{
    id=0;
    codigo="";
    descripcion=_descripcion;
    stock=_stock;
    precio_compra=_precio_compra;
    precio_venta=_precio_venta;
    accesorios="";
    p_descuento=_p_descuento;
    habilitado=_habilitado;
}

Producto::Producto(Marca _marca,int _stock,double _precio_compra,double _precio_venta,double _p_descuento,bool _habilitado)
{
    id=0;
    codigo="";
    marca=_marca;
    stock=_stock;
    precio_compra=_precio_compra;
    precio_venta=_precio_venta;
    accesorios="";
    p_descuento=_p_descuento;
    habilitado=_habilitado;
}



Producto::Producto()
{
}








/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

int Producto::getId()
{
    return id;
}

QString Producto::getCodigo()
{
    return codigo;
}

QString Producto::getDescripcion()
{
    return descripcion;
}


Marca Producto::getMarca()
{
    return marca;
}


int Producto::getStock()
{
    return stock;
}

double Producto::getPrecioCompra()
{
    return precio_compra;
}

double Producto::getPrecioVenta()
{
    return precio_venta;
}


QString Producto::getAccesorios()
{
    return accesorios;
}

double Producto::getP_descuento()
{
    return p_descuento;
}

bool Producto::getHabilitado()
{
    return habilitado;
}


void Producto::setId(int _id)
{
    id=_id;
}

void Producto::setCodigo(QString _codigo)
{
    codigo=_codigo;
}

void Producto::setDescripcion(QString _descripcion)
{
    descripcion=_descripcion;
}


void Producto::setMarca(Marca _marca)
{
    marca=_marca;
}


void Producto::setStock(int _stock)
{
    stock=_stock;
}

void Producto::setPrecio_compra(double _precioC)
{
    precio_compra=_precioC;
}

void Producto::setPrecio_venta(double _precioV)
{
    precio_venta=_precioV;
}


void Producto::setAccesorios(QString _accesorios)
{
    accesorios=_accesorios;
}

void Producto::SetP_descuento(double _p_descuento)
{
    p_descuento=_p_descuento;
}

void Producto::SetHabilitado(bool _habilitado)
{
    habilitado=_habilitado;
}






bool Producto::validar(QString texto_a_validar, QString tipo_validacion)
{
    int contador_resultado=0;
    if(tipo_validacion=="numerico_rango" && texto_a_validar.size()>0)
    {
        int contador_puntos=0;
        for(int i=0;i<texto_a_validar.size();i++)
        {
            if(texto_a_validar[i] >= '0' && texto_a_validar[i] <= '9' || texto_a_validar[i]=='-' || texto_a_validar[i]=='.')
            {
                    if(texto_a_validar[i]=='-')
                    {
                        if(i==0)
                            contador_resultado++;
                    }
                    else if(texto_a_validar[i]=='.')
                    {
                        contador_puntos++;
                        if(contador_puntos<2)
                            contador_resultado++;
                    }
                    else
                        contador_resultado++;
            }
        }
        if(contador_resultado==texto_a_validar.size()) return true;
        else return false;
    }
    else if(tipo_validacion=="numerico_precio" && texto_a_validar.size()>0)
    {
        int contador_puntos=0;
        for(int i=0;i<texto_a_validar.size();i++)
        {
            if(texto_a_validar[i] >= '0' && texto_a_validar[i] <= '9' || texto_a_validar[i]=='.')
            {

                    if(texto_a_validar[i]=='.')
                    {
                        contador_puntos++;
                        if(contador_puntos<2)
                            contador_resultado++;
                    }
                    else
                        contador_resultado++;
            }
        }
        if(contador_resultado==texto_a_validar.size()) return true;
        else return false;
    }
    else if(tipo_validacion=="numerico_cantidad" && texto_a_validar.size()>0)
    {
        for(int i=0;i<texto_a_validar.size();i++)
        {
            if(texto_a_validar[i] >= '0' && texto_a_validar[i] <= '9')
            {
                qDebug()<<"si es numero";
                contador_resultado++;
            }
        }
        if(contador_resultado==texto_a_validar.size()) return true;
        else return false;
    }

    else if(tipo_validacion=="alfanumerico" && texto_a_validar.size()>0)
    {
        for(int i=0;i<texto_a_validar.size();i++)
        {
                contador_resultado++;
        }
        if(contador_resultado==texto_a_validar.size()) return true;
        else return false;
    }

    else
    {
        return false;
    }
}
