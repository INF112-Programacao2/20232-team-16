#include "janelaobjetivo.h"
#include "ui_janelaobjetivo.h"

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
    for(int i=0;i<_usuario->_categorias.size();i++){
        ui->comboBox_categoria->addItem(QString::fromStdString(_usuario->_categorias[i]));
    }
}

void JanelaObjetivo::on_btn_definir_clicked()
{
    QString nome = ui->lineEdit_nome->text();
    QString descricao = ui->lineEdit_descricao->text();
    QString valor = ui->lineEdit_valor->text();
    QString data = ui->lineEdit_data->text();
    QString categoria = ui->comboBox_categoria->currentText();

    _usuario->criar_objetivo(nome.toStdString(), descricao.toStdString(), valor.toInt(), data.toStdString(), categoria.toStdString());

    int num_categoria = 0;
    for(int i=0;i<_usuario->_categorias.size();i++){
        if(_usuario->_categorias[i]==categoria.toStdString()){
            num_categoria = i;
        }
    }

    if(_usuario->_categorias_tipos[num_categoria]==true){
        _usuario->_objetivos[_usuario->_objetivos.size()-1].set_tipo(true);
    }
    else{
        _usuario->_objetivos[_usuario->_objetivos.size()-1].set_tipo(false);
    }

    close();
}

