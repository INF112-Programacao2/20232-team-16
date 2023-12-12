#include "cadastro.h"
#include "ui_cadastro.h"
#include <qdebug>
#include "feitos/Funcionalidade.h"
#include <exception>

Cadastro::Cadastro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cadastro)
{
    ui->setupUi(this);
}

Cadastro::~Cadastro()
{
    delete ui;
}

Usuario_dados* Cadastro::novo_usuario(){
    std::string informacoes[7] = {_usuario->_username.toStdString(), _usuario->_telefone.toStdString(),
            _usuario->_senha.toStdString(), _usuario->_pix.toStdString(),
                                  _usuario->_nome.toStdString(), _usuario->_cpf.toStdString(), _usuario->_email.toStdString()};
    if(Funcionalidade::algumaStringVazia(informacoes,7)){
        throw std::invalid_argument("String vazia");
    }
    return _usuario;
}

void Cadastro::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString nome = ui->lineEdit_nome->text();
    QString cpf = ui->lineEdit_cpf->text();
    QString telefone = ui->lineEdit_telefone->text();
    QString pix = ui->lineEdit_pix->text();
    QString email = ui->lineEdit_email->text();
    QString senha = ui->lineEdit_senha->text();

    _usuario = new Usuario_dados(username, nome, cpf, telefone, pix, email, senha);

    close();
}

