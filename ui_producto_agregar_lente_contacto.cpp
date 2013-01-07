#include "ui_producto_agregar_lente_contacto.h"
#include "ui_ui_producto_agregar_lente_contacto.h"
#include <QMessageBox>

ui_producto_agregar_lente_contacto::ui_producto_agregar_lente_contacto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_producto_agregar_lente_contacto)
{
    ui->setupUi(this);

    ui->comboBox_marca->IngresarTipo("marca");
    ui->comboBox_curva_base->IngresarTipo("curvabase");
    ui->comboBox_diametro->IngresarTipo("diametro");
    ui->comboBox_material->IngresarTipo("material");
    ui->comboBox_potencia->IngresarTipo("potencia");
    ui->comboBox_tiempo_uso->IngresarTipo("tiempouso");
    ui->comboBox_tipo_lente->IngresarTipo("tipolente");


    ui->comboBox_marca->Actualizar_Items();
    ui->comboBox_curva_base->Actualizar_Items();
    ui->comboBox_diametro->Actualizar_Items();
    ui->comboBox_material->Actualizar_Items();
    ui->comboBox_potencia->Actualizar_Items();
    ui->comboBox_tiempo_uso->Actualizar_Items();
    ui->comboBox_tipo_lente->Actualizar_Items();

    editar=false;

}

ui_producto_agregar_lente_contacto::~ui_producto_agregar_lente_contacto()
{
    delete ui;
}

void ui_producto_agregar_lente_contacto::tipoEditar(LenteContacto  _lente_editar)
{
    ui->line_stock->setText(QString::number(_lente_editar.getStock()));
    ui->line_compra->setText(QString::number(_lente_editar.getPrecioCompra()));
    ui->line_venta->setText(QString::number(_lente_editar.getPrecioVenta()));
    ui->line_descuento->setText(QString::number(_lente_editar.getP_descuento()));
    ui->line_visibilidad->setText(_lente_editar.getTinteVisibilidad());
    ui->line_acuoso->setText(_lente_editar.getContenidoAcuoso());
    ui->line_disenio->setText(_lente_editar.getDisenio());
    ui->line_rango_k->setText(_lente_editar.getRangoK());

    int posM=ui->comboBox_marca->findText(_lente_editar.getMarca().getNombre());
    ui->comboBox_marca->setCurrentIndex(posM);

    int posTL=ui->comboBox_tipo_lente->findText(_lente_editar.getTipoLente().getNombre());
    ui->comboBox_tipo_lente->setCurrentIndex(posTL);

    int posPO=ui->comboBox_potencia->findText(_lente_editar.getPotencia().getNombre());
    ui->comboBox_tipo_lente->setCurrentIndex(posPO);

    qDebug()<<"nombre de curva"<<_lente_editar.getCurvaBase().getNombre();
    int posCB=ui->comboBox_curva_base->findText(_lente_editar.getCurvaBase().getNombre());
    ui->comboBox_curva_base->setCurrentIndex(posCB);

    int posDI=ui->comboBox_diametro->findText(_lente_editar.getDiametro().getNombre());
    ui->comboBox_diametro->setCurrentIndex(posDI);

    int posTU=ui->comboBox_tiempo_uso->findText(_lente_editar.getTiempoUso().getNombre());
    ui->comboBox_tiempo_uso->setCurrentIndex(posTU);

    int posMA=ui->comboBox_material->findText(_lente_editar.getMaterial().getNombre());
    ui->comboBox_material->setCurrentIndex(posMA);

    Lente_Editar = _lente_editar;
    editar=true;

    ui->boton_agregar->setText("Guardar");
    //ui->label_titulo->setText("Editar Lente de Contacto");
}

void ui_producto_agregar_lente_contacto::on_boton_cancelar_clicked()
{
    this->close();
}






