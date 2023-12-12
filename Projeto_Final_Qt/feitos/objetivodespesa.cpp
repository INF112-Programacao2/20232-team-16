#include "objetivodespesa.h"
#include "Funcionalidade.h"

ObjetivoDespesa::ObjetivoDespesa(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria):
    _nome(nome), _descricao(descricao), _valor_meta(valor_meta), _data_limite(data_limite), _categoria(categoria) {_progresso_atual = 0;}

ObjetivoDespesa::~ObjetivoDespesa(){}

void ObjetivoDespesa::alterar_progresso(int valor){
    _progresso_atual += valor;
    if(_progresso_atual>=_valor_meta){
        _progresso_atual = _valor_meta;
        this->concluir_progresso();
    }
}
int ObjetivoDespesa::concluir_progresso(){
    if(_progresso_atual>=_valor_meta){
        return 1;
    }
    else{
        return 0;
    }
}

void ObjetivoDespesa::atualizar_data(){
    int diferenca = Funcionalidade::diferencaDias(_data_limite, Funcionalidade::obterDataAtual());
    if(diferenca<0){
        this->concluir_progresso();
    }
}

std::string ObjetivoDespesa::get_nome(){
    return _nome;
}

int ObjetivoDespesa::get_progresso(){
    return ((double) _progresso_atual/(double) _valor_meta)*100;
}
void ObjetivoDespesa::set_tipo(bool tipo){
    _tipo = tipo;
}
bool ObjetivoDespesa::get_tipo(){
    return _tipo;
}
std::string ObjetivoDespesa::get_categoria(){
    return _categoria;
}
void ObjetivoDespesa::reiniciar_progresso(){
    _progresso_atual = 0;
}
