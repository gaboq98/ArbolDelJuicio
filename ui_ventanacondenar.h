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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_VentanaCondenar
{
public:

    void setupUi(QDialog *VentanaCondenar)
    {
        if (VentanaCondenar->objectName().isEmpty())
            VentanaCondenar->setObjectName(QStringLiteral("VentanaCondenar"));
        VentanaCondenar->resize(400, 300);

        retranslateUi(VentanaCondenar);

        QMetaObject::connectSlotsByName(VentanaCondenar);
    } // setupUi

    void retranslateUi(QDialog *VentanaCondenar)
    {
        VentanaCondenar->setWindowTitle(QApplication::translate("VentanaCondenar", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaCondenar: public Ui_VentanaCondenar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONDENAR_H
