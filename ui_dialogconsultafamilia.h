/********************************************************************************
** Form generated from reading UI file 'dialogconsultafamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONSULTAFAMILIA_H
#define UI_DIALOGCONSULTAFAMILIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogConsultaFamilia
{
public:
    QLineEdit *input;
    QLabel *label;
    QPushButton *consultar_button;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *DialogConsultaFamilia)
    {
        if (DialogConsultaFamilia->objectName().isEmpty())
            DialogConsultaFamilia->setObjectName(QStringLiteral("DialogConsultaFamilia"));
        DialogConsultaFamilia->resize(872, 541);
        input = new QLineEdit(DialogConsultaFamilia);
        input->setObjectName(QStringLiteral("input"));
        input->setGeometry(QRect(50, 290, 201, 21));
        label = new QLabel(DialogConsultaFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 290, 31, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        consultar_button = new QPushButton(DialogConsultaFamilia);
        consultar_button->setObjectName(QStringLiteral("consultar_button"));
        consultar_button->setGeometry(QRect(20, 330, 231, 31));
        QFont font1;
        font1.setPointSize(14);
        consultar_button->setFont(font1);
        treeWidget = new QTreeWidget(DialogConsultaFamilia);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(260, 11, 601, 511));

        retranslateUi(DialogConsultaFamilia);

        QMetaObject::connectSlotsByName(DialogConsultaFamilia);
    } // setupUi

    void retranslateUi(QDialog *DialogConsultaFamilia)
    {
        DialogConsultaFamilia->setWindowTitle(QApplication::translate("DialogConsultaFamilia", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogConsultaFamilia", "ID", Q_NULLPTR));
        consultar_button->setText(QApplication::translate("DialogConsultaFamilia", "Consultar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogConsultaFamilia: public Ui_DialogConsultaFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONSULTAFAMILIA_H
