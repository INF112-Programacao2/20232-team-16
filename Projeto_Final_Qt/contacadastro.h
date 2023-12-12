#ifndef CONTACADASTRO_H
#define CONTACADASTRO_H

#include <QDialog>

//--------------------
#include "feitos/Categoria.h"
#include "feitos/Funcionalidade.h"
#include "feitos/Objetivo.h"
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
class ContaCadastro;
}

class ContaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit ContaCadastro(QWidget *parent = nullptr);
    ~ContaCadastro();
    Conta* retorna_conta();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ContaCadastro *ui;
    Conta *_conta;
};

#endif // CONTACADASTRO_H
