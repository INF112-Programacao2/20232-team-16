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
    std::string _categoria;
    bool _tipo; //0->receita, 1->despesa
public:
    Objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria);
    ~Objetivo();
    void alterar_progresso(int valor);
    int concluir_progresso();
    void atualizar_data();
    std::string get_nome();
    int get_progresso();
    void set_tipo(bool tipo);
    bool get_tipo();
    std::string get_categoria();
    void reiniciar_progresso();
};

#endif
