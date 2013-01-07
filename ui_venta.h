#ifndef UI_VENTA_H
#define UI_VENTA_H

#include <QDialog>

namespace Ui {
class ui_venta;
}

class ui_venta : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_venta(QWidget *parent = 0);
    ~ui_venta();
    
private slots:
    void on_pushButton_20_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_13_clicked();


private:
    Ui::ui_venta *ui;

public slots:
    void actualizar_table();
};

#endif // UI_VENTA_H
