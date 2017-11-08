/********************************************************************************
** Form generated from reading UI file 'ventanaparaiso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPARAISO_H
#define UI_VENTANAPARAISO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaParaiso
{
public:
    QWidget *centralwidget;
    QPushButton *crear;
    QTextEdit *textEdit_personas;
    QLabel *label;

    void setupUi(QMainWindow *VentanaParaiso)
    {
        if (VentanaParaiso->objectName().isEmpty())
            VentanaParaiso->setObjectName(QStringLiteral("VentanaParaiso"));
        VentanaParaiso->resize(877, 600);
        VentanaParaiso->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(VentanaParaiso);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        crear = new QPushButton(centralwidget);
        crear->setObjectName(QStringLiteral("crear"));
        crear->setGeometry(QRect(390, 550, 93, 28));
        textEdit_personas = new QTextEdit(centralwidget);
        textEdit_personas->setObjectName(QStringLiteral("textEdit_personas"));
        textEdit_personas->setGeometry(QRect(30, 100, 811, 431));
        textEdit_personas->setStyleSheet(QStringLiteral("background-color: yellow"));
        textEdit_personas->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 351, 81));
        QFont font;
        font.setFamily(QStringLiteral("Book Antiqua"));
        font.setPointSize(26);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border: none;\n"
"background-repeat: none;"));
        label->setAlignment(Qt::AlignCenter);
        VentanaParaiso->setCentralWidget(centralwidget);

        retranslateUi(VentanaParaiso);

        QMetaObject::connectSlotsByName(VentanaParaiso);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaParaiso)
    {
        VentanaParaiso->setWindowTitle(QApplication::translate("VentanaParaiso", "MainWindow", Q_NULLPTR));
        crear->setText(QApplication::translate("VentanaParaiso", "Crear", Q_NULLPTR));
        label->setText(QApplication::translate("VentanaParaiso", "Arbol De La Vida", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaParaiso: public Ui_VentanaParaiso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPARAISO_H
