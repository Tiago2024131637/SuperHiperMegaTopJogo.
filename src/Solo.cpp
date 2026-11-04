#include "../include/Solo.h"

#include <string>

using namespace std;

char Solo::getCaracter() const {
  return ' ';
}

std::string Solo::getDescricao() const {
  return "Solo";
}

bool Solo::permiteMaquina() const {
  return true;
}