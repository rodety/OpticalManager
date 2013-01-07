#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <montura.h>
#include "modulousuarios.h"
#include <luna.h>
#include "sesion.h"
#include "ui_venta.h"
#include "ui_reporte.h"
#include "ui_cliente.h"
#include "ui_proveedores.h"
#include "compras.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->actionEditar->setEnabled(false);
    ui->actionGuardar->setEnabled(false);
    ui->actionCancelar->setEnabled(false);
    ui->actionBuscar->setEnabled(false);
    ui->actionNuevo->setEnabled(false);

    modulos.push_back(ui->actionProducto);
    modulos.push_back(ui->actionUsuario);
    modulos.push_back(ui->actionCliente);
    modulos.push_back(ui->actionEmpresas);
    modulos.push_back(ui->actionTiendas);
    modulos.push_back(ui->actionAlmacen);
    modulos.push_back(ui->actionProveedores);
    modulos.push_back(ui->actionCompras);
    modulos.push_back(ui->actionVentas);
    modulos.push_back(ui->actionReportes);
    for(size_t i = 0; i<modulos.size();i++)
      modulos[i]->setEnabled(false);
    aplicarPermisos();

}

void MainWindow::aplicarPermisos()
{
  Sesion * s = Sesion::getSesion();
  std::map<int,bool> v ;
  v = s->get_Permisos();
  std::map<int,bool>::iterator it = v.begin();
  if(!v.size())
  {
    QMessageBox::warning(0,"Error de Permisos","No se definieron permisos para este usuario",0,0);
    return;
  }
  for(;it!=v.end();it++)
  {
    modulos[(*it).first-1]->setEnabled((*it).second);
  }

}

MainWindow::~MainWindow()
{
  delete ui;
  delete ActiveModule;
}

void MainWindow::on_actionProducto_triggered()
{
    ui_producto* produc_fom;
    produc_fom = new ui_producto;
    setCentralWidget(produc_fom);
    //produc_fom->showMaximized();
}

void MainWindow::on_actionUsuario_triggered()
{
    /*UI_USER *USER_FORM;
    USER_FORM = new UI_USER;
    setCentralWidget(USER_FORM);
    USER_FORM->showMaximized();*/
  ActiveModule = new ModuloUsuarios(this);
  this->setCentralWidget(ActiveModule);
  ui->actionEditar->setEnabled(false);
  ui->actionGuardar->setEnabled(false);
  ui->actionCancelar->setEnabled(false);
  ui->actionBuscar->setEnabled(true);
  ui->actionNuevo->setEnabled(true);
  connect(ActiveModule,SIGNAL(rowSelected()),this,SLOT(enableEdit()));
  //ActiveModule->showMaximized();
}

void MainWindow::on_actionCliente_triggered()
{
    ui_cliente* cliente_form;
    cliente_form=new ui_cliente;
    setCentralWidget(cliente_form);
}

void MainWindow::on_actionBuscar_triggered()
{
  //QDialog::accept()
    ActiveModule->Buscar();
}

void MainWindow::on_actionTiendas_triggered()
{
    ui_tienda* tienda_form;
    tienda_form=new ui_tienda;
    setCentralWidget(tienda_form);
    //tienda_form->showMaximized();
}

void MainWindow::on_actionEmpresas_triggered()
{
    ui_empresa* empresa_form;
    empresa_form=new ui_empresa;
    setCentralWidget(empresa_form);
    //empresa_form->showMaximized();
}

void MainWindow::on_actionAlmacen_triggered()
{
    ui_almacen* almacen_form;
    almacen_form = new ui_almacen;
    setCentralWidget(almacen_form);
}

void MainWindow::on_actionNuevo_triggered()
{
  ui->actionBuscar->setEnabled(false);
  ui->actionNuevo->setEnabled(false);
  ui->actionEditar->setEnabled(false);
  ui->actionGuardar->setEnabled(true);
  ui->actionCancelar->setEnabled(true);
    ActiveModule->Agregar();
}

void MainWindow::on_actionGuardar_triggered()
{
  ui->actionEditar->setEnabled(false);
  ui->actionGuardar->setEnabled(false);
  ui->actionCancelar->setEnabled(false);
  ui->actionBuscar->setEnabled(true);
  ui->actionNuevo->setEnabled(true);

    ActiveModule->Guardar();
}

void MainWindow::on_actionEditar_triggered()
{
  ui->actionBuscar->setEnabled(false);
  ui->actionNuevo->setEnabled(false);
  ui->actionEditar->setEnabled(false);
  ui->actionGuardar->setEnabled(true);
  ui->actionCancelar->setEnabled(true);
  ActiveModule->Editar();
}

void MainWindow::enableEdit()
{
  ui->actionEditar->setEnabled(true);
}

void MainWindow::on_actionCancelar_triggered()
{
  ActiveModule->Cancelar();
  ui->actionBuscar->setEnabled(true);
  ui->actionNuevo->setEnabled(true);
  ui->actionEditar->setEnabled(true);
  ui->actionGuardar->setEnabled(false);
  ui->actionCancelar->setEnabled(false);
}

void MainWindow::on_actionReportes_triggered()
{
  ui_reporte* reporte_fom;
  reporte_fom = new ui_reporte;
  setCentralWidget(reporte_fom);
}

void MainWindow::on_actionVentas_triggered()
{
  ui_venta* venta_form;
    venta_form=new ui_venta;
    setCentralWidget(venta_form);
    venta_form->showMaximized();
}

void MainWindow::on_actionProveedores_triggered()
{
    ui_proveedores* c = new ui_proveedores;
    setCentralWidget(c);
}

void MainWindow::on_actionCompras_triggered()
{
    compras* c = new compras;
    setCentralWidget(c);
}
