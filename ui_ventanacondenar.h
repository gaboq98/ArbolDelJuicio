/********************************************************************************
** Form generated from reading UI file 'ventanacondenar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONDENAR_H
#define UI_VENTANACONDENAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VentanaCondenar
{
public:
    QComboBox *paises_box;
    QPushButton *condenar_button;

    void setupUi(QDialog *VentanaCondenar)
    {
        if (VentanaCondenar->objectName().isEmpty())
            VentanaCondenar->setObjectName(QStringLiteral("VentanaCondenar"));
        VentanaCondenar->resize(418, 277);
        paises_box = new QComboBox(VentanaCondenar);
        paises_box->setObjectName(QStringLiteral("paises_box"));
        paises_box->setGeometry(QRect(70, 90, 261, 22));
        condenar_button = new QPushButton(VentanaCondenar);
        condenar_button->setObjectName(QStringLiteral("condenar_button"));
        condenar_button->setGeometry(QRect(70, 130, 261, 23));

        retranslateUi(VentanaCondenar);

        QMetaObject::connectSlotsByName(VentanaCondenar);
    } // setupUi

    void retranslateUi(QDialog *VentanaCondenar)
    {
        VentanaCondenar->setWindowTitle(QApplication::translate("VentanaCondenar", "Dialog", Q_NULLPTR));
        condenar_button->setText(QApplication::translate("VentanaCondenar", "Condenar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaCondenar: public Ui_VentanaCondenar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONDENAR_H
