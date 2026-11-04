//
// Created by andre on 22/10/2026.
//

#include "../include/Ecra.h"
#include <iostream>
using namespace std;
Ecra::Ecra(int l, int c) {
    //Garante que as dimensoes  não ultrapassem as definidas do Settings
    nlinhas=(l>Settings::ecra_max_linhas)?Settings::ecra_max_linhas:l;
    ncolunas=(c>Settings::ecra_max_colunas)?Settings::ecra_max_colunas:c;
    if (nlinhas<1)
        nlinhas=1;
    if (ncolunas<1)
        ncolunas=1;
    ResetLinCol();
    limpa();
}
void Ecra::limpa() {
    for (int i=0;i<nlinhas;i++) {
        for (int j=0;j<ncolunas;j++) {
            buffer[i][j] = ' ';
        }
    }
    ResetLinCol();
}

void Ecra::ResetLinCol() {
    cursorLinha=0;
    cursorColuna=0;
}
void Ecra::posicionaCursor(int l, int c) {
    if (l>=0 && l<nlinhas && c<ncolunas && c>=0) {
        cursorLinha=l;
        cursorColuna=c;
    }
}
void Ecra::escrevaChar(char ch) {
    if (cursorLinha>=0 && cursorLinha<nlinhas && cursorColuna>=0 && cursorColuna<ncolunas) {
        buffer[cursorLinha][cursorColuna]=ch;
    }
}
void Ecra:: escrevaChar(int l,int c,char ch) {
    if (l>=0 && l<nlinhas && c<ncolunas && c>=0) {
        buffer[l][c]=ch;
    }
}
void Ecra::escrevaString(int l, int c, const char *str) {
    if (str == nullptr || l<0 || l>=nlinhas ) {
        return;
    }
    int col =c;
    for (int i=0;str[i] != '\0';++i) {
        if (col>=0 && col<ncolunas ) {
            buffer[l][col]=str[i];
        }
        col++;
        //Se ultrapassar o s limites da dimensao  corta
        if ( col>=ncolunas ) {
            break;
        }

    }


}
void Ecra::DesenhaMoldura(int l, int c, int altura, int largura) {
    if (altura<2  || largura<2) return;
    int fimLinha= l+altura-1;
    int fimColuna= c+largura-1;
    //Cantos
    escrevaChar(l,c,'+');
    escrevaChar(l,fimColuna,'+');
    escrevaChar(fimLinha,c,'+');
    escrevaChar(fimLinha,fimColuna,'+');
    for (int i=c+1;i<fimColuna;++i) {
        escrevaChar(l,i,'-');
        escrevaChar(fimLinha,i,'-');

    }
    for (int j=l+1;j<fimLinha;++j) {
        escrevaChar(j,c,'|');
        escrevaChar(j,fimColuna,'|');


    }
}
void Ecra::Mostra() const {
    for (int i=0;i<nlinhas;i++) {
        for (int j=0;j<ncolunas;j++) {
            std::cout << buffer[i][j] ;
        }
        std::cout << "" << std::endl;
    }
}



