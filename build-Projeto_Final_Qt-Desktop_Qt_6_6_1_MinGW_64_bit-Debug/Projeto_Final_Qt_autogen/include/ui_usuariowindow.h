/********************************************************************************
** Form generated from reading UI file 'usuariowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USUARIOWINDOW_H
#define UI_USUARIOWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsuarioWindow
{
public:
    QAction *actionInforma_es;
    QAction *actionCriar_conta;
    QAction *actionExcluir_conta;
    QAction *actionCriar_conta_compartilhada;
    QAction *actionExcluir_conta_compartilhada;
    QAction *actionCriar_categoria;
    QAction *actionExcluir_categoria;
    QAction *actionDefinir_objetivo;
    QAction *actionExcluir_objetivo;
    QAction *actionVisualizar_notifica_es;
    QAction *actionExcluir_objetivo_despesa;
    QWidget *centralwidget;
    QLabel *label_saldo_total;
    QPushButton *btn_nova_despesa;
    QPushButton *btn_nova_receira;
    QLabel *label_saldo_total_numero;
    QPushButton *btn_atualizar;
    QTableWidget *tabela_banco;
    QTableWidget *tabela_transacao;
    QPushButton *btn_sair;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_alterar;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QProgressBar *progressBar_objetivo;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_alterar_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QProgressBar *progressBar_objetivo_4;
    QMenuBar *menubar;
    QMenu *menuUsu_rio;
    QMenu *menuConta;
    QMenu *menuConta_Compartilhada;
    QMenu *menuCategorias;
    QMenu *menuObjetivos;
    QMenu *menuNotifica_es;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UsuarioWindow)
    {
        if (UsuarioWindow->objectName().isEmpty())
            UsuarioWindow->setObjectName("UsuarioWindow");
        UsuarioWindow->resize(640, 480);
        UsuarioWindow->setAutoFillBackground(false);
        actionInforma_es = new QAction(UsuarioWindow);
        actionInforma_es->setObjectName("actionInforma_es");
        actionCriar_conta = new QAction(UsuarioWindow);
        actionCriar_conta->setObjectName("actionCriar_conta");
        actionExcluir_conta = new QAction(UsuarioWindow);
        actionExcluir_conta->setObjectName("actionExcluir_conta");
        actionCriar_conta_compartilhada = new QAction(UsuarioWindow);
        actionCriar_conta_compartilhada->setObjectName("actionCriar_conta_compartilhada");
        actionCriar_conta_compartilhada->setCheckable(false);
        actionCriar_conta_compartilhada->setEnabled(true);
        actionExcluir_conta_compartilhada = new QAction(UsuarioWindow);
        actionExcluir_conta_compartilhada->setObjectName("actionExcluir_conta_compartilhada");
        actionCriar_categoria = new QAction(UsuarioWindow);
        actionCriar_categoria->setObjectName("actionCriar_categoria");
        actionExcluir_categoria = new QAction(UsuarioWindow);
        actionExcluir_categoria->setObjectName("actionExcluir_categoria");
        actionDefinir_objetivo = new QAction(UsuarioWindow);
        actionDefinir_objetivo->setObjectName("actionDefinir_objetivo");
        actionExcluir_objetivo = new QAction(UsuarioWindow);
        actionExcluir_objetivo->setObjectName("actionExcluir_objetivo");
        actionVisualizar_notifica_es = new QAction(UsuarioWindow);
        actionVisualizar_notifica_es->setObjectName("actionVisualizar_notifica_es");
        actionExcluir_objetivo_despesa = new QAction(UsuarioWindow);
        actionExcluir_objetivo_despesa->setObjectName("actionExcluir_objetivo_despesa");
        centralwidget = new QWidget(UsuarioWindow);
        centralwidget->setObjectName("centralwidget");
        label_saldo_total = new QLabel(centralwidget);
        label_saldo_total->setObjectName("label_saldo_total");
        label_saldo_total->setGeometry(QRect(10, 40, 101, 21));
        btn_nova_despesa = new QPushButton(centralwidget);
        btn_nova_despesa->setObjectName("btn_nova_despesa");
        btn_nova_despesa->setGeometry(QRect(10, 380, 80, 24));
        btn_nova_receira = new QPushButton(centralwidget);
        btn_nova_receira->setObjectName("btn_nova_receira");
        btn_nova_receira->setGeometry(QRect(280, 380, 80, 24));
        label_saldo_total_numero = new QLabel(centralwidget);
        label_saldo_total_numero->setObjectName("label_saldo_total_numero");
        label_saldo_total_numero->setGeometry(QRect(80, 40, 71, 20));
        btn_atualizar = new QPushButton(centralwidget);
        btn_atualizar->setObjectName("btn_atualizar");
        btn_atualizar->setGeometry(QRect(10, 10, 80, 24));
        tabela_banco = new QTableWidget(centralwidget);
        if (tabela_banco->columnCount() < 3)
            tabela_banco->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela_banco->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela_banco->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela_banco->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabela_banco->setObjectName("tabela_banco");
        tabela_banco->setEnabled(true);
        tabela_banco->setGeometry(QRect(10, 60, 317, 121));
        tabela_banco->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela_banco->setSelectionMode(QAbstractItemView::SingleSelection);
        tabela_banco->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabela_banco->setShowGrid(true);
        tabela_transacao = new QTableWidget(centralwidget);
        if (tabela_transacao->columnCount() < 6)
            tabela_transacao->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabela_transacao->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        tabela_transacao->setObjectName("tabela_transacao");
        tabela_transacao->setGeometry(QRect(10, 190, 621, 171));
        tabela_transacao->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabela_transacao->setSelectionMode(QAbstractItemView::SingleSelection);
        tabela_transacao->setSelectionBehavior(QAbstractItemView::SelectRows);
        btn_sair = new QPushButton(centralwidget);
        btn_sair->setObjectName("btn_sair");
        btn_sair->setGeometry(QRect(540, 10, 80, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 120, 281, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_alterar = new QPushButton(layoutWidget);
        btn_alterar->setObjectName("btn_alterar");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_alterar->sizePolicy().hasHeightForWidth());
        btn_alterar->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btn_alterar);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        progressBar_objetivo = new QProgressBar(layoutWidget);
        progressBar_objetivo->setObjectName("progressBar_objetivo");
        progressBar_objetivo->setValue(0);

        horizontalLayout_2->addWidget(progressBar_objetivo);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(340, 50, 281, 61));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        btn_alterar_4 = new QPushButton(layoutWidget_2);
        btn_alterar_4->setObjectName("btn_alterar_4");
        sizePolicy.setHeightForWidth(btn_alterar_4->sizePolicy().hasHeightForWidth());
        btn_alterar_4->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(btn_alterar_4);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        progressBar_objetivo_4 = new QProgressBar(layoutWidget_2);
        progressBar_objetivo_4->setObjectName("progressBar_objetivo_4");
        progressBar_objetivo_4->setValue(0);

        horizontalLayout_8->addWidget(progressBar_objetivo_4);


        verticalLayout_4->addLayout(horizontalLayout_8);

        UsuarioWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UsuarioWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 640, 21));
        menuUsu_rio = new QMenu(menubar);
        menuUsu_rio->setObjectName("menuUsu_rio");
        menuConta = new QMenu(menubar);
        menuConta->setObjectName("menuConta");
        menuConta_Compartilhada = new QMenu(menubar);
        menuConta_Compartilhada->setObjectName("menuConta_Compartilhada");
        menuConta_Compartilhada->setEnabled(false);
        menuCategorias = new QMenu(menubar);
        menuCategorias->setObjectName("menuCategorias");
        menuObjetivos = new QMenu(menubar);
        menuObjetivos->setObjectName("menuObjetivos");
        menuNotifica_es = new QMenu(menubar);
        menuNotifica_es->setObjectName("menuNotifica_es");
        menuNotifica_es->setEnabled(false);
        UsuarioWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UsuarioWindow);
        statusbar->setObjectName("statusbar");
        UsuarioWindow->setStatusBar(statusbar);

        menubar->addAction(menuUsu_rio->menuAction());
        menubar->addAction(menuConta->menuAction());
        menubar->addAction(menuConta_Compartilhada->menuAction());
        menubar->addAction(menuCategorias->menuAction());
        menubar->addAction(menuObjetivos->menuAction());
        menubar->addAction(menuNotifica_es->menuAction());
        menuUsu_rio->addAction(actionInforma_es);
        menuConta->addAction(actionCriar_conta);
        menuConta->addAction(actionExcluir_conta);
        menuConta_Compartilhada->addAction(actionCriar_conta_compartilhada);
        menuConta_Compartilhada->addAction(actionExcluir_conta_compartilhada);
        menuCategorias->addAction(actionCriar_categoria);
        menuCategorias->addAction(actionExcluir_categoria);
        menuObjetivos->addAction(actionDefinir_objetivo);
        menuObjetivos->addAction(actionExcluir_objetivo);
        menuObjetivos->addAction(actionExcluir_objetivo_despesa);
        menuNotifica_es->addAction(actionVisualizar_notifica_es);

        retranslateUi(UsuarioWindow);

        QMetaObject::connectSlotsByName(UsuarioWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UsuarioWindow)
    {
        UsuarioWindow->setWindowTitle(QCoreApplication::translate("UsuarioWindow", "Painel do usu\303\241rio", nullptr));
        actionInforma_es->setText(QCoreApplication::translate("UsuarioWindow", "Informa\303\247\303\265es", nullptr));
        actionCriar_conta->setText(QCoreApplication::translate("UsuarioWindow", "Criar conta", nullptr));
        actionExcluir_conta->setText(QCoreApplication::translate("UsuarioWindow", "Excluir conta", nullptr));
        actionCriar_conta_compartilhada->setText(QCoreApplication::translate("UsuarioWindow", "Criar conta compartilhada", nullptr));
        actionExcluir_conta_compartilhada->setText(QCoreApplication::translate("UsuarioWindow", "Excluir conta compartilhada", nullptr));
        actionCriar_categoria->setText(QCoreApplication::translate("UsuarioWindow", "Criar categoria", nullptr));
        actionExcluir_categoria->setText(QCoreApplication::translate("UsuarioWindow", "Excluir categoria", nullptr));
        actionDefinir_objetivo->setText(QCoreApplication::translate("UsuarioWindow", "Definir objetivo", nullptr));
        actionExcluir_objetivo->setText(QCoreApplication::translate("UsuarioWindow", "Excluir objetivo receita", nullptr));
        actionVisualizar_notifica_es->setText(QCoreApplication::translate("UsuarioWindow", "Visualizar notifica\303\247\303\265es", nullptr));
        actionExcluir_objetivo_despesa->setText(QCoreApplication::translate("UsuarioWindow", "Excluir objetivo despesa", nullptr));
        label_saldo_total->setText(QCoreApplication::translate("UsuarioWindow", "Saldo total:", nullptr));
        btn_nova_despesa->setText(QCoreApplication::translate("UsuarioWindow", "Nova despesa", nullptr));
        btn_nova_receira->setText(QCoreApplication::translate("UsuarioWindow", "Nova receita", nullptr));
        label_saldo_total_numero->setText(QCoreApplication::translate("UsuarioWindow", "0", nullptr));
        btn_atualizar->setText(QCoreApplication::translate("UsuarioWindow", "Atualizar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela_banco->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UsuarioWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_banco->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UsuarioWindow", "Banco", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_banco->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UsuarioWindow", "Saldo", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela_transacao->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UsuarioWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela_transacao->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UsuarioWindow", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabela_transacao->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("UsuarioWindow", "Conta", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabela_transacao->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("UsuarioWindow", "Categoria", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabela_transacao->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("UsuarioWindow", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabela_transacao->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("UsuarioWindow", "ID", nullptr));
        btn_sair->setText(QCoreApplication::translate("UsuarioWindow", "Sair", nullptr));
        btn_alterar->setText(QCoreApplication::translate("UsuarioWindow", "Alterar", nullptr));
        label_2->setText(QCoreApplication::translate("UsuarioWindow", "Objetivo:", nullptr));
        label->setText(QCoreApplication::translate("UsuarioWindow", "Progresso:", nullptr));
        btn_alterar_4->setText(QCoreApplication::translate("UsuarioWindow", "Alterar", nullptr));
        label_7->setText(QCoreApplication::translate("UsuarioWindow", "Objetivo:", nullptr));
        label_8->setText(QCoreApplication::translate("UsuarioWindow", "Progresso:", nullptr));
        menuUsu_rio->setTitle(QCoreApplication::translate("UsuarioWindow", "Usu\303\241rio", nullptr));
        menuConta->setTitle(QCoreApplication::translate("UsuarioWindow", "Conta", nullptr));
        menuConta_Compartilhada->setTitle(QCoreApplication::translate("UsuarioWindow", "Conta Compartilhada", nullptr));
        menuCategorias->setTitle(QCoreApplication::translate("UsuarioWindow", "Categorias", nullptr));
        menuObjetivos->setTitle(QCoreApplication::translate("UsuarioWindow", "Objetivos", nullptr));
        menuNotifica_es->setTitle(QCoreApplication::translate("UsuarioWindow", "Notifica\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsuarioWindow: public Ui_UsuarioWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USUARIOWINDOW_H
