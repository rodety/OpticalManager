/********************************************************************************
** Form generated from reading UI file 'ui_statur_bar.ui'
**
** Created: Thu 27. Dec 12:00:26 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_STATUR_BAR_H
#define UI_UI_STATUR_BAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_STATUR_BAR
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_Mensaje;

    void setupUi(QWidget *UI_STATUR_BAR)
    {
        if (UI_STATUR_BAR->objectName().isEmpty())
            UI_STATUR_BAR->setObjectName(QString::fromUtf8("UI_STATUR_BAR"));
        UI_STATUR_BAR->resize(1140, 20);
        UI_STATUR_BAR->setCursor(QCursor(Qt::ArrowCursor));
        gridLayout_2 = new QGridLayout(UI_STATUR_BAR);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Mensaje = new QLabel(UI_STATUR_BAR);
        label_Mensaje->setObjectName(QString::fromUtf8("label_Mensaje"));
        QPalette palette;
        QBrush brush(QColor(106, 106, 106, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        label_Mensaje->setPalette(palette);
        label_Mensaje->setScaledContents(false);
        label_Mensaje->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_Mensaje, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(UI_STATUR_BAR);

        QMetaObject::connectSlotsByName(UI_STATUR_BAR);
    } // setupUi

    void retranslateUi(QWidget *UI_STATUR_BAR)
    {
        UI_STATUR_BAR->setWindowTitle(QApplication::translate("UI_STATUR_BAR", "Form", 0, QApplication::UnicodeUTF8));
        label_Mensaje->setText(QApplication::translate("UI_STATUR_BAR", "User 001 - Last Sesion 07/05/1991 . . . more information here . . .", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UI_STATUR_BAR: public Ui_UI_STATUR_BAR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_STATUR_BAR_H
