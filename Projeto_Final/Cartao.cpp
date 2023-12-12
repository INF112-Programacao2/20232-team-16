#include "Cartao.h"

Cartao::Cartao(int limite_credito, std::string fechamento_fatura, std::string data_pagamento):
    _limite_credito(limite_credito), _fechamento_fatura(fechamento_fatura), _data_pagamento(data_pagamento)
     {_limite_usado = 0;}

Cartao::~Cartao(){}

//Funcoes do cartao

//desconta direto na conta
int Cartao::usar_cartao_debito(int valor){
    return valor*(-1);
} 

//adiciona o valor a fatura
int Cartao::usar_cartao_credito(int valor){
    _limite_usado += valor;
    if(_limite_credito < _limite_usado){
        _limite_usado -= valor;
        throw std::invalid_argument("Sem limite o susficiente");
    }
    return (-1)*valor;
} 

//adiciona um mes ao fechamento e pagamento
void Cartao::nova_fatura(){
    _faturas_pagas.push_back(std::pair<int, std::string> (_limite_usado, _data_pagamento));
    _limite_usado = 0;
    //fechamento fatura++
    _fechamento_fatura = Funcionalidade::adicionar_mes(_fechamento_fatura);
    //data pagamento++
    _data_pagamento = Funcionalidade::adicionar_mes(_data_pagamento);
} 

//paga a fatura com a conta
int Cartao::pagar_fatura(){
    this->nova_fatura();
    return _limite_usado*(-1);
} 

int Cartao::pagar_fatura(int valor){
    _limite_usado -= valor;
    if(_limite_usado<0){
        _limite_usado += valor;
        throw std::invalid_argument("Pagamento acima do valor da fatura");
    }
    if(_limite_credito==0){
        this->nova_fatura();
    }
    return valor*(-1);
} 

//ajusta limite
void Cartao::alterar_limite(int valor){
    _limite_credito = valor;
    return;
}