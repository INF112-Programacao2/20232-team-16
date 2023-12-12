#include "janelaobjetivo.h"
#include "ui_janelaobjetivo.h"
#include <QMessageBox>

JanelaObjetivo::JanelaObjetivo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::JanelaObjetivo)
{
    ui->setupUi(this);
}

JanelaObjetivo::~JanelaObjetivo()
{
    delete ui;
}

void JanelaObjetivo::recebe_usuario(Usuario *usuario){
    _usuario = usuario;
    for(int i=0;i<_usuario->get_categorias().size();i++){
        ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->get_categorias()[i]));
    }
}

void JanelaObjetivo::on_btn_definir_clicked()
{
    QString nome = ui->lineEdit_nome->text();
    QString descricao = ui->lineEdit_descricao->text();
    QString valor = ui->lineEdit_valor->text();
    QString data = ui->lineEdit_data->text();
    QString categoria = ui->comboBox_categoria->currentText();

    std::string informacoes[5] = {valor.toStdString(), data.toStdString(), descricao.toStdString(), nome.toStdString(),
                                  categoria.toStdString()};

    //_usuario->criar_objetivo(nome.toStdString(), descricao.toStdString(), valor.toInt(), data.toStdString(), categoria.toStdString());

    //_usuario->criar_objetivo_desp(nome.toStdString(), descricao.toStdString(), valor.toInt(), data.toStdString(), categoria.toStdString());

    int num_categoria = 0;
    for(int i=0;i<_usuario->get_categorias().size();i++){
        if(_usuario->get_categorias()[i]==categoria.toStdString()){
            num_categoria = i;
        }
    }

    if(_usuario->get_categorias_tipos()[num_categoria]==false){
        _usuario->criar_objetivo(nome.toStdString(), descricao.toStdString(), valor.toInt(), data.toStdString(), categoria.toStdString());
        if(Funcionalidade::algumaStringVazia(informacoes, 5)){
            QMessageBox::warning(this, "Cadastro objetivo", "Todos os campos são obrigatórios, tente novamente");
            _usuario->get_objetivos().pop_back();
            close();
        }
    }
    else{
        _usuario->criar_objetivo_desp(nome.toStdString(), descricao.toStdString(), valor.toInt(), data.toStdString(), categoria.toStdString());
        if(Funcionalidade::algumaStringVazia(informacoes, 5)){
            QMessageBox::warning(this, "Cadastro objetivo", "Todos os campos são obrigatórios, tente novamente");
            _usuario->get_objetivos_desp().pop_back();
            close();
        }
    }



    close();
}

