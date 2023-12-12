#include "Usuario.h"

Usuario::Usuario(const std::string& username, const std::string& nome, std::string& cpf,
        std::string& telefone, std::string& pix, const std::string& email, const std::string& senha)
    : _username(username), _nome(nome), _cpf(cpf),
      _telefone(telefone), _pix(pix), _email(email), _senha(senha) {
    // Lógica adicional do construtor, se necessário
}
Usuario::~Usuario(){}

// SETTERS
void Usuario::set_username(const std::string& username) {_username = username;}
void Usuario::set_nome(const std::string& nome) {_nome = nome;}
void Usuario::set_telefone(const std::string& telefone) {_telefone = telefone;}
void Usuario::set_pix(const std::string& pix) {_pix = pix;}
void Usuario::set_email(const std::string& email) {_email = email;}
void Usuario::set_senha(const std::string& senha) {_senha = senha;}

// GETTERS
std::string Usuario::get_username() const {return _username;}
std::string Usuario::get_nome() const {return _nome;}
std::string Usuario::get_cpf() const {return _cpf;}
std::string Usuario::get_telefone() const {return _telefone;}
std::string Usuario::get_pix() const {return _pix;}
std::string Usuario::get_email() const {return _email;}
std::string Usuario::get_senha() const {return _senha;}

//FUNCOES DO USUARIO
void Usuario::criar_conta(Conta *conta){
    _contas.push_back(*conta);
}
void Usuario::excluir_conta(int i){
    _contas.erase(_contas.begin()+i);
}
void Usuario::criar_objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria){
    _objetivos.push_back(Objetivo(nome, descricao, valor_meta, data_limite, categoria));
}
void Usuario::excluir_objetivo(int i){
    _objetivos.erase(_objetivos.begin()+i);
}
void Usuario::excluir_objetivo(){
    _objetivos.pop_back();
    _objetivos.shrink_to_fit();
}
int Usuario::numero_objetivos(){
    return _objetivos.size();
}
/* void Usuario::adicionar_mensagem(){
    //FALTA IMPLEMENTAR PROBLEMA COM COMPILACAO
    return;
}
void Usuario::excluir_mensagem(int i){
    _mensagens.erase(_mensagens.begin()+i);
} */
int Usuario::numero_de_contas(){
    return _contas.size();
}
int Usuario::saldo_total(){
    int total = 0;
    for(int i=0;i<_contas.size();i++){
        total += _contas[i].get_saldo();
    }
    return total;
}
int Usuario::saldo_iesima_conta(int i){
    return _contas[i].get_saldo();
}
