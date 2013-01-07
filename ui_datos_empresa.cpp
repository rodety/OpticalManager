#include "ui_datos_empresa.h"
#include "ui_ui_datos_empresa.h"
#include "empresa.h"
#include <QMessageBox>
#include<QRegExp>

ui_datos_empresa::ui_datos_empresa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_datos_empresa)
{
    ui->setupUi(this);
    QRegExp rx("[1-9]\\d{0,9}");
    QValidator *validator = new QRegExpValidator(rx, this);
    ui->lineEdit__ruc->setValidator(validator);
}

ui_datos_empresa::~ui_datos_empresa()
{
    delete ui;
}

void ui_datos_empresa::set_idEmpresa(QString idEmpresa)
{
    this->idEmpresa = idEmpresa;
}
QString ui_datos_empresa::get_idEmpresa()
{
    return idEmpresa;
}

void ui_datos_empresa::set_ui_empresa_parent(ui_empresa* parent)
{
    ui_empresa_parent = parent;
}
ui_empresa* ui_datos_empresa::get_ui_empresa_parent()
{
    return ui_empresa_parent;
}

int ui_datos_empresa::get_behavior()
{
    return behavior;
}
void ui_datos_empresa::set_behavior(int val)
{
    behavior = val;
}

void ui_datos_empresa::update_form()
{
    ui->lineEdit__ruc->clear();
    ui->lineEdit_raz_social->clear();
    ui->lineEdit__direccion->clear();
    ui->lineEdit_telefono->clear();

    QSqlQuery query;
    query.prepare("SELECT ruc,raz_social,domicilio_fiscal,telefono FROM empresa WHERE idempresa=?");
    query.bindValue(0,ui_empresa_parent->get_currentIdEmpresa());
    query.exec();
    query.next();

    QString ruc = query.value(0).toString();
    QString raz_social = query.value(1).toString();
    QString direccion = query.value(2).toString();
    QString telefono = query.value(3).toString();
    ui->lineEdit__ruc->setText(ruc);
    ui->lineEdit_raz_social->setText(raz_social);
    ui->lineEdit__direccion->setText(direccion);
    ui->lineEdit_telefono->setText(telefono);

}
void ui_datos_empresa::on_pushButton_accept_clicked()
{

    QString ruc = ui->lineEdit__ruc->text();
    QString raz_social = ui->lineEdit_raz_social->text();
    QString direccion = ui->lineEdit__direccion->text();
    QString telefono = ui->lineEdit_telefono->text();



    empresa* empresa_data;

    switch(behavior)
    {
        case 0:

            empresa_data  = new empresa(get_idEmpresa(),ruc,raz_social,direccion,telefono);
            empresa_data->agregar();
            break;

        case 1:

            QString idEmpresa = ui_empresa_parent->get_currentIdEmpresa();
            empresa_data  = new empresa(idEmpresa,ruc,raz_social,direccion,telefono);
            empresa_data->actualizar();
            break;
    }

    close();
    ui_empresa_parent->update_list_empresas();
}

void ui_datos_empresa::on_pushButton_cancel_clicked()
{
    close();
}
