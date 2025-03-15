//Enum e Structs
//Crie um enum chamado Cargo com valores Estagiario, Junior, Pleno e Senior.
//Defina uma struct Funcionario que contenha um nome e um cargo.
//Crie um vetor dinâmico para armazenar n funcionários e exiba os valores.

#include <iostream>
using namespace std;

enum Cargo {
    Estagiario,
    Junior,
    Pleno,
    Senior,
};

struct Funcionario {
    string nome;
    Cargo cargo;
};

void mostrar_atributos(const Funcionario& funcionario) {
    cout << "Nome: " << funcionario.nome << ", Cargo: ";
    switch (funcionario.cargo) {
        case Estagiario: cout << "Estagiario"; break;
        case Junior: cout << "Junior"; break;
        case Pleno: cout << "Pleno"; break;
        case Senior: cout << "Senior"; break;
    }
    cout << endl;
}

int main() {
    int numero_de_funcionarios;
    cout << "Digite o número de funcionários que deseja cadastrar: ";
    cin >> numero_de_funcionarios;
    
    Funcionario* vetor_dinamico_de_funcionarios = new Funcionario[numero_de_funcionarios];

    for(int i = 0; i < numero_de_funcionarios; i++) {
        cout << "Digite o nome do funcionário " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, vetor_dinamico_de_funcionarios[i].nome); 

        int numero_do_cargo_digitado_no_loop;
        cout << "Digite o número do cargo do funcionário (Estagiario = 0, Junior = 1, Pleno = 2, Senior = 3): ";
        cin >> numero_do_cargo_digitado_no_loop;

        if(numero_do_cargo_digitado_no_loop >= Estagiario && numero_do_cargo_digitado_no_loop <= Senior) {
            vetor_dinamico_de_funcionarios[i].cargo = static_cast<Cargo>(numero_do_cargo_digitado_no_loop);
        } else {
            cout << "Número de cargo inválido! Tente novamente." << endl;
            i--; 
        }
    }

    cout << "\nO vetor de funcionários é:\n";
    for(int i = 0; i < numero_de_funcionarios; i++) {
        mostrar_atributos(vetor_dinamico_de_funcionarios[i]);
    }

    delete[] vetor_dinamico_de_funcionarios;
    return 0;
}
