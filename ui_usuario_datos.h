#ifndef UI_USUARIO_DATOS_H
#define UI_USUARIO_DATOS_H

#include <QWidget>
#include "ui_ui_usuario_datos.h"

namespace Ui {
class ui_usuario_datos;
}

class ui_usuario_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_usuario_datos(QWidget *parent = 0);
    ~ui_usuario_datos();
  Ui::ui_usuario_datos * getUI(){return ui;}

private:
  Ui::ui_usuario_datos *ui;
};

#endif // UI_USUARIO_DATOS_H
