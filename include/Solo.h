#ifndef SOLO_H
#define SOLO_H

#include "../include/Terreno.h"

class Solo : public Terreno {
public:
  char getCaracter() const override;
  std::string getDescricao() const override;
  bool permiteMaquina() const override;
};

#endif //SOLO_H
