#include "ui_traspaso_producto.h"
#include "ui_ui_traspaso_producto.h"

ui_traspaso_producto::ui_traspaso_producto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_traspaso_producto)
{
    ui->setupUi(this);
}

ui_traspaso_producto::~ui_traspaso_producto()
{
    delete ui;
}
