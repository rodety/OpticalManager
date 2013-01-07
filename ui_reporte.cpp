#include "ui_reporte.h"
#include "ui_ui_reporte.h"

ui_reporte::ui_reporte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_reporte)
{
    ui->setupUi(this);
    rep_vend=new reporte_vendedor();
    rep_tienda=new reporte_tienda();
    rep_cliente=new reporte_cliente();
    configuracion();
    test();
}

ui_reporte::~ui_reporte()
{
    delete ui;
}

void ui_reporte::configuracion()
{
    QSqlQuery query=rep_vend->find_tienda();
    while(query.next())
    {
        ui->cmb_tienda_vendedor->addItem(query.value(2).toString());
        ui->cmb_tienda_pago->addItem(query.value(2).toString());
        ui->cmb_tienda_t->addItem(query.value(2).toString());
        ui->cmb_tienda_vitrina->addItem(query.value(2).toString());
    }
    query.clear();
    pix = new QPixmap(ui->draw_label->size());
    pix->fill();
    ui->draw_label->setPixmap(*pix);
    ui->cmb_t_reporte->setCurrentIndex(0);
}
void ui_reporte::test()
{
    ui->lines_busqueda->setText("12345678");
    ui->lines_busqueda_cliente->setText("12345678");
    ui->lines_busqueda_vendedor_hv->setText("12345678");
    ui->fecha_inicio->setDate(QDate(2012,12,01));
    ui->fecha_inicio_tienda->setDate(QDate(2012,12,01));
    ui->fecha_inicio_cliente->setDate(QDate(2012,12,01));
    ui->fecha_final_cliente->setDate(QDate::currentDate());
    ui->fecha_final->setDate(QDate::currentDate());
}

void ui_reporte::on_btn_buscar_vendedor_clicked()
{
    query.clear();
    query=rep_vend->find_vendedor(ui->lines_busqueda->text(),ui->cmb_tipo_busqueda->currentIndex());
    if(query.next())
    {
        //qDebug()<<"size :         "<<query.size();
        ui->lines_busqueda->setText(query.value(10).toString());
        ui->primer_apelido->setText(query.value(2).toString());
        ui->segundo_apellido->setText(query.value(3).toString());
        ui->Nombres->setText(query.value(1).toString());
        if(query.size()>1)
        {
            ui->sig_vendedor->setEnabled(true);
        }

    }
    else
        ui->lines_busqueda->setText("No Encontrado");
}
void ui_reporte::on_sig_vendedor_clicked()
{
    if(query.next())
    {
        ui->lines_busqueda->setText(query.value(10).toString());
        ui->primer_apelido->setText(query.value(2).toString());
        ui->segundo_apellido->setText(query.value(3).toString());
        ui->Nombres->setText(query.value(1).toString());
    }
    else
    {
        //ui->cmb_tipo_busqueda->setCurrentIndex(0);
        ui->lines_busqueda->setText("Intente de nuevo");
    }
}


void ui_reporte::on_cmb_tienda_vitrina_currentIndexChanged(const QString &arg1)
{
    query.clear();
    query=rep_vend->find_vitrina(arg1);
    ui->cmb_vitrina_v->clear();
    while(query.next())
    {
        ui->cmb_vitrina_v->addItem(query.value(2).toString());
    }
}

void ui_reporte::on_btn_buscar_cliente_clicked()
{
    query.clear();
    query=rep_vend->find_cliente(ui->lines_busqueda_cliente->text(),ui->cmb_tipo_busqueda_cliente->currentIndex());
    if(query.next())
    {
        //qDebug()<<"size :         "<<query.size();
        ui->lines_busqueda_cliente->setText(query.value(5).toString());
        ui->primer_apelido_cliente->setText(query.value(4).toString());
        ui->segundo_apellido_cliente->setText(query.value(3).toString());
        ui->Nombres_cliente->setText(query.value(2).toString());
        if(query.size()>1)
        {
            ui->sig_cliente->setEnabled(true);
        }

    }
    else
        ui->lines_busqueda_cliente->setText("No Encontrado");
}

