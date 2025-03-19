//  Escreva uma função que receba um número inteiro
//  e imprima se ele é positivo, negativo ou zero.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número (por gentileza): " << endl;
    cin >> numero;
    
    if(numero > 0) {
        cout << "O número é positivo." << endl;
    } else if(numero < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é 0." << endl;
    }

    return 0;
}