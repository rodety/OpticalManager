#include "dbconnection.h"
#include <QMessageBox>

DBconnection::DBconnection()
    //:throw QExplicitlySharedDataPointer ,
    :db_host("servercsunsa.sytes.net"),db_name("opticaldb"),db_user("opticaldb"),db_pass("optical123")
{
     QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
     db.setHostName(db_host);
     db.setDatabaseName(db_name);
     db.setUserName(db_user);
     db.setPassword(db_pass);
     //db.setConnectOptions("UNIX_SOCKET=/opt/lampp/var/mysql/mysql.sock;CLIENT_SSL=1;");
     bool ok = db.open();
     if(!ok)
     {
         QString a ;
         QMessageBox::critical(0,"Error de conexion a la Base de Datos",db.lastError().text()+"\nError code: "+a.setNum(db.lastError().number()),0,0);
     }
     else
     {
         QMessageBox::information(0,"DataBase Conection","Conection sucesfuly",0,0);
     }
}
