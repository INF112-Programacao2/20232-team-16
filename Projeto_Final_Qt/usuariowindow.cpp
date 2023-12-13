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
int obj2 = 0;

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
        QString total_total = QString::number(total,10);
        //int totaldec = total%10;
        //int totalun = total/10;
        //QString total_str = QString::number(totalun, 10) + "." + QString::number(totaldec, 10);
        //ui->label_saldo_total_numero->setText(total_str);
        ui->label_saldo_total_numero->setText(total_total);
    }

    //ATUALIZA TABELA CONTAS
    ui->tabela_banco->setRowCount(_usuario->get_contas().size());

    for(int i=0;i<_usuario->get_contas().size();i++){
        QTableWidgetItem *item = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].get_nome())));
        QTableWidgetItem *item2 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].get_banco())));
        QTableWidgetItem *item3 = new QTableWidgetItem(QString(QString::number(_usuario->get_contas()[i].get_saldo())));

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
    for(int i=0;i<_usuario->get_contas().size();i++){
        for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
            total_transacoes++;
        }
    }
    ui->tabela_transacao->setRowCount(total_transacoes);

    for(int i=0;i<_usuario->get_contas().size();i++){
        for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
            QTableWidgetItem *item = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].transacoes[j].get_data())));
            QTableWidgetItem *item2 = new QTableWidgetItem(QString(QString::number(_usuario->get_contas()[i].transacoes[j].get_valor())));
            QTableWidgetItem *item3 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].get_nome())));
            QTableWidgetItem *item4 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].transacoes[j].get_categoria())));
            QTableWidgetItem *item5 = new QTableWidgetItem(QString(QString::fromStdString(_usuario->get_contas()[i].transacoes[j].get_descricao())));
            QTableWidgetItem *item6 = new QTableWidgetItem(QString(QString::number(_usuario->get_contas()[i].transacoes[j].get_id())));

            ui->tabela_transacao->setItem(j,0,item);
            ui->tabela_transacao->setItem(j,1,item2);
            ui->tabela_transacao->setItem(j,2,item3);
            ui->tabela_transacao->setItem(j,3,item4);
            ui->tabela_transacao->setItem(j,4,item5);
            ui->tabela_transacao->setItem(j,5,item6);
        }
    }

    //ATUALIZA COMBOBOX COM OS OBJETIVOS
    if(_usuario->get_objetivos().size()!=0){
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

        for(int i=0;i<_usuario->get_contas().size();i++){
            for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
                for(int k=0;k<_usuario->get_objetivos().size();k++){
                    _usuario->get_objetivos()[k].reiniciar_progresso();
                }
            }
        }

        for(int i=0;i<_usuario->get_contas().size();i++){
            for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
                for(int k=0;k<_usuario->get_objetivos().size();k++){
                    if(_usuario->get_contas()[i].transacoes[j].get_categoria()==_usuario->get_objetivos()[k].get_categoria()){
                        _usuario->get_objetivos()[k].alterar_progresso(_usuario->get_contas()[i].transacoes[j].get_valor());
                    }
                }

            }
        }

    //ENCERRA PROGRESSO
        //qDebug() << _usuario->_objetivos[0].get_progresso();

        ui->btn_alterar->click();
    }

    //OBJETIVOS IF
    if(_usuario->get_objetivos_desp().size()!=0){

        //calcula o progresso de cada objetivo

        for(int i=0;i<_usuario->get_contas().size();i++){
            for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
                for(int k=0;k<_usuario->get_objetivos_desp().size();k++){
                    _usuario->get_objetivos_desp()[k].reiniciar_progresso();
                }
            }
        }

        for(int i=0;i<_usuario->get_contas().size();i++){
            for(int j=0;j<_usuario->get_contas()[i].transacoes.size();j++){
                for(int k=0;k<_usuario->get_objetivos_desp().size();k++){
                    if(_usuario->get_contas()[i].transacoes[j].get_categoria()==_usuario->get_objetivos_desp()[k].get_categoria()){
                        _usuario->get_objetivos_desp()[k].alterar_progresso(_usuario->get_contas()[i].transacoes[j].get_valor());
                    }
                }

            }
        }

        ui->btn_alterar_4->click();
    }
}


