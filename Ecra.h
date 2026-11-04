//
// Created by andre on 22/10/2026.
//
#include <string>

#include "Settings.h"
#ifndef ECRA_H
#define ECRA_H



class Ecra {
private:
    char buffer[Settings::ecra_max_linhas][Settings::ecra_max_colunas];
    int nlinhas;
    int ncolunas;
    int cursorLinha,cursorColuna;

    public:
    Ecra(int l=Settings::ecra_max_linhas,int c = Settings::ecra_max_colunas);
    void limpa();
    void posicionaCursor(int l, int c);
    void escrevaChar(char ch);
    void escrevaChar(int l,int c,char ch);
    void escrevaString(int l, int c, const char *str);
    void DesenhaMoldura(int l, int c, int altura,int largura);
    void Mostra() const;// Vai imprimir logo d eum avez o buffer para a consola
    int getLinhas() const{return nlinhas;}
    int getColunas() const{return ncolunas;}


};



#endif //ECRA_H
