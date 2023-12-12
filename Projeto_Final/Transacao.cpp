#include "Transacao.h"

Transacao::Transacao(Categoria *categoria, int id, std::string data, int valor, std::string descricao)
    : _categoria(categoria), _id_transacao(id), _data(data), _valor(valor), _descricao(descricao) {}

Transacao::~Transacao(){}