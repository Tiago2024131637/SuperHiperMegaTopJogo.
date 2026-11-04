#include "Solo.h"

using namespace std;

char Solo::getCaracter() const {
  return ' ';
}

string Solo::getDescricao() const {
  return "Solo";
}

bool Solo::permiteMaquina() const {
  return true;
}