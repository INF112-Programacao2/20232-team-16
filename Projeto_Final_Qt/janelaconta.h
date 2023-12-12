#ifndef JANELACONTA_H
#define JANELACONTA_H

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
class JanelaConta;
}

class JanelaConta : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaConta(QWidget *parent = nullptr);
    ~JanelaConta();


private:
    Ui::JanelaConta *ui;


};

#endif // JANELACONTA_H
