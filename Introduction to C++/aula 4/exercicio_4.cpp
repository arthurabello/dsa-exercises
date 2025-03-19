//Implemente uma função que receba duas matrizes 2x2
//e calcule a soma delas. No main, crie duas matrizes,
//chame a função para somá-las e imprima a matriz
//resultante.

#include <iostream>
using namespace std;

void SomaMatrizes(int *matriz1, int *matriz2, int *resultado) {
    for (int i = 0; i < 4; i++) { 
        *(resultado + i) = *(matriz1 + i) + *(matriz2 + i);
    }
}

void ImprimirMatriz(int *matriz) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << *(matriz + i * 2 + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2];


    SomaMatrizes(&matriz1[0][0], &matriz2[0][0], &resultado[0][0]);

    cout << "Matriz resultante da soma:" << endl;
    ImprimirMatriz(&resultado[0][0]);

    return 0;
}
