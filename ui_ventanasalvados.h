/********************************************************************************
** Form generated from reading UI file 'ventanasalvados.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANASALVADOS_H
#define UI_VENTANASALVADOS_H

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

class Ui_VentanaSalvados
{
public:
    QPushButton *crear;
    QTextEdit *textEdit_paraiso;
    QLabel *label;

    void setupUi(QDialog *VentanaSalvados)
    {
        if (VentanaSalvados->objectName().isEmpty())
            VentanaSalvados->setObjectName(QStringLiteral("VentanaSalvados"));
        VentanaSalvados->resize(772, 464);
        crear = new QPushButton(VentanaSalvados);
        crear->setObjectName(QStringLiteral("crear"));
        crear->setGeometry(QRect(340, 410, 93, 28));
        textEdit_paraiso = new QTextEdit(VentanaSalvados);
        textEdit_paraiso->setObjectName(QStringLiteral("textEdit_paraiso"));
        textEdit_paraiso->setGeometry(QRect(50, 80, 671, 311));
        textEdit_paraiso->setReadOnly(true);
        label = new QLabel(VentanaSalvados);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 451, 61));
        QFont font;
        font.setFamily(QStringLiteral("Book Antiqua"));
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(VentanaSalvados);

        QMetaObject::connectSlotsByName(VentanaSalvados);
    } // setupUi

    void retranslateUi(QDialog *VentanaSalvados)
    {
        VentanaSalvados->setWindowTitle(QApplication::translate("VentanaSalvados", "Dialog", Q_NULLPTR));
        crear->setText(QApplication::translate("VentanaSalvados", "Crear", Q_NULLPTR));
        label->setText(QApplication::translate("VentanaSalvados", "Humanos en el Paraiso", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaSalvados: public Ui_VentanaSalvados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANASALVADOS_H
