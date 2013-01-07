#include "ui_agregar_nomdesc.h"
#include "ui_ui_agregar_nomdesc.h"

ui_agregar_nomDesc::ui_agregar_nomDesc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_agregar_nomDesc)
{
    ui->setupUi(this);
}

ui_agregar_nomDesc::~ui_agregar_nomDesc()
{
    delete ui;
}


void ui_agregar_nomDesc::recibir_tipo(QString _tipo)
{
    tipo=_tipo;
}


void ui_agregar_nomDesc::on_pushButton_guardar_2_clicked()
{

    QString nombre=ui->lineEdit_nombre_2->text();
    QString descripcion=ui->plainTextEdit_descripcion_2->toPlainText();

    if(tipo=="marca"){
        Marca marca(nombre,descripcion);
        marca.agregar();
    }

    emit envia_senial(1);
    this->close();
}

void ui_agregar_nomDesc::on_pushButton_cancelar_2_clicked()
{
    this->close();
}
