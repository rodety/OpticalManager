#ifndef UI_PRODUCTO_AGREGAR_OTRO_H
#define UI_PRODUCTO_AGREGAR_OTRO_H

#include <QDialog>
#include <otro.h>
#include <QMessageBox>

namespace Ui {
    class ui_producto_agregar_otro;
}

class ui_producto_agregar_otro : public QDialog
{
    Q_OBJECT

public:
    explicit ui_producto_agregar_otro(QWidget *parent = 0);
    ~ui_producto_agregar_otro();

    void tipoEditar(Otro & otro_editar);

private slots:
    void on_boton_agregar_clicked();

    void on_pushButton_x_marca_clicked();

    void on_boton_cancelar_clicked();

private:
    Ui::ui_producto_agregar_otro *ui;
    QMessageBox* msgBox;
    Otro Otro_Editar;
    bool editar;

signals:
    void senial();
};

#endif // UI_PRODUCTO_AGREGAR_OTRO_H
