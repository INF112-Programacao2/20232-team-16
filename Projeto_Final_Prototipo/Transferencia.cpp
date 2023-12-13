#include "Transferencia.h"

Transferencia::Transferencia(Categoria *categoria, int id, std::string data, int valor, std::string descricao): 
    Transacao(categoria, id, data, valor, descricao) {}

Transferencia::~Transferencia(){}

int Transferencia::realizar_transferencia(){
    return _valor*(-1); //inserir destinatario
}