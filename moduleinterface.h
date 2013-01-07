#ifndef MODULEINTERFACE_H
#define MODULEINTERFACE_H

#include <QWidget>
#include <QDialog>
#include <QDialogButtonBox>
#include "ui_moduleinterface.h"
#include <QtSql>
#include <QDataWidgetMapper>

class ModuleInterface : public QWidget
{
  Q_OBJECT
  
public:
  explicit ModuleInterface(QWidget *parent = 0,QWidget* details = 0);
  ~ModuleInterface();
  virtual void Agregar() = 0;
  virtual void Editar() = 0;
  virtual void Guardar() = 0;
  virtual void Buscar() = 0;
  virtual void Cancelar() = 0;
  virtual void mostrar(QSqlRecord rec) = 0;
protected:
  Ui::ModuleInterface *ui;
  QWidget* detallesWidget;
  QWidget* busquedaWidget;
  QDialog* makeBusquedaDialog(QWidget* form);
  QWidget* detalles_tab;
  QDataWidgetMapper * mapper;
  QSqlRelationalTableModel * relTableModel;
  void verDetalles();

signals:
  void rowSelected();
private slots:
  void on_list_tableView_activated(const QModelIndex &index);
  void on_list_tableView_entered(const QModelIndex &);
  void on_actionUp_triggered();
  void selectionChangedHandle(QModelIndex cur,QModelIndex prev);
};

#endif // MODULEINTERFACE_H