void UsuarioWindow::on_actionInforma_es_triggered()
{
    QString informacoes;
    informacoes = "Usuário: " + QString::fromStdString(_usuario->get_username())+"\n"+
                  "Nome: " + QString::fromStdString(_usuario->get_nome())+"\n"+
                  "CPF: " + QString::fromStdString(_usuario->get_cpf())+"\n"+
                  "E-mail: " + QString::fromStdString(_usuario->get_email())+"\n"+
                  "Telefone: " + QString::fromStdString(_usuario->get_telefone())+"\n"+
                  "PIX: " + QString::fromStdString(_usuario->get_pix())+"\n";
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
    } catch(std::invalid_argument &e){
        QMessageBox::warning(this, "Cadastro de conta", "Todos os campos são obrigatórios, tente novamente");
    }
}


void UsuarioWindow::on_actionExcluir_conta_triggered()
{
    if(_usuario->get_contas().size()!=0){
        if(QMessageBox::question(this, "Excluir Conta", "Deseja excluir a última conta criada?")==QMessageBox::Yes){
            _usuario->get_contas().pop_back();
            _usuario->get_contas().shrink_to_fit();
        }
    }
    else{
        QMessageBox::warning(this, "Excluir conta", "Ainda não há contas para serem excluídas");
    }
}


void UsuarioWindow::on_btn_nova_receira_clicked()
{
    if(_usuario->get_contas().size()!=0){
        ReceitaJanela receita_janela;
        receita_janela.recebe_usuario(_usuario);
        receita_janela.exec();
    }
    else{
        QMessageBox::warning(this, "Criar transação", "Não é possível criar transação sem uma conta");
    }
}


void UsuarioWindow::on_actionCriar_categoria_triggered()
{
    bool ok;
    QString texto = QInputDialog::getText(nullptr, "Nova categoria", "Digite o nome da categoria:", QLineEdit::Normal, "", &ok);

    if(texto.toStdString().empty()){
        QMessageBox::warning(this, "Cadastro categoria", "Nenhuma informação inserida, tente novamente");
        return;
    }

    // Verificando se o usuário pressionou OK e exibindo o texto inserido
    if (ok) {
        _usuario->get_categorias().push_back(texto.toStdString());
        if(QMessageBox::question(this,"Tipo da categoria", "Essa categoria é do tipo despesa? (N:Receita|Y:Despesa")==QMessageBox::Yes){
            _usuario->get_categorias_tipos().push_back(true);
        }
        else {
            _usuario->get_categorias_tipos().push_back(false);
        }
    }

}


void UsuarioWindow::on_actionExcluir_categoria_triggered()
{
    if(_usuario->get_categorias().size()!=0){
        if(QMessageBox::question(this, "Excluir categoria", "Deseja excluir a última categoria criada?")==QMessageBox::Yes){
            _usuario->get_categorias().pop_back();
            _usuario->get_categorias().shrink_to_fit();
        }
    }
    else{
        QMessageBox::warning(this, "Excluir categoria", "Ainda não há categorias");
    }
}


void UsuarioWindow::on_tabela_transacao_cellDoubleClicked(int row, int column) //ARRUMAR
{
    /*QString id (ui->tabela_transacao->item(row, 5)->text());
    std::string id_str = id.toStdString();

    if(QMessageBox::question(this, "Excluir transacao", "Deseja excluir essa transação?")==QMessageBox::Yes){
        QMessageBox message;
        message.setText("Aguarde, estamos excluindo sua transação");
        message.show();
        for(int i=0;i<_usuario->get_contas().size();i++){
            for(int j=0;i<_usuario->get_contas()[i].transacoes.size();j++){
                if(_usuario->get_contas()[i].get_nome()==id_str){
                    _usuario->get_contas()[i].transacoes.erase(_usuario->get_contas()[i].transacoes.begin()+j);
                    _usuario->get_contas()[i].transacoes.shrink_to_fit();
                }
            }
        }
        message.close();
    }
    QMessageBox::information(this, "Informação", "Transação excluída");*/
}


