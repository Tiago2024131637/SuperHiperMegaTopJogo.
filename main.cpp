#include <iostream>
#include <sstream>
#include "include/Start.h"

int main() {
    try {
        start();
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << "\n";
    }
    std::cout << "Programa terminado.\n";
    return 0;
}