void ui_producto_agregar_lente_contacto::on_boton_agregar_clicked()
{

    //validacion
    int numero_campos=8;
    int resultado=0;
    QString inval="...Nuevo...";
    QString error="No puede Contunuar, ingrese correctamente los datos en : \n";
    if(Producto::validar(ui->line_stock->text(),"numerico_cantidad")==true) resultado++;
    else{   error=error+ "- Stock \n";  }

    if(Producto::validar(ui->line_compra->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Compra \n";  }

    if(Producto::validar(ui->line_venta->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Venta \n";  }

    if(Producto::validar(ui->line_descuento->text(),"numerico_precio")==true) resultado++;
    else{   error=error+ "- Precio de Descuento \n";  }

    if(Producto::validar(ui->line_visibilidad->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Tinte de Visibilidad \n";  }

    if(Producto::validar(ui->line_acuoso->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Contenido Acuoso \n";  }

    if(Producto::validar(ui->line_disenio->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Diseño \n";  }

    if(Producto::validar(ui->line_rango_k->text(),"alfanumerico")==true) resultado++;
    else{   error=error+ "- Rango K \n";  }

    if(numero_campos!=resultado)
    {
        QMessageBox::warning(this,"Cuidado!!",error);
        return;
    }

    //Capturando todos lo datos
    int stock=ui->line_stock->text().toInt();
    double p_compra=ui->line_compra->text().toDouble();
    double p_venta=ui->line_venta->text().toDouble();
    double p_descuento=ui->line_descuento->text().toDouble();
    QString _tintevisibilidad=ui->line_visibilidad->text();
    QString _contacu=ui->line_acuoso->text();
    QString _disenio=ui->line_disenio->text();
    QString _rangok=ui->line_rango_k->text();


    QString marca=ui->comboBox_marca->currentText();
    QString tipolente=ui->comboBox_tipo_lente->currentText();
    QString potencia=ui->comboBox_potencia->currentText();
    QString curvabase=ui->comboBox_curva_base->currentText();
    QString diametro=ui->comboBox_diametro->currentText();
    QString tiempouso=ui->comboBox_tiempo_uso->currentText();
    QString material=ui->comboBox_material->currentText();

    if(marca==inval || tipolente==inval || potencia==inval || curvabase==inval || diametro==inval || tiempouso==inval || material==inval)
    {
        QMessageBox::warning(this,"Error"," No puede dejar con 'Nuevo' ningun campo");
        return;
    }


    Marca _marca;
    _marca.existente(marca);

    TipoLente _tipolente;
    _tipolente.existente(tipolente);

    Potencia _potencia;
    _potencia.existente(potencia);

    CurvaBase _curvabase;
    _curvabase.existente(curvabase);

    Diametro _diametro;
    _diametro.existente(diametro);

    TiempoUso _tiempouso;
    _tiempouso.existente(tiempouso);

    Material _material;
    _material.existente(material);


    if(editar==true)
    {

        Lente_Editar.setStock(stock);
        Lente_Editar.setPrecio_compra(p_compra);
        Lente_Editar.setPrecio_venta(p_venta);
        Lente_Editar.SetP_descuento(p_descuento);
        Lente_Editar.setTinteVisibilidad(_tintevisibilidad);
        Lente_Editar.setContenidoAcuoso(_contacu);
        Lente_Editar.setDisenio(_disenio);
        Lente_Editar.setRangoK(_rangok);

        Lente_Editar.setMarca(_marca);
        Lente_Editar.setTipoLente(_tipolente);
        Lente_Editar.setPotencia(_potencia);
        Lente_Editar.setCurvaBase(_curvabase);
        Lente_Editar.setDiametro(_diametro);
        Lente_Editar.setTiempoUso(_tiempouso);
        Lente_Editar.setMaterial(_material);

        Lente_Editar.actualizar();
        emit senial();

    }
    else
    {
        LenteContacto nuevolente(stock,p_compra,p_venta,p_descuento,true,_marca,_tintevisibilidad,_contacu,_disenio,_rangok,_potencia,_curvabase,_diametro,_tiempouso,_material,_tipolente);
        nuevolente.agregar();
        emit senial();
    }

    this->close();
    delete this;
}


/*******************************************************************************/
/********************************* botones borrar ******************************/
/*******************************************************************************/
void ui_producto_agregar_lente_contacto::on_marca_x_clicked()
{
    ui->comboBox_marca->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_topolente_x_clicked()
{
    ui->comboBox_tipo_lente->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_portencia_x_clicked()
{
    ui->comboBox_potencia->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_curvabase_x_clicked()
{
    ui->comboBox_curva_base->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_diametro_x_clicked()
{
    ui->comboBox_diametro->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_tiempouso_x_clicked()
{
    ui->comboBox_tiempo_uso->Eliminar_Item();
}

void ui_producto_agregar_lente_contacto::on_material_x_clicked()
{
    ui->comboBox_material->Eliminar_Item();
}
