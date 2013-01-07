#include "ui_producto_agregar_otro.h"
#include "ui_ui_producto_agregar_otro.h"

ui_producto_agregar_otro::ui_producto_agregar_otro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_otro)
{
    ui->setupUi(this);    
    ui->comboBox_marca->IngresarTipo("marca");

    ui->comboBox_marca->Actualizar_Items();
    editar=false;
}

ui_producto_agregar_otro::~ui_producto_agregar_otro()
{
    delete ui;
}

void ui_producto_agregar_otro::on_pushButton_x_marca_clicked()
{
    ui->comboBox_marca->Eliminar_Item();
}


void ui_producto_agregar_otro::tipoEditar(Otro & otro_editar)
{

    //Recibe la montura nueva y cambia lo campos
    ui->lineEdit_codigo->setText(otro_editar.getCodigo());
    ui->lineEdit_stock->setText(QString::number(otro_editar.getStock()));
    ui->lineEdit_p_compra->setText(QString::number(otro_editar.getPrecioCompra()));
    ui->lineEdit_p_venta->setText(QString::number(otro_editar.getPrecioVenta()));
    ui->lineEdit_p_descuento->setText(QString::number(otro_editar.getP_descuento()));
    ui->lineEdit_accesorios->setText(otro_editar.getAccesorios());
    ui->lineEdit_descripcion->setText(otro_editar.getDescripcion());


    int posM=ui->comboBox_marca->findText(otro_editar.getMarca().getNombre());
    ui->comboBox_marca->setCurrentIndex(posM);


    Otro_Editar=otro_editar;
    editar=true;

    ui->boton_agregar->setText("Guardar");
    ui->label_titulo->setText("Editar Otro");
}



void ui_producto_agregar_otro::on_boton_agregar_clicked()
{


    //validacion
    int numero_campos=7;
    int resultado=0;
    QString inval="...Nuevo...";

    QString error="No puede Contunuar, ingrese correctamente los datos en : \n";
    if(Producto::validar(ui->lineEdit_stock->text(),"numerico_cantidad")==true) resultado++;
    else{   error=error+ "- Stock \n";  }

    if(Producto::validar(ui->lineEdit_p_compra->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Compra \n";  }

    if(Producto::validar(ui->lineEdit_p_venta->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Venta \n";  }

    if(Producto::validar(ui->lineEdit_p_descuento->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Descuento \n";  }

    if(Producto::validar(ui->lineEdit_descripcion->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Descripción \n";  }

    if(Producto::validar(ui->lineEdit_codigo->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Codigo \n";  }

    if(Producto::validar(ui->lineEdit_accesorios->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Accesorios \n";  }

    if(numero_campos!=resultado)
    {
        QMessageBox::warning(this,"Cuidado!!",error);
        return;
    }

    QString _codigo=ui->lineEdit_codigo->text();
    int _stock=ui->lineEdit_stock->text().toDouble();
    double _precio_compra=ui->lineEdit_p_compra->text().toDouble();
    double _precio_venta=ui->lineEdit_p_venta->text().toDouble();
    double _p_descuento=ui->lineEdit_p_descuento->text().toDouble();
    QString _accesorios=ui->lineEdit_accesorios->text();
    QString _descripcion=ui->lineEdit_descripcion->text();

    QString marca=ui->comboBox_marca->currentText();
    if(marca==inval)
    {
        QMessageBox::warning(this,"Error"," No puede dejar con 'Nuevo' ningun campo");
        return;
    }


    Marca nuevamarca;
    nuevamarca.existente(marca);

    if(editar==true)
    {
        Otro_Editar.setCodigo(_codigo);
        Otro_Editar.setStock(_stock);
        Otro_Editar.setPrecio_compra(_precio_compra);
        Otro_Editar.setPrecio_venta(_precio_venta);
        Otro_Editar.SetP_descuento(_p_descuento);
        Otro_Editar.setAccesorios(_accesorios);
        Otro_Editar.setDescripcion(_descripcion);
        Otro_Editar.setMarca(nuevamarca);
        Otro_Editar.actualizar();
        emit senial();
    }
    else
    {
        Otro nuevo_otro(_codigo,_descripcion,nuevamarca,_stock,_precio_compra,_precio_venta,_p_descuento,_accesorios,true);
        nuevo_otro.agregar();
        emit senial();
    }
    this->close();
    delete this;
}





void ui_producto_agregar_otro::on_boton_cancelar_clicked()
{
    this->close();
    delete this;
}
