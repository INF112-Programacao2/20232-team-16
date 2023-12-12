#include "Emprestimo.h"
#include "Funcionalidade.h"

Emprestimo::Emprestimo(std::string nome, int valor, double taxa, int prazo, std::string data_contatacao):
    _nome(nome), _valor(valor), _taxa(taxa), _prazo(prazo), _data_contratacao(data_contatacao) {}

Emprestimo::~Emprestimo(){}

//Funcoes de emprestimo
int Emprestimo::realizar_pagamento(){
    this->calcular_saldo_atual(Funcionalidade::obterDataAtual());
    _valor = 0;
    _historico_pagamentos.push_back(std::pair<int,std::string> (_valor, Funcionalidade::obterDataAtual()));
    return _valor*(-1);
}
int Emprestimo::realizar_pagamento(int valor){
    this->calcular_saldo_atual(Funcionalidade::obterDataAtual());
    _valor -= valor;
    _historico_pagamentos.push_back(std::pair<int,std::string> (valor, Funcionalidade::obterDataAtual()));
    return valor*(-1);
}

void Emprestimo::calcular_saldo_atual(std::string data){
    int dias_diferenca = Funcionalidade::diferencaDias(_data_contratacao, data);
    int meses_int = dias_diferenca/30;
    int total = meses_int*_taxa*_valor;
    _valor += total;
}