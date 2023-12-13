#include "Despesa.h"

Despesa::Despesa(Categoria *categoria, int id, std::string data, int valor, std::string descricao):
 Transacao(categoria, id, data, valor, descricao){}

Despesa::~Despesa(){}

int Despesa::realizar_transacao(){
    return (_valor*(-1));
}