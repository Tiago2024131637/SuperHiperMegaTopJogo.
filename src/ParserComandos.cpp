#include "../include/ParserComandos.h"
#include <sstream>
#include <iostream>

Comando* ParserComandos::parse(const std::string& linhaTexto) {
    if (linhaTexto.empty()) return nullptr;

    std::stringstream inputStream(linhaTexto);
    std::string cmd;
    inputStream >> cmd;

    if (cmd == "fabrica") {
        int numLin, numCol;
        if (inputStream >> numLin >> numCol) {

            return nullptr;
        }
        std::cout << "Erro: Sintaxe incorreta. Uso: fabrica <nl> <nc>" << std::endl;
        return nullptr;
    }

    if (cmd == "avanca") {
        int n = 1;
        inputStream >> n;
        return nullptr;
    }

    if (cmd == "fim") {
        // Lógica para terminar
        return nullptr;
    }

    std::cout << "Comando desconhecido." << std::endl;
    return nullptr;
}