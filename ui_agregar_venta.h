#ifndef UI_AGREGAR_VENTA_H
#define UI_AGREGAR_VENTA_H

#include <ui_producto_datos.h>
#include <QDialog>
#include "receta.h"
#include <QSqlQueryModel>
#include <luna.h>
namespace Ui {
class ui_agregar_venta;
}

class ui_agregar_venta : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_agregar_venta(QWidget *parent = 0);
    ~ui_agregar_venta();
    
private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Cancelar_4_clicked();

    void on_pushButton_Cancelar_3_clicked();

    void on_pushButton_Cancelar_7_clicked();

    void on_pushButton_Aceptar_clicked();

    void on_pb_buscar_clicked();

    void on_pb_buscaprod_clicked();

    void on_tv_productos_doubleClicked(const QModelIndex &index);

    void on_pushButton_Aceptar_3_clicked();

private:
    Ui::ui_agregar_venta *ui;
    QSqlQueryModel* model_actual;
    int idluna;
public slots:
    void actualizar_table();
    void recibir_model(QSqlQueryModel*);
signals:
    void senial();
};

#endif // UI_AGREGAR_VENTA_H
