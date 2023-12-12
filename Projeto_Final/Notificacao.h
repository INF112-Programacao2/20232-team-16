#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include <string>

class Notificacao
{
private:
    std::string _mensagem;
public:
    Notificacao(std::string mensagem);
    ~Notificacao();
    std::string exibir(); //fazer exibicao na tela
};

#endif