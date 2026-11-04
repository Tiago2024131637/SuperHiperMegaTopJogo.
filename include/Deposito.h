#ifndef DEPOSITO_H
#define DEPOSITO_H

#include "Terreno.h"

class Deposito : public Terreno {
private:
    char tipo;
    int quantidade;
public:
    Deposito(char t, int q) : tipo(t), quantidade(q) {}

    char getCaracter() const override;
    std::string getDescricao() const override;
    bool permiteMaquina() const override;

    bool extrai();
    bool estaEsgotado() const;
    char getTipo() const;
    int getQuantidade() const;


};



#endif //DEPOSITO_H
