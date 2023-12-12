#ifndef RECEITA_H
#define RECEITA_H

#include "Categoria.h"
#include "Transacao.h"

class Receita : public Transacao
{
private:
public:
    Receita(Categoria *categoria, int id, std::string data, int valor, std::string descricao);
    ~Receita();
    virtual int realizar_transacao();
};

#endif