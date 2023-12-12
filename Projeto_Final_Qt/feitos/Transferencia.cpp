#include "Transferencia.h"

Transferencia::Transferencia(std::string categoria, std::string data, int valor, std::string descricao):
    Transacao(categoria, data, valor, descricao) {}

Transferencia::~Transferencia(){}

int Transferencia::realizar_transferencia(){
    return _valor*(-1); //inserir destinatario
}
