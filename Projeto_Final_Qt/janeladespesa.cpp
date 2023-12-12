#include "janeladespesa.h"
#include "ui_janeladespesa.h"

JanelaDespesa::JanelaDespesa(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaDespesa)
{
    ui->setupUi(this);
}

JanelaDespesa::~JanelaDespesa()
{
    delete ui;
}
void JanelaDespesa::recebe_usuario(Usuario *usuario){
    _usuario = usuario;
    for(int i=0;i<_usuario->_categorias.size();i++){
        if(_usuario->_categorias_tipos[i]==true){
            ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->_categorias[i]));
        }

    }
    for(int i=0;i<_usuario->_contas.size();i++){
        ui->comboBox_conta->addItem(QString::fromStdString(_usuario->_contas[i].get_nome()));
    }
}
void JanelaDespesa::on_btn_adicionar_clicked()
{
    //INSERE DESPESA NA CONTA ESPECIFICADA PELO USUARIO
    QString valor = ui->lineEdit_valor->text();
    QString data = ui->lineEdit_data->text();
    QString descricao = ui->lineEdit_descricao->text();
    QString conta = ui->comboBox_conta->currentText();
    QString categoria = ui->comboBox_categoria->currentText();

    Transacao transacao(categoria.toStdString(), data.toStdString(), (-1)*valor.toInt(), descricao.toStdString());

    for(int i=0;i<_usuario->_contas.size();i++){
        if(_usuario->_contas[i].get_nome()==conta.toStdString()){
            _usuario->_contas[i].set_saldo((-1)*valor.toInt());
            _usuario->_contas[i].transacoes.push_back(transacao);
        }
    }

    close();
}

