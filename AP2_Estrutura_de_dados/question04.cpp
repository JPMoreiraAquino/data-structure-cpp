
#include <iostream>

using namespace std;

struct Aluno
{
    string name;
    int matricula;
    string disciplina;
    float n1, n2, n3, average;

    void insere(string stName, int stMatricula, string stDisciplina, float stN1, float stN2, float stN3)
    {
        name = stName;
        matricula = stMatricula;
        disciplina = stDisciplina;
        n1 = stN1;
        n2 = stN2;
        n3 = stN3;
    }

    string isApproved(float stN1, float stN2, float stN3)
    {
        n1 = stN1;
        n2 = stN2;
        n3 = stN3;

        average = (n1 + n2 + n3) / 3;

        if (average >= 6)
        {
            return "APPROVED";
        }

        return "DISAPPROVED";
    }

    void imprimir()
    {
        cout << "\nNome...: " << name << "\n";
        cout << "Matrícula: " << matricula << "\n";
        cout << "Disciplina: " << disciplina << "\n";
        cout << "Nota 1...: " << n1 << "\n";
        cout << "Nota 2...: " << n2 << "\n";
        cout << "Nota 3...: " << n3 << "\n";
        cout << "STATUS...: " << isApproved(n1, n2, n3) << "\n\n";
    }
};

int main()
{
    Aluno *alunos = new Aluno[5];
    Aluno a1, a2, a3, a4, a5;
    alunos[0] = a1;
    alunos[1] = a2;
    alunos[2] = a3;
    alunos[3] = a4;
    alunos[4] = a5;

    alunos[0].insere("Ana", 1234, "Redes", 6, 6, 6);
    alunos[1].insere("Rodrigo", 1235, "Redes", 10, 8, 5);
    alunos[2].insere("Letícia", 1236, "Redes", 10, 7, 6);
    alunos[3].insere("Carlos", 1237, "Redes", 5, 6, 5);
    alunos[4].insere("Manoel Gomes", 1234, "Blue Pen", 3, 2, 4);

    for (int i = 0; i < 5; i++)
    {
        alunos[i].imprimir();
    }
    return 0;
}