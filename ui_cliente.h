#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QWidget>
#include <ui_historial_clinico.h>
#include <ui_cliente_datos.h>

#include <iostream>
using namespace std;


namespace Ui {
class ui_cliente;
}

class ui_cliente : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_cliente(QWidget *parent = 0);
    ~ui_cliente();
    
private slots:
    void listar_clientes();
    void listar_historial();
    void historial_clinico(const QModelIndex &);
    void on_tabWidget_currentChanged(int index);

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_NuevoHistorial_clicked();
    void on_EditarHistorial_clicked();
    void on_BorrarHistorial_clicked();

private:
    Ui::ui_cliente *ui;
    cliente clt_his;
};

#endif // UI_CLIENTE_H
