#include "ui_empresa.h"
#include "ui_ui_empresa.h"
#include "ui_datos_empresa.h"

ui_empresa::ui_empresa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_empresa)
{
    ui->setupUi(this);
    update_list_empresas();
}

ui_empresa::~ui_empresa()
{
    delete ui;
}
void ui_empresa::set_currentIdEmpresa(QString e){currentIdEmpresa = e;}
QString ui_empresa::get_currentIdEmpresa(){return currentIdEmpresa;}


void ui_empresa::update_list_empresas()
{
    for (int i=ui->tableWidget->rowCount()-1; i >= 0; --i)
        ui->tableWidget->removeRow(i);

    QString idempresa;
    QString ruc;
    QString raz_social;
    QString domicilio;
    QString telefono;
    QSqlQuery query;
    query.prepare("SELECT idempresa,ruc,raz_social,domicilio_fiscal,telefono FROM empresa");
    query.exec();

    int c = 0;

       while(query.next())
       {
           idempresa = query.value(0).toString();
           ruc = query.value(1).toString();
           raz_social = query.value(2).toString();
           domicilio =  query.value(3).toString();
           telefono =  query.value(4).toString();
           Empresas[raz_social] = idempresa;

           ui->tableWidget->insertRow(c);

           ui->tableWidget->setItem(c,0, new QTableWidgetItem(ruc));
           ui->tableWidget->setItem(c,1, new QTableWidgetItem(raz_social));
           ui->tableWidget->setItem(c,2, new QTableWidgetItem(domicilio));
           ui->tableWidget->setItem(c,3, new QTableWidgetItem(telefono));
           c++;
       }
}

void ui_empresa::on_pushButton_add_Empresa_clicked()
{
    ui_datos_empresa* edit_empresa_form = new ui_datos_empresa;
    edit_empresa_form->set_ui_empresa_parent(this);
    edit_empresa_form->set_behavior(0); //Comportamiento Nuevo
    edit_empresa_form->setWindowTitle("Nueva Empresa");    
    edit_empresa_form->show();
}

void ui_empresa::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    int count = item->row();
    QString raz_social = ui->tableWidget->item(count,1)->text();
    set_currentIdEmpresa(Empresas[raz_social]);
}

void ui_empresa::on_pushButton_edit_Empresa_clicked()
{
    ui_datos_empresa* edit_empresa_form = new ui_datos_empresa;
    edit_empresa_form->set_idEmpresa(get_currentIdEmpresa());
    edit_empresa_form->set_ui_empresa_parent(this);
    edit_empresa_form->set_behavior(1); //Comportamiento Edicion
    edit_empresa_form->update_form();
    edit_empresa_form->setWindowTitle("Editar Empresa");
    edit_empresa_form->show();
}

void ui_empresa::on_pushButton_sup_Empresa_clicked()
{
    empresa* any_empresa =  new empresa;
    any_empresa->setId(get_currentIdEmpresa());
    any_empresa->eliminar();
    update_list_empresas();
}
