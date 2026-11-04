cmake_minimum_required(VERSION 3.30)
project(TrabalhoPraticoMeta1)

set(CMAKE_CXX_STANDARD 26)

add_executable(TrabalhoPraticoMeta1 main.cpp
        src/Ecra.cpp
        include/Ecra.h
        src/Simulador.cpp
        include/Simulador.h
        src/Terreno.cpp
        include/Terreno.h
        src/ParserComandos.cpp
        include/ParserComandos.h
        include/Comando.h
        cmake-build-debug/solo.h
        src/Solo.cpp
        include/Solo.h
        src/Cratera.cpp
        include/Cratera.h
        src/Deposito.cpp
        include/Deposito.h
        src/Fabrica.cpp
        include/Fabrica.h
        src/start.cpp
        include/Start.h
)
