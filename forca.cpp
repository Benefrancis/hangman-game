#include<iostream>
#include<string>
#include <map>
#include <vector>

using namespace std;



string palavra_secreta;


//
//map<char, bool> chutou;
//
//vector<char> erros;
//
//void cabecalho();
//
//void chutes_errados();
//
//void imprime_palavra();
//
//void chute();
//
//void placar();
//
//bool enforcou();
//
//bool acertou();
//
//bool existe(char l);
//
//string sorteia();


#include "acertou.cpp";
#include "adiciona_palavra.cpp";
#include "existe.cpp";
#include "cabecalho.cpp";
#include "sorteia.cpp";
#include "enforcou.cpp";
#include "imprime_palavra.cpp";
#include "chutes_errados.cpp";
#include "chute.cpp";
#include "placar.cpp";


/**
 * Metodo inicial
 * @return
 */
int main() {

    cabecalho();

    sorteia();

    while (!enforcou() && !acertou()) {
        imprime_palavra();
        chutes_errados();
        chute();
    }
    placar();
}
