#include "Receita.h"

Receita::Receita(Categoria *categoria, int id, std::string data, int valor, std::string descricao):
 Transacao(categoria, id, data, valor, descricao){}

Receita::~Receita(){}

int Receita::realizar_transacao(){
    return _valor;
}