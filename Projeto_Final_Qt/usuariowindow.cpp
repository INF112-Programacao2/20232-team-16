#include "usuariowindow.h"
#include "contacadastro.h"
#include "ui_usuariowindow.h"
#include <QMessageBox>
#include "janelaconta.h"
#include <exception>
#include "receitajanela.h"
#include <QInputDialog>
#include "janeladespesa.h"
#include "janelaobjetivo.h"

int obj = 0;

UsuarioWindow::UsuarioWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UsuarioWindow)
{
    ui->setupUi(this);
    ui->progressBar_objetivo->setValue(0);
}

UsuarioWindow::~UsuarioWindow()
{
    delete ui;
}
void UsuarioWindow::receber_usuario(Usuario *usuario){
    _usuario = usuario;
}
void UsuarioWindow::on_btn_atualizar_clicked()
{
    //ATUALIZA SALDO TOTAL
    if(_usuario->numero_de_contas()==0){
        ui->label_saldo_total_numero->setText("0");
    }
    else{
        int total = _usuario->saldo_total();
        int totaldec = total%10;
        int totalun = total/10;
        QString total_str = QString::number(totalun, 10) + "." + QString::number(totaldec, 10);
        ui->label_saldo_total_numero->setText(total_str);
    }

    //ATUALIZA TABELA CONTAS
    ui->tabela_banco->setRowCount(_usuario->_contas.size());

    for(int i=0;i<_usuario->_contas.size();i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].get_nome())));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].get_banco())));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString(QString::number(_usuario->_contas[i].get_saldo())));

        //QTableWidgetItem *item = new QTableWidgetItem(QString("Nome"));
        //QTableWidgetItem *item2 = new QTableWidgetItem(QString("Banco"));
        //QTableWidgetItem *item3 = new QTableWidgetItem(QString("Saldo"));

        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item2->setFlags(item->flags() & ~Qt::ItemIsEditable);
        item3->setFlags(item->flags() & ~Qt::ItemIsEditable);

        ui->tabela_banco->setItem(i,0,item);
        ui->tabela_banco->setItem(i,1,item2);
        ui->tabela_banco->setItem(i,2,item3);
    }

    //ATUALIZA TABELA TRANSACOES
    int total_transacoes = 0;
    for(int i=0;i<_usuario->_contas.size();i++){
        for(int j=0;j<_usuario->_contas[i].transacoes.size();j++){
            total_transacoes++;
        }
    }
    ui->tabela_transacao->setRowCount(total_transacoes);

    for(int i=0;i<_usuario->_contas.size();i++){
        for(int j=0;j<_usuario->_contas[i].transacoes.size();j++){
            QTableWidgetItem *item = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].transacoes[j].get_data())));
            QTableWidgetItem *item2 = new QTableWidgetItem(QString(QString::number(_usuario->_contas[i].transacoes[j].get_valor())));
            QTableWidgetItem *item3 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].get_nome())));
            QTableWidgetItem *item4 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].transacoes[j].get_categoria())));
            QTableWidgetItem *item5 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->_contas[i].transacoes[j].get_descricao())));
            QTableWidgetItem *item6 = new QTableWidgetItem(QString(QString::number(_usuario->_contas[i].transacoes[j].get_id())));

            ui->tabela_transacao->setItem(j,0,item);
            ui->tabela_transacao->setItem(j,1,item2);
            ui->tabela_transacao->setItem(j,2,item3);
            ui->tabela_transacao->setItem(j,3,item4);
            ui->tabela_transacao->setItem(j,4,item5);
            ui->tabela_transacao->setItem(j,5,item6);
        }
    }

    //ATUALIZA COMBOBOX COM OS OBJETIVOS
    if(_usuario->_objetivos.size()!=0){
        /*ui->comboBox_objetivo->clear();
        for(int i=0;i<_usuario->numero_objetivos();i++){
            ui->comboBox_objetivo->addItem(QString::fromStdString(_usuario->_objetivos[i].get_nome()));
        }*/


        /*int num_objetivo = 0;
        for(int i=0;i<_usuario->numero_objetivos();i++){
            if(_usuario->_objetivos[i].get_nome()==ui->comboBox_objetivo->currentText().toStdString()){
                num_objetivo = i;
            }
        }*/

    //calcula o progresso de cada objetivo

        for(int i=0;i<_usuario->_contas.size();i++){
            for(int j=0;j<_usuario->_contas[i].transacoes.size();j++){
                for(int k=0;k<_usuario->_objetivos.size();k++){
                    _usuario->_objetivos[k].reiniciar_progresso();
                }
            }
        }

        for(int i=0;i<_usuario->_contas.size();i++){
            for(int j=0;j<_usuario->_contas[i].transacoes.size();j++){
                for(int k=0;k<_usuario->_objetivos.size();k++){
                    if(_usuario->_contas[i].transacoes[j].get_categoria()==_usuario->_objetivos[k].get_categoria()){
                        _usuario->_objetivos[k].alterar_progresso(_usuario->_contas[i].transacoes[j].get_valor());
                    }
                }

            }
        }

    //ENCERRA PROGRESSO
        //qDebug() << _usuario->_objetivos[0].get_progresso();

        ui->btn_alterar->click();
    }
}


