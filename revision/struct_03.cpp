#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    float n1, n2;

    void insere(string stNome, int stMatricula, string stDisciplina, float stN1, float stN2){
        nome = stNome;
        matricula = stMatricula;
        disciplina = stDisciplina;
        n1 = stN1;
        n2 = stN2;
    }

    void imprimir(){
        cout << "\nNome...: " << nome << "\n";
        cout << "Matrícula: " << matricula << "\n";
        cout << "Disciplina: " << disciplina << "\n";
        cout << "Nota 1...: " << n1 << "\n";
        cout << "Nota 2...: " << n2 << "\n\n";
    }
    float media(float stN1, float stN2){
        n1 = stN1;
        n2 = stN2;
        return (n1+n2)/2;
    }
};

int main(){
    Aluno *alunos = new Aluno[5];
    Aluno a1, a2, a3, a4, a5;
    alunos[0] = a1;
    alunos[1] = a2;
    alunos[2] = a3;
    alunos[3] = a4;
    alunos[4] = a5;

    alunos[0].insere("Ana", 1234, "Redes", 10, 9);
    alunos[1].insere("Rodrigo", 1235, "Redes", 10, 8);
    alunos[2].insere("Letícia", 1236, "Redes", 10, 7);
    alunos[3].insere("Carlos", 1237, "Redes", 10, 6);
    alunos[4].insere("Manoel Gomes", 1234, "Blue Pen", 10, 10);

    for(int i = 0; i < 5; i++){
        alunos[i].imprimir();
    }
    return 0;
}