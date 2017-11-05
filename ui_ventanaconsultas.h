/********************************************************************************
** Form generated from reading UI file 'ventanaconsultas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONSULTAS_H
#define UI_VENTANACONSULTAS_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaConsultas
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QRadioButton *consu_apellido;
    QRadioButton *consu_continente;
    QRadioButton *consu_creencia;
    QRadioButton *consu_profesion;
    QLabel *label;
    QPushButton *pushButton;
    QRadioButton *consu_paises;
    QComboBox *profesiones_comboBox;
    QComboBox *paises_comboBox;
    QComboBox *creencias_comboBox;
    QComboBox *continentes_comboBox;
    QComboBox *apellidos_comboBox;

    void setupUi(QMainWindow *ventanaConsultas)
    {
        if (ventanaConsultas->objectName().isEmpty())
            ventanaConsultas->setObjectName(QStringLiteral("ventanaConsultas"));
        ventanaConsultas->resize(984, 645);
        centralwidget = new QWidget(ventanaConsultas);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(360, 20, 591, 601));
        plainTextEdit->setReadOnly(true);
        consu_apellido = new QRadioButton(centralwidget);
        consu_apellido->setObjectName(QStringLiteral("consu_apellido"));
        consu_apellido->setGeometry(QRect(60, 210, 101, 20));
        QFont font;
        font.setPointSize(9);
        consu_apellido->setFont(font);
        consu_apellido->setChecked(false);
        consu_continente = new QRadioButton(centralwidget);
        consu_continente->setObjectName(QStringLiteral("consu_continente"));
        consu_continente->setGeometry(QRect(60, 260, 101, 20));
        consu_continente->setFont(font);
        consu_continente->setChecked(false);
        consu_creencia = new QRadioButton(centralwidget);
        consu_creencia->setObjectName(QStringLiteral("consu_creencia"));
        consu_creencia->setGeometry(QRect(60, 310, 101, 20));
        consu_creencia->setFont(font);
        consu_creencia->setChecked(false);
        consu_profesion = new QRadioButton(centralwidget);
        consu_profesion->setObjectName(QStringLiteral("consu_profesion"));
        consu_profesion->setGeometry(QRect(60, 410, 101, 20));
        consu_profesion->setFont(font);
        consu_profesion->setChecked(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 291, 91));
        QFont font1;
        font1.setPointSize(37);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 490, 161, 41));
        pushButton->setFont(font);
        consu_paises = new QRadioButton(centralwidget);
        consu_paises->setObjectName(QStringLiteral("consu_paises"));
        consu_paises->setGeometry(QRect(60, 360, 101, 20));
        consu_paises->setFont(font);
        profesiones_comboBox = new QComboBox(centralwidget);
        profesiones_comboBox->setObjectName(QStringLiteral("profesiones_comboBox"));
        profesiones_comboBox->setGeometry(QRect(180, 410, 141, 22));
        paises_comboBox = new QComboBox(centralwidget);
        paises_comboBox->setObjectName(QStringLiteral("paises_comboBox"));
        paises_comboBox->setGeometry(QRect(180, 360, 141, 22));
        creencias_comboBox = new QComboBox(centralwidget);
        creencias_comboBox->setObjectName(QStringLiteral("creencias_comboBox"));
        creencias_comboBox->setGeometry(QRect(180, 310, 141, 22));
        continentes_comboBox = new QComboBox(centralwidget);
        continentes_comboBox->setObjectName(QStringLiteral("continentes_comboBox"));
        continentes_comboBox->setGeometry(QRect(180, 260, 141, 22));
        apellidos_comboBox = new QComboBox(centralwidget);
        apellidos_comboBox->setObjectName(QStringLiteral("apellidos_comboBox"));
        apellidos_comboBox->setGeometry(QRect(180, 210, 141, 22));
        ventanaConsultas->setCentralWidget(centralwidget);

        retranslateUi(ventanaConsultas);

        QMetaObject::connectSlotsByName(ventanaConsultas);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaConsultas)
    {
        ventanaConsultas->setWindowTitle(QApplication::translate("ventanaConsultas", "MainWindow", Q_NULLPTR));
        consu_apellido->setText(QApplication::translate("ventanaConsultas", "Apellidos", Q_NULLPTR));
        consu_continente->setText(QApplication::translate("ventanaConsultas", "Continentes", Q_NULLPTR));
        consu_creencia->setText(QApplication::translate("ventanaConsultas", "Creencias", Q_NULLPTR));
        consu_profesion->setText(QApplication::translate("ventanaConsultas", "Profesiones", Q_NULLPTR));
        label->setText(QApplication::translate("ventanaConsultas", "Consultas", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ventanaConsultas", "Consultar", Q_NULLPTR));
        consu_paises->setText(QApplication::translate("ventanaConsultas", "Paises", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ventanaConsultas: public Ui_ventanaConsultas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONSULTAS_H
