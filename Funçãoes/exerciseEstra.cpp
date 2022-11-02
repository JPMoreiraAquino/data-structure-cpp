// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
  char nome[2][25];
  cout << "Digite dois nomes" << endl;
  for (int i = 0; i < 2; i++)
  {
    cin >> nome[i];
  }

  char aux[25];
  for (int i = 0; i < 2; i++)
  {
    for (int j = i + 1; j < 2; j++)
    {
      int r = strcmp(nome[i], nome[j]);
      if (r > 0)
      {
        strcpy(aux, nome[i]);
        strcpy(nome[i], nome[j]);
        strcpy(nome[j], aux);
      }
    }
  }

  cout << "Nome em Ordem Alfabetica." << endl;
  for (int i = 0; i < 2; i++)
  {
    cout << nome[i] << endl;
  }

  return 0;
}