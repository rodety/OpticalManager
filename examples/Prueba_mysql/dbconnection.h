#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>

class DBconnection
{
public:
    DBconnection();
private:
    QString db_user;
    QString db_pass;
    QString db_host;
    QString db_name;
};

#endif // DBCONNECTION_H
