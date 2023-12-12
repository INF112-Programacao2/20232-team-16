#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>
#include "Categoria.h"

class Transacao//transacao possui 3 filhos (despesa, receita, transferencia)
{
protected:
    Categoria *_categoria;
    int _id_transacao;
    std::string _data;
    int _valor;
    std::string _descricao;
public:
    Transacao(Categoria *categoria, int id, std::string data, int valor, std::string descricao);
    ~Transacao();
    //virtual int realizar_transacao() = 0;
    //virtual int agendar_transacao() = 0;
};

#endif