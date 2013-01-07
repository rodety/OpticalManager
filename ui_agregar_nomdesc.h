#ifndef UI_AGREGAR_NOMDESC_H
#define UI_AGREGAR_NOMDESC_H
#include <forma.h>
#include <calidad.h>
#include <color.h>
#include <forma.h>
#include <marca.h>
#include <rangomedida.h>
#include <tamanio.h>
#include <tipoluna.h>
#include <QDialog>

namespace Ui {
    class ui_agregar_nomDesc;
}

class ui_agregar_nomDesc : public QDialog
{
    Q_OBJECT

public:
    explicit ui_agregar_nomDesc(QWidget *parent = 0);
    ~ui_agregar_nomDesc();
    void recibir_tipo(QString _tipo);

private:
    Ui::ui_agregar_nomDesc *ui;
    QString tipo;

signals:

    void envia_senial(int);
private slots:
    void on_pushButton_guardar_2_clicked();
    void on_pushButton_cancelar_2_clicked();
};

#endif // UI_AGREGAR_NOMDESC_H
