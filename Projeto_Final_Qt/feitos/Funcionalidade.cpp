#include "Funcionalidade.h"

// Converte uma data no formato "dd/mm/aa" para o número de dias desde a data de referência
int Funcionalidade::converterParaDias(const std::string &data) {
    std::istringstream streamData(data);
    int dia, mes, ano;

    // Tenta extrair os valores
    char barra1, barra2;
    if (!(streamData >> dia >> barra1 >> mes >> barra2 >> ano) || barra1 != '/' || barra2 != '/') {
        std::cerr << "Formato de data inválido." << std::endl;
        return -1;  // Retorna -1 em caso de erro
    }

    // Verifica se os valores extraídos são válidos
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {
        std::cerr << "Valores de data inválidos." << std::endl;
        return -1;  // Retorna -1 em caso de erro
    }

    // Converte para o número de dias desde a data de referência
    return dia + mes * 31 + ano * 365;
}

// Calcula a diferença em dias entre duas datas
int Funcionalidade::diferencaDias(const std::string &data1, const std::string &data2) {
    int dias1 = converterParaDias(data1);
    int dias2 = converterParaDias(data2);

    if (dias1 == -1 || dias2 == -1) {
        // Se houver erro na conversão, retorna -1
        return -1;
    }

    // Calcula a diferença absoluta em dias
    return std::abs(dias1 - dias2);
}

//muda a data para o formato dia mes e ano em int
void Funcionalidade::muda_data(const std::string &data, int &dia, int &mes, int &ano) {
    std::istringstream streamData(data);
    char barra1, barra2;

    // Tenta extrair os valores
    if (!(streamData >> dia >> barra1 >> mes >> barra2 >> ano) || barra1 != '/' || barra2 != '/') {
        // Se a extração falhar ou as barras não estiverem nos lugares certos
        std::cerr << "Formato de data inválido." << std::endl;
        dia = mes = ano = -1;  // Atribui valores inválidos em caso de erro
    }
}

//obtem a data atual do computador em string
std::string Funcionalidade::obterDataAtual() {
    // Obtém o tempo atual em segundos desde 01/01/1970
    std::time_t tempoAtual = std::time(nullptr);

    // Converte o tempo atual para uma estrutura tm (data e hora local)
    std::tm *dataHoraLocal = std::localtime(&tempoAtual);

    // Formata a data como uma string
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(2) << dataHoraLocal->tm_mday << '/';
    ss << std::setfill('0') << std::setw(2) << dataHoraLocal->tm_mon + 1 << '/';
    ss << std::setfill('0') << std::setw(2) << dataHoraLocal->tm_year + 1900;

    return ss.str();
}

//recebe string em data e retorna string com data +1 mes
std::string Funcionalidade::adicionar_mes(const std::string &data) {
    // Converte a string para uma estrutura de tempo
    std::tm tempo = {};
    std::istringstream ss(data);
    ss >> std::get_time(&tempo, "%d/%m/%y");

    // Adiciona um mês
    tempo.tm_mon += 1;

    // Ajusta o ano se necessário
    if (tempo.tm_mon > 11) {
        tempo.tm_mon = 0;
        tempo.tm_year += 1;
    }

    // Converte de volta para uma string
    std::ostringstream novaData;
    novaData << std::setfill('0') << std::setw(2) << tempo.tm_mday << '/';
    novaData << std::setfill('0') << std::setw(2) << tempo.tm_mon + 1 << '/';
    novaData << std::setfill('0') << std::setw(2) << tempo.tm_year % 100;

    return novaData.str();
}

//True se alguma string passada for vazia
bool Funcionalidade::algumaStringVazia(const std::string strings[], size_t tamanho) {
    for (size_t i = 0; i < tamanho; ++i) {
        if (strings[i].empty()) {
            return true;  // Retorna true se encontrar uma string vazia
        }
    }
    return false;  // Retorna false se nenhuma string vazia for encontrada
}
