cmake_minimum_required(VERSION 3.26)
project(forca)

set(CMAKE_CXX_STANDARD 17)

add_executable(forca forca.cpp
        cabecalho.cpp
        existe.cpp
        sorteia.cpp
        ler_arquivo.cpp
        placar.cpp
        adiciona_palavra.cpp
        salva_arquivo.cpp
        chute.cpp
        imprime_palavra.cpp
        enforcou.cpp
        acertou.cpp
        chutes_errados.cpp
        adiciona_palavra.hpp)
