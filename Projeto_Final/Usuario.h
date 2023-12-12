#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "Conta.h"
#include "Notificacao.h"
#include "Objetivo.h"

class Usuario
{
private:
    //informacoes pessoais
    std::string _username;
    std::string _nome;
    std::string _cpf; //CPF nao tem setter, so eh inserido no constrututor
    std::string _telefone;
    std::string _pix;
    std::string _email;
    std::string _senha;

    //informacoes para o sistema
    std::vector<Conta> _contas;
    std::vector<Objetivo> _objetivos;
    //std::vector<Notificacao> _mensagens;
public:
    Usuario(const std::string& username, const std::string& nome, std::string& cpf,
        std::string& telefone, std::string& pix, const std::string& email, const std::string& senha);
    ~Usuario();

    // Setters
    void set_username(const std::string& nome);
    void set_nome(const std::string& sobrenome);
    void set_telefone(const std::string& telefone);
    void set_pix(const std::string& pix);
    void set_email(const std::string& email);
    void set_senha(const std::string& senha);

    // Getters
    std::string get_username() const;
    std::string get_nome() const;
    std::string get_cpf() const;
    std::string get_telefone() const;
    std::string get_pix() const;
    std::string get_email() const;
    std::string get_senha() const;

    //Funcoes do usuario
    void criar_conta(std::string nome,std::string banco,int saldo); //conta
    void excluir_conta(int i);
    void criar_conta_compartilhada(std::string nome, int metodo);
    void excluir_conta_compartilhada(int i);
    void criar_objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite);
    void excluir_objetivo(int i);
    /* void adicionar_mensagem();
    void excluir_mensagem(int i); */
    int numero_de_contas();
    int saldo_total();
    int saldo_iesima_conta(int i);
};

#endif