#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "Conta.h"
//#include "Notificacao.h"
#include "ObjetivoReceita.h"
#include "objetivodespesa.h"

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
    std::vector<Objetivo> _objetivos;
    std::vector<ObjetivoDespesa> _objetivos_desp;
    std::vector<std::string> _categorias;
    std::vector<bool> _categorias_tipos;
    std::vector<Conta> _contas;

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
    void criar_conta(Conta *conta);
    void excluir_conta(int i);
    void criar_conta_compartilhada(std::string nome, int metodo);
    void excluir_conta_compartilhada(int i);
    void criar_objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria);
    void excluir_objetivo(int i);
    void criar_objetivo_desp(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria);
    void excluir_objetivo_desp(int i);
    void excluir_objetivo();
    void excluir_objetivo_desp();
    int numero_objetivos();
    /* void adicionar_mensagem();
    void excluir_mensagem(int i); */
    int numero_de_contas();
    int saldo_total();
    int saldo_iesima_conta(int i);

    // Getters e Setters para os vetores privados
    std::vector<Objetivo>& get_objetivos() ;
    void set_objetivos(std::vector<Objetivo>& objetivos);

    std::vector<std::string>& get_categorias() ;
    void set_categorias (std::vector<std::string>& categorias);

    std::vector<bool>& get_categorias_tipos() ;
    void set_categorias_tipos( std::vector<bool>& categorias_tipos);

    std::vector<Conta>& get_contas() ;
    void set_contas( std::vector<Conta>& contas);

    std::vector<ObjetivoDespesa>& get_objetivos_desp() ;
    void set_objetivos_desp(std::vector<ObjetivoDespesa>& objetivos_desp);
};

#endif
