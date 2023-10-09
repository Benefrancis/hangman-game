//
// Created by Benefrancis on 09/10/2023.
//
#include<ctime>
#include<cstdlib>

using namespace std;
#include<string>
#include <vector>

using namespace std;


string palavra_secreta;

vector<string> ler_arquivo();

string sorteia() {

    vector<string> palavras = ler_arquivo();

    srand(time(NULL));

    int indice = rand() % palavras.size();

    palavra_secreta = palavras[indice];

    return palavra_secreta;
}
