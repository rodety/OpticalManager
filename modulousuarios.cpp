#include "modulousuarios.h"
#include "ui_usuario_datos.h"
#include "ui_buscarusuario.h"
#include <QDataWidgetMapper>
#include <QStringListModel>
#include <QAbstractAnimation>
#include <QItemDelegate>

#include "sesion.h"
#include "comboboxdelegate.h"
#include <QDebug>
#include <QMessageBox>

ModuloUsuarios::ModuloUsuarios(QWidget *parent) :
  ModuleInterface(parent,new ui_usuario_datos)
{
  Ui::ui_usuario_datos * data_ui = (((ui_usuario_datos*)detalles_tab)->getUI());
  connect(data_ui->pB_cambiarPass,SIGNAL(clicked()),SLOT(CambiarPass()));
  relTableModel->setTable("colaborador");
  relTableModel->setHeaderData(1,Qt::Horizontal,"Nombres");
  relTableModel->setHeaderData(2,Qt::Horizontal,"Apellido Paterno");
  relTableModel->setHeaderData(3,Qt::Horizontal,"Apellido Materno");
  relTableModel->setRelation(4,QSqlRelation("tipo_colaborador","idtipo_colaborador","nombre"));
  relTableModel->setHeaderData(4,Qt::Horizontal,"Tipo Colaborador");
  relTableModel->setRelation(5,QSqlRelation("tienda","idtienda","alias"));
  relTableModel->setHeaderData(5,Qt::Horizontal,"Tienda");
  relTableModel->setHeaderData(6,Qt::Horizontal,"Nombre Usuario");
  relTableModel->setRelation(7,QSqlRelation("SiNo","id","value"));
  relTableModel->setHeaderData(7,Qt::Horizontal,"Habilitado");
  relTableModel->setRelation(8,QSqlRelation("SiNo","id","value"));
  relTableModel->setHeaderData(8,Qt::Horizontal,"Cambiar Pass.");
  relTableModel->setRelation(9,QSqlRelation("tipodoc_ident","idtipodoc_ident","nombre"));
  relTableModel->setHeaderData(9,Qt::Horizontal,"Tipo D.I.");
  relTableModel->setHeaderData(10,Qt::Horizontal,"Nro Doc.");
  relTableModel->setHeaderData(11,Qt::Horizontal,"Direción");
  relTableModel->setHeaderData(12,Qt::Horizontal,"Fecha Nac.");
  relTableModel->setHeaderData(13,Qt::Horizontal,"Telefono");
  relTableModel->setHeaderData(14,Qt::Horizontal,"Telf. Fam.");
  relTableModel->setHeaderData(15,Qt::Horizontal,"Celular");
  relTableModel->setHeaderData(16,Qt::Horizontal,"Observaciones");

  QSqlTableModel *relationModel = relTableModel->relationModel(4);
  data_ui->cB_tipoCol->setModel(relationModel);
  data_ui->cB_tipoCol->setModelColumn(relationModel->fieldIndex("nombre"));
  relationModel = relTableModel->relationModel(5);
  data_ui->cb_tienda->setModel(relationModel);
  data_ui->cb_tienda->setModelColumn(relationModel->fieldIndex("alias"));
  relationModel = relTableModel->relationModel(9);
  data_ui->cB_tDoc->setModel(relationModel);
  data_ui->cB_tDoc->setModelColumn(relationModel->fieldIndex("nombre"));

  mapper->setModel(relTableModel);
  mapper->setItemDelegate(new QSqlRelationalDelegate);
  mapper->addMapping(data_ui->le_nombre,1);
  mapper->addMapping(data_ui->le_pApellido,2);
  mapper->addMapping(data_ui->le_sApellido,3);
  mapper->addMapping(data_ui->cB_tipoCol,4);
  mapper->addMapping(data_ui->cb_tienda,5);
  mapper->addMapping(data_ui->le_Usuario,6);
  mapper->addMapping(data_ui->checkBox_habilitado,7);
  mapper->addMapping(data_ui->cB_tDoc,9);
  mapper->addMapping(data_ui->le_numDoc,10);
  mapper->addMapping(data_ui->le_direccion,11);
  mapper->addMapping(data_ui->de_fechaNac,12);
  mapper->addMapping(data_ui->le_telf,13);
  mapper->addMapping(data_ui->lE_telfFam,14);
  mapper->addMapping(data_ui->le_cell,15);
  mapper->addMapping(data_ui->tE_obs,16);

  data_ui->tableView_permisos->setItemDelegateForColumn(3,new QSqlRelationalDelegate);
  data_ui->tableView_permisos->setItemDelegateForColumn(2,new NoEditItemDelegate);
  ConfigPermisosModelView();
  relTableModel->select();
  if(relTableModel->lastError().isValid())
    QMessageBox::critical(this,"Error",relTableModel->lastError().text(),0,0);
  ui->list_tableView->setModel(relTableModel);
  QItemSelectionModel * sm = ui->list_tableView->selectionModel();
  connect(sm,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(selectionChangedHandle(QModelIndex,QModelIndex)));
  ui->list_tableView->hideColumn(0);
  ui->list_tableView->hideColumn(17);
}

