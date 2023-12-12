#ifndef CARTAO_H
#define CARTAO_H

#include <vector>
#include <string>
#include <exception>
#include "Funcionalidade.h"

class Cartao
{
private:
    int _limite_credito;
    std::vector<std::pair<int, std::string>> _faturas_pagas;
    std::string _fechamento_fatura;
    std::string _data_pagamento;
    int _limite_usado;
public:
    Cartao(int limite_credito, std::string fechamento_fatura, std::string data_pagamento);
    ~Cartao();

    //Funcoes do cartao
    int usar_cartao_debito(int valor); //desconta direto na conta
    int usar_cartao_credito(int valor); //adiciona o valor a fatura
    void nova_fatura(); //adiciona um mes ao fechamento e pagamento
    int pagar_fatura(); //paga a fatura com a conta
    int pagar_fatura(int valor);
    void alterar_limite(int valor); //ajusta limite

    // Getters
    int getLimiteCredito() const;
    const std::vector<std::pair<int, std::string>>& getFaturasPagas() const;
    const std::string& getFechamentoFatura() const;
    const std::string& getDataPagamento() const;
    int getLimiteUsado() const;

    // Setters
    void setLimiteCredito(int limiteCredito);
    void setFaturasPagas(const std::vector<std::pair<int, std::string>>& faturasPagas);
    void setFechamentoFatura(const std::string& fechamentoFatura);
    void setDataPagamento(const std::string& dataPagamento);
    void setLimiteUsado(int limiteUsado);
};

#endif
