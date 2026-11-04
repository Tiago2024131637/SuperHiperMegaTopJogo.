//
// Created by andre on 22/10/2026.
//

#ifndef COMANDO_H
#define COMANDO_H
#include "Simulador.h"
class Fabrica;
class Comando {
    public:
    virtual ~Comando()= default;
    [[nodiscard]] virtual std::string nome() const=0;
    virtual bool valida(std::istringstream& args) =0;
    virtual bool executa(Simulador& sim)=0;
    [[nodiscard]] virtual std::string  ajuda() const=0;
};
#endif //COMANDO_H
