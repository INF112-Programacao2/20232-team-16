#include "Despesa.h"

Despesa::Despesa(std::string categoria, std::string data, int valor, std::string descricao):
 Transacao(categoria, data, valor, descricao){}

Despesa::~Despesa(){}

int Despesa::realizar_transacao(){
    return (_valor*(-1));
}
