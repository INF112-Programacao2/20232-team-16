#ifndef CONTACOMPARTILHADA_H
#define CONTACOMPARTILHADA_H

#include <vector>
#include <string>
#include "Transacao.h"
#include "Usuario.h"
#include "Despesa.h"
#include "Receita.h"

class ContaCompartilhada
{
private:
    std::string _nome;
    int _saldo;
    std::vector<std::pair<Transacao*, Usuario*>> _transacoes; //arrumar um jeito de registrar as transacoes
    std::vector<Usuario*> _usuarios;
    int _metodo; //metodo de divisao das contas (ex: divisao igual, divisao por gasto, divisao em proporcao, etc)
public:
    ContaCompartilhada(std::string nome, int metodo);
    ~ContaCompartilhada();
    void realizar_transacao_compartilhada(Despesa despesa, Usuario *usuario);
    void realizar_transacao_compartilhada(Receita receita, Usuario *usuario);
    void finalizar_conta(); //fazer codigo
    void adicionar_usuario(Usuario *usuario);
};

#endif