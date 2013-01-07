#ifndef UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
#define UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H

#include <QDialog>
#include <lentecontacto.h>


namespace Ui {
    class ui_producto_agregar_lente_contacto;
}

class ui_producto_agregar_lente_contacto : public QDialog
{
    Q_OBJECT

public:
    explicit ui_producto_agregar_lente_contacto(QWidget *parent = 0);
    ~ui_producto_agregar_lente_contacto();
    void tipoEditar(LenteContacto  _lente_editar);
private slots:
    void on_boton_cancelar_clicked();

    void on_boton_agregar_clicked();

    void on_marca_x_clicked();

    void on_topolente_x_clicked();

    void on_portencia_x_clicked();

    void on_curvabase_x_clicked();

    void on_diametro_x_clicked();

    void on_tiempouso_x_clicked();

    void on_material_x_clicked();

private:
    Ui::ui_producto_agregar_lente_contacto *ui;    
    LenteContacto Lente_Editar;
    bool editar;

signals:
    void senial();
};

#endif // UI_PRODUCTO_AGREGAR_LENTE_CONTACTO_H
