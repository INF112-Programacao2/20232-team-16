#include "Investimento.h"
#include "Funcionalidade.h"

Investimento::Investimento(std::string nome, int valor, std::string data_inicio, std::string prazo, double taxa): 
_nome(nome), _valor(valor), _data_inicio(data_inicio), _prazo(prazo), _taxa(taxa) {_saldo_atual = valor;}

Investimento::~Investimento(){}

//Funcoes de Investimento
void Investimento::realizar_aporte(int valor){
    this->calcular_saldo_atual(Funcionalidade::obterDataAtual());
    _saldo_atual += valor;
    _historico_investimentos.push_back(std::pair<int,std::string> (valor, Funcionalidade::obterDataAtual()));
    return;
}

int Investimento::resgatar_investimento(){
    this->calcular_saldo_atual(Funcionalidade::obterDataAtual());
    _saldo_atual = 0;
    _historico_investimentos.push_back(std::pair<int,std::string> ((-1)*_saldo_atual, Funcionalidade::obterDataAtual()));
    return _saldo_atual;
}

int Investimento::resgatar_investimento(int valor){
    this->calcular_saldo_atual(Funcionalidade::obterDataAtual());
    _saldo_atual -= valor;
    _historico_investimentos.push_back(std::pair<int,std::string> (valor*(-1), Funcionalidade::obterDataAtual()));
    return valor;
}

void Investimento::calcular_saldo_atual(std::string data){
    int dias_diferenca = Funcionalidade::diferencaDias(_data_inicio, data);
    int meses_int = dias_diferenca/30;
    int total = meses_int*_taxa*_saldo_atual;
    _saldo_atual += total;
}