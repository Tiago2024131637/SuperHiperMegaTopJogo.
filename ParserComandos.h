#ifndef PARSERCOMANDOS_H
#define PARSERCOMANDOS_H

#include <string>

#include "Comando.h"

class ParserComandos {
public:
    static Comando* parse(const std::string& linhaTexto);
};

#endif // PARSERCOMANDOS_H