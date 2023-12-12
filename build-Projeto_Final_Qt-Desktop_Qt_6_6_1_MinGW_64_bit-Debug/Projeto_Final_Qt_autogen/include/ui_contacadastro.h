/********************************************************************************
** Form generated from reading UI file 'contacadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACADASTRO_H
#define UI_CONTACADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContaCadastro
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_banco;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_saldo;

    void setupUi(QDialog *ContaCadastro)
    {
        if (ContaCadastro->objectName().isEmpty())
            ContaCadastro->setObjectName("ContaCadastro");
        ContaCadastro->resize(640, 480);
        pushButton = new QPushButton(ContaCadastro);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 190, 80, 24));
        widget = new QWidget(ContaCadastro);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 60, 341, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout_3->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_banco = new QLineEdit(widget);
        lineEdit_banco->setObjectName("lineEdit_banco");

        horizontalLayout_2->addWidget(lineEdit_banco);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_saldo = new QLineEdit(widget);
        lineEdit_saldo->setObjectName("lineEdit_saldo");

        horizontalLayout->addWidget(lineEdit_saldo);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ContaCadastro);

        QMetaObject::connectSlotsByName(ContaCadastro);
    } // setupUi

    void retranslateUi(QDialog *ContaCadastro)
    {
        ContaCadastro->setWindowTitle(QCoreApplication::translate("ContaCadastro", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ContaCadastro", "Cadastrar", nullptr));
        label->setText(QCoreApplication::translate("ContaCadastro", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("ContaCadastro", "Banco", nullptr));
        label_3->setText(QCoreApplication::translate("ContaCadastro", "Saldo Inicial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContaCadastro: public Ui_ContaCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACADASTRO_H
