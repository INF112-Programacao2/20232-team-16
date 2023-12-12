#ifndef DESPESA_H
#define DESPESA_H

#include "Categoria.h"
#include "Transacao.h"

class Despesa : public Transacao
{
private:
public:
    Despesa(Categoria *categoria, int id, std::string data, int valor, std::string descricao);
    ~Despesa();
    virtual int realizar_transacao();
};

#endif