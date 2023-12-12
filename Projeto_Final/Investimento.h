#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

#include <string>
#include <vector>

class Investimento {
private:
    std::string _nome;
    int _valor;
    std::string _data_inicio;
    std::string _prazo;
    double _taxa;
    int _saldo_atual;
    std::vector<std::pair<int, std::string>> _historico_investimentos;

public:
    Investimento(std::string nome, int valor, std::string data_inicio, std::string prazo, double taxa);
    ~Investimento();

    //Funcoes de Investimento
    void realizar_aporte(int valor);
    int resgatar_investimento();
    int resgatar_investimento(int valor);
    void calcular_saldo_atual(std::string data);
};

#endif
