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
    Aluno a1, a2;
    a1.insere("Ana", 1234, "Redes", 10, 8);
    a2.insere("Rodrigo", 1235, "Redes", 8, 7); 
    a1.imprimir();
    a2.imprimir();
    cout << "Média A1: " << a1.media(10, 8) << "\n";
    cout << "Média A2: " << a2.media(8, 7) << "\n";
    
    return 0;
}