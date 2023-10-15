//
// Created by Benefrancis on 09/10/2023.
//
#include<iostream>
#include<string>
#include<map>

using namespace std;


map<char, bool> chutou;


string palavra_secreta;

/**
 * Retorna se o jogador ja acertou a palavra secreta
 * @return
 */
bool acertou() {
    for (char l: palavra_secreta) {
        if (!chutou[l]) {
            return false;
        }
    }
    return true;
}

