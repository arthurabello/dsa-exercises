//Crie uma função que inverta os elementos de um
//array utilizando ponteiros. No main, crie um array,
//imprima os valores antes e depois da inversão.

#include <iostream>
using namespace std;

void inversor_de_array(int *arr, int tamanho) {
    int *inicio = arr;            
    int *fim = arr + tamanho - 1; 

    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    cout << "Array antes da inversão: ";
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    inversor_de_array(array, tamanho);

    cout << "Array depois da inversão: ";
    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}