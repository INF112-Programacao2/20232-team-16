#include "Categoria.h"

Categoria::Categoria(const std::string& nome) : _nome_categoria(nome) {}

Categoria::~Categoria(){}

std::string Categoria::getNomeCategoria() const {
    return _nome_categoria;
}

void Categoria::setNomeCategoria(const std::string& nome) {
    _nome_categoria = nome;
}