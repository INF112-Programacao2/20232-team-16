#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <iostream>
#include <string>

class Categoria {
private:
    std::string _nome_categoria;
public:
    Categoria(const std::string& nome);
    ~Categoria();

    //Gets e Sets
    std::string getNomeCategoria() const;
    void setNomeCategoria(const std::string& nome);
};

#endif