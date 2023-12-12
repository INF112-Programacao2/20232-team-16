#include "usuario_dados.h"

Usuario_dados::Usuario_dados(const QString& username, const QString& nome, const QString& cpf, const QString& telefone, const QString& pix, const QString& email, const QString& senha)
    : _username(username), _nome(nome), _cpf(cpf), _telefone(telefone), _pix(pix), _email(email), _senha(senha){}
