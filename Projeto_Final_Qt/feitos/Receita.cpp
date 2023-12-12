#include "Receita.h"

Receita::Receita(std::string categoria, std::string data, int valor, std::string descricao):
 Transacao(categoria, data, valor, descricao){}

Receita::~Receita(){}

int Receita::realizar_transacao(){
    return _valor;
}
