#ifndef OBJETIVO_H
#define OBJETIVO_H

#include <string>
#include <vector>
#include "Funcionalidade.h"

class Objetivo
{
private:
    std::string _nome;
    std::string _descricao;
    int _valor_meta;
    std::string _data_limite;
    int _progresso_atual;
public:
    Objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite);
    ~Objetivo();
    void alterar_progresso(int valor);
    int concluir_progresso();
    void atualizar_data();
};

#endif