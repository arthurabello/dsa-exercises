//Manipulando Arrays Dinâmicos
//Crie uma função que receba um número n e retorne um array dinâmico preenchido com os números de 1 a n.
//Libere a memória corretamente no main.

#include <iostream>
using namespace std;

int* preenchedor(int n) {
    int* array_hasta_n = new int[n];
    for (int i = 1 ; i <= n ; i++) {
        array_hasta_n[i] = i;
    }
    return array_hasta_n;
}

int main() {
    int n;
    cout << "Digite um número: " << endl;
    cin >> n;
    
    int* array_resultado = preenchedor(n);

    cout << "Array Preenchido: " << endl;
    for(int i = 1 ; i <= n ; i++) {
        cout << array_resultado[i] <<  endl;
    }
    
    delete[] array_resultado;
    return 0;
}