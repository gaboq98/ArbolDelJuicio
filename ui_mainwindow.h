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
    QWidget *tab_mundo;
    QPushButton *nacimiento_button;
    QLabel *label;
    QPushButton *pecar_button;
    QPushButton *consultar_familia_button;
    QPushButton *top_pecadores_button;
    QPushButton *top_santos_button;
    QPushButton *mapa_button;
    QPushButton *pecadores_button;
    QSpinBox *spinBox;
    QWidget *tab_infierno;
    QLabel *label_2;
    QPushButton *condenar_button;
    QPushButton *condenados_button;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1043, 523);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 991, 411));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_paraiso = new QWidget();
        tab_paraiso->setObjectName(QStringLiteral("tab_paraiso"));
        label_3 = new QLabel(tab_paraiso);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 0, 411, 71));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Handwriting"));
        font.setPointSize(48);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setMouseTracking(false);
        arbol_de_vida_button = new QPushButton(tab_paraiso);
        arbol_de_vida_button->setObjectName(QStringLiteral("arbol_de_vida_button"));
        arbol_de_vida_button->setGeometry(QRect(30, 180, 151, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        arbol_de_vida_button->setFont(font1);
        no_nacidos_button = new QPushButton(tab_paraiso);
        no_nacidos_button->setObjectName(QStringLiteral("no_nacidos_button"));
        no_nacidos_button->setGeometry(QRect(30, 250, 151, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        no_nacidos_button->setFont(font2);
        salvados_button = new QPushButton(tab_paraiso);
        salvados_button->setObjectName(QStringLiteral("salvados_button"));
        salvados_button->setGeometry(QRect(30, 320, 151, 51));
        salvados_button->setFont(font2);
        tabWidget->addTab(tab_paraiso, QString());
        tab_mundo = new QWidget();
        tab_mundo->setObjectName(QStringLiteral("tab_mundo"));
        nacimiento_button = new QPushButton(tab_mundo);
        nacimiento_button->setObjectName(QStringLiteral("nacimiento_button"));
        nacimiento_button->setGeometry(QRect(20, 100, 231, 31));
        nacimiento_button->setFont(font1);
        label = new QLabel(tab_mundo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, -10, 331, 101));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI Black"));
        font3.setPointSize(48);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        pecar_button = new QPushButton(tab_mundo);
        pecar_button->setObjectName(QStringLiteral("pecar_button"));
        pecar_button->setGeometry(QRect(20, 140, 231, 31));
        pecar_button->setFont(font1);
        consultar_familia_button = new QPushButton(tab_mundo);
        consultar_familia_button->setObjectName(QStringLiteral("consultar_familia_button"));
        consultar_familia_button->setGeometry(QRect(20, 180, 231, 31));
        consultar_familia_button->setFont(font1);
        top_pecadores_button = new QPushButton(tab_mundo);
        top_pecadores_button->setObjectName(QStringLiteral("top_pecadores_button"));
        top_pecadores_button->setGeometry(QRect(20, 220, 231, 31));
        top_pecadores_button->setFont(font1);
        top_santos_button = new QPushButton(tab_mundo);
        top_santos_button->setObjectName(QStringLiteral("top_santos_button"));
        top_santos_button->setGeometry(QRect(20, 260, 231, 31));
        top_santos_button->setFont(font1);
        mapa_button = new QPushButton(tab_mundo);
        mapa_button->setObjectName(QStringLiteral("mapa_button"));
        mapa_button->setGeometry(QRect(20, 340, 231, 31));
        mapa_button->setFont(font1);
        pecadores_button = new QPushButton(tab_mundo);
        pecadores_button->setObjectName(QStringLiteral("pecadores_button"));
        pecadores_button->setGeometry(QRect(20, 300, 231, 31));
        pecadores_button->setFont(font1);
        spinBox = new QSpinBox(tab_mundo);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(260, 100, 71, 31));
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        tabWidget->addTab(tab_mundo, QString());
        tab_infierno = new QWidget();
        tab_infierno->setObjectName(QStringLiteral("tab_infierno"));
        label_2 = new QLabel(tab_infierno);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 0, 261, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("Chiller"));
        font4.setPointSize(48);
        label_2->setFont(font4);
        condenar_button = new QPushButton(tab_infierno);
        condenar_button->setObjectName(QStringLiteral("condenar_button"));
        condenar_button->setGeometry(QRect(20, 220, 131, 41));
        condenar_button->setFont(font2);
        condenar_button->setStyleSheet(QStringLiteral(""));
        condenados_button = new QPushButton(tab_infierno);
        condenados_button->setObjectName(QStringLiteral("condenados_button"));
        condenados_button->setGeometry(QRect(20, 280, 131, 41));
        condenados_button->setFont(font1);
        condenados_button->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tab_infierno, QString());
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 450, 311, 41));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton->setFont(font5);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PARAISO", Q_NULLPTR));
        arbol_de_vida_button->setText(QApplication::translate("MainWindow", "\303\201rbol de la vida", Q_NULLPTR));
        no_nacidos_button->setText(QApplication::translate("MainWindow", "No nacidos", Q_NULLPTR));
        salvados_button->setText(QApplication::translate("MainWindow", "Salvados", Q_NULLPTR));
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
        condenados_button->setText(QApplication::translate("MainWindow", "Consdenados", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_infierno), QApplication::translate("MainWindow", "INFIERNO", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Consultar por apellido", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
