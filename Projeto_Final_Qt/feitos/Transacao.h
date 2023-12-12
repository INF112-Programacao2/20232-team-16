#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>
#include "Categoria.h"

class Transacao//transacao possui 3 filhos (despesa, receita, transferencia)
{
protected:
    static int _id_counter;  // Variável estática para contar o número de instâncias
    int _id;  // Identificador único para cada instância
    std::string _categoria;
    std::string _data;
    int _valor;
    std::string _descricao;
public:
    Transacao(std::string categoria, std::string data, int valor, std::string descricao);
    ~Transacao();
    //virtual int realizar_transacao() = 0;
    //virtual int agendar_transacao() = 0;
    // Getters
    int get_id() const;
    std::string get_categoria() const;
    std::string get_data() const;
    int get_valor() const;
    std::string get_descricao() const;

    // Setters
    void set_categoria(const std::string& categoria);
    void set_data(const std::string& data);
    void set_valor(int valor);
    void set_descricao(const std::string& descricao);
};

#endif
