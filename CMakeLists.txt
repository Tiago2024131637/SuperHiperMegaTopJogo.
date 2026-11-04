cmake_minimum_required(VERSION 3.30)
project(TrabalhoPraticoMeta1)

set(CMAKE_CXX_STANDARD 26)

add_executable(TrabalhoPraticoMeta1 main.cpp
        Ecra.cpp
        Ecra.h
        Simulador.cpp
        Simulador.h
        Terreno.cpp
        Terreno.h
        ParserComandos.cpp
        ParserComandos.h
        Comando.h
        cmake-build-debug/solo.cpp
        cmake-build-debug/solo.h
        Solo.cpp
        Solo.h
        Cratera.cpp
        Cratera.h
        Deposito.cpp
        Deposito.h
        Fabrica.cpp
        Fabrica.h)
