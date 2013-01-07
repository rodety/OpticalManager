#ifndef VITRINA_H
#define VITRINA_H

#include <objetopersistente.h>
#include <QSqlQueryModel>

class vitrina:public ObjetoPersistente
{
    private:
        QString idVitrina;
        QString idTienda;
        QString codigo;
        QString alias;
        int num_filas;
        int num_columnas;
        int num_niveles;
    public:
        vitrina();
        vitrina(QString,QString,QString,QString,int,int,int);

        QString getIdVitrina();
        QString getIdTienda();
        QString getCodigo();
        QString getAlias();
        int getNum_Filas();
        int getNum_Columnas();
        int getNum_Niveles();

        void setIdVitrina(QString);
        void setIdTienda(QString);
        void setCodigo(QString);
        void setAlias(QString);
        void setNum_Filas(int);
        void setNum_Columnas(int);
        void setNum_Niveles(int);

        static QSqlQueryModel* mostrar();
        bool agregar();
        bool actualizar();
        bool eliminar();
        bool buscar();
};






#endif // VITRINA_H