void ModuloUsuarios::ConfigPermisosModelView()
{
  permisosModel = new QSqlRelationalTableModel;
  permisosModel->setTable("sys_acceso");
  permisosModel->setRelation(2,QSqlRelation("sys_modulos","id","Nombre"));
  permisosModel->setHeaderData(2,Qt::Horizontal,"Modulo");
  permisosModel->setRelation(3,QSqlRelation("SiNo","id","value"));
  permisosModel->setHeaderData(3,Qt::Horizontal,"Acceso");
  permisosModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

void ModuloUsuarios::mostrar(QSqlRecord rec)
{
  permisosModel->setFilter("idcolaborador="+rec.value("idcolaborador").toString());
  permisosModel->setSort(1,Qt::AscendingOrder);
  permisosModel->select();
  Ui::ui_usuario_datos * data_ui = ((ui_usuario_datos*)detalles_tab)->getUI();
  data_ui->tableView_permisos->setModel(permisosModel);
  data_ui->tableView_permisos->hideColumn(0);
  data_ui->tableView_permisos->hideColumn(1);
  data_ui->tableView_permisos->hideColumn(4);
}

void ModuloUsuarios::Buscar()
{
  QItemSelectionModel * sm = ui->list_tableView->selectionModel();
  disconnect(sm,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(selectionChangedHandle(QModelIndex,QModelIndex)));
  ui_BuscarUsuario* b = new ui_BuscarUsuario;
  QDialog* dialogBuscar = makeBusquedaDialog(b);
  int result = dialogBuscar->exec();
  if(result == QDialog::Rejected)
    return;
  QString query = "nombre_usuario like '%%1%'"
      "and nombres like '%%2%' "
      "and primer_apellido like '%%3%' "
      "and nro_doc like '%%4%'";
  query = query.arg(b->ui->le_nick->text())
      .arg(b->ui->le_nombre->text())
      .arg(b->ui->le_apellido->text())
      .arg(b->ui->le_dni->text());
  relTableModel->setFilter(query);
  relTableModel->select();
  if(relTableModel->lastError().isValid())
    QMessageBox::critical(this,"Error",relTableModel->lastError().text(),0,0);
  ui->list_tableView->setModel(relTableModel);
  sm = ui->list_tableView->selectionModel();
  connect(sm,SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),this,SLOT(selectionChangedHandle(QModelIndex,QModelIndex)));
  ui->list_tableView->hideColumn(0);
  ui->list_tableView->hideColumn(17);
  delete dialogBuscar;
}

