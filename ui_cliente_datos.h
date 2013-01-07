#ifndef UI_CLIENTE_DATOS_H
#define UI_CLIENTE_DATOS_H

#include <QWidget>
#include <persona.h>
#include <cliente.h>
#include <tipodoc_ident.h>
#include <QMessageBox>

namespace Ui {
class ui_cliente_datos;
}

class ui_cliente_datos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_cliente_datos(QWidget *parent = 0);
    ~ui_cliente_datos();
    
    void setCliente(persona*);
signals:
    void guarde();
private slots:
    bool verificaRestriccionesCliente(QString);

    void on_pushButton_Aceptar_clicked();
    void on_pushButton_Cancelar_clicked();

    /*void on_lineEdit_nombres_lostFocus();
    void on_lineEdit_primerApellido_lostFocus();
    void on_lineEdit_segundoApellido_lostFocus();
    void on_lineEdit_nroDoc_lostFocus();
    void on_lineEdit_correo_lostFocus();
    void on_lineEdit_direccion_lostFocus();
    void on_lineEdit_telefono_lostFocus();
    void on_celular_lostFocus();*/

private:
    Ui::ui_cliente_datos *ui;

    persona cliente_act;
};

#endif // UI_CLIENTE_DATOS_H
