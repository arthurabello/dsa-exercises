//Crie um programa que demonstre a diferença entre
//passar um parâmetro por valor, referência e ponteiro.
//O programa deve:

//Definir uma função para cada tipo de passagem.
//Mostrar o efeito de cada método no valor original da
//variável.

#include <iostream>
using namespace std;

void PorValor(int x) {
    x += 10;
    cout << "Dentro de PorValor: " << x << endl;
}

void PorReferencia(int &x) {
    x += 10;
    cout << "Dentro de PorReferencia: " << x << endl;
} 

void PorPonteiro(int *x) {
    *x += 10;
    cout << "Dentro de PorPonteiro: " << *x << endl;
}

int main() {
    int numero = 50;
    cout << "Valor original: " << numero << endl;

    PorValor(numero);
    cout << "Após PorValor: " << numero << endl;

    PorPonteiro(&numero);
    cout << "Após PorPonteiro: " << numero << endl;

    PorReferencia(numero);
    cout << "Após PorReferencia: " << numero << endl;

    return 0;
}