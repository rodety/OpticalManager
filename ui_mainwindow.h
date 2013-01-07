/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 27. Dec 12:00:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionProducto;
    QAction *actionUsuario;
    QAction *actionCliente;
    QAction *actionEditar;
    QAction *actionNuevo;
    QAction *actionBuscar;
    QAction *actionTiendas;
    QAction *actionEmpresas;
    QAction *actionAlmacen;
    QAction *actionProveedores;
    QAction *actionCompras;
    QAction *actionGuardar;
    QAction *actionCancelar;
    QAction *actionReportes;
    QAction *actionVentas;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *test;
    QToolBar *toolBar_modulos;
    QStatusBar *statusBar;
    QToolBar *options_toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1193, 304);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/internet-news-reader.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(2, 2));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        actionProducto = new QAction(MainWindow);
        actionProducto->setObjectName(QString::fromUtf8("actionProducto"));
        actionProducto->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/inventory-maintenance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProducto->setIcon(icon1);
        actionUsuario = new QAction(MainWindow);
        actionUsuario->setObjectName(QString::fromUtf8("actionUsuario"));
        actionUsuario->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsuario->setIcon(icon2);
        actionCliente = new QAction(MainWindow);
        actionCliente->setObjectName(QString::fromUtf8("actionCliente"));
        actionCliente->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCliente->setIcon(icon3);
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionEditar->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/1349716425_doc_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditar->setIcon(icon4);
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionNuevo->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/1349716386_monotone_add_plus_round.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon5);
        actionBuscar = new QAction(MainWindow);
        actionBuscar->setObjectName(QString::fromUtf8("actionBuscar"));
        actionBuscar->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/1349716430_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar->setIcon(icon6);
        actionTiendas = new QAction(MainWindow);
        actionTiendas->setObjectName(QString::fromUtf8("actionTiendas"));
        actionTiendas->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/1354299865_rssshop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTiendas->setIcon(icon7);
        actionEmpresas = new QAction(MainWindow);
        actionEmpresas->setObjectName(QString::fromUtf8("actionEmpresas"));
        actionEmpresas->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/photo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmpresas->setIcon(icon8);
        actionAlmacen = new QAction(MainWindow);
        actionAlmacen->setObjectName(QString::fromUtf8("actionAlmacen"));
        actionAlmacen->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/file-roller.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlmacen->setIcon(icon9);
        actionProveedores = new QAction(MainWindow);
        actionProveedores->setObjectName(QString::fromUtf8("actionProveedores"));
        actionProveedores->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/autoship.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProveedores->setIcon(icon10);
        actionCompras = new QAction(MainWindow);
        actionCompras->setObjectName(QString::fromUtf8("actionCompras"));
        actionCompras->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/shopping-cart_basic_blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCompras->setIcon(icon11);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionGuardar->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/1349716356_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon12);
        actionCancelar = new QAction(MainWindow);
        actionCancelar->setObjectName(QString::fromUtf8("actionCancelar"));
        actionCancelar->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/1349716433_doc_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCancelar->setIcon(icon13);
        actionReportes = new QAction(MainWindow);
        actionReportes->setObjectName(QString::fromUtf8("actionReportes"));
        actionReportes->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/abiword.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReportes->setIcon(icon14);
        actionVentas = new QAction(MainWindow);
        actionVentas->setObjectName(QString::fromUtf8("actionVentas"));
        actionVentas->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/ticket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVentas->setIcon(icon15);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        test = new QTableView(centralWidget);
        test->setObjectName(QString::fromUtf8("test"));

        gridLayout->addWidget(test, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        toolBar_modulos = new QToolBar(MainWindow);
        toolBar_modulos->setObjectName(QString::fromUtf8("toolBar_modulos"));
        toolBar_modulos->setIconSize(QSize(40, 40));
        toolBar_modulos->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_modulos);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setCursor(QCursor(Qt::IBeamCursor));
        MainWindow->setStatusBar(statusBar);
        options_toolBar = new QToolBar(MainWindow);
        options_toolBar->setObjectName(QString::fromUtf8("options_toolBar"));
        options_toolBar->setIconSize(QSize(36, 36));
        MainWindow->addToolBar(Qt::TopToolBarArea, options_toolBar);
        MainWindow->insertToolBarBreak(options_toolBar);

        toolBar_modulos->addAction(actionProducto);
        toolBar_modulos->addAction(actionUsuario);
        toolBar_modulos->addAction(actionCliente);
        toolBar_modulos->addAction(actionEmpresas);
        toolBar_modulos->addAction(actionTiendas);
        toolBar_modulos->addAction(actionAlmacen);
        toolBar_modulos->addAction(actionProveedores);
        toolBar_modulos->addAction(actionCompras);
        toolBar_modulos->addAction(actionReportes);
        toolBar_modulos->addAction(actionVentas);
        options_toolBar->addAction(actionBuscar);
        options_toolBar->addAction(actionNuevo);
        options_toolBar->addAction(actionEditar);
        options_toolBar->addAction(actionGuardar);
        options_toolBar->addAction(actionCancelar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\303\223pticaJireh", 0, QApplication::UnicodeUTF8));
        actionProducto->setText(QApplication::translate("MainWindow", "Producto", 0, QApplication::UnicodeUTF8));
        actionProducto->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionUsuario->setText(QApplication::translate("MainWindow", "Usuario", 0, QApplication::UnicodeUTF8));
        actionUsuario->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionCliente->setText(QApplication::translate("MainWindow", "Cliente", 0, QApplication::UnicodeUTF8));
        actionCliente->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEditar->setToolTip(QApplication::translate("MainWindow", "Editar registro actual", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEditar->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNuevo->setToolTip(QApplication::translate("MainWindow", "Nuevo Registro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNuevo->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionBuscar->setText(QApplication::translate("MainWindow", "Buscar", 0, QApplication::UnicodeUTF8));
        actionBuscar->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionTiendas->setText(QApplication::translate("MainWindow", "Tiendas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTiendas->setToolTip(QApplication::translate("MainWindow", "Tienda", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTiendas->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionEmpresas->setText(QApplication::translate("MainWindow", "Empresas", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEmpresas->setToolTip(QApplication::translate("MainWindow", "Empresas", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEmpresas->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionAlmacen->setText(QApplication::translate("MainWindow", "Almacenes", 0, QApplication::UnicodeUTF8));
        actionProveedores->setText(QApplication::translate("MainWindow", "Proveedores", 0, QApplication::UnicodeUTF8));
        actionProveedores->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionCompras->setText(QApplication::translate("MainWindow", "Compras", 0, QApplication::UnicodeUTF8));
        actionCompras->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionGuardar->setText(QApplication::translate("MainWindow", "Guardar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGuardar->setToolTip(QApplication::translate("MainWindow", "guardar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGuardar->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionCancelar->setText(QApplication::translate("MainWindow", "Cancelar", 0, QApplication::UnicodeUTF8));
        actionCancelar->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionReportes->setText(QApplication::translate("MainWindow", "Reportes", 0, QApplication::UnicodeUTF8));
        actionReportes->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionVentas->setText(QApplication::translate("MainWindow", "Ventas", 0, QApplication::UnicodeUTF8));
        toolBar_modulos->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        options_toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
