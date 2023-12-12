/********************************************************************************
** Form generated from reading UI file 'janelaobjetivo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAOBJETIVO_H
#define UI_JANELAOBJETIVO_H

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

class Ui_JanelaObjetivo
{
public:
    QPushButton *btn_definir;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_descricao;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_valor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_data;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_categoria;

    void setupUi(QDialog *JanelaObjetivo)
    {
        if (JanelaObjetivo->objectName().isEmpty())
            JanelaObjetivo->setObjectName("JanelaObjetivo");
        JanelaObjetivo->resize(640, 480);
        btn_definir = new QPushButton(JanelaObjetivo);
        btn_definir->setObjectName("btn_definir");
        btn_definir->setGeometry(QRect(240, 260, 131, 24));
        widget = new QWidget(JanelaObjetivo);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 60, 351, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_descricao = new QLineEdit(widget);
        lineEdit_descricao->setObjectName("lineEdit_descricao");

        horizontalLayout_2->addWidget(lineEdit_descricao);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_valor = new QLineEdit(widget);
        lineEdit_valor->setObjectName("lineEdit_valor");

        horizontalLayout_3->addWidget(lineEdit_valor);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_data = new QLineEdit(widget);
        lineEdit_data->setObjectName("lineEdit_data");

        horizontalLayout_4->addWidget(lineEdit_data);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_5);

        comboBox_categoria = new QComboBox(widget);
        comboBox_categoria->setObjectName("comboBox_categoria");

        horizontalLayout_5->addWidget(comboBox_categoria);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(JanelaObjetivo);

        QMetaObject::connectSlotsByName(JanelaObjetivo);
    } // setupUi

    void retranslateUi(QDialog *JanelaObjetivo)
    {
        JanelaObjetivo->setWindowTitle(QCoreApplication::translate("JanelaObjetivo", "Novo Objetivo", nullptr));
        btn_definir->setText(QCoreApplication::translate("JanelaObjetivo", "Definir Objetivo", nullptr));
        label->setText(QCoreApplication::translate("JanelaObjetivo", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaObjetivo", "Descri\303\247\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaObjetivo", "Valor da meta", nullptr));
        label_4->setText(QCoreApplication::translate("JanelaObjetivo", "Data limite", nullptr));
        label_5->setText(QCoreApplication::translate("JanelaObjetivo", "Categoria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaObjetivo: public Ui_JanelaObjetivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAOBJETIVO_H
