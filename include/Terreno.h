#ifndef TRABPRAT_TERRENO_H
#define TRABPRAT_TERRENO_H
#include <string>

class Terreno {
public:
    virtual ~Terreno() = default;
    virtual char getCaracter() const = 0;
    virtual std::string getDescricao() const = 0;
    virtual bool permiteMaquina() const = 0;
};


#endif //TRABPRAT_TERRENO_H