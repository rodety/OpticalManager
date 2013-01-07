#include "moduloetiquetar.h"

moduloEtiquetar::moduloEtiquetar()
{
}

QString moduloEtiquetar::getCodigo()
{
    return codigo;
}

QString moduloEtiquetar::getPrecioPublico()
{
    return precioPublico;
}

QString moduloEtiquetar::getPrecioVenta()
{
    return precioVenta;
}

QString moduloEtiquetar::getMarca()
{
    return marca;
}

QString moduloEtiquetar::getUbicacion()
{
    return ubicacion;
}


void moduloEtiquetar::setCodigo(QString tmp)
{
    codigo=tmp;
}

void moduloEtiquetar::setPrecioPublico(QString tmp)
{
    precioPublico=tmp;
}

void moduloEtiquetar::setPrecioVenta(QString tmp)
{
    precioVenta=tmp;
}

void moduloEtiquetar::setMarca(QString tmp)
{
    marca=tmp;
}

void moduloEtiquetar::setUbicacion(QString tmp)
{
    ubicacion=tmp;
}

void moduloEtiquetar::etiquetar()
{

}

void moduloEtiquetar::codigo128()
{



    QString inicio="Ñ";
    QChar bit;
    QString fin="Ó";
    QString salida;

    int suma=0;
    for(int i=0;i<codigo.size();i++)
    {
        suma+=(int(codigo[i].toAscii())-32)*(i+1);
    }
    suma=104+suma;
    suma=suma%103;
    if(suma<95)
        suma+=32;
    else
        suma+=50;
    cout<<suma<<endl;
    bit=suma;
    salida=inicio+codigo+bit+fin;
    cout<<salida.toStdString()<<endl;
}
