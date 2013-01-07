#include "ui_buscarusuario.h"
#include <QDebug>

ui_BuscarUsuario::ui_BuscarUsuario(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::ui_BuscarUsuario)
{
  ui->setupUi(this);
  // integers
  QRegExp rx("[1-9]{8,8}");
  QRegExpValidator* v =  new QRegExpValidator(rx,0);
  ui->le_dni->setValidator(v);
  QRegExp rx2("[a-zA-Z0-9]{4,20}");
  QRegExpValidator * v2 = new QRegExpValidator(rx2, 0);
  ui->le_nick->setValidator(v2);
}

ui_BuscarUsuario::~ui_BuscarUsuario()
{
  delete ui;
}

void ui_BuscarUsuario::on_le_dni_cursorPositionChanged(int arg1, int arg2)
{
    qDebug()<<arg1<<arg2;
    qDebug()<<ui->le_dni->text().isEmpty();
    qDebug()<<ui->le_dni->hasAcceptableInput();
}
