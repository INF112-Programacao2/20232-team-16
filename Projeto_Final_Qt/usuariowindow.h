#ifndef USUARIOWINDOW_H
#define USUARIOWINDOW_H

#include <QMainWindow>

//--------------------
#include "feitos/Categoria.h"
#include "feitos/Funcionalidade.h"
#include "feitos/ObjetivoReceita.h"
#include "feitos/Cartao.h"
#include "feitos/Emprestimo.h"
#include "feitos/Investimento.h"
#include "feitos/Transacao.h"
#include "feitos/Receita.h"
#include "feitos/Despesa.h"
#include "feitos/Conta.h"
#include "feitos/Usuario.h"
#include "feitos/Sistema.h"
#include "feitos/Transferencia.h"
//#include "Notificacao.h"
//#include "ContaCompartilhada.h"
//#include "Relatorio.h"
//--------------------

namespace Ui {
class UsuarioWindow;
}

class UsuarioWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UsuarioWindow(QWidget *parent = nullptr);
    ~UsuarioWindow();
    void receber_usuario(Usuario *usuario);

private slots:
    void on_btn_atualizar_clicked();

    void on_actionInforma_es_triggered();

    void on_actionCriar_conta_triggered();

    void on_actionExcluir_conta_triggered();

    void on_btn_nova_receira_clicked();

    void on_actionCriar_categoria_triggered();

    void on_actionExcluir_categoria_triggered();

    void on_tabela_transacao_cellDoubleClicked(int row, int column);

    void on_btn_nova_despesa_clicked();

    void on_actionDefinir_objetivo_triggered();

    void on_actionExcluir_objetivo_triggered();

    void on_btn_sair_clicked();

    void on_btn_alterar_clicked();

    void on_btn_alterar_4_clicked();

    void on_actionExcluir_objetivo_despesa_triggered();

private:
    Ui::UsuarioWindow *ui;
    Usuario *_usuario;
};

#endif // USUARIOWINDOW_H
