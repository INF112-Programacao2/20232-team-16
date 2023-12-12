#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <fstream>
#include "Usuario.h"

class Sistema
{
private:
    std::vector<Usuario> _usuarios;
public:
    Sistema(/* args */);
    ~Sistema();
    void inicia_sistema();//FALTA //le um arquivo com as informações do usuario logado
    void encerra_sistema();//FALTA //escreve todas as informações alteradas apos o uso do sistema em um arquivo
    void criar_usuario(const std::string& username, const std::string& nome, std::string& cpf,
        std::string& telefone, std::string& pix, const std::string& email, const std::string& senha);
    void excluir_usuario(int i);
    void inserir_usuario(Usuario usuario);
    bool fazer_login(std::string username, std::string senha);
    Usuario* encontrar_usuario(std::string username, std::string senha);
};

#endif
