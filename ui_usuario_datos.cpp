#include "ui_usuario_datos.h"

ui_usuario_datos::ui_usuario_datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_usuario_datos)
{
    ui->setupUi(this);
}

ui_usuario_datos::~ui_usuario_datos()
{
    delete ui;
}