void ModuloUsuarios::Guardar()
{
  mapper->submit();
  relTableModel->submitAll();
  if(relTableModel->lastError().isValid())
  {
    QMessageBox::warning(0,"Error Base de Datos",this->relTableModel->lastError().text(),0,0);
    return;
  }
  int id = relTableModel->query().lastInsertId().toInt();
  if(id)
  {
    int rc = permisosModel->rowCount();
    for(int i = 0; i<rc;i++)
      permisosModel->setData(permisosModel->index(i,0),QVariant(id));
      ui->Module_tabWidget->setCurrentIndex(0);
  }
    permisosModel->submitAll();
    if(permisosModel->lastError().isValid())
    {
      QMessageBox::warning(0,"Error Base de Datos",this->permisosModel->lastError().text(),0,0);
      return;
    }
  detalles_tab->setEnabled(false);
  ui->Module_tabWidget->setTabEnabled(0,true);

}

void ModuloUsuarios::agregarPermisos()
{
  ConfigPermisosModelView();
  Ui::ui_usuario_datos * data_ui = ((ui_usuario_datos*)detalles_tab)->getUI();
  int idMod, id = Sesion::getSesion()->get_Usuario()->get_id();
  QSqlQuery q("select * from sys_modulos");
  q.exec();
  while(q.next())
  {
        idMod = q.record().value(0).toInt();
        QSqlRecord rec;
        createPermisoRec(id,idMod,rec);
        permisosModel->insertRecord(-1,rec);
  }

  data_ui->tableView_permisos->setModel(permisosModel);

  data_ui->tableView_permisos->hideColumn(0);
  data_ui->tableView_permisos->hideColumn(1);
  data_ui->tableView_permisos->hideColumn(4);
}

void ModuloUsuarios::createPermisoRec(int & idusr, int & idMod,QSqlRecord & rcd)
{
  QSqlField f1("idcolaborador", QVariant::Int);
  QSqlField f2("id_sys_modulo", QVariant::Int);
  QSqlField f3("id_modulo", QVariant::Int);
  QSqlField f4("acceso",QVariant::Int);
  QSqlField f5("fecha",QVariant::DateTime);

  f1.setValue(QVariant(idusr));
  f2.setValue(QVariant(idMod));
  f3.setValue(QVariant(idMod));
  f4.setValue(QVariant(0));
  f5.clear();

  rcd.append(f1);
  rcd.append(f2);
  rcd.append(f3);
  rcd.append(f4);
  rcd.append(f5);
}

void ModuloUsuarios::Agregar()
{
  if(!ui->list_tableView->model())
  {
    relTableModel->setFilter("idcolaborador=last_insert_id()");
    relTableModel->select();
    if(relTableModel->lastError().isValid())
      QMessageBox::critical(this,"Error",relTableModel->lastError().text(),0,0);
    ui->list_tableView->setModel(relTableModel);
  }
  int i = relTableModel->rowCount();
  relTableModel->insertRow(i);
  mapper->setCurrentIndex(i);
  verDetalles();
  detalles_tab->setEnabled(true);
  ui->Module_tabWidget->setTabEnabled(0,false);
  //permisosModel->setFilter("idcolaborador = -1");
  //permisosModel->select();
  agregarPermisos();
}

void ModuloUsuarios::Editar()
{
  verDetalles();
  detalles_tab->setEnabled(true);
  ui->Module_tabWidget->setTabEnabled(0,false);
}

void ModuloUsuarios::Cancelar()
{
  detalles_tab->setEnabled(false);
  ui->Module_tabWidget->setTabEnabled(0,true);
  ui->Module_tabWidget->setTabEnabled(1,false);
  ui->Module_tabWidget->setCurrentIndex(0);
  mapper->revert();
  relTableModel->revertAll();
}

void ModuloUsuarios::CambiarPass()
{
  int resp = QMessageBox::question(this,"Cambio de Contraseña","¿Desea que el usuario actual cambie su contraseña en el siguiente inicio de sesion?",QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok);
  if(resp==QMessageBox::Ok)
  {
    int id = relTableModel->record(mapper->currentIndex()).value("idcolaborador").toInt();
    QSqlQuery query("call resetPass("+QString::number(id)+")");
    bool ok = query.exec();
    if(!ok)
    {
      QMessageBox::warning(0,"SQL error",query.lastError().text(),0,0);
    }
  }
  else if(resp==QMessageBox::Cancel)
  {
  }
}
