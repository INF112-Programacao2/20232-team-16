#ifndef RELATORIO_H
#define RELATORIO_H

#include <vector>
#include <string>
#include "Cartao.h"
#include "Categoria.h"
#include "Conta.h"
#include "ContaCompartilhada.h"
#include "Despesa.h"
#include "Emprestimo.h"
#include "Funcionalidade.h"
#include "Investimento.h"
#include "Notificacao.h"
#include "Objetivo.h"
#include "Receita.h"
#include "Sistema.h"
#include "Transacao.h"
#include "Transferencia.h"
#include "Usuario.h"

class Relatorio //FALTA TUDO
{
private:
    Conta *conta;
    Investimento *investimento;
    Cartao *cartao;
    Emprestimo *emprestimo;
    ContaCompartilhada *contacompartilhada;
    Transacao *transacao;
    Objetivo *objetivo;
public:
    Relatorio(/* args */); //varios construtores para cada tipo de relatorio
    ~Relatorio();
    void criar_relatorio();
    void exportar_relatorio();
};

#endif