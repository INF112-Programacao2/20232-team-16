#ifndef FUNCIONALIDADE_H
#define FUNCIONALIDADE_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

class Funcionalidade
{
private:
    /* data */
public:
    int static converterParaDias(const std::string &data);
    int static diferencaDias(const std::string &data1, const std::string &data2);
    void static muda_data(const std::string &data, int &dia, int &mes, int &ano);
    std::string static obterDataAtual();
    std::string static adicionar_mes(const std::string &data);
    bool static algumaStringVazia(const std::string strings[], size_t tamanho);
};

#endif
