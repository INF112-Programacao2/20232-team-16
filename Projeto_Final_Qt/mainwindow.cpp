#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "cadastro.h"
#include <qdebug.h>
#include <QMessageBox>
#include <string.h>
#include <exception>
#include "usuariowindow.h"

//--------------------
#include "feitos/Categoria.h"
#include "feitos/Funcionalidade.h"
#include "feitos/ObjetivoReceita.h"
#include "feitos/Cartao.h"
#include "feitos/Emprestimo.h"
#include "feitos/Investimento.h"
#include "feitos/Transacao.h"
#include "feitos/Receita.h"
#include "feitos/Despesa.h"
#include "feitos/Conta.h"
#include "feitos/Usuario.h"
#include "feitos/Sistema.h"
#include "feitos/Transferencia.h"
//#include "Notificacao.h"
//#include "ContaCompartilhada.h"
//#include "Relatorio.h"
//--------------------

//--------------------
Sistema sistema;

//--------------------

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Bt_cadastro_clicked()
{
    Cadastro janela_cadastro;
    janela_cadastro.exec();


    try{
    Usuario_dados *usuario_dados = janela_cadastro.novo_usuario();

    std::string username = usuario_dados->_username.toStdString();
    std::string nome = usuario_dados->_nome.toStdString();
    std::string cpf = usuario_dados->_cpf.toStdString();
    std::string telefone = usuario_dados->_telefone.toStdString();
    std::string pix = usuario_dados->_pix.toStdString();
    std::string email = usuario_dados->_email.toStdString();
    std::string senha = usuario_dados->_senha.toStdString();

    Usuario usuario(username, nome, cpf, telefone, pix, email, senha);
    sistema.inserir_usuario(usuario);
    } catch(std::bad_alloc &e){
        QMessageBox::critical(this, "ERRO", "Erro ao cadastrar usuário, tente novamente.");
    } catch(std::invalid_argument &e){
        QMessageBox::warning(this, "Cadastro de usuário", "Todos os campos são obrigatórios, tente novamente");
    }
}

void MainWindow::on_Bt_login_clicked()
{
    std::string login = ui->lineEdit_usuario->text().toStdString();
    std::string senha = ui->lineEdit_senha->text().toStdString();

    if(sistema.fazer_login(login, senha)){
        UsuarioWindow *usuario_janela = new UsuarioWindow;
        usuario_janela->receber_usuario(sistema.encontrar_usuario(login, senha));
        usuario_janela->show();
    }
    else{
        QMessageBox::warning(this, "Aviso!", "Senha e/ou usuário incorretos.");
    }
}


void MainWindow::on_pushButton_clicked()
{
    close();
}

