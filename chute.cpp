//
// Created by Benefrancis on 09/10/2023.
//

#include <iostream>
#include <vector>
#include <map>
#include "existe.hpp"

extern std::map<char, bool> chutou;
extern std::vector<char> erros;

using namespace std;




/**
 * função para disponibilizar uma oportunidade de chute para o jogador
 */
void chute() {
    char chute;
    cout << "Chute uma letra: " << endl;
    cin >> chute;

    chutou[chute] = true;

    if (existe(chute)) {
        cout << "O seu chute esta na palavra" << endl;
    } else {
        cout << "O seu chute nao esta na palavra" << endl;
        //Para inserir um elemento em um vector
        // aprendemos a usar o método push_back
        // que insere o elemento desejado no final da lista armazenada.
        erros.push_back(chute);
    }
    cout << endl;
    cout << endl;
}