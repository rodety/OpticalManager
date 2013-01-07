#include "ui_usuario.h"
#include "ui_ui_usuario.h"

ui_usuario::ui_usuario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_usuario)
{
    ui->setupUi(this);
}

ui_usuario::~ui_usuario()
{
    delete ui;
}
