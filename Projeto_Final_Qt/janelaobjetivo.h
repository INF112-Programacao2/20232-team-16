#ifndef JANELAOBJETIVO_H
#define JANELAOBJETIVO_H

#include <QDialog>

//--------------------
#include "feitos/Categoria.h"
#include "feitos/Funcionalidade.h"
#include "feitos/ObjetivoReceita.h"
#include "feitos/Cartao.h"
#include "feitos/Emprestimo.h"
#include "feitos/Investimento.h"
#include "feitos/Transacao.h"
#include "feitos/Receita.h"
#include "feitos/Despesa.h"
#include "feitos/Conta.h"
#include "feitos/Usuario.h"
#include "feitos/Sistema.h"
#include "feitos/Transferencia.h"
//#include "Notificacao.h"
//#include "ContaCompartilhada.h"
//#include "Relatorio.h"
#include "feitos/objetivodespesa.h"
//--------------------

namespace Ui {
class JanelaObjetivo;
}

class JanelaObjetivo : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaObjetivo(QWidget *parent = nullptr);
    ~JanelaObjetivo();
    void recebe_usuario(Usuario *usuario);

private slots:
    void on_btn_definir_clicked();

private:
    Ui::JanelaObjetivo *ui;
    Usuario* _usuario;
};

#endif // JANELAOBJETIVO_H
