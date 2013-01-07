#include "ui_producto_agregar_luna.h"
#include "ui_ui_producto_agregar_luna.h"
#include <QDebug>

ui_producto_agregar_luna::ui_producto_agregar_luna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_luna)
{
    ui->setupUi(this);

    //Puntero al mensaje en caso de cualquier error
    msgBox=new QMessageBox;
    msgBox->setText("No Puede Eliminar El Elemento");

    //se le indican a los combobox de que tipo es cada uno    
    ui->comboBox_tratamiento->IngresarTipo("tratamiento");
    ui->comboBox_tipo_luna->IngresarTipo("tipoluna");
    ui->comboBox_calidad->IngresarTipo("calidad");
    ui->comboBox_diametro->IngresarTipo("diametro");

    //seactualizan todos los datos    
    ui->comboBox_tratamiento->Actualizar_Items();
    ui->comboBox_tipo_luna->Actualizar_Items();
    ui->comboBox_calidad->Actualizar_Items();
    ui->comboBox_diametro->Actualizar_Items();

    editar=false;//aca se dice si la venta sera para editar un prdocuto al comienzo
    //tendra un valor
}

ui_producto_agregar_luna::~ui_producto_agregar_luna()
{
    delete ui;
}

void ui_producto_agregar_luna::on_pushButton_5_clicked()
{

    //validacion
    int numero_campos=8;
    int resultado=0;
    QString inval="...Nuevo...";

    QString error="No puede Contunuar, ingrese correctamente los datos en : \n";
    if(Producto::validar(ui->lineEdit_stock->text(),"numerico_cantidad")==true) resultado++;
    else{   error=error+ "- Stock \n";  }

    if(Producto::validar(ui->lineEdit_precio_compra->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Compra \n";  }

    if(Producto::validar(ui->lineEdit_precio_venta->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Venta \n";  }

    if(Producto::validar(ui->lineEdit_p_descuento->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Descuento \n";  }

    if(Producto::validar(ui->lineEdit_descripcion->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Descripción \n";  }

    if(Producto::validar(ui->descripcion_rango_medida->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Rango de Medida \n";  }

    if(Producto::validar(ui->lineEdit_vinicial->text(),"numerico_rango")==true) resultado++;
    else{   error=error+ "- Rango de Medida \n";  }

    if(Producto::validar(ui->lineEdit_vfinal->text(),"numerico_rango")==true) resultado++;
    else{   error=error+ "- Rango de Medida \n";  }

    if(numero_campos!=resultado)
    {
        QMessageBox::warning(this,"Cuidado!!",error);
        return;
    }


    //Capturando todos lo datos
    int stock=ui->lineEdit_stock->text().toInt();
    double p_compra=ui->lineEdit_precio_compra->text().toDouble();
    double p_venta=ui->lineEdit_precio_venta->text().toDouble();
    double p_descuento=ui->lineEdit_p_descuento->text().toDouble();
    QString descripcion_luna=ui->lineEdit_descripcion->text();

    QString tratamiento=ui->comboBox_tratamiento->currentText();
    QString tipo_luna=ui->comboBox_tipo_luna->currentText();
    QString calidad=ui->comboBox_calidad->currentText();
    QString diametro=ui->comboBox_diametro->currentText();

    if(tratamiento==inval || tipo_luna==inval || calidad==inval || diametro==inval)
    {
        QMessageBox::warning(this,"Error"," No puede dejar con 'Nuevo' ningun campo");
        return;
    }

    QString descrip_rango=ui->descripcion_rango_medida->text();
    double val_ini=ui->lineEdit_vinicial->text().toDouble();
    double val_fin=ui->lineEdit_vfinal->text().toDouble();

    Tratamiento _tratamiento;
    _tratamiento.existente(tratamiento);   

    TipoLuna _tipoluna;
    _tipoluna.existente(tipo_luna);    

    Calidad _calidad;
    _calidad.existente(calidad);    

    Diametro _diametro;
    _diametro.existente(diametro);    

    if(editar==true)
    {        
        Luna_Editar.setStock(stock);
        Luna_Editar.setPrecio_compra(p_compra);
        Luna_Editar.setPrecio_venta(p_venta);
        Luna_Editar.SetP_descuento(p_descuento);
        Luna_Editar.setDescripcion(descripcion_luna);
        Luna_Editar.setTratamiento(_tratamiento);
        Luna_Editar.setTipoLuna(_tipoluna);
        Luna_Editar.setCalidad(_calidad);
        Luna_Editar.setDiametro(_diametro);

        //El rango de Medida se editan sus datos
        RangoMedida nuevo_rango(Luna_Editar.getRangoMedida().getId());
        nuevo_rango.setValorIncial(val_ini);
        nuevo_rango.setValorFinal(val_fin);
        nuevo_rango.setdescripcion(descrip_rango);
        nuevo_rango.actualizar();

        Luna_Editar.setRangoMedida(nuevo_rango);


        Luna_Editar.actualizar();
        emit senial();

    }
    else        
    {
        RangoMedida _rangoMedida(val_ini,val_fin,descrip_rango);
        _rangoMedida.agregar();

        Luna nueva_luna(descripcion_luna,stock,p_compra,p_venta,p_descuento,true,_rangoMedida,_tipoluna,_calidad,_tratamiento,_diametro);
        nueva_luna.agregar();
        emit senial();
    }


    this->close();
    delete this;
}

void ui_producto_agregar_luna::on_pushButton_cancelar_clicked()
{
    this->close();
    delete msgBox;
}



void ui_producto_agregar_luna::tipoEditar(Luna  luna_editar)
{    
    //actualiza la interfaz con lo datos del objeto a editar
    ui->lineEdit_stock->setText(QString::number(luna_editar.getStock()));
    ui->lineEdit_precio_compra->setText(QString::number(luna_editar.getPrecioCompra()));
    ui->lineEdit_precio_venta->setText(QString::number(luna_editar.getPrecioVenta()));
    ui->lineEdit_p_descuento->setText(QString::number(luna_editar.getP_descuento()));
    ui->lineEdit_descripcion->setText(luna_editar.getDescripcion());
    ui->descripcion_rango_medida->setText(luna_editar.getRangoMedida().getdescripcion());
    ui->lineEdit_vinicial->setText(QString::number(luna_editar.getRangoMedida().getValorInicial()));
    ui->lineEdit_vfinal->setText(QString::number(luna_editar.getRangoMedida().getValorFinal()));


    int posT=ui->comboBox_tratamiento->findText(luna_editar.getTramiento().getNombre());    
    ui->comboBox_tratamiento->setCurrentIndex(posT);

    int posTL=ui->comboBox_tipo_luna->findText(luna_editar.getTipoLuna().getNombre());
    ui->comboBox_tipo_luna->setCurrentIndex(posTL);    

   int posC=ui->comboBox_calidad->findText(luna_editar.getCalidad().getNombre());
   ui->comboBox_calidad->setCurrentIndex(posC);

   int posD=ui->comboBox_diametro->findText((luna_editar.getDiametro().getNombre()));
   ui->comboBox_diametro->setCurrentIndex(posD);

    Luna_Editar=luna_editar;
    editar=true;

    ui->pushButton_5->setText("Guardar");
    //ui->label_titulo->setText("Editar Luna");


}



//**********************************************************************
//Los botones con la "X" mediante las funcion "Eliminar_item"
//eliminar el item actual donde esta el combobox
//**********************************************************************
//En caso que no se pueda borrar mostrara mensaje de error, por lo normal
//un item no se puede borrar por esta siendo usado en otra tabla

void ui_producto_agregar_luna::on_pushButton_xindice_clicked()
{
    if(ui->comboBox_tratamiento->Eliminar_Item())msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xtipo_clicked()
{
    if(ui->comboBox_tipo_luna->Eliminar_Item()) msgBox->show();
}

void ui_producto_agregar_luna::on_pushButton_xcalidad_clicked()
{
    if(ui->comboBox_calidad->Eliminar_Item()) msgBox->show();
}


void ui_producto_agregar_luna::on_pushButton_xdiametro_clicked()
{
    if(ui->comboBox_diametro->Eliminar_Item()) msgBox->show();
}

