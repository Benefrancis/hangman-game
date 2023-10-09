//
// Created by Benefrancis on 09/10/2023.
//
#include<ctime>
#include<cstdlib>
#include<string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

/**
  * Lê o arquivo de palavras que serão as palavras utilizadas no jogo
  * @return
  *
  * retorna as palavras
  */
vector<string> ler_arquivo() {

    ifstream arquivo;
    arquivo.open("palavras.txt");
    vector<string> palavras;
    if (arquivo.is_open()) {
        int qtd_palavras;
        arquivo >> qtd_palavras;
        for (int i = 0; i < qtd_palavras; i++) {
            string palavra;
            arquivo >> palavra;
            palavras.push_back(palavra);
            // cout << "Na linha " << i << " : " << palavra << endl;
        }
        arquivo.close();
    } else {
        cout << "Nao foi possivel acesar o banco de palavras " << endl;
        exit(0);
    }
    return palavras;
}