void ui_reporte::on_sig_cliente_clicked()
{
    if(query.next())
    {
        ui->lines_busqueda_cliente->setText(query.value(5).toString());
        ui->primer_apelido_cliente->setText(query.value(3).toString());
        ui->segundo_apellido_cliente->setText(query.value(4).toString());
        ui->Nombres_cliente->setText(query.value(2).toString());
    }
    else
    {
        //ui->cmb_tipo_busqueda_cliente->setCurrentIndex(0);
        //on_btn_buscar_cliente_clicked();
        ui->lines_busqueda_cliente->setText("Intente de nuevo");
    }
}

void ui_reporte::on_btn_buscar_vendedor_hv_clicked()
{
    query.clear();
    query=rep_vend->find_vendedor(ui->lines_busqueda_vendedor_hv->text(),ui->cmb_tipo_busqueda_cliente->currentIndex());
    if(query.next())
    {
        //qDebug()<<"size :         "<<query.size();
        ui->lines_busqueda_vendedor_hv->setText(query.value(5).toString());
        ui->primer_apelido_hv->setText(query.value(3).toString());
        ui->segundo_apellido_hv->setText(query.value(4).toString());
        ui->Nombres_hv->setText(query.value(2).toString());
        if(query.size()>1)
        {
            ui->sig_vendedor_hv->setEnabled(true);
        }

    }
    else
        ui->lines_busqueda_vendedor_hv->setText("No Encontrado");
}

void ui_reporte::on_sig_vendedor_hv_clicked()
{
    if(query.next())
    {
        ui->lines_busqueda_vendedor_hv->setText(query.value(5).toString());
        ui->primer_apelido_hv->setText(query.value(3).toString());
        ui->segundo_apellido_hv->setText(query.value(4).toString());
        ui->Nombres_hv->setText(query.value(2).toString());
    }
    else
    {
        //ui->cmb_tipo_busqueda->setCurrentIndex(0);
        ui->lines_busqueda_vendedor_hv->setText("Intente de nuevo");
        ui->lines_busqueda_vendedor_hv->clear();
        ui->primer_apelido_hv->clear();
        ui->segundo_apellido_hv->clear();
        ui->Nombres_hv->clear();
    }
}

void ui_reporte::on_cmb_t_reporte_currentIndexChanged(const QString &arg1)
{
    if(arg1=="Historial")
    {
        ui->fecha_inicio_cliente->setEnabled(false);
        ui->fecha_final_cliente->setEnabled(false);
        ui->label_14->setEnabled(false);
        ui->label_15->setEnabled(false);
    }
    else
    {
        ui->fecha_inicio_cliente->setEnabled(true);
        ui->fecha_final_cliente->setEnabled(true);
        ui->label_14->setEnabled(true);
        ui->label_15->setEnabled(true);
    }
}

void ui_reporte::on_generar_pdf_vendedor_clicked()
{
    rep_vend->add_name_optica(ui->cmb_tienda_vendedor->itemText(ui->cmb_tienda_vendedor->currentIndex()));
    QString vendedor=ui->primer_apelido->text()+" "+ui->segundo_apellido->text()+" "+ui->Nombres->text();
    rep_vend->add_name_reporte(vendedor);
    rep_vend->set_fecha_inicio(ui->fecha_inicio->date());
    rep_vend->set_fecha_final(ui->fecha_final->date());
    rep_vend->set_current_user("josemiki");
    rep_vend->save_reporte_vendedor(ui->cmb_tienda_vendedor->currentText(),ui->lines_busqueda->text());
}

