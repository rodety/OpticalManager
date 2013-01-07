#ifndef UI_BUSCARUSUARIO_H
#define UI_BUSCARUSUARIO_H

#include <QWidget>
#include "ui_ui_buscarusuario.h"

namespace Ui {
  class ui_BuscarUsuario;
}

class ui_BuscarUsuario : public QWidget
{
  Q_OBJECT
  
public:
  explicit ui_BuscarUsuario(QWidget *parent = 0);
  ~ui_BuscarUsuario();
  friend class ModuloUsuarios;
private slots:
  void on_le_dni_cursorPositionChanged(int arg1, int arg2);

private:
  Ui::ui_BuscarUsuario *ui;
};

#endif // UI_BUSCARUSUARIO_H
