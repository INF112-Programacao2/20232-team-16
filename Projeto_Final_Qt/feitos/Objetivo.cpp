#include "Objetivo.h"

Objetivo::Objetivo(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria):
    _nome(nome), _descricao(descricao), _valor_meta(valor_meta), _data_limite(data_limite), _categoria(categoria) {_progresso_atual = 0;}

Objetivo::~Objetivo(){}

void Objetivo::alterar_progresso(int valor){
    _progresso_atual += valor;
    if(_progresso_atual>=_valor_meta){
        _progresso_atual = _valor_meta;
        this->concluir_progresso();
    }
}
int Objetivo::concluir_progresso(){
    if(_progresso_atual>=_valor_meta){
        return 1;
    }
    else{
        return 0;
    }
}

void Objetivo::atualizar_data(){
    int diferenca = Funcionalidade::diferencaDias(_data_limite, Funcionalidade::obterDataAtual());
    if(diferenca<0){
        this->concluir_progresso();
    }
}

std::string Objetivo::get_nome(){
    return _nome;
}

int Objetivo::get_progresso(){
    return _progresso_atual;
}
void Objetivo::set_tipo(bool tipo){
    _tipo = tipo;
}
bool Objetivo::get_tipo(){
    return _tipo;
}
std::string Objetivo::get_categoria(){
    return _categoria;
}
void Objetivo::reiniciar_progresso(){
    _progresso_atual = 0;
}

