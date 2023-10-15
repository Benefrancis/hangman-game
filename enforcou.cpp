//
// Created by Benefrancis on 09/10/2023.
//
#include <vector>

using namespace std;

vector<char> erros;


/**
 * Existem apenas quatro tentativas
 * @return
 */
bool enforcou() {
    return erros.size() > 4;
}
