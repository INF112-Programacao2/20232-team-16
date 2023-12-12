/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

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

class Ui_Cadastro
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_cpf;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_telefone;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_pix;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_senha;

    void setupUi(QDialog *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName("Cadastro");
        Cadastro->resize(640, 480);
        pushButton = new QPushButton(Cadastro);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(540, 440, 80, 24));
        pushButton_2 = new QPushButton(Cadastro);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 440, 80, 24));
        widget = new QWidget(Cadastro);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 49, 561, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout_5->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        lineEdit_cpf = new QLineEdit(widget);
        lineEdit_cpf->setObjectName("lineEdit_cpf");

        horizontalLayout_6->addWidget(lineEdit_cpf);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_telefone = new QLineEdit(widget);
        lineEdit_telefone->setObjectName("lineEdit_telefone");

        horizontalLayout_3->addWidget(lineEdit_telefone);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        lineEdit_pix = new QLineEdit(widget);
        lineEdit_pix->setObjectName("lineEdit_pix");

        horizontalLayout_7->addWidget(lineEdit_pix);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_4->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_senha = new QLineEdit(widget);
        lineEdit_senha->setObjectName("lineEdit_senha");

        horizontalLayout_2->addWidget(lineEdit_senha);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QDialog *Cadastro)
    {
        Cadastro->setWindowTitle(QCoreApplication::translate("Cadastro", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Cadastro", "Cadastrar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Cadastro", "Fechar", nullptr));
        label->setText(QCoreApplication::translate("Cadastro", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("Cadastro", "Nome", nullptr));
        label_6->setText(QCoreApplication::translate("Cadastro", "CPF", nullptr));
        label_3->setText(QCoreApplication::translate("Cadastro", "Telefone", nullptr));
        label_7->setText(QCoreApplication::translate("Cadastro", "PIX", nullptr));
        label_4->setText(QCoreApplication::translate("Cadastro", "E-mail", nullptr));
        label_2->setText(QCoreApplication::translate("Cadastro", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
