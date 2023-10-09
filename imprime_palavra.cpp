//
// Created by Benefrancis on 09/10/2023.
//

#include<iostream>
#include<string>
#include <map>

using namespace std;

string palavra_secreta;

map<char, bool> chutou;


/**
 * Imprime a palavra sendo formada
 */
void imprime_palavra() {
    cout << endl;
    cout << endl;
    for (char l: palavra_secreta) {
        if (chutou[l]) {
            cout << l << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}
