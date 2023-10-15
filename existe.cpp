//
// Created by Benefrancis on 09/10/2023.
//
#include<string>


using namespace std;

extern std::string palavra_secreta;


/**
 * Existe o caracter na palavra secreta
 * @param chute
 * @return
 */
bool existe(char chute) {

    for (char c: palavra_secreta) {
        if (chute == c) {
            return true;
        }
    }
    return false;
}
