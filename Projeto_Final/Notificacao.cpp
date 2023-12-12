#include "Notificacao.h"

Notificacao::Notificacao(std::string mensagem):
    _mensagem(mensagem) {}

Notificacao::~Notificacao(){}

std::string Notificacao::exibir(){
    return _mensagem;
}