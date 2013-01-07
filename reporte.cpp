#include "reporte.h"

reporte::reporte()
{
    report = new NCReport();
    //report->
    load_headers();
    load_file_set();
}
void reporte::load_headers()
{
    this->header_optica="Optica: ";
    this->header_reporte="Reporte de ";
    this->header_fecha_inicio="Fecha de Inicio: ";
    this->header_fecha_fin="Fecha de Fin: ";
    this->header_current_date="Generado el: ";
    this->header_current_hora="Hora: ";
    this->header_current_user="Usuario: ";
    this->name_reporte="Reporte_";
}

void reporte::load_file_set()
{
    printer.setOutputFormat( QPrinter::PdfFormat );
    printer.setCreator("Sistema Optica");
    printer.setPageSize(QPrinter::A4);
    printer.setOrientation(QPrinter::Landscape);
    printer.setResolution(98);
    withline.setWidth(2);
}
QSqlQuery reporte::find_tienda()
{
    query.clear();
    query.exec("select * from tienda");
    return query;
}
QSqlQuery reporte::find_vitrina(QString tienda)
{
    query.clear();
    tienda="select * from vitrina where idtienda in (select idtienda from tienda where alias='"+tienda+"')";
    //qDebug()<<tienda;
    query.exec(tienda);
    return query;
}

QSqlQuery reporte::find_cliente(QString name,int t)
{
    query.clear();
    QString quer;
    if(t==0)
        quer="select * from persona where `nro_doc`="+name+" and `idpersona` in (select `idcliente` from cliente)";
    else
        quer="select * from persona where primer_apellido='"+name+"' and `idpersona` in (select `idcliente` from cliente)";
    query.exec(quer);
    return query;
}

QSqlQuery reporte::find_vendedor(QString name,int t)
{
    query.clear();
    QString quer;

    if(t==0)
        quer="select * from colaborador where `nro_doc`="+name+"";
    else
        quer="select * from colaborador where primer_apellido='"+name+"'";
    qDebug()<<quer;
    query.exec(quer);
    return query;
}
QSqlQuery reporte::find_mostrador(QString tienda)
{
    query.clear();
    tienda="select * from mostrador where idtienda in (select idtienda from tienda where alias='"+tienda+"')";
    //qDebug()<<tienda;
    query.exec(tienda);
    return query;
}
void reporte::clear_headers()
{
    this->header_optica.clear();
    this->header_reporte.clear();
    this->header_fecha_inicio.clear();
    this->header_fecha_fin.clear();
    this->header_current_date.clear();
    this->header_current_hora.clear();
    this->header_current_user.clear();
    this->load_headers();
}

void reporte::verificar_fecha()
{
    QDate hoy=QDate::currentDate();
    if(fecha_fin==fecha_inicio&&fecha_fin==hoy)
    {
        this->estado=true;
        qDebug()<<"Estado : "<<estado;
        this->header_date_especial="Reporte de Hoy";

       // return;
    }
    else
    {
        estado=false;
        qDebug()<<"Estado : "<<estado;
        this->header_fecha_inicio.append(fecha_inicio.toString(Qt::ISODate));
        qDebug()<<"Header_F_I: "<<header_fecha_inicio;
        this->header_fecha_fin.append(fecha_fin.toString(Qt::ISODate));
        qDebug()<<"Header_F_F: "<<header_fecha_fin;

     //   return;
    }
}

void reporte::add_name_optica(QString name)
{
    //nombre de optica
    this->name_optica.clear();
    this->name_optica.append(name);
    this->header_optica.append(name);
    //qDebug()<<"Header_Optica: "<<header_optica;
}

void reporte::add_name_reporte(QString name)
{
    //reporte de : Vendedor Tienda ,etc
    this->name_reporte.append(name);
    this->header_reporte.append(name);
    //qDebug()<<"Header_Reporte: "<<header_reporte;
}

void reporte::set_fecha_inicio(QDate date)
{
    this->fecha_inicio=date;
    qDebug()<<"set_fecha_inico";
}

void reporte::set_fecha_final(QDate date)
{
    this->fecha_fin=date;
    qDebug()<<"set_fecha_fin \n Verificando Fecha";
    verificar_fecha();
    //qDebug()<<"Header_Today: "<<header_today;
}

void reporte::set_current_user(QString name)
{
    this->current_user.append(name);
    //nombre de usuario que imprime el reporte
    this->header_current_user.append(name);
    //qDebug()<<"Header_Current_User: "<<header_current_user;
}
vector_header reporte::get_header()
{
    this->current_date=::QDate::currentDate();
    this->header_current_date.append(current_date.toString(Qt::ISODate));
    this->current_time=QTime::currentTime();
    this->header_current_hora.append(current_time.toString());

    vector_header vec_header;
    vec_header.push_back(this->header_optica);
    vec_header.push_back(this->header_reporte);
    vec_header.push_back(this->header_fecha_inicio);
    vec_header.push_back(this->header_fecha_fin);
    vec_header.push_back(this->header_current_date);
    vec_header.push_back(this->header_current_hora);
    vec_header.push_back(this->header_current_user);
    return vec_header;
}
bool reporte::validacion(QDate ini, QDate fin)
{
    if(ini>fin||fin>QDate::currentDate()||ini>QDate::currentDate())
        return false;
    return true;
}
