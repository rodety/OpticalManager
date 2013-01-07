#include <QtGui>
#include <iostream>
#include <dbconnection.h>
/*#include <QSqlQuery>
#include <QSqlRecord>
#include <QVariant>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlRelationalTableModel>
#include <QSqlRelation>*/
#include <QtSql>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout<<"Hello world!"<<endl;
    DBconnection db;

    //QTableView *view = new QTableView;
    /*QSqlQuery query;
    query.exec("select * from e_producto");
    QSqlQueryModel *q = new QSqlQueryModel();
    q->setQuery(query);
    view->setModel(q);*/

    /*QSqlRelationalTableModel * rel_model = new QSqlRelationalTableModel;
    rel_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    rel_model->setTable("e_producto");
    rel_model->setRelation(8,QSqlRelation("e_category","id_categoria","titulo"));
    rel_model->setRelation(10,QSqlRelation("e_marca","id_marca","nombre"));
    rel_model->select();
    if (rel_model->lastError().isValid())
        QMessageBox::critical(0,"Database Error",rel_model->lastError().text());
    rel_model->setHeaderData(8, Qt::Horizontal, QObject::tr("Categoria"));
    rel_model->setHeaderData(10, Qt::Horizontal, QObject::tr("Marca"));
    view->setItemDelegate(new QSqlRelationalDelegate(view));
    view->setModel(rel_model);
    view->show();*/
    return a.exec();
}

/*QSqlQuery query;
query.exec("select * from Fotos");
/*while (query.next())
{
    int s = query.record().count();
    for(int i = 0; i<s; i++)
    {
         QVariant name = query.value(i);
         cout<<qPrintable(name.toString())<<"|";
    }
    cout<<endl;
}
QSqlQueryModel *q = new QSqlQueryModel();
q->setQuery(query);
QTableView *view = new QTableView;
view->setModel(q);
view->show();*/
