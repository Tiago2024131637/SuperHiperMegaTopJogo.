//
// Created by wej on 4/11/26.
//

#include <iostream>
#include <string>
#include <sstream>
#include "../include/Ecra.h"
#include "../include/Start.h"

void start() {
    Ecra ecra;
    std::string linha;
    bool aExecutar = true;

    while (aExecutar) {
        ecra.limpa();
        ecra.DesenhaMoldura(0, 0, 20, 40);
        ecra.escrevaString(1, 2, "Simulador de Fabrica em Marte");
        ecra.escrevaString(3, 2, "Comandos: fabrica <nl> <nc> | fim");
        ecra.Mostra();

        std::cout << "\nComando > ";
        if (!std::getline(std::cin, linha)) break;

        std::stringstream imputStream(linha);
        std::string cmd;
        imputStream >> cmd;

        if (cmd == "fim") {
            aExecutar = false;
        } else if (cmd == "fabrica") {
            int numCol;
            if (int numLin; imputStream >> numLin >> numCol) {
                std::cout << "Fábrica criada com " << numLin << " linhas e " << numCol << " colunas!\n";
            } else {
                std::cout << "Erro na sintaxe. Use: fabrica <nl> <nc>\n";
            }
        } else {
            std::cout << "Comando desconhecido.\n";
        }

        std::cout << "\nPressione Enter para continuar...";
        std::getline(std::cin, linha);
    }
}