void ui_reporte::on_generar_pdf_tienda_clicked()
{
    rep_tienda->set_current_user("josemiki");
    if(!ui->chk_tiendas_t->isChecked())
    {
        rep_tienda->add_name_optica(ui->cmb_tienda_t->itemText(ui->cmb_tienda_t->currentIndex()));
        rep_tienda->set_fecha_inicio(ui->fecha_inicio_tienda->date());
        rep_tienda->save_reporte(ui->cmb_tienda_t->itemText(ui->cmb_tienda_t->currentIndex()),ui->chk_tiendas_t->isChecked());
    }
    else
    {
        rep_tienda->add_name_optica("Todas las Tiendas");
        rep_tienda->set_fecha_inicio(ui->fecha_inicio_tienda->date());
        rep_tienda->save_reporte("Todas las Tiendas",ui->chk_tiendas_t->isChecked());
    }
}

void ui_reporte::on_chk_tiendas_t_clicked()
{
    ui->cmb_tienda_t->setEnabled(false);
}

void ui_reporte::on_generar_pdf_cliente_clicked()
{
    //rep_cliente->add_name_optica(ui->cmb_tienda_vendedor->itemText(ui->cmb_tienda_vendedor->currentIndex()));
    QString cliente=ui->primer_apelido_cliente->text()+" "+ui->segundo_apellido_cliente->text()+" "+ui->Nombres_cliente->text();
    rep_cliente->add_name_reporte(cliente);
    rep_cliente->set_fecha_inicio(ui->fecha_inicio_cliente->date());
    rep_cliente->set_fecha_final(ui->fecha_final_cliente->date());
    rep_cliente->set_current_user("josemiki");
    rep_cliente->save_reporte(ui->primer_apelido_cliente->text(),ui->segundo_apellido_cliente->text(),ui->Nombres_cliente->text());
}

void ui_reporte::on_view_reporte_vendedor_clicked()
{
    rep_vend->clear_headers();
    rep_vend->add_name_optica(ui->cmb_tienda_vendedor->itemText(ui->cmb_tienda_vendedor->currentIndex()));
    QString vendedor=ui->primer_apelido->text()+" "+ui->segundo_apellido->text()+" "+ui->Nombres->text();
    rep_vend->add_name_reporte(vendedor);
    rep_vend->set_fecha_inicio(ui->fecha_inicio->date());
    rep_vend->set_fecha_final(ui->fecha_final->date());
    rep_vend->set_current_user("josemiki");
    QSqlQuery query_vend;
    query_vend.clear();
    query_vend=rep_vend->ver_reporte_vendedor(ui->cmb_tienda_vendedor->currentText(),ui->lines_busqueda->text());
    vector_header header;
    header.clear();
    header=rep_vend->get_header();

    pix->fill(Qt::white);
    ui->draw_label->setPixmap(*pix);

    QPainter * painter=new QPainter(pix);
    painter->drawText(175,20,header[1]);
    painter->drawText(20,40,header[0]);
    painter->drawText(20,60,header[2]);
    painter->drawText(20,80,header[3]);

    painter->drawText(450,40,header[4]);
    painter->drawText(450,60,header[5]);
    painter->drawText(450,80,header[6]);
    //painter->drawText(150,80,header[7]);
    painter->end();
    ui->draw_label->setPixmap(*pix);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query_vend);
    model->setHeaderData(0, Qt::Horizontal, tr("Colaborador"));
    model->setHeaderData(1, Qt::Horizontal, tr("Tienda"));
    model->setHeaderData(2, Qt::Horizontal, tr("Codido de\nProducto"));
    model->setHeaderData(3, Qt::Horizontal, tr("Precio\nCompra"));
    model->setHeaderData(4, Qt::Horizontal, tr("Precio\nVenta"));
    model->setHeaderData(5, Qt::Horizontal, tr("Precio\nDescuento"));
    //ui->tableView = new QTableView;
    ui->tableView->setModel(model);
    ui->tableView->show();
}

