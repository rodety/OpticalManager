#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <calidad.h>
#include <QDebug>
#include <QMainWindow>
#include <color.h>
#include <objetopersistente.h>
#include <ui_producto.h>
#include <ui_tienda.h>
#include <ui_empresa.h>
#include <ui_cliente.h>
#include "ui_almacen.h"
#include "moduleinterface.h"
#include <vector>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT   
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_actionProducto_triggered();
    void on_actionUsuario_triggered();
    void on_actionCliente_triggered();
    void on_actionBuscar_triggered();

    void aplicarPermisos();
    void on_actionTiendas_triggered();

    void on_actionEmpresas_triggered();

    void on_actionAlmacen_triggered();

    void on_actionNuevo_triggered();

    void on_actionGuardar_triggered();

    void on_actionEditar_triggered();
    void enableEdit();
    void on_actionCancelar_triggered();

    void on_actionReportes_triggered();

    void on_actionVentas_triggered();

    void on_actionProveedores_triggered();

    void on_actionCompras_triggered();

private:
    Ui::MainWindow *ui;
    ModuleInterface* ActiveModule;
    std::vector<QAction*> modulos;
};

#endif // MAINWINDOW_H
