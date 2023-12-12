#ifndef RECEITAJANELA_H
#define RECEITAJANELA_H

#include <QDialog>

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
class ReceitaJanela;
}

class ReceitaJanela : public QDialog
{
    Q_OBJECT

public:
    explicit ReceitaJanela(QWidget *parent = nullptr);
    ~ReceitaJanela();
    void recebe_usuario(Usuario* usuario);


private slots:
    void on_btn_adicionar_clicked();

private:
    Ui::ReceitaJanela *ui;
    Usuario *_usuario;
};

#endif // RECEITAJANELA_H
