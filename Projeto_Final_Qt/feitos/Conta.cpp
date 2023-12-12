#include "Conta.h"

Conta::Conta(std::string nome,std::string banco,int saldo):
    _nome(nome), _banco(banco), _saldo(saldo) {}

Conta::~Conta(){}

//Funcoes da conta
void Conta::set_saldo(int valor){
    _saldo += valor;
}

void Conta::criar_investimento(std::string nome, int valor, std::string data_inicio, std::string prazo, double taxa){
    investimentos.push_back(Investimento(nome, valor, data_inicio, prazo, taxa));
}

void Conta::encerrar_investimento(int i){
    investimentos[i].resgatar_investimento();
    investimentos.erase(investimentos.begin()+i);
    investimentos.shrink_to_fit();
}

void Conta::criar_emprestimo(std::string nome, int valor, double taxa, int prazo, std::string data_contatacao){
    emprestimos.push_back(Emprestimo(nome, valor, taxa, prazo, data_contatacao));
}

void Conta::encerrar_emprestimo(int i){
    emprestimos[i].realizar_pagamento();
    emprestimos.erase(emprestimos.begin()+i);
    emprestimos.shrink_to_fit();
}

void Conta::criar_cartao(int limite_credito, std::string fechamento_fatura, std::string data_pagamento){
    cartoes.push_back(Cartao(limite_credito, fechamento_fatura, data_pagamento));
}

void Conta::encerrar_cartao(int i){
    cartoes[i].pagar_fatura();
    cartoes.erase(cartoes.begin()+i);
    cartoes.shrink_to_fit();
}
int Conta::get_saldo(){
    return _saldo;
}
// Implementação dos gets
std::string Conta::get_nome() const {
    return _nome;
}

std::string Conta::get_banco() const {
    return _banco;
}
