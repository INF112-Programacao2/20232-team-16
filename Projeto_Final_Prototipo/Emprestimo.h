#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <string>
#include <vector>

class Emprestimo
{
private:
    std::string _nome;
    int _valor;
    double _taxa;
    int _prazo; // em meses
    std::string _data_contratacao;
    int _montante_pago;
    std::vector<std::pair<int, std::string>> _historico_pagamentos;
public:
    Emprestimo(std::string nome, int valor, double taxa, int prazo, std::string data_contatacao);
    ~Emprestimo();

    //Funcoes de emprestimo
    int realizar_pagamento();
    int realizar_pagamento(int valor);
    void calcular_saldo_atual(std::string data);
};

#endif