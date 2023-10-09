
#include<iostream>
#include <vector>


using namespace std;


vector<char> erros;


/**
 * Imprime os chutes errados
 */
void chutes_errados() {
    cout << endl;
    cout << "Chutes errados: ";
    for (char e: erros) {
        cout << e << " ";
    }
    cout << endl;
}


