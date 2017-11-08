/********************************************************************************
** Form generated from reading UI file 'ventananonacidos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANANONACIDOS_H
#define UI_VENTANANONACIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VentanaNoNacidos
{
public:
    QTextEdit *textEdit_no_nacidos;
    QPushButton *crear;
    QLabel *label;

    void setupUi(QDialog *VentanaNoNacidos)
    {
        if (VentanaNoNacidos->objectName().isEmpty())
            VentanaNoNacidos->setObjectName(QStringLiteral("VentanaNoNacidos"));
        VentanaNoNacidos->resize(780, 483);
        textEdit_no_nacidos = new QTextEdit(VentanaNoNacidos);
        textEdit_no_nacidos->setObjectName(QStringLiteral("textEdit_no_nacidos"));
        textEdit_no_nacidos->setGeometry(QRect(50, 100, 671, 311));
        textEdit_no_nacidos->setReadOnly(true);
        crear = new QPushButton(VentanaNoNacidos);
        crear->setObjectName(QStringLiteral("crear"));
        crear->setGeometry(QRect(340, 430, 93, 28));
        label = new QLabel(VentanaNoNacidos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 451, 61));
        QFont font;
        font.setFamily(QStringLiteral("Book Antiqua"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(VentanaNoNacidos);

        QMetaObject::connectSlotsByName(VentanaNoNacidos);
    } // setupUi

    void retranslateUi(QDialog *VentanaNoNacidos)
    {
        VentanaNoNacidos->setWindowTitle(QApplication::translate("VentanaNoNacidos", "Dialog", Q_NULLPTR));
        crear->setText(QApplication::translate("VentanaNoNacidos", "Crear", Q_NULLPTR));
        label->setText(QApplication::translate("VentanaNoNacidos", "No Nacidos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaNoNacidos: public Ui_VentanaNoNacidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANANONACIDOS_H
