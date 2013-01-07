#include "ui_statur_bar.h"
#include "ui_ui_statur_bar.h"

UI_STATUR_BAR::UI_STATUR_BAR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UI_STATUR_BAR)
{
    ui->setupUi(this);
}

UI_STATUR_BAR::~UI_STATUR_BAR()
{
    delete ui;
}

void UI_STATUR_BAR::setMessage(string message)
{
    ui->label_Mensaje->setText(QString::fromStdString(message));
}

