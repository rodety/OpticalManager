#ifndef MODULOUSUARIOS_H
#define MODULOUSUARIOS_H

#include "moduleinterface.h"
#include <QLabel>

class ModuloUsuarios : public ModuleInterface
{
  Q_OBJECT
public:
  explicit ModuloUsuarios(QWidget *parent = 0);
  void Agregar();
  void Editar();
  void Guardar();
  void Buscar();
  void Cancelar();
  void agregarPermisos();
  void mostrar(QSqlRecord rec);
signals:
  
public slots:
  void CambiarPass();

private:
  void ConfigPermisosModelView();
  void createPermisoRec(int & idusr, int & idMod,QSqlRecord & rcd);
  QSqlRelationalTableModel* permisosModel;
};

class NoEditItemDelegate: public QItemDelegate
{
protected:

  QWidget *	createEditor ( QWidget * parent, const QStyleOptionViewItem & /*option*/, const QModelIndex & /*index*/ )
  const{return new QLabel(parent);}

};

#endif // MODULOUSUARIOS_H
