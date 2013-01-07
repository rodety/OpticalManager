#ifndef UI_DATOS_EMPRESA_H
#define UI_DATOS_EMPRESA_H
#include "ui_empresa.h"
#include <QWidget>

namespace Ui {
class ui_datos_empresa;
}

class ui_datos_empresa : public QWidget
{
    Q_OBJECT
private:
    QString idEmpresa;
    ui_empresa* ui_empresa_parent;
    int behavior;
public:
    void set_idEmpresa(QString idEmpresa);
    QString get_idEmpresa();

    void set_ui_empresa_parent(ui_empresa* parent);
    ui_empresa* get_ui_empresa_parent();

    int get_behavior();
    void set_behavior(int);

    void update_form();
    
public:
    explicit ui_datos_empresa(QWidget *parent = 0);
    ~ui_datos_empresa();
    
private slots:
    void on_pushButton_accept_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::ui_datos_empresa *ui;
};

#endif // UI_DATOS_EMPRESA_H
