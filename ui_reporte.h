#ifndef UI_REPORTE_H
#define UI_REPORTE_H

#include <QWidget>

#include "reporte_vendedor.h"
#include "reporte_tienda.h"
#include "reporte_cliente.h"


namespace Ui {
class ui_reporte;
}

class ui_reporte : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_reporte(QWidget *parent = 0);
    ~ui_reporte();
    void configuracion();
    void test();
private slots:
    void on_btn_buscar_vendedor_clicked();
    void on_sig_vendedor_clicked();
    void on_cmb_tienda_vitrina_currentIndexChanged(const QString &arg1);
    void on_btn_buscar_cliente_clicked();
    void on_sig_cliente_clicked();
    void on_btn_buscar_vendedor_hv_clicked();
    void on_sig_vendedor_hv_clicked();
    void on_cmb_t_reporte_currentIndexChanged(const QString &arg1);
    void on_generar_pdf_vendedor_clicked();
    void on_generar_pdf_tienda_clicked();
    void on_chk_tiendas_t_clicked();
    void on_generar_pdf_cliente_clicked();
    void on_view_reporte_vendedor_clicked();
    void on_view_reporte_tienda_clicked();
    void on_view_reporte_cliente_clicked();

private:
    Ui::ui_reporte *ui;
    reporte_vendedor * rep_vend;
    reporte_tienda * rep_tienda;
    reporte_cliente * rep_cliente;
    QPixmap * pix;
    QSqlQuery query;
};

#endif // UI_REPORTE_H
