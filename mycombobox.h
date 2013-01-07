#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
#include <QComboBox>
#include <QMap>
#include <forma.h>
#include <calidad.h>
#include <color.h>
#include <forma.h>
#include <marca.h>
#include <rangomedida.h>
#include <tamanio.h>
#include <tipoluna.h>
#include <QIcon>
#include <ui_agregar_nombre.h>
#include <ui_agregar_nomdesc.h>
#include <tratamiento.h>
#include <diametro.h>
#include <tipolente.h>
#include <potencia.h>
#include <curvabase.h>
#include <tiempouso.h>
#include <material.h>



/**
 * @author Josue Benjamin Arambide Quispe
 * @file mycombox.h
 * @class MyCombobox
 * @brief Es la clase combobox modificada para poder hacerlerar lo procesos
 */
class MyComboBox:public QComboBox
{
    Q_OBJECT
private:
    QString tipo;
    QMap<QString,QSqlQueryModel* (*) ()> map_funciones;
    QIcon*  icono_agregar;
    ui_agregar_nomDesc* ventana_agregar_1;
    ui_agregar_nombre* ventana_agregar_2;


public:
    MyComboBox(QWidget* parent=0);
    void IngresarTipo(QString _tipo);


public slots:
    bool Eliminar_Item();
    void Show_Agregar();
    void Actualizar_Items();
};

#endif // MYCOMBOBOX_H
