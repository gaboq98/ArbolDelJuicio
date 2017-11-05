/********************************************************************************
** Form generated from reading UI file 'condenadosdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDENADOSDIALOG_H
#define UI_CONDENADOSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CondenadosDialog
{
public:
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *CondenadosDialog)
    {
        if (CondenadosDialog->objectName().isEmpty())
            CondenadosDialog->setObjectName(QStringLiteral("CondenadosDialog"));
        CondenadosDialog->resize(651, 530);
        textEdit = new QTextEdit(CondenadosDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 80, 611, 431));
        label = new QLabel(CondenadosDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 231, 41));
        QFont font;
        font.setFamily(QStringLiteral("Chiller"));
        font.setPointSize(36);
        label->setFont(font);

        retranslateUi(CondenadosDialog);

        QMetaObject::connectSlotsByName(CondenadosDialog);
    } // setupUi

    void retranslateUi(QDialog *CondenadosDialog)
    {
        CondenadosDialog->setWindowTitle(QApplication::translate("CondenadosDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CondenadosDialog", "CONDENADOS ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CondenadosDialog: public Ui_CondenadosDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDENADOSDIALOG_H
