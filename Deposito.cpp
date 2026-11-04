#include "Deposito.h"

using namespace std;

char Deposito::getCaracter() const {
    switch (tipo) {
        case 'f': return '%';
        case 's': return '$';
        case 'g': return '~';
        default: return ' ';
    }
}
string Deposito::getDescricao() const {
    string nome;
    switch (tipo) {
        case 'f': nome = "ferro"; break;
        case 's': nome = "silicio"; break;
        case 'g': nome = "gelo"; break;
        default: nome = "desconhecido"; break;
    }
    return "Deposito de " + nome + " (" + to_string(quantidade) + ")";
}
bool Deposito::permiteMaquina() const {
    return true;
}
bool Deposito::extrai() {
    if (quantidade > 0) {
        quantidade--;
        return true;
    }
    return false;
}

bool Deposito::estaEsgotado() const {
    return quantidade <=0;
}
char Deposito::getTipo() const {
    return tipo;
}
int Deposito::getQuantidade() const {
    return quantidade;
}


