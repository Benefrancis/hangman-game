//
// Created by Benefrancis on 09/10/2023.
//

#include <iostream>
#include <vector>
#include <string>
#include "ler_arquivo.hpp"
#include "salva_arquivo.hpp"

vector<string> ler_arquivo();

void salva_arquivo(vector<string> vector1);


void adiciona_palavra() {

    std::cout << "Digite a nova palavra usando letras maiusculas" << std::endl;
    std::string nova;
    std::cin >> nova;

    vector<string> palavras = ler_arquivo();
    palavras.push_back(nova);

    salva_arquivo(palavras);

}
