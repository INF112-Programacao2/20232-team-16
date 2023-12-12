#include "cadastro.h"
#include "ui_cadastro.h"
#include <qdebug>

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

