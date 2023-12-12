#ifndef TRANSFERENCIA_H
#define TRANSFERENCIA_H

#include "Transacao.h"
#include "Conta.h"

class Transferencia : public Transacao
{
private:
    Conta *_destinatario;
public:
    Transferencia(std::string categoria, std::string data, int valor, std::string descricao);
    ~Transferencia();
    virtual int realizar_transferencia();
};

#endif
