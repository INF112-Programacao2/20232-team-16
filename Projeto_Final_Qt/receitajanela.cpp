#include "receitajanela.h"
#include "ui_receitajanela.h"
#include "feitos/Funcionalidade.h"
#include <QMessageBox>

ReceitaJanela::ReceitaJanela(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReceitaJanela)
{
    ui->setupUi(this);
}

ReceitaJanela::~ReceitaJanela()
{
    delete ui;
}
void ReceitaJanela::recebe_usuario(Usuario *usuario){
    _usuario = usuario;
    for(int i=0;i<_usuario->get_categorias().size();i++){
        if(_usuario->get_categorias_tipos()[i]==false){
            ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->get_categorias()[i]));
        }
    }
    for(int i=0;i<_usuario->get_contas().size();i++){
        ui->comboBox_conta->addItem(QString::fromStdString(_usuario->get_contas()[i].get_nome()));
    }
}

void ReceitaJanela::on_btn_adicionar_clicked()
{
    QString valor = ui->lineEdit_valor->text();
    QString data = ui->lineEdit_data->text();
    QString descricao = ui->lineEdit_descricao->text();
    QString conta = ui->comboBox_conta->currentText();
    QString categoria = ui->comboBox_categoria->currentText();


    std::string informacoes[5] = {valor.toStdString(), data.toStdString(), descricao.toStdString(), conta.toStdString(),
                                  categoria.toStdString()};

    Receita receita(categoria.toStdString(), data.toStdString(), valor.toInt(), descricao.toStdString());

    //Transacao transacao(categoria.toStdString(), data.toStdString(), valor.toInt(), descricao.toStdString());

    for(int i=0;i<_usuario->get_contas().size();i++){
        if(_usuario->get_contas()[i].get_nome()==conta.toStdString()){
            _usuario->get_contas()[i].set_saldo(valor.toInt());
            //_usuario->get_contas()[i].transacoes.push_back(transacao);
            _usuario->get_contas()[i].transacoes.push_back(receita);
            if(Funcionalidade::algumaStringVazia(informacoes, 5)){
                QMessageBox::warning(this, "Cadastro receita", "Todos os campos são obrigatórios, tente novamente");
                _usuario->get_contas()[i].transacoes.pop_back();
                close();
            }
        }
    }

    close();
}

