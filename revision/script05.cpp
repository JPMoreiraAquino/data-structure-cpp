#include <iostream>

using namespace std;

struct Student
{
  string nome;
  int registration;
  string course;

  void insere(string setNome, int setRegistration, string setCourser)
  {
    nome = setNome;
    registration = setRegistration;
    course = setCourser;
  }

  void imprimir()
  {
    cout << "\nName...: " << nome << "\n";
    cout << "Registration: " << registration << "\n";
    cout << "Course: " << course << "\n";
  }
};

int main()
{
  Student *student = new Student[5];
  Student a1, a2, a3, a4, a5;
  student[0] = a1;
  student[1] = a2;
  student[2] = a3;
  student[3] = a4;
  student[4] = a5;

  student[0].insere("EDINALVA", 320, "PORQUE VOCÊ FOI PROCURA NA RUA");
  student[1].insere("O nome dela é jenifer", 247, "NO TINDER");
  student[2].insere("Letícia Mototaxista ", 328, "NA MOTO AMARELA");
  student[3].insere("Carolina UM UM UM", 231, "FOI PARA O SAMBA");
  student[4].insere("Rita facada", 250, "EU PERDOU A FACADA");

  for (int i = 0; i < 5; i++)
  {
    student[i].imprimir();
  }
  return 0;
}