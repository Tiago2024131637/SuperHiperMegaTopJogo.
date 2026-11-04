#include "Cratera.h"

using namespace std;

char Cratera::getCaracter() const {
    return '#';
}

string Cratera::getDescricao() const {
    return "Cratera";
}

bool Cratera::permiteMaquina() const {
    return false;
}
