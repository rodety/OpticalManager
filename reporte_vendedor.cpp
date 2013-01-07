#include "reporte_vendedor.h"
#include "ui_ui_reporte.h"
#include <QMessageBox>
#include <QFileDialog>
reporte_vendedor::reporte_vendedor():reporte()
{
    report->setReportFile("Reporte_Venta_Vendedor.ncr");
}

void reporte_vendedor::set_file_name()
{
    name_reporte.clear();
    this->name_reporte="Reporte_Vendedor.pdf";
    //report->setOutput();
}

void reporte_vendedor::make_querry_vendedor(QString &t_name, QString &vend_name)
{
    QString idtienda,idcolaborador;
    query.clear();
    quer="select idtienda from tienda where alias ='"+t_name+"'";

    if(query.exec(quer))
    {
        quer.clear();
        query.next();
        idtienda=query.value(0).toString();
        query.clear();
        query=find_vendedor(vend_name,0);
        if(query.next())
            idcolaborador=query.value(0).toString();
        name_vendedor.clear();
        name_vendedor.append(query.value(3).toString()+" "+query.value(2).toString()+" "+query.value(1).toString());
        query.clear();
        quer.clear();
        quer="SELECT DISTINCT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha`  FROM venta, linea_venta, producto WHERE venta.`idventa` = linea_venta.`idventa` AND  `idcolaborador` ="+idcolaborador+" AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idtienda` ="+idtienda+"";
        qDebug()<<quer;
        if(query.exec(quer))
        {
            //query.next();
            qDebug()<<"Succes Querry!!";
        }
    }


}

void reporte_vendedor::save_reporte_vendedor(QString t_name, QString vend_name)
{
    set_file_name();
    this->current_date=QDate::currentDate();
    this->header_current_date.append(current_date.toString(Qt::ISODate));
    this->current_time=QTime::currentTime();
    this->header_current_hora.append(current_time.toString());

    make_querry_vendedor(t_name,vend_name);

    report->addParameter("sql",quer);
    report->addParameter("nombre",name_vendedor);
    report->addParameter("tienda",t_name);
    report->addParameter("usuario",current_user);
    fecha_final_s.clear();
    fecha_inicio_s.clear();
    fecha_inicio_s.append(this->fecha_inicio.toString(Qt::ISODate));
    fecha_final_s.append(this->fecha_fin.toString(Qt::ISODate));
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
    //report->runReportToShowPreview();


}
QSqlQuery reporte_vendedor::ver_reporte_vendedor(QString t_name, QString vend_name)
{
    QString idtienda,idcolaborador;
    query.clear();
    QString q="select idtienda from tienda where alias ='"+t_name+"'";
    qDebug()<<q;
    if(query.exec(q))
    {
        q.clear();
        query.next();
        idtienda=query.value(0).toString();
        query.clear();
        query=find_vendedor(vend_name,0);
        if(query.next())
            idcolaborador=query.value(0).toString();
        query.clear();
        q.clear();
        q="SELECT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha` FROM venta, producto WHERE  `idcolaborador` ="+idcolaborador+" AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idtienda` ="+idtienda+"";
        qDebug()<<q;
        if(query.exec(q))
        {
            //query.next();
            qDebug()<<"Succes Querry!!";
        }
        return query;
    }
}
