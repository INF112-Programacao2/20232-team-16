#ifndef OBJETIVOIF_H
#define OBJETIVOIF_H

#include <string>

class ObjetivoIF
{
public:
    ObjetivoIF();
    virtual void alterar_progresso(int valor) = 0;
    virtual int concluir_progresso() = 0;
    virtual void atualizar_data() = 0;
    virtual std::string get_nome() = 0;
    virtual int get_progresso() = 0;
    virtual void set_tipo(bool tipo) = 0;
    virtual bool get_tipo() = 0;
    virtual std::string get_categoria() = 0;
    virtual void reiniciar_progresso() = 0;
};

#endif // OBJETIVOIF_H
