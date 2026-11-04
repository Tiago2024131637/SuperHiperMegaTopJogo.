//
// Created by andre on 22/10/2026.
//

#ifndef SIMULADOR_H
#define SIMULADOR_H


#include "Ecra.h"
#include <string>

class Simulador {

  Ecra ecra;
  bool aExecutar;
  void processaComando(const std::string& linhaComando);
  void atualizaEcra();

  public:
  Simulador();
  void executar();


};



#endif //SIMULADOR_H
