#ifndef UI_USUARIO_H
#define UI_USUARIO_H

#include <QWidget>

namespace Ui {
class ui_usuario;
}

class ui_usuario : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_usuario(QWidget *parent = 0);
    ~ui_usuario();
    
private:
    Ui::ui_usuario *ui;
};

#endif // UI_USUARIO_H
