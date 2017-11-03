/********************************************************************************
** Form generated from reading UI file 'top10paises.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOP10PAISES_H
#define UI_TOP10PAISES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Top10paises
{
public:
    QLabel *Qtitulo;
    QPlainTextEdit *Qtext;

    void setupUi(QDialog *Top10paises)
    {
        if (Top10paises->objectName().isEmpty())
            Top10paises->setObjectName(QStringLiteral("Top10paises"));
        Top10paises->resize(485, 408);
        Qtitulo = new QLabel(Top10paises);
        Qtitulo->setObjectName(QStringLiteral("Qtitulo"));
        Qtitulo->setGeometry(QRect(30, 10, 411, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        Qtitulo->setFont(font);
        Qtext = new QPlainTextEdit(Top10paises);
        Qtext->setObjectName(QStringLiteral("Qtext"));
        Qtext->setGeometry(QRect(50, 100, 371, 281));
        Qtext->setStyleSheet(QLatin1String("background: none;\n"
""));
        Qtext->setReadOnly(true);

        retranslateUi(Top10paises);

        QMetaObject::connectSlotsByName(Top10paises);
    } // setupUi

    void retranslateUi(QDialog *Top10paises)
    {
        Top10paises->setWindowTitle(QApplication::translate("Top10paises", "Dialog", Q_NULLPTR));
        Qtitulo->setText(QApplication::translate("Top10paises", "QText", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Top10paises: public Ui_Top10paises {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOP10PAISES_H
