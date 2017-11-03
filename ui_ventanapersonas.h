/********************************************************************************
** Form generated from reading UI file 'ventanapersonas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPERSONAS_H
#define UI_VENTANAPERSONAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaPersonas
{
public:
    QWidget *centralwidget;
    QPushButton *crear;
    QTextEdit *textPersonas;

    void setupUi(QMainWindow *ventanaPersonas)
    {
        if (ventanaPersonas->objectName().isEmpty())
            ventanaPersonas->setObjectName(QStringLiteral("ventanaPersonas"));
        ventanaPersonas->resize(1007, 522);
        ventanaPersonas->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0.83, x2:1, y2:0.437364, stop:0 rgba(14, 8, 73, 255), stop:0.124378 rgba(28, 17, 145, 255), stop:0.38806 rgba(126, 14, 81, 255), stop:0.671642 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.850746 rgba(255, 136, 0, 255), stop:1 rgba(235, 233, 70, 255));"));
        centralwidget = new QWidget(ventanaPersonas);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        crear = new QPushButton(centralwidget);
        crear->setObjectName(QStringLiteral("crear"));
        crear->setGeometry(QRect(450, 420, 93, 28));
        crear->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255));"));
        textPersonas = new QTextEdit(centralwidget);
        textPersonas->setObjectName(QStringLiteral("textPersonas"));
        textPersonas->setGeometry(QRect(50, 30, 921, 341));
        textPersonas->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 192), stop:1 rgba(255, 255, 255, 228));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.00497512 rgba(255, 255, 255, 192), stop:1 rgba(255, 255, 255, 189));"));
        textPersonas->setReadOnly(true);
        ventanaPersonas->setCentralWidget(centralwidget);

        retranslateUi(ventanaPersonas);

        QMetaObject::connectSlotsByName(ventanaPersonas);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPersonas)
    {
        ventanaPersonas->setWindowTitle(QApplication::translate("ventanaPersonas", "MainWindow", Q_NULLPTR));
        crear->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ventanaPersonas: public Ui_ventanaPersonas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPERSONAS_H
