#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include "usuario_dados.h"

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = nullptr);
    ~Cadastro();
    Usuario_dados* novo_usuario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Cadastro *ui;
    Usuario_dados *_usuario;
};

#endif // CADASTRO_H
