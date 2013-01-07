#ifndef TIENDA_H
#define TIENDA_H
#include<iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <QMessageBox>
#include <QPrinter>
#include <QPainter>
#include <QImage>
#include <QDate>
#include <QTime>
#include <objetopersistente.h>
#include <QSqlQueryModel>
using namespace std;
class tienda:public ObjetoPersistente
{
    private:
        QString idTienda;
        QString idEmpresa;
        QString alias;
        QString direccion;
        QString telefono;
        QString permisoMunicipal;

    public:
        tienda();
        tienda(QString,QString,QString,QString,QString,QString);

        QString getIdTienda();
        QString getIdEmpresa();
        QString getAlias();
        QString getDireccion();
        QString getTelefono();
        QString getPermisoMunicipal();

        void setIdTienda(QString);
        void setIdEmpresa(QString);
        void setAlias(QString);
        void setDireccion(QString);
        void setTelefono(QString);
        void setPermisoMunicipal(QString);
        bool validar(QString,QString);

        static QSqlQueryModel* mostrar();
        bool agregar();
        bool actualizar();
        bool eliminar();
};

#endif // TIENDA_H
