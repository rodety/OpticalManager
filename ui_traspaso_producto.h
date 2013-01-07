#ifndef UI_TRASPASO_PRODUCTO_H
#define UI_TRASPASO_PRODUCTO_H

#include <QWidget>

namespace Ui {
class ui_traspaso_producto;
}

class ui_traspaso_producto : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_traspaso_producto(QWidget *parent = 0);
    ~ui_traspaso_producto();
    
private:
    Ui::ui_traspaso_producto *ui;
};

#endif // UI_TRASPASO_PRODUCTO_H
