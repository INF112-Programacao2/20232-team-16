#include "contacadastro.h"
#include "ui_contacadastro.h"

ContaCadastro::ContaCadastro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContaCadastro)
{
    ui->setupUi(this);
}

ContaCadastro::~ContaCadastro()
{
    delete ui;
}
Conta* ContaCadastro::retorna_conta(){
    std::string informacoes[2] = {_conta->get_banco(), _conta->get_nome()};
    if(Funcionalidade::algumaStringVazia(informacoes,2)){
        throw std::invalid_argument("String vazia");
    }
    return _conta;
}

void ContaCadastro::on_pushButton_clicked()
{
    QString nome, banco, saldo;
    nome = ui->lineEdit_nome->text();
    banco = ui->lineEdit_banco->text();
    saldo = ui->lineEdit_saldo->text();

    _conta = new Conta(nome.toStdString(), banco.toStdString(), saldo.toInt());

    close();
}

