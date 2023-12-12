#ifndef OBJETIVODESPESA_H
#define OBJETIVODESPESA_H

#include <string>
#include "objetivoif.h"

class ObjetivoDespesa : public ObjetivoIF
{
private:
    std::string _nome;
    std::string _descricao;
    int _valor_meta;
    std::string _data_limite;
    int _progresso_atual;
    std::string _categoria;
    bool _tipo; //0->receita, 1->despesa
public:
    ObjetivoDespesa(std::string nome, std::string descricao, int valor_meta, std::string data_limite, std::string categoria);
    ~ObjetivoDespesa();
    void alterar_progresso(int valor);
    int concluir_progresso();
    void atualizar_data();
    std::string get_nome();
    int get_progresso();
    void set_tipo(bool tipo);
    bool get_tipo();
    std::string get_categoria();
    void reiniciar_progresso();
};


#endif // OBJETIVODESPESA_H
