#include <iostream>
#include <string>
#include <sstream>
#include "include/Ecra.h"
#include "include/Settings.h"
#include "include/Simulador.h"

int main() {
    // 1. Criar o Ecrã com as dimensões máximas do Settings
    Ecra ecra(Settings::ecra_max_linhas, Settings::ecra_max_colunas);

    std::string linha;
    bool aExecutar = true;

    while (aExecutar) {
        // Limpa o ecrã virtual e desenha a moldura básica
        ecra.limpa();
        ecra.DesenhaMoldura(0, 0, 20, 40);
        ecra.escrevaString(1, 2, "Simulador de Fabrica em Marte");
        ecra.escrevaString(3, 2, "Comandos: fabrica <nl> <nc> | fim");

        // Mostra o ecrã na consola
        ecra.Mostra();

        // Pede o comando ao utilizador
        std::cout << "\nComando > ";
        if (!std::getline(std::cin, linha)) break;

        std::stringstream ss(linha);
        std::string cmd;
        ss >> cmd;

        if (cmd == "fim") {
            aExecutar = false;
        }
        else if (cmd == "fabrica") {
            int nl, nc;
            if (ss >> nl >> nc) {
                std::cout << "Fábrica criada com " << nl << " linhas e " << nc << " colunas!\n";
            } else {
                std::cout << "Erro na sintaxe. Use: fabrica <nl> <nc>\n";
            }
        }
        else {
            std::cout << "Comando desconhecido.\n";
        }

        std::cout << "\nPressione Enter para continuar...";
        std::getline(std::cin, linha);
    }

    std::cout << "Programa terminado.\n";
    return 0;
}