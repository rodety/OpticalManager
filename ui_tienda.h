#ifndef UI_TIENDA_H
#define UI_TIENDA_H

#include <QWidget>
#include <QTableWidgetItem>
#include <QDebug>
#include <QSqlQuery>
#include <tienda.h>
//#include "ui_vitrina.h"
#include <map>
#include<iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <QMessageBox>
#include "ui_almacen.h"
using namespace std;

namespace Ui {
class ui_tienda;
}

class ui_tienda : public QWidget
{
    Q_OBJECT
private:
    QString idEmpresa;
    QString idTienda;
    QString idVitrina;
    QString idItem;
    QString idItem_tras;
    QString idProducto_tras;
    ui_tienda * ui_tienda_traspaso;
    ui_almacen * ui_almacen_traspaso;
    int actual_nivel;
    int row_traspaso;
    bool caso;
    bool caso_traspaso;

    map<QString,QString> Empresas;
    map<QString,QString> Tiendas;
    map<QString,QString> Vitrinas;
    map<QString,QString> Posiciones;

public:

    QString get_idEmpresa(){return idEmpresa;}
    QString get_idTienda(){return idTienda;}
    QString get_idVitrina(){return idVitrina;}
    QString get_idItem(){return idItem;}
    QString get_idItem_tras(){return idItem_tras;}
    QString get_idProducto_tras(){return idProducto_tras;}
    int get_actual_nivel(){return actual_nivel;}
    int get_row_traspaso(){return row_traspaso;}
    bool get_caso(){return caso;}
    bool get_caso_traspaso(){return caso_traspaso;}
    ui_tienda* get_ui_tienda_traspaso(){return ui_tienda_traspaso;}

    void set_ui_tienda_traspaso(ui_tienda* tmp){ui_tienda_traspaso=tmp;}

    ui_almacen* get_ui_almacen_traspaso(){return ui_almacen_traspaso;}

    void set_ui_almacen_traspaso(ui_almacen* tmp){ui_almacen_traspaso=tmp;}


    void set_idEmpresa(QString tmp){idEmpresa=tmp;}
    void set_idTienda(QString tmp){idTienda=tmp;}
    void set_idVitrina(QString tmp){idVitrina=tmp;}
    void set_idItem(QString tmp){idItem=tmp;}
    void set_idItem_tras(QString tmp){idItem_tras=tmp;}
    void set_idProducto_tras(QString tmp){idProducto_tras=tmp;}
    void set_caso(bool tmp){caso=tmp;}
    void set_caso_traspaso(bool tmp){caso_traspaso=tmp;}
    void set_actual_nivel(int tmp){actual_nivel=tmp;}
    void set_row_traspaso(int tmp){row_traspaso=tmp;}


    void actualizar_combo_empresa();
    void actualizar_combo_tienda(QString);
    void actualizar_combo_vitrina(QString);
    void actualizar_combo_niveles(QString);

    void limpiar_grilla();
    void set_dimension_grilla();
    void actualizar_grilla();
    void habilitar_botones();



public:
    explicit ui_tienda(QWidget *parent = 0);
    ~ui_tienda();
    
private slots:
    void on_pushButton_clicked();

    void on_ver_vitrina_clicked();

    void on_agregar_tienda_clicked();

    void on_comboBox_empresa_currentIndexChanged(const QString &arg1);

    void on_comboBox_tienda_currentIndexChanged(const QString &arg1);

    void on_comboBox_vitrina_currentIndexChanged(const QString &arg1);

    void on_comboBox_niveles_currentIndexChanged(const QString &arg1);

    void on_comboBox_niveles_currentIndexChanged(int index);

    void on_editar_tienda_clicked();

    void on_deshabilitar_tienda_clicked();

    void on_imprimir_tienda_clicked();

    void on_agregar_vitrina_clicked();

    void on_editar_vitrina_clicked();

    void on_deshabilitar_vitrina_clicked();

    void on_imprimir_vitrina_clicked();

    void on_grilla_cellDoubleClicked(int row, int column);

    void on_grilla_itemSelectionChanged();

    void on_pushButton_traspaso_clicked();

    void on_pushButton_aceptar_traspaso_clicked();

    void on_button_traspaso_almacen_clicked();

private:
    Ui::ui_tienda *ui;
};

#endif // UI_TIENDA_H
