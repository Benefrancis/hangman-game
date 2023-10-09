//
// Created by Benefrancis on 09/10/2023.
//
#include<iostream>

using namespace std;

#include<string>

using namespace std;

string palavra_secreta;

bool acertou();

void adiciona_palavra();


/**
 * Imprime o placar ao final do jogo
 */
void placar() {
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;

    if (!acertou()) {
        cout << "Voce perdeu! Tente novamente!" << endl;
    } else {
        cout << "Parabens! Voce acertou a palavra secreta!" << endl;
        cout << "Voce deseja adicionar uma nova palavra ao banco de dados? (S/N)" << endl;

        char resposta;
        cin >> resposta;

        if (resposta == 'S') {
            adiciona_palavra();
        }

    }
}