void UsuarioWindow::on_btn_nova_despesa_clicked()
{
    if(_usuario->get_contas().size()!=0){
        JanelaDespesa despesa_janela;
        despesa_janela.recebe_usuario(_usuario);
        despesa_janela.exec();
    }
    else{
        QMessageBox::warning(this, "Criar transação", "Não é possível criar transação sem uma conta");
    }
}


void UsuarioWindow::on_actionDefinir_objetivo_triggered()
{
    if(_usuario->get_categorias().size()!=0){
        JanelaObjetivo janelaobjetivo;
        janelaobjetivo.recebe_usuario(_usuario);
        janelaobjetivo.exec();
    }
    else{
        QMessageBox::warning(this, "Criar objetivo", "Não é possível criar objetivo sem uma categoria");
    }
}


void UsuarioWindow::on_actionExcluir_objetivo_triggered()
{
    if(_usuario->get_objetivos().size()!=0){
        if(QMessageBox::question(this, "Excluir objetivo receita", "Deseja excluir o último objetivo de receita criado?")==QMessageBox::Yes){
            _usuario->excluir_objetivo();
            //_usuario->get_categorias().shrink_to_fit();
        }
    }
    else{
        QMessageBox::warning(this, "Objetivo receita", "Ainda não há objetivos de receita");
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
    if(_usuario->get_objetivos().size()==0){
        ui->progressBar_objetivo->setValue(0);
        return;
    }
    else{
        obj++;
        if(obj==_usuario->get_objetivos().size()){
            obj = 0;
        }
        ui->label_2->setText("Objetivos: " + QString::fromStdString(_usuario->get_objetivos()[obj].get_nome()));

        ui->progressBar_objetivo->setValue(_usuario->get_objetivos()[obj].get_progresso());

        /*if(_usuario->get_objetivos()[obj].get_tipo()==true){
            ui->progressBar_objetivo->setValue(_usuario->get_objetivos()[obj].get_progresso()*(-1));
        }
        else{
            ui->progressBar_objetivo->setValue(_usuario->get_objetivos()[obj].get_progresso());
        }*/
    }
}


void UsuarioWindow::on_btn_alterar_4_clicked() //OBJETIVO IF
{
    if(_usuario->get_objetivos_desp().size()==0){
        ui->progressBar_objetivo_4->setValue(0);
        return;
    }
    else{
        obj2++;
        if(obj2==_usuario->get_objetivos_desp().size()){
            obj2 = 0;
        }
        ui->label_7->setText("Objetivos: " + QString::fromStdString(_usuario->get_objetivos_desp()[obj2].get_nome()));

        ui->progressBar_objetivo_4->setValue(_usuario->get_objetivos_desp()[obj2].get_progresso());

        /*if(_usuario->get_objetivos_desp()[obj2].get_tipo()==true){
            ui->progressBar_objetivo_4->setValue(_usuario->get_objetivos_desp()[obj2].get_progresso()*(-1));
        }
        else{
            ui->progressBar_objetivo_4->setValue(_usuario->get_objetivos_desp()[obj2].get_progresso());
        }*/
    }
}


void UsuarioWindow::on_actionExcluir_objetivo_despesa_triggered()
{
    if(_usuario->get_objetivos_desp().size()!=0){
        if(QMessageBox::question(this, "Excluir objetivo despesa", "Deseja excluir o último objetivo de despesa criado?")==QMessageBox::Yes){
            _usuario->excluir_objetivo_desp();
            //_usuario->get_categorias().shrink_to_fit();
        }
    }
    else{
        QMessageBox::warning(this, "Objetivo despesa", "Ainda não há objetivos de despesa");
    }
}

//BOTAO EXCLUIR TRANSACAO
