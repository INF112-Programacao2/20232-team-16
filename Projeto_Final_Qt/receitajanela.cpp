#include "receitajanela.h"
#include "ui_receitajanela.h"

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
    for(int i=0;i<_usuario->_categorias.size();i++){
        if(_usuario->_categorias_tipos[i]==false){
            ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->_categorias[i]));
        }
    }
    for(int i=0;i<_usuario->_contas.size();i++){
        ui->comboBox_conta->addItem(QString::fromStdString(_usuario->_contas[i].get_nome()));
    }
}

void ReceitaJanela::on_btn_adicionar_clicked()
{
    QString valor = ui->lineEdit_valor->text();
    QString data = ui->lineEdit_data->text();
    QString descricao = ui->lineEdit_descricao->text();
    QString conta = ui->comboBox_conta->currentText();
    QString categoria = ui->comboBox_categoria->currentText();

    Transacao transacao(categoria.toStdString(), data.toStdString(), valor.toInt(), descricao.toStdString());

    for(int i=0;i<_usuario->_contas.size();i++){
        if(_usuario->_contas[i].get_nome()==conta.toStdString()){
            _usuario->_contas[i].set_saldo(valor.toInt());
            _usuario->_contas[i].transacoes.push_back(transacao);
        }
    }

    close();
}

