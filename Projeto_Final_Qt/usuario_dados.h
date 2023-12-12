#ifndef USUARIO_DADOS_H
#define USUARIO_DADOS_H

#include <qstring.h>

class Usuario_dados
{
private:
    //informacoes pessoais
public:
    QString _username;
    QString _nome;
    QString _cpf;
    QString _telefone;
    QString _pix;
    QString _email;
    QString _senha;
    Usuario_dados(const QString& username, const QString& nome, const QString& cpf, const QString& telefone, const QString& pix, const QString& email, const QString& senha);
};

#endif // USUARIO_DADOS_H
