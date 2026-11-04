//
// Created by andre on 22/10/2026.
//

#include "Simulador.h"
#include "ParserComandos.h"
#include <iostream>
#include <string>
#include<iostream>
#include<sstream>
#include "../include/Ecra.h"
#include "ParserComandos.h"
Simulador::Simulador() : ecra(Settings::ecra_max_linhas, Settings::ecra_max_colunas), aExecutar(true){}
void Simulador::executar() {
    std::string linhaComando;
    while (aExecutar) {
        atualizaEcra();
        ecra.Mostra();
        //Pede a linha de comando
        std:: cout<< "\nComando:";
        if (!getline(std::cin,linhaComando)) {
            break;//Fim do inpuit
        }
        if (linhaComando == "fim") {
            aExecutar = false;
        }else {
            processaComando(linhaComando);
        }
    }
    std::cout <<"Simulador encerrado com sucesso" << std::endl;
}
void Simulador::atualizaEcra() {
    ecra.limpa();
    // TODO: se a fabrica existir, desenha-la; senao mostrar a mensagem abaixo
    ecra.escrevaString(1, 2, "Aguardando criacao da fabrica (comando 'fabrica' ou 'carrega')...");

    }

void Simulador::processaComando(const std::string& linhaComando) {
    // TODO: fabrica, carrega, lposicao
    std::cout << "Comando ainda nao implementado: " << linhaComando << std::endl;
}

