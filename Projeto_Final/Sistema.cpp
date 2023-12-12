#include "Sistema.h"

Sistema::Sistema(){}

Sistema::~Sistema(){}

//le um arquivo com as informações do usuario logado
void Sistema::inicia_sistema(){
    //FALTA
} 

//escreve todas as informações alteradas apos o uso do sistema em um arquivo
void Sistema::encerra_sistema(){
    //FALTA
} 
void Sistema::criar_usuario(const std::string& username, const std::string& nome, std::string& cpf,
        std::string& telefone, std::string& pix, const std::string& email, const std::string& senha){
    _usuarios.push_back(Usuario(username, nome, cpf, telefone, pix, email, senha));
}
void Sistema::excluir_usuario(int i){
    _usuarios.erase(_usuarios.begin()+i);
}
void Sistema::inserir_usuario(Usuario usuario){
    _usuarios.push_back(usuario);
}
bool Sistema::fazer_login(std::string username, std::string senha){
    for(int i=0;i<_usuarios.size();i++){
        if(_usuarios[i].get_username()==username){
            if(_usuarios[i].get_senha()==senha){
                return true;
            }
        }
    }
    return false;
}
Usuario* Sistema::encontrar_usuario(std::string username, std::string senha){
    for(int i=0;i<_usuarios.size();i++){
        if(_usuarios[i].get_username()==username){
            if(_usuarios[i].get_senha()==senha){
                return &_usuarios[i];
            }
        }
    }
    return nullptr;
}