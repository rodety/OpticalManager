#ifndef UI_PRODUCTO_DATOS_H
#define UI_PRODUCTO_DATOS_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <calidad.h>
#include <tipoluna.h>
#include <diametro.h>


namespace Ui {
class ui_producto_datos;
}

class ui_producto_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_producto_datos(QWidget *parent = 0);
    ~ui_producto_datos();    
    
private slots:
    void on_Buscar_clicked();

private:
    Ui::ui_producto_datos *ui;

signals:
    QSqlQueryModel* enviar_resultado(QSqlQueryModel* model);
};

#endif // UI_PRODUCTO_DATOS_H
