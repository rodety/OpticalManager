#ifndef ITEM_POSICION_H
#define ITEM_POSICION_H
#include "objetopersistente.h"

class item_posicion
{
private:
    QString idItem_Posicion;
    QString idProducto;
    QString  idVitrina;
    int fila;
    int columna;
    int nivel;
public:
    item_posicion();
    item_posicion(QString,QString,QString,int,int,int);

    QString get_idItem_Posicion(){return idItem_Posicion;}
    QString get_idProducto(){return idProducto;}
    QString get_idVitrina(){return idVitrina;}
    int get_fila(){return fila;}
    int get_columna(){return columna;}
    int get_nivel(){return nivel;}

    void set_idItem_Posicion(QString tmp){idItem_Posicion=tmp;}
    void set_idProducto(QString tmp){idProducto=tmp;}
    void set_idVitrina(QString tmp){idVitrina=tmp;}
    void set_fila(int tmp){fila=tmp;}
    void set_columna(int tmp){columna=tmp;}
    void set_nivel(int tmp){nivel=tmp;}

    bool agregar();
    bool actualizar();
    bool eliminar();


};

#endif // ITEM_POSICION_H
