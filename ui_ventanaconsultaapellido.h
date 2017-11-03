/********************************************************************************
** Form generated from reading UI file 'ventanaconsultaapellido.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONSULTAAPELLIDO_H
#define UI_VENTANACONSULTAAPELLIDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaConsultaApellido
{
public:
    QWidget *centralwidget;
    QComboBox *apellidos_box;
    QComboBox *paises_box;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *text_edit;
    QPushButton *consulta_button;

    void setupUi(QMainWindow *VentanaConsultaApellido)
    {
        if (VentanaConsultaApellido->objectName().isEmpty())
            VentanaConsultaApellido->setObjectName(QStringLiteral("VentanaConsultaApellido"));
        VentanaConsultaApellido->resize(808, 572);
        centralwidget = new QWidget(VentanaConsultaApellido);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        apellidos_box = new QComboBox(centralwidget);
        apellidos_box->setObjectName(QStringLiteral("apellidos_box"));
        apellidos_box->setGeometry(QRect(130, 210, 131, 22));
        paises_box = new QComboBox(centralwidget);
        paises_box->setObjectName(QStringLiteral("paises_box"));
        paises_box->setGeometry(QRect(130, 250, 131, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 200, 71, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 250, 41, 21));
        label_2->setFont(font);
        text_edit = new QPlainTextEdit(centralwidget);
        text_edit->setObjectName(QStringLiteral("text_edit"));
        text_edit->setGeometry(QRect(280, 10, 511, 541));
        text_edit->setReadOnly(true);
        consulta_button = new QPushButton(centralwidget);
        consulta_button->setObjectName(QStringLiteral("consulta_button"));
        consulta_button->setGeometry(QRect(50, 310, 191, 31));
        VentanaConsultaApellido->setCentralWidget(centralwidget);

        retranslateUi(VentanaConsultaApellido);

        QMetaObject::connectSlotsByName(VentanaConsultaApellido);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaConsultaApellido)
    {
        VentanaConsultaApellido->setWindowTitle(QApplication::translate("VentanaConsultaApellido", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("VentanaConsultaApellido", "Apellido", Q_NULLPTR));
        label_2->setText(QApplication::translate("VentanaConsultaApellido", "Pa\303\255s", Q_NULLPTR));
        consulta_button->setText(QApplication::translate("VentanaConsultaApellido", "Consultar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaConsultaApellido: public Ui_VentanaConsultaApellido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONSULTAAPELLIDO_H
