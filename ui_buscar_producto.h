#ifndef UI_BUSCAR_PRODUCTO_H
#define UI_BUSCAR_PRODUCTO_H

#include <QWidget>

namespace Ui {
class ui_buscar_producto;
}

class ui_buscar_producto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_buscar_producto(QWidget *parent = 0);
    ~ui_buscar_producto();
    
private:
    Ui::ui_buscar_producto *ui;
};

#endif // UI_BUSCAR_PRODUCTO_H
