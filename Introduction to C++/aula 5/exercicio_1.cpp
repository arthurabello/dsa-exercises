//Criando uma Struct Dinâmica
//Crie uma struct chamada Aluno com os atributos nome e nota.
//Aloque dinamicamente um objeto dessa struct e preencha os valores.
//Exiba os valores e libere a memória corretamente.

#include <iostream>
using namespace std;

struct Aluno {
    float nota;
    string nome;
};

Aluno* criarAluno(float nota, string nome) {
    Aluno* novoAluno = new Aluno;
    novoAluno->nome = nome;
    novoAluno->nota = nota;
    return novoAluno;
}

int main() {
    Aluno* alunoEspecial = criarAluno(0 , "ShaolinMatadorDePorco");
    cout << "Aluno: " << alunoEspecial->nome << " | Nota: " << alunoEspecial->nota <<endl;
    delete alunoEspecial;
    return 0;
}