//
// Created by Benefrancis on 09/10/2023.
//
#include<iostream>
#include<string>
#include <vector>
#include<fstream>

using namespace std;

void salva_arquivo(vector<string> palavras) {

    ofstream arquivo;

    arquivo.open("palavras.txt");

    if (arquivo.is_open()) {

        arquivo << palavras.size() << endl;


        for (string s: palavras) {
            arquivo << s << endl;
        }

        arquivo.close();
    } else {
        cout << "Não foi possível acesar o banco de palavras " << endl;
        exit(0);
    }
}
