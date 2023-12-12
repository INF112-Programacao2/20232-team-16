#include "ContaCompartilhada.h"

ContaCompartilhada::ContaCompartilhada(std::string nome, int metodo):
    _nome(nome), _metodo(metodo) {_saldo = 0;}

ContaCompartilhada::~ContaCompartilhada(){}

void ContaCompartilhada::realizar_transacao_compartilhada(Despesa despesa, Usuario *usuario){
    despesa.realizar_transacao();
    Transacao *ponteiroT = &despesa;
    _transacoes.push_back(std::pair(ponteiroT, usuario));
}

void ContaCompartilhada::realizar_transacao_compartilhada(Receita receita, Usuario *usuario){
    receita.realizar_transacao();
    Transacao *ponteiroT = &receita;
    _transacoes.push_back(std::pair(ponteiroT, usuario));
}

void ContaCompartilhada::finalizar_conta(){ //fazer codigo

}
void ContaCompartilhada::adicionar_usuario(Usuario *usuario){
    _usuarios.push_back(usuario);
}