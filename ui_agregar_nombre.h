#ifndef UI_AGREGAR_NOMBRE_H
#define UI_AGREGAR_NOMBRE_H
#include <forma.h>
#include <calidad.h>
#include <color.h>
#include <forma.h>
#include <marca.h>
#include <rangomedida.h>
#include <tamanio.h>
#include <tipoluna.h>
#include <QIcon>
#include <QDialog>
#include <tratamiento.h>
#include <diametro.h>
#include <tipolente.h>
#include <potencia.h>
#include <curvabase.h>
#include <tiempouso.h>
#include <material.h>


namespace Ui {
    class ui_agregar_nombre;
}

class ui_agregar_nombre : public QDialog
{
    Q_OBJECT

public:
    explicit ui_agregar_nombre(QWidget *parent = 0);
    ~ui_agregar_nombre();
    void recibir_tipo(QString _tipo);
private slots:
    void on_pushButton_cancelar_clicked();
    void on_pushButton_guardar_clicked();

signals:

    void envia_senial(int);

private:
    Ui::ui_agregar_nombre *ui;
    QString tipo;
};

#endif // UI_AGREGAR_NOMBRE_H
