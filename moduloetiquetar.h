#ifndef MODULOETIQUETAR_H
#define MODULOETIQUETAR_H

#include <QString>

#include <iostream>
using namespace std;

class moduloEtiquetar
{
private:
    QString codigo;
    QString precioPublico;
    QString precioVenta;
    QString marca;
    QString ubicacion;
public:
    moduloEtiquetar();

    QString getCodigo();
    QString getPrecioPublico();
    QString getPrecioVenta();
    QString getMarca();
    QString getUbicacion();

    void setCodigo(QString);
    void setPrecioPublico(QString);
    void setPrecioVenta(QString);
    void setMarca(QString);
    void setUbicacion(QString);

    void etiquetar();

    void codigo128();
};

#endif // MODULOETIQUETAR_H
