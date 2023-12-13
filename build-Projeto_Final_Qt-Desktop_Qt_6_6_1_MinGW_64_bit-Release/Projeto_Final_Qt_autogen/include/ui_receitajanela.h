/********************************************************************************
** Form generated from reading UI file 'receitajanela.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEITAJANELA_H
#define UI_RECEITAJANELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceitaJanela
{
public:
    QPushButton *btn_adicionar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_valor;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_descricao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_data;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_categoria;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *comboBox_conta;

    void setupUi(QDialog *ReceitaJanela)
    {
        if (ReceitaJanela->objectName().isEmpty())
            ReceitaJanela->setObjectName("ReceitaJanela");
        ReceitaJanela->resize(640, 480);
        btn_adicionar = new QPushButton(ReceitaJanela);
        btn_adicionar->setObjectName("btn_adicionar");
        btn_adicionar->setGeometry(QRect(280, 270, 80, 24));
        widget = new QWidget(ReceitaJanela);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 30, 331, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEdit_valor = new QLineEdit(widget);
        lineEdit_valor->setObjectName("lineEdit_valor");

        horizontalLayout_4->addWidget(lineEdit_valor);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEdit_descricao = new QLineEdit(widget);
        lineEdit_descricao->setObjectName("lineEdit_descricao");

        horizontalLayout_3->addWidget(lineEdit_descricao);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_data = new QLineEdit(widget);
        lineEdit_data->setObjectName("lineEdit_data");

        horizontalLayout_2->addWidget(lineEdit_data);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_4);

        comboBox_categoria = new QComboBox(widget);
        comboBox_categoria->setObjectName("comboBox_categoria");

        horizontalLayout_5->addWidget(comboBox_categoria);


        horizontalLayout->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_5);

        comboBox_conta = new QComboBox(widget);
        comboBox_conta->setObjectName("comboBox_conta");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_conta->sizePolicy().hasHeightForWidth());
        comboBox_conta->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(comboBox_conta);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ReceitaJanela);

        QMetaObject::connectSlotsByName(ReceitaJanela);
    } // setupUi

    void retranslateUi(QDialog *ReceitaJanela)
    {
        ReceitaJanela->setWindowTitle(QCoreApplication::translate("ReceitaJanela", "Dialog", nullptr));
        btn_adicionar->setText(QCoreApplication::translate("ReceitaJanela", "Adicionar", nullptr));
        label->setText(QCoreApplication::translate("ReceitaJanela", "Valor", nullptr));
        label_2->setText(QCoreApplication::translate("ReceitaJanela", "Descri\303\247\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("ReceitaJanela", "Data", nullptr));
        label_4->setText(QCoreApplication::translate("ReceitaJanela", "Categoria", nullptr));
        label_5->setText(QCoreApplication::translate("ReceitaJanela", "Conta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReceitaJanela: public Ui_ReceitaJanela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEITAJANELA_H
