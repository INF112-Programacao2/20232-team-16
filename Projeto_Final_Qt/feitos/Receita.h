#ifndef RECEITA_H
#define RECEITA_H

#include "Categoria.h"
#include "Transacao.h"

class Receita : public Transacao
{
private:
public:
    Receita(std::string categoria, std::string data, int valor, std::string descricao);
    ~Receita();
    virtual int realizar_transacao();
};

#endif
