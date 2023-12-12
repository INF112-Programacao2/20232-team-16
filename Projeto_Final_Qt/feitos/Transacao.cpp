#include "Transacao.h"

int Transacao::_id_counter = 0;  // Inicializando a variável estática

Transacao::Transacao(std::string categoria, std::string data, int valor, std::string descricao)
    : _id(++_id_counter), _categoria(categoria), _data(data), _valor(valor), _descricao(descricao) {}
Transacao::~Transacao(){}

// Getters
int Transacao::get_id() const {
    return _id;
}
std::string Transacao::get_categoria() const {
    return _categoria;
}

std::string Transacao::get_data() const {
    return _data;
}

int Transacao::get_valor() const {
    return _valor;
}

std::string Transacao::get_descricao() const {
    return _descricao;
}

// Setters
void Transacao::set_categoria(const std::string& categoria) {
    _categoria = categoria;
}

void Transacao::set_data(const std::string& data) {
    _data = data;
}

void Transacao::set_valor(int valor) {
    _valor = valor;
}

void Transacao::set_descricao(const std::string& descricao) {
    _descricao = descricao;
}
