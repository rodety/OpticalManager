#ifndef UI_EMPRESA_H
#define UI_EMPRESA_H

#include <QWidget>
#include <empresa.h>
#include<map>
#include <QTableWidgetItem>
using namespace std;
namespace Ui {
class ui_empresa;
}

class ui_empresa : public QWidget
{
    Q_OBJECT
    
private:

    QString currentIdEmpresa;

    map<QString,QString> Empresas;
public:

    QString get_currentIdEmpresa();
    void set_currentIdEmpresa(QString);
    void update_list_empresas();

public:
    explicit ui_empresa(QWidget *parent = 0);
    ~ui_empresa();
    
private slots:

    void on_pushButton_add_Empresa_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_pushButton_edit_Empresa_clicked();

    void on_pushButton_sup_Empresa_clicked();

private:
    Ui::ui_empresa *ui;
};

#endif // UI_EMPRESA_H
