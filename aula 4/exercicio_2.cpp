//Implemente uma função que receba dois ponteiros
//para inteiros e troque os valores das variáveis.
//No main, crie duas variáveis, imprima seus valores
//antes e depois da troca.

#include <iostream>
using namespace std;

void trocador_de_ponteiro(int *x1, int *x2) {
    int temp = *x1;  
    *x1 = *x2;      
    *x2 = temp;     
}

int main() {
    int valor1, valor2;

    cout << "Digite um valor para a primeira variável: ";
    cin >> valor1;

    cout << "Digite um valor para a segunda variável: ";
    cin >> valor2;

    int *ponteiro_1 = &valor1;
    int *ponteiro_2 = &valor2;

    cout << "\nAntes da troca:" << endl;
    cout << "Valor 1: " << *ponteiro_1 << endl;
    cout << "Valor 2: " << *ponteiro_2 << endl;

    trocador_de_ponteiro(ponteiro_1, ponteiro_2);

    cout << "\nDepois da troca:" << endl;
    cout << "Valor 1: " << *ponteiro_1 << endl;
    cout << "Valor 2: " << *ponteiro_2 << endl;

    return 0;
}
