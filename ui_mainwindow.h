/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_paraiso;
    QLabel *label_3;
    QPushButton *arbol_de_vida_button;
    QPushButton *no_nacidos_button;
    QPushButton *salvados_button;
    QLabel *label_4;
    QSpinBox *tiempo_spinBox;
    QPushButton *pausa_button;
    QPushButton *reset_button;
    QWidget *tab_mundo;
    QPushButton *nacimiento_button;
    QLabel *label;
    QPushButton *pecar_button;
    QPushButton *consultar_familia_button;
    QPushButton *top_pecadores_button;
    QPushButton *top_santos_button;
    QPushButton *mapa_button;
    QPushButton *pecadores_button;
    QSpinBox *cantidadPersonas;
    QWidget *tab_infierno;
    QLabel *label_2;
    QPushButton *condenar_button;
    QPushButton *condenados_button;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1031, 523);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1041, 531));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tab_paraiso = new QWidget();
        tab_paraiso->setObjectName(QStringLiteral("tab_paraiso"));
        label_3 = new QLabel(tab_paraiso);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 0, 411, 71));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Handwriting"));
        font.setPointSize(48);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setMouseTracking(false);
        arbol_de_vida_button = new QPushButton(tab_paraiso);
        arbol_de_vida_button->setObjectName(QStringLiteral("arbol_de_vida_button"));
        arbol_de_vida_button->setGeometry(QRect(30, 220, 151, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        arbol_de_vida_button->setFont(font1);
        arbol_de_vida_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        no_nacidos_button = new QPushButton(tab_paraiso);
        no_nacidos_button->setObjectName(QStringLiteral("no_nacidos_button"));
        no_nacidos_button->setGeometry(QRect(30, 290, 151, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        no_nacidos_button->setFont(font2);
        no_nacidos_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        salvados_button = new QPushButton(tab_paraiso);
        salvados_button->setObjectName(QStringLiteral("salvados_button"));
        salvados_button->setGeometry(QRect(30, 360, 151, 51));
        salvados_button->setFont(font2);
        salvados_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        label_4 = new QLabel(tab_paraiso);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 160, 61, 41));
        QFont font3;
        font3.setPointSize(9);
        label_4->setFont(font3);
        tiempo_spinBox = new QSpinBox(tab_paraiso);
        tiempo_spinBox->setObjectName(QStringLiteral("tiempo_spinBox"));
        tiempo_spinBox->setGeometry(QRect(110, 170, 51, 22));
        tiempo_spinBox->setFont(font3);
        tiempo_spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tiempo_spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        tiempo_spinBox->setMaximum(9999);
        tiempo_spinBox->setValue(10);
        pausa_button = new QPushButton(tab_paraiso);
        pausa_button->setObjectName(QStringLiteral("pausa_button"));
        pausa_button->setGeometry(QRect(180, 170, 21, 21));
        pausa_button->setCursor(QCursor(Qt::CrossCursor));
        pausa_button->setStyleSheet(QStringLiteral("border-image: url(:/stop.png);"));
        reset_button = new QPushButton(tab_paraiso);
        reset_button->setObjectName(QStringLiteral("reset_button"));
        reset_button->setGeometry(QRect(220, 170, 31, 21));
        reset_button->setStyleSheet(QStringLiteral("border-image: url(:/restart.png);"));
        tabWidget->addTab(tab_paraiso, QString());
        tab_mundo = new QWidget();
        tab_mundo->setObjectName(QStringLiteral("tab_mundo"));
        nacimiento_button = new QPushButton(tab_mundo);
        nacimiento_button->setObjectName(QStringLiteral("nacimiento_button"));
        nacimiento_button->setGeometry(QRect(30, 140, 231, 31));
        nacimiento_button->setFont(font1);
        nacimiento_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        label = new QLabel(tab_mundo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, -10, 291, 101));
        QFont font4;
        font4.setFamily(QStringLiteral("Poor Richard"));
        font4.setPointSize(48);
        font4.setBold(false);
        font4.setWeight(50);
        label->setFont(font4);
        pecar_button = new QPushButton(tab_mundo);
        pecar_button->setObjectName(QStringLiteral("pecar_button"));
        pecar_button->setGeometry(QRect(30, 180, 231, 31));
        pecar_button->setFont(font1);
        pecar_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        consultar_familia_button = new QPushButton(tab_mundo);
        consultar_familia_button->setObjectName(QStringLiteral("consultar_familia_button"));
        consultar_familia_button->setGeometry(QRect(30, 220, 231, 31));
        consultar_familia_button->setFont(font1);
        consultar_familia_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        top_pecadores_button = new QPushButton(tab_mundo);
        top_pecadores_button->setObjectName(QStringLiteral("top_pecadores_button"));
        top_pecadores_button->setGeometry(QRect(30, 260, 231, 31));
        top_pecadores_button->setFont(font1);
        top_pecadores_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        top_santos_button = new QPushButton(tab_mundo);
        top_santos_button->setObjectName(QStringLiteral("top_santos_button"));
        top_santos_button->setGeometry(QRect(30, 300, 231, 31));
        top_santos_button->setFont(font1);
        top_santos_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        mapa_button = new QPushButton(tab_mundo);
        mapa_button->setObjectName(QStringLiteral("mapa_button"));
        mapa_button->setGeometry(QRect(30, 380, 231, 31));
        mapa_button->setFont(font1);
        mapa_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        pecadores_button = new QPushButton(tab_mundo);
        pecadores_button->setObjectName(QStringLiteral("pecadores_button"));
        pecadores_button->setGeometry(QRect(30, 340, 231, 31));
        pecadores_button->setFont(font1);
        pecadores_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        cantidadPersonas = new QSpinBox(tab_mundo);
        cantidadPersonas->setObjectName(QStringLiteral("cantidadPersonas"));
        cantidadPersonas->setGeometry(QRect(290, 140, 81, 31));
        cantidadPersonas->setStyleSheet(QLatin1String("border: none;\n"
"background-repeat: none;"));
        cantidadPersonas->setButtonSymbols(QAbstractSpinBox::NoButtons);
        cantidadPersonas->setMaximum(9999999);
        tabWidget->addTab(tab_mundo, QString());
        cantidadPersonas->raise();
        nacimiento_button->raise();
        label->raise();
        pecar_button->raise();
        consultar_familia_button->raise();
        top_pecadores_button->raise();
        top_santos_button->raise();
        mapa_button->raise();
        pecadores_button->raise();
        tab_infierno = new QWidget();
        tab_infierno->setObjectName(QStringLiteral("tab_infierno"));
        label_2 = new QLabel(tab_infierno);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 10, 261, 71));
        QFont font5;
        font5.setFamily(QStringLiteral("Chiller"));
        font5.setPointSize(48);
        label_2->setFont(font5);
        condenar_button = new QPushButton(tab_infierno);
        condenar_button->setObjectName(QStringLiteral("condenar_button"));
        condenar_button->setGeometry(QRect(30, 220, 151, 41));
        QFont font6;
        font6.setFamily(QStringLiteral("Chiller"));
        font6.setPointSize(26);
        font6.setBold(false);
        font6.setWeight(50);
        condenar_button->setFont(font6);
        condenar_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        condenados_button = new QPushButton(tab_infierno);
        condenados_button->setObjectName(QStringLiteral("condenados_button"));
        condenados_button->setGeometry(QRect(30, 280, 151, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Chiller"));
        font7.setPointSize(24);
        condenados_button->setFont(font7);
        condenados_button->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        tabWidget->addTab(tab_infierno, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 450, 311, 41));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(true);
        font8.setWeight(75);
        pushButton->setFont(font8);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(199, 199, 199);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PARAISO", Q_NULLPTR));
        arbol_de_vida_button->setText(QApplication::translate("MainWindow", "\303\201rbol de la vida", Q_NULLPTR));
        no_nacidos_button->setText(QApplication::translate("MainWindow", "No nacidos", Q_NULLPTR));
        salvados_button->setText(QApplication::translate("MainWindow", "Salvados", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Tiempo", Q_NULLPTR));
        pausa_button->setText(QString());
        reset_button->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_paraiso), QApplication::translate("MainWindow", "PARAISO", Q_NULLPTR));
        nacimiento_button->setText(QApplication::translate("MainWindow", "Naciemiento", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "MUNDO", Q_NULLPTR));
        pecar_button->setText(QApplication::translate("MainWindow", "Pecar", Q_NULLPTR));
        consultar_familia_button->setText(QApplication::translate("MainWindow", "Consultar Familia", Q_NULLPTR));
        top_pecadores_button->setText(QApplication::translate("MainWindow", "Top 10 Paises Pecadores", Q_NULLPTR));
        top_santos_button->setText(QApplication::translate("MainWindow", "Top 5 paises Santos", Q_NULLPTR));
        mapa_button->setText(QApplication::translate("MainWindow", "Mapa del Mundo", Q_NULLPTR));
        pecadores_button->setText(QApplication::translate("MainWindow", "Pecadores", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_mundo), QApplication::translate("MainWindow", "MUNDO", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "INFIERNO", Q_NULLPTR));
        condenar_button->setText(QApplication::translate("MainWindow", "Condenar", Q_NULLPTR));
        condenados_button->setText(QApplication::translate("MainWindow", "Condenados", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_infierno), QApplication::translate("MainWindow", "INFIERNO", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Consultar por apellido", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