void ui_reporte::on_view_reporte_tienda_clicked()
{
    rep_tienda->clear_headers();
    if(!ui->chk_tiendas_t->isChecked())rep_tienda->add_name_optica(ui->cmb_tienda_t->currentText());
    else rep_tienda->add_name_optica("Todas las Tiendas");
    //tienda->add_name_reporte(ui->cmb_tienda_t->itemText(ui->cmb_tienda_t->currentIndex()));
    rep_tienda->set_fecha_inicio(ui->fecha_inicio_tienda->date());
    rep_vend->set_current_user("josemiki");
    QSqlQuery query_vend;
    query_vend.clear();
    query_vend=rep_tienda->view_reporte(ui->cmb_tienda_t->itemText(ui->cmb_tienda_t->currentIndex()),ui->chk_tiendas_t->isChecked());
    vector_header header;
    header.clear();
    header=rep_tienda->get_header();

    pix->fill(Qt::white);
    ui->draw_label->setPixmap(*pix);
    QPainter * painter=new QPainter(pix);
    painter->drawText(175,20,header[1]);
    painter->drawText(20,40,header[0]);
    painter->drawText(20,60,header[2]);
    painter->drawText(20,80,header[3]);

    painter->drawText(450,40,header[4]);
    painter->drawText(450,60,header[5]);
    painter->drawText(450,80,header[6]);
    //painter->drawText(150,80,header[7]);
    painter->end();
    ui->draw_label->setPixmap(*pix);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query_vend);
    model->setHeaderData(0, Qt::Horizontal, tr("Colaborador"));
    model->setHeaderData(1, Qt::Horizontal, tr("Tienda"));
    model->setHeaderData(2, Qt::Horizontal, tr("Codido de\nProducto"));
    model->setHeaderData(3, Qt::Horizontal, tr("Precio\nCompra"));
    model->setHeaderData(4, Qt::Horizontal, tr("Precio\nVenta"));
    model->setHeaderData(5, Qt::Horizontal, tr("Precio\nDescuento"));
    //ui->tableView = new QTableView;
    ui->tableView->setModel(model);
    ui->tableView->show();
}

void ui_reporte::on_view_reporte_cliente_clicked()
{
    rep_cliente->clear_headers();
    QString cliente=ui->primer_apelido_cliente->text()+" "+ui->segundo_apellido_cliente->text()+" "+ui->Nombres_cliente->text();
    rep_cliente->add_name_reporte(cliente);
    rep_cliente->set_fecha_inicio(ui->fecha_inicio_cliente->date());
    rep_cliente->set_fecha_final(ui->fecha_final_cliente->date());
    rep_cliente->set_current_user("josemiki");
    //rep_cliente->save_reporte(ui->primer_apelido_cliente->text(),ui->segundo_apellido_cliente->text(),ui->Nombres_cliente->text());
    QSqlQuery query_vend;
    query_vend.clear();
    query_vend=rep_cliente->view_reporte(ui->primer_apelido_cliente->text(),ui->segundo_apellido_cliente->text(),ui->Nombres_cliente->text());
    vector_header header;
    header.clear();
    header=rep_cliente->get_header();

    pix->fill(Qt::white);
    ui->draw_label->setPixmap(*pix);

    QPainter * painter=new QPainter(pix);
    painter->drawText(175,20,header[1]);
    //painter->drawText(20,40,header[0]);
    painter->drawText(20,60,header[2]);
    painter->drawText(20,80,header[3]);

    painter->drawText(450,40,header[4]);
    painter->drawText(450,60,header[5]);
    painter->drawText(450,80,header[6]);
    //painter->drawText(150,80,header[7]);
    painter->end();
    ui->draw_label->setPixmap(*pix);

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery(query_vend);
    model->setHeaderData(0, Qt::Horizontal, tr("Colaborador"));
    model->setHeaderData(1, Qt::Horizontal, tr("Tienda"));
    model->setHeaderData(2, Qt::Horizontal, tr("Codido de\nProducto"));
    model->setHeaderData(3, Qt::Horizontal, tr("Precio\nCompra"));
    model->setHeaderData(4, Qt::Horizontal, tr("Precio\nVenta"));
    model->setHeaderData(5, Qt::Horizontal, tr("Precio\nDescuento"));
    model->setHeaderData(6, Qt::Horizontal, tr("Fecha"));
    //ui->tableView = new QTableView;
    ui->tableView->setModel(model);
    ui->tableView->show();
}
