/********************************************************************************
** Form generated from reading UI file 'mapamundi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPAMUNDI_H
#define UI_MAPAMUNDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapaMundi
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *fondo_oceania3;
    QPushButton *fondo_asia;
    QPushButton *fondo_asia6;
    QPushButton *fondo_asia1;
    QPushButton *fondo_africa1;
    QPushButton *fondo_america;
    QPushButton *fondo_europa1;
    QPushButton *fondo_oceania;
    QPushButton *fondo_europa;
    QPushButton *fondo_asia3;
    QPushButton *fondo_asia4;
    QPushButton *fondo_asia5;
    QPushButton *fondo_africa;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *MapaMundi)
    {
        if (MapaMundi->objectName().isEmpty())
            MapaMundi->setObjectName(QStringLiteral("MapaMundi"));
        MapaMundi->resize(969, 674);
        centralwidget = new QWidget(MapaMundi);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 971, 681));
        label->setStyleSheet(QStringLiteral("background-image: url(:/continentes (1).png);"));
        fondo_oceania3 = new QPushButton(centralwidget);
        fondo_oceania3->setObjectName(QStringLiteral("fondo_oceania3"));
        fondo_oceania3->setGeometry(QRect(720, 360, 231, 71));
        fondo_oceania3->setStyleSheet(QLatin1String("background-color: rgb(255, 197, 149);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia = new QPushButton(centralwidget);
        fondo_asia->setObjectName(QStringLiteral("fondo_asia"));
        fondo_asia->setGeometry(QRect(524, 220, 81, 51));
        fondo_asia->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia6 = new QPushButton(centralwidget);
        fondo_asia6->setObjectName(QStringLiteral("fondo_asia6"));
        fondo_asia6->setGeometry(QRect(640, 290, 201, 81));
        fondo_asia6->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia1 = new QPushButton(centralwidget);
        fondo_asia1->setObjectName(QStringLiteral("fondo_asia1"));
        fondo_asia1->setGeometry(QRect(570, 240, 81, 111));
        fondo_asia1->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_africa1 = new QPushButton(centralwidget);
        fondo_africa1->setObjectName(QStringLiteral("fondo_africa1"));
        fondo_africa1->setGeometry(QRect(440, 250, 41, 31));
        fondo_africa1->setStyleSheet(QLatin1String("background-color: rgb(16, 255, 24);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_america = new QPushButton(centralwidget);
        fondo_america->setObjectName(QStringLiteral("fondo_america"));
        fondo_america->setGeometry(QRect(0, -20, 371, 681));
        fondo_america->setStyleSheet(QLatin1String("background-color: rgb(255, 105, 30);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_europa1 = new QPushButton(centralwidget);
        fondo_europa1->setObjectName(QStringLiteral("fondo_europa1"));
        fondo_europa1->setGeometry(QRect(250, -20, 191, 171));
        fondo_europa1->setStyleSheet(QLatin1String("background-color: rgb(0, 89, 239);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_oceania = new QPushButton(centralwidget);
        fondo_oceania->setObjectName(QStringLiteral("fondo_oceania"));
        fondo_oceania->setGeometry(QRect(770, 420, 181, 131));
        fondo_oceania->setStyleSheet(QLatin1String("background-color: rgb(255, 197, 149);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_europa = new QPushButton(centralwidget);
        fondo_europa->setObjectName(QStringLiteral("fondo_europa"));
        fondo_europa->setGeometry(QRect(370, 50, 191, 211));
        fondo_europa->setStyleSheet(QLatin1String("background-color: rgb(255, 89, 239);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia3 = new QPushButton(centralwidget);
        fondo_asia3->setObjectName(QStringLiteral("fondo_asia3"));
        fondo_asia3->setGeometry(QRect(560, -20, 431, 351));
        fondo_asia3->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia4 = new QPushButton(centralwidget);
        fondo_asia4->setObjectName(QStringLiteral("fondo_asia4"));
        fondo_asia4->setGeometry(QRect(550, 240, 75, 81));
        fondo_asia4->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_asia5 = new QPushButton(centralwidget);
        fondo_asia5->setObjectName(QStringLiteral("fondo_asia5"));
        fondo_asia5->setGeometry(QRect(540, 240, 41, 61));
        fondo_asia5->setStyleSheet(QLatin1String("background-color: rgb(255, 250, 80);\n"
"border: none;\n"
"background-repeat: none;"));
        fondo_africa = new QPushButton(centralwidget);
        fondo_africa->setObjectName(QStringLiteral("fondo_africa"));
        fondo_africa->setGeometry(QRect(380, 260, 261, 291));
        fondo_africa->setStyleSheet(QLatin1String("background-color: rgb(16, 255, 24);\n"
"border: none;\n"
"background-repeat: none;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 630, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 630, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(680, 630, 75, 23));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(760, 630, 75, 23));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(840, 630, 75, 23));
        MapaMundi->setCentralWidget(centralwidget);
        fondo_america->raise();
        fondo_europa->raise();
        fondo_europa1->raise();
        fondo_africa->raise();
        fondo_oceania->raise();
        fondo_oceania3->raise();
        fondo_asia6->raise();
        fondo_asia4->raise();
        fondo_asia1->raise();
        fondo_asia->raise();
        fondo_asia5->raise();
        fondo_asia3->raise();
        fondo_africa1->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        label->raise();

        retranslateUi(MapaMundi);

        QMetaObject::connectSlotsByName(MapaMundi);
    } // setupUi

    void retranslateUi(QMainWindow *MapaMundi)
    {
        MapaMundi->setWindowTitle(QApplication::translate("MapaMundi", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        fondo_oceania3->setText(QString());
        fondo_asia->setText(QString());
        fondo_asia6->setText(QString());
        fondo_asia1->setText(QString());
        fondo_africa1->setText(QString());
        fondo_america->setText(QString());
        fondo_europa1->setText(QString());
        fondo_oceania->setText(QString());
        fondo_europa->setText(QString());
        fondo_asia3->setText(QString());
        fondo_asia4->setText(QString());
        fondo_asia5->setText(QString());
        fondo_africa->setText(QString());
        pushButton->setText(QApplication::translate("MapaMundi", "Am\303\251rica", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MapaMundi", "Europa", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MapaMundi", "Africa", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MapaMundi", "Asia", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MapaMundi", "Oceania", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapaMundi: public Ui_MapaMundi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPAMUNDI_H
