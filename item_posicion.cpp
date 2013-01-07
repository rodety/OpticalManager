#include "item_posicion.h"

item_posicion::item_posicion()
{
}

item_posicion::item_posicion(QString idI, QString idP, QString idV, int f, int c, int n)
{
    idItem_Posicion=idI;
    idProducto=idP;
    idVitrina=idV;
    fila=f;
    columna=c;
    nivel=n;
}


bool item_posicion::agregar()
{
    QSqlQuery query;
    query.prepare("INSERT INTO item_posicion(idproducto,idvitrina,fila,columna,nivel) VALUES(?,?,?,?,?)");
    query.bindValue(0,idProducto);
    query.bindValue(1,idVitrina);
    query.bindValue(2,fila);
    query.bindValue(3,columna);
    query.bindValue(4,nivel);

    if(query.exec())
        return true;
    else
        return false;
}

bool item_posicion::actualizar()
{
    QSqlQuery query;
    query.prepare("UPDATE  item_posicion SET idproducto=?,idvitrina=?,fila=?,columna=?,nivel=? WHERE iditem_posicion=?");
    query.bindValue(0,idProducto);
    query.bindValue(1,idVitrina);
    query.bindValue(2,fila);
    query.bindValue(3,columna);
    query.bindValue(4,nivel);
    query.bindValue(5,idItem_Posicion);

    if(query.exec())
        return true;
    else
        return false;

}

bool item_posicion::eliminar()
{
    QSqlQuery query;
    query.prepare("DELETE FROM item_posicion WHERE iditem_posicion='"+idItem_Posicion+"'");

    if(query.exec())
        return true;
    else
        return false;
}


