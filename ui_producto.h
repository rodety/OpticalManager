#ifndef UI_PRODUCTO_H
#define UI_PRODUCTO_H
#include <QSqlQueryModel>
#include <luna.h>
#include <montura.h>
#include <QTreeWidgetItem>
#include <QWidget>
#include <ui_producto_agregar_luna.h>
#include <ui_producto_agregar_montura.h>
#include <ui_producto_agregar_otro.h>
#include <ui_producto_datos.h>
#include <QMessageBox>
#include <otro.h>
#include <lentecontacto.h>
#include <ui_producto_agregar_lente_contacto.h>


namespace Ui {
class ui_producto;
}

class ui_producto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_producto(QWidget *parent = 0);
    ~ui_producto();
    
private slots:

    void on_pushButton_aditar_luna_clicked();

    void on_pushButton_eliminar_luna_clicked();

    void on_pushButton_agregar_clicked();

    void on_pushButton_busqueda_barra_clicked();

    void on_pushButton_busqueda_avanzada_clicked();

    void on_Tipo_poroducto_combo_activated(int index);

private:
    Ui::ui_producto *ui;

    QVector<QSqlQueryModel* (*) (QString)> vec_funciones;

    int posicion;

    ui_producto_datos* ventana_busqueda_avansada;

    QSqlQueryModel* model_actual;//puntero al model del de la consulta actual

 public slots:
    void cambiar_model(QSqlQueryModel* model);

    void actualizar_view();
};

#endif // UI_PRODUCTO_H
