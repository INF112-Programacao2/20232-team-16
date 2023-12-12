#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <vector>
#include "Cartao.h"
#include "Investimento.h"
#include "Emprestimo.h"
#include "Transacao.h"
//#include "Notificacao.h"

class Conta
{
private:
    std::string _nome;
    std::string _banco;
    int _saldo;
    std::vector<Cartao> cartoes;
    std::vector<Investimento> investimentos;
    std::vector<Emprestimo> emprestimos;

public:
    Conta(std::string _nome,std::string _banco,int _saldo);
    ~Conta();
    std::vector<Transacao> transacoes; //arrumar um jeito de registrar todas as transacoes

    //Funcoes da conta
    void set_saldo(int valor);
    void criar_investimento(std::string nome, int valor, std::string data_inicio, std::string prazo, double taxa);
    void encerrar_investimento(int i);
    void criar_emprestimo(std::string nome, int valor, double taxa, int prazo, std::string data_contatacao);
    void encerrar_emprestimo(int i);
    void criar_cartao(int limite_credito, std::string fechamento_fatura, std::string data_pagamento);
    void encerrar_cartao(int i);
    int get_saldo();

    std::string get_nome() const;
    std::string get_banco() const;
};

#endif
