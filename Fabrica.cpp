#include "Fabrica.h"
#include "Settings.h"
#include <iostream>

Fabrica::Fabrica(int linhas, int colunas) {
    // Garante os limites máximos (ex: 26x26 conforme o enunciado)
    nlinhas = (linhas > 26) ? 26 : linhas;
    ncolunas = (colunas > 26) ? 26 : colunas;
    if (nlinhas < 1) nlinhas = 1;
    if (ncolunas < 1) ncolunas = 1;

    inicializaTerrenos();
}

void Fabrica::inicializaTerrenos() {
    // Aqui vais implementar a lógica para colocar aleatoriamente
    // as crateras (#), depósitos de ferro (%), silício ($) e gelo (~)
    // com base nas quantidades definidas na classe Settings.
}

void Fabrica::desenhaNoEcra(Ecra& ecra) const {
    // 1. Desenhar a moldura da fábrica
    // 2. Desenhar a régua com as letras das linhas e colunas (maiúsculas, ex: A, B, C...)[cite: 3]
    // 3. Desenhar o painel de estado lateral (instante atual, créditos iniciais)[cite: 3]
}