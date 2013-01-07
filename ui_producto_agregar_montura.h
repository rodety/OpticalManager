#ifndef UI_PRODUCTO_AGREGAR_MONTURA_H
#define UI_PRODUCTO_AGREGAR_MONTURA_H
#include <montura.h>
#include <QDialog>

namespace Ui {
    class ui_producto_agregar_montura;
}

class ui_producto_agregar_montura : public QDialog
{
    Q_OBJECT

public:
    explicit ui_producto_agregar_montura(QWidget *parent = 0);
    ~ui_producto_agregar_montura();

    void tipoEditar(Montura & montura_editar);

private slots:
    void on_pushButton_cancelar_clicked();


    void on_pushButton_xmarca_clicked();

    void on_pushButton_xtamanio_clicked();

    void on_pushButton_xforma_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_agregar_clicked();

private:
    Ui::ui_producto_agregar_montura *ui;
    Montura Montura_Editar;
    bool editar;

signals:
    void senial();
};

#endif // UI_PRODUCTO_AGREGAR_MONTURA_H
