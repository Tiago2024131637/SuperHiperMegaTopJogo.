#ifndef FABRICA_H
#define FABRICA_H

#include "Ecra.h"

class Fabrica {
private:
    int nlinhas;
    int ncolunas;
    // Podes adicionar aqui matrizes ou estruturas para o terreno (ex: char terreno[26][26])

public:
    Fabrica(int linhas, int colunas);

    void inicializaTerrenos(); // Coloca crateras e depósitos aleatórios conforme o Settings
    void desenhaNoEcra(Ecra& ecra) const; // Desenha a grelha, régua, moldura e painel de estado

    int getLinhas() const { return nlinhas; }
    int getColunas() const { return ncolunas; }
};

#endif // FABRICA_H