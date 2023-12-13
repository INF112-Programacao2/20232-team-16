#include "janeladespesa.h"
#include "ui_janeladespesa.h"
#include <QMessageBox>

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
    for(int i=0;i<_usuario->get_categorias().size();i++){
        if(_usuario->get_categorias_tipos()[i]==true){
            ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->get_categorias()[i]));
        }

    }
    for(int i=0;i<_usuario->get_contas().size();i++){
        ui->comboBox_conta->addItem(QString::fromStdString(_usuario->get_contas()[i].get_nome()));
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

    std::string informacoes[5] = {valor.toStdString(), data.toStdString(), descricao.toStdString(), conta.toStdString(),
                                  categoria.toStdString()};

    Despesa despesa(categoria.toStdString(), data.toStdString(),valor.toInt(), descricao.toStdString());

    //Transacao transacao(categoria.toStdString(), data.toStdString(), (-1)*valor.toInt(), descricao.toStdString());

    for(int i=0;i<_usuario->get_contas().size();i++){
        if(_usuario->get_contas()[i].get_nome()==conta.toStdString()){
            //_usuario->get_contas()[i].set_saldo((-1)*valor.toInt());
            _usuario->get_contas()[i].set_saldo(despesa.realizar_transacao()); //opcao alternativa
            qDebug() << despesa.realizar_transacao();
            //_usuario->get_contas()[i].transacoes.push_back(transacao);
            _usuario->get_contas()[i].transacoes.push_back(despesa);
            if(Funcionalidade::algumaStringVazia(informacoes, 5)){
                QMessageBox::warning(this, "Cadastro despesa", "Todos os campos são obrigatórios, tente novamente");
                _usuario->get_contas()[i].transacoes.pop_back();
                close();
            }
        }
    }

    close();
}

