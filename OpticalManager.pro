#-------------------------------------------------
#
# Project created by QtCreator 2012-09-26T13:34:02
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
TARGET = OpticalManager
TEMPLATE = app
DEFINES += NCREPORT_IMPORT
unix {
    LIBS += -lncreport -Llib -L/usr/local/bin
    target.path = /usr/local/bin
}
win32-g++: {
    release: LIBS += nc/libncreport2.a
    debug: LIBS += nc/libncreportd2.a
    target.path = bin
} else {
  win32: LIBS += ncreport2.lib
  target.path = bin
}


INCLUDEPATH += include

SOURCES += main.cpp\
        mainwindow.cpp \
    sesion.cpp \
    conexionbd.cpp \
    ui_login.cpp \
    ui_cambiarpassdialog.cpp \
    usuario.cpp \
    producto.cpp \
    marca.cpp \
    objetopersistente.cpp \
    calidad.cpp \
    tamanio.cpp \
    forma.cpp \
    color.cpp \
    tipoluna.cpp \
    indicerefraccion.cpp \
    rangomedida.cpp \
    ui_cliente.cpp \
    ui_producto.cpp \
    ui_usuario.cpp \
    ui_producto_datos.cpp \
    ui_cliente_datos.cpp \
    ui_usuario_datos.cpp \
    montura.cpp \
    moduleinterface.cpp \
    modulousuarios.cpp \
    ui_buscarusuario.cpp \
    ui_statur_bar.cpp \
    luna.cpp \
    mycombobox.cpp \
    ui_producto_agregar_luna.cpp \
    ui_producto_agregar_montura.cpp \
    ui_agregar_nombre.cpp \
    ui_tienda.cpp \
    tienda.cpp \
    ui_tienda_agregar.cpp \
    empresa.cpp \
    ui_empresa.cpp \
    ui_agregar_nomdesc.cpp \
    persona.cpp \
    cliente.cpp \
    tipodoc_ident.cpp \
    ui_almacen.cpp \
    ui_proveedores.cpp \
    ui_datos_proveedor.cpp \
    ui_datos_compras.cpp \
    compras.cpp \
    ui_vitrina_agregar.cpp \
    andamio.cpp \
    contenedor.cpp \
    almacen.cpp \
    ui_almacen_datos.cpp \
    ui_andamio_datos.cpp \
    ui_contenedor_datos.cpp \
    vitrina.cpp \
    tratamiento.cpp \
    receta.cpp \
    ui_agregar_venta.cpp \
    ui_datos_empresa.cpp \
    proveedor.cpp \
    configurador.cpp \
    configprogram.cpp \
    ui_historial_clinico.cpp \
    medidashistorial.cpp \
    ui_producto_agregar_lente_contacto.cpp \
    tipolente.cpp \
    tiempouso.cpp \
    potencia.cpp \
    otro.cpp \
    material.cpp \
    diametro.cpp \
    curvabase.cpp \
    item_posicion.cpp \
    ui_item_posicion.cpp \
    ui_traspaso_almacen.cpp \
    historialclinico.cpp \
    ui_producto_agregar_otro.cpp \
    lentecontacto.cpp \
    ui_reporte.cpp \
    reporte_vendedor.cpp \
    reporte_tienda.cpp \
    reporte_cliente.cpp \
    reporte.cpp \
    ui_cant_item.cpp \
    venta.cpp \
    ui_venta.cpp



HEADERS  += mainwindow.h \
    sesion.h \
    conexionbd.h \
    ui_login.h \
    ui_cambiarpassdialog.h \
    usuario.h \
    producto.h \
    marca.h \
    objetopersistente.h \
    calidad.h \
    tamanio.h \
    forma.h \
    color.h \
    tipoluna.h \
    indicerefraccion.h \
    rangomedida.h \
    ui_cliente.h \
    ui_producto.h \
    ui_usuario.h \
    ui_producto_datos.h \
    ui_cliente_datos.h \
    ui_usuario_datos.h \
    montura.h \
    moduleinterface.h \
    modulousuarios.h \
    ui_buscarusuario.h \
    ui_statur_bar.h \
    luna.h \
    mycombobox.h \
    ui_producto_agregar_luna.h \
    ui_producto_agregar_montura.h \
    ui_agregar_nombre.h \
    ui_ui_tienda_agregar.h \
    ui_ui_tienda.h \
    ui_tienda.h \
    tienda.h \
    ui_tienda_agregar.h \
    empresa.h \
    ui_empresa.h \
    ui_agregar_nomdesc.h \
    persona.h \
    cliente.h \
    tipodoc_ident.h \
    ui_almacen.h \
    ui_proveedores.h \
    ui_datos_proveedor.h \
    ui_datos_compras.h \
    compras.h \
    ui_vitrina_agregar.h \
    andamio.h \
    contenedor.h \
    almacen.h \
    ui_almacen_nuevo.h \
    vitrina.h \
    ui_mainwindow.h \
    tratamiento.h \
    receta.h \
    ui_agregar_venta.h \
    ui_almacen_datos.h \
    ui_andamio_datos.h \
    ui_contenedor_datos.h \
    ui_datos_empresa.h \
    proveedor.h \
    configurador.h \
    configprogram.h \
    ui_historial_clinico.h \
    medidashistorial.h \
    ui_producto_agregar_lente_contacto.h \
    tipolente.h \
    tiempouso.h \
    potencia.h \
    otro.h \
    material.h \
    diametro.h \
    curvabase.h \
    item_posicion.h \
    ui_item_posicion.h \
    ui_traspaso_almacen.h \
    historialclinico.h \
    ui_producto_agregar_otro.h \
    lentecontacto.h \
    ui_reporte.h \
    reporte_vendedor.h \
    reporte_tienda.h \
    reporte_cliente.h \
    reporte.h \
    ui_cant_item.h \
    ui_agregar_venta.h \
    venta.h \
    ui_venta.h


FORMS    += mainwindow.ui \
    ui_login.ui \
    ui_cambiarpassdialog.ui \
    ui_cliente.ui \
    ui_producto.ui \
    ui_usuario.ui \
    ui_producto_datos.ui \
    ui_cliente_datos.ui \
    ui_usuario_datos.ui \
    moduleinterface.ui \
    ui_buscarusuario.ui \
    ui_statur_bar.ui \
    ui_producto_agregar_luna.ui \
    ui_producto_agregar_montura.ui \
    ui_agregar_nombre.ui \
    ui_tienda_agregar.ui \
    ui_tienda.ui \
    ui_agregar_nomdesc.ui \
    ui_empresa.ui \
    ui_agregar_nomdesc.ui \
    ui_almacen.ui \
    ui_proveedores.ui \
    ui_datos_proveedor.ui \
    ui_datos_compras.ui \
    compras.ui \
    ui_vitrina_agregar.ui \
    ui_venta.ui \
    ui_agregar_venta.ui \
    ui_almacen_datos.ui \
    ui_andamio_datos.ui \
    ui_contenedor_datos.ui \
    ui_datos_empresa.ui \
    configprogram.ui \
    ui_historial_clinico.ui \
    ui_producto_agregar_lente_contacto.ui \
    ui_item_posicion.ui \
    ui_traspaso_almacen.ui \
    ui_producto_agregar_otro.ui \
    ui_reporte.ui \
    ui_cant_item.ui \
    ui_venta.ui

RESOURCES += \
    Icons/Icons.qrc

OTHER_FILES += \
    splash-syllabus.png
