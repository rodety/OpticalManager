#include "reporte_cliente.h"
#include "ui_ui_reporte.h"
#include <QMessageBox>
#include <QFileDialog>
reporte_cliente::reporte_cliente():reporte()
{
    report->setReportFile("Reporte_Venta_Cliente.ncr");
    report->reset(true);
}

void reporte_cliente::set_file_name()
{
    report->reset(true);
    name_reporte.clear();
    this->name_reporte="Reporte_Cliente.pdf";
}

void reporte_cliente::save_reporte(QString p_apellido,QString s_apellido,QString nombre)
{
    set_file_name();
    this->current_date=QDate::currentDate();
    this->header_current_date.append(current_date.toString(Qt::ISODate));
    this->current_time=QTime::currentTime();
    this->header_current_hora.append(current_time.toString());

    make_query_cliente(p_apellido,s_apellido,nombre);

    report->addParameter("sql",quer);

    QString fullname;
    fullname.append(p_apellido);
    fullname.append(" ");
    fullname.append(s_apellido);
    fullname.append(" ");
    fullname.append(nombre);
    report->addParameter("nombre",fullname);

    fecha_final_s.clear();
    fecha_inicio_s.clear();
    fecha_inicio_s.append(this->fecha_inicio.toString(Qt::ISODate));
    fecha_final_s.append(this->fecha_fin.toString(Qt::ISODate));
    report->addParameter("usuario",current_user);
    report->addParameter("fecha_inicio",fecha_inicio_s);
    report->addParameter("fecha_final",fecha_final_s);
    report->addParameter("fecha_actual",current_date.toString(Qt::ISODate));
    report->addParameter("hora_actual",current_time.toString());
    NCReportOutput *output=0;
    output = new NCReportPreviewOutput();
    output->setAutoDelete( FALSE );
    report->setOutput( output );

    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    report->runReport();
    //report->runReportToPreview();
    bool error = report->hasError();
    QString err = report->lastErrorMsg();
    QApplication::restoreOverrideCursor();

    if ( error )
        QMessageBox::information( 0, "Report error", err );
    else
    {
            //-----------------------------
            // PRINT PREVIEW
            //-----------------------------
            NCReportPreviewWindow *pv = new NCReportPreviewWindow();
            pv->setReport( report );
            pv->setOutput( (NCReportPreviewOutput*)output );
            pv->setWindowModality(Qt::ApplicationModal );
            pv->setAttribute( Qt::WA_DeleteOnClose );
            pv->show();
    }

    //report->runReportToShowPreview();
}

void reporte_cliente::make_query_cliente(QString &p_apellido,QString &s_apellido,QString &nombre)
{
    quer.clear();
    QString idcliente;
    quer="select * from persona where `primer_apellido`='"+p_apellido+"' and `segundo_apellido`='"+s_apellido+"' and `nombres`='"+nombre+"'";
    qDebug()<<quer;
    query.clear();
    if(query.exec(quer))
    {
        query.next();
        idcliente=query.value(0).toString();
        query.clear();
        quer.clear();
        quer="SELECT DISTINCT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha`  FROM venta, linea_venta, producto WHERE venta.`idventa` = linea_venta.`idventa` AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idcliente` ="+idcliente+"";
        qDebug()<<quer;
    }
}
QSqlQuery reporte_cliente::view_reporte(QString p_apellido, QString s_apellido, QString nombre)
{
    /*QString fullname;
    fullname.append(p_apellido);
    fullname.append(" ");
    fullname.append(s_apellido);
    fullname.append(" ");
    fullname.append(nombre);
    this->header_reporte.append(fullname);
    this->header_fecha_inicio.append(this->fecha_inicio.toString(Qt::ISODate));
    this->header_fecha_fin.append(this->fecha_fin.toString(Qt::ISODate));*/

    fecha_final_s.clear();
    fecha_inicio_s.clear();
    //this->header_fecha_inicio.append(this->fecha_inicio.toString(Qt::ISODate));
    //this->header_fecha_fin.append(this->fecha_fin.toString(Qt::ISODate));
    quer.clear();
        QString idcliente;
        quer="select * from persona where `primer_apellido`='"+p_apellido+"' and `segundo_apellido`='"+s_apellido+"' and `nombres`='"+nombre+"'";
        qDebug()<<quer;
        query.clear();
        if(query.exec(quer))
        {
            query.next();
            idcliente=query.value(0).toString();
            query.clear();
            quer.clear();
            quer="SELECT DISTINCT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha`  FROM venta, linea_venta, producto WHERE venta.`idventa` = linea_venta.`idventa` AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idcliente` ="+idcliente+"";
            qDebug()<<quer;
            if(query.exec(quer))
                return query;
        }
}