void UsuarioWindow::on_actionInforma_es_triggered()
{
    QString informacoes;
    informacoes = QString::fromStdString(_usuario->get_username())+
                  QString::fromStdString(_usuario->get_nome())+
                  QString::fromStdString(_usuario->get_cpf())+
                  QString::fromStdString(_usuario->get_email())+
                  QString::fromStdString(_usuario->get_telefone())+
                  QString::fromStdString(_usuario->get_pix());
    QMessageBox::information(this, "Informações de usuário", informacoes);
}


void UsuarioWindow::on_actionCriar_conta_triggered()
{
    ContaCadastro contacadastro;
    contacadastro.exec();
    try{
    _usuario->criar_conta(contacadastro.retorna_conta());
    } catch(std::bad_alloc &e){
        contacadastro.close();
    }
}


void UsuarioWindow::on_actionExcluir_conta_triggered()
{
    if(QMessageBox::question(this, "Excluir Conta", "Deseja excluir a última conta criada?")){
        _usuario->_contas.pop_back();
        _usuario->_contas.shrink_to_fit();
    }
}


void UsuarioWindow::on_btn_nova_receira_clicked()
{
    ReceitaJanela receita_janela;
    receita_janela.recebe_usuario(_usuario);
    receita_janela.exec();
}


void UsuarioWindow::on_actionCriar_categoria_triggered()
{
    bool ok;
    QString texto = QInputDialog::getText(nullptr, "Nova categoria", "Digite o nome da categoria:", QLineEdit::Normal, "", &ok);

    // Verificando se o usuário pressionou OK e exibindo o texto inserido
    if (ok) {
        _usuario->_categorias.push_back(texto.toStdString());
        if(QMessageBox::question(this,"Tipo da categoria", "Essa categoria é do tipo despesa? (N:Receita|Y:Despesa")){
            _usuario->_categorias_tipos.push_back(true);
        }
        else {
            _usuario->_categorias_tipos.push_back(false);
        }
    }

}


void UsuarioWindow::on_actionExcluir_categoria_triggered()
{
    if(QMessageBox::question(this, "Excluir categoria", "Deseja excluir a última categoria criada?")){
        _usuario->_categorias.pop_back();
        _usuario->_categorias.shrink_to_fit();
    }
}


void UsuarioWindow::on_tabela_transacao_cellDoubleClicked(int row, int column) //ARRUMAR
{
    QString id (ui->tabela_transacao->item(row, 5)->text());
    std::string id_str = id.toStdString();

    if(QMessageBox::question(this, "Excluir transacao", "Deseja excluir essa transação?")){
        QMessageBox message;
        message.setText("Aguarde, estamos excluindo sua transação");
        message.show();
        for(int i=0;i<_usuario->_contas.size();i++){
            for(int j=0;i<_usuario->_contas[i].transacoes.size();j++){
                if(_usuario->_contas[i].get_nome()==id_str){
                    _usuario->_contas[i].transacoes.erase(_usuario->_contas[i].transacoes.begin()+j);
                    _usuario->_contas[i].transacoes.shrink_to_fit();
                }
            }
        }
        message.close();
    }
    QMessageBox::information(this, "Informação", "Transação excluída");
}


void UsuarioWindow::on_btn_nova_despesa_clicked()
{
    JanelaDespesa despesa_janela;
    despesa_janela.recebe_usuario(_usuario);
    despesa_janela.exec();
}


void UsuarioWindow::on_actionDefinir_objetivo_triggered()
{
    JanelaObjetivo janelaobjetivo;
    janelaobjetivo.recebe_usuario(_usuario);
    janelaobjetivo.exec();
}


void UsuarioWindow::on_actionExcluir_objetivo_triggered()
{
    if(QMessageBox::question(this, "Excluir objetivo", "Deseja excluir o último objetivo criado?")){
        _usuario->excluir_objetivo();
        _usuario->_categorias.shrink_to_fit();
    }
}


void UsuarioWindow::on_btn_sair_clicked()
{
    close();
}
/*    for(int i=0;i<_usuario->_objetivos.size();i++){
        if(arg1.toStdString()==_usuario->_objetivos[i].get_nome()){
            if(_usuario->_objetivos[i].get_tipo()==true){
                ui->progressBar_objetivo->setValue(_usuario->_objetivos[i].get_progresso()*(-1));
            }
            else{
                ui->progressBar_objetivo->setValue(_usuario->_objetivos[i].get_progresso());
            }
        }
    }
*/


void UsuarioWindow::on_btn_alterar_clicked()
{
    if(_usuario->_objetivos.size()==0){
            return;
    }
    else{
        obj++;
        if(obj==_usuario->_objetivos.size()){
            obj = 0;
        }
        ui->label_2->setText("Objetivos: " + QString::fromStdString(_usuario->_objetivos[obj].get_nome()));
        if(_usuario->_objetivos[obj].get_tipo()==true){
            ui->progressBar_objetivo->setValue(_usuario->_objetivos[obj].get_progresso()*(-1));
        }
        else{
            ui->progressBar_objetivo->setValue(_usuario->_objetivos[obj].get_progresso());
        }
    }
}

