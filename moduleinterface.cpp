#include "moduleinterface.h"

ModuleInterface::ModuleInterface(QWidget *parent,QWidget* detalles):
  QWidget(parent),
  ui(new Ui::ModuleInterface),
  detalles_tab(detalles)
{
  ui->setupUi(this);
  ui->Module_tabWidget->addTab(detalles,"Detalles");
  detalles->setEnabled(false);
  ui->Module_tabWidget->setTabEnabled(1,false);
  relTableModel = new QSqlRelationalTableModel;
  mapper = new QDataWidgetMapper(this);
  mapper->setItemDelegate(new QSqlRelationalDelegate);
  mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
  relTableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
  ui->list_tableView->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
  ui->list_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void ModuleInterface::selectionChangedHandle(QModelIndex cur,QModelIndex )
{
  ui->Module_tabWidget->setTabEnabled(1,true);
  detalles_tab->setEnabled(false);
  mapper->setCurrentIndex(cur.row());
  emit rowSelected();
}

QDialog* ModuleInterface::makeBusquedaDialog(QWidget* form)
{
  QDialog* dialogBuscar =  new QDialog(this);
  QDialogButtonBox* buttons= new QDialogButtonBox();
  buttons->addButton("Buscar",QDialogButtonBox::AcceptRole);
  buttons->addButton("Cancelar",QDialogButtonBox::RejectRole);
  connect(buttons, SIGNAL(accepted()), dialogBuscar, SLOT(accept()));
  connect(buttons, SIGNAL(rejected()), dialogBuscar, SLOT(reject()));
  QGridLayout* layout = new QGridLayout;
  layout->addWidget(form);
  layout->addWidget(buttons);
  dialogBuscar->setLayout(layout);
  return dialogBuscar;
}

ModuleInterface::~ModuleInterface()
{
  delete ui;
}

void ModuleInterface::on_list_tableView_activated(const QModelIndex &index)
{
  mapper->setCurrentModelIndex(index);
  mostrar(relTableModel->record(index.row()));
  verDetalles();
}

void ModuleInterface::verDetalles()
{
  ui->Module_tabWidget->setCurrentIndex(1);
}

void ModuleInterface::on_list_tableView_entered(const QModelIndex &)
{
  qDebug()<<"entered" ;
 // ui->list_tableView->selectRow();
}

void ModuleInterface::on_actionUp_triggered()
{
  qDebug()<<ui->list_tableView->currentIndex().row();
    //ui->list_tableView->selectRow();
}
