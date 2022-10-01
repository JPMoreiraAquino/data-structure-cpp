#include <iostream>

using namespace std;

int main()
{
  int linha, coluna, valor;
  cout << "Digite a quantidade de linhas: ";
  cin >> linha;
  cout << "Digite a quantidade de colunas: ";
  cin >> coluna;

  int matriz[linha][coluna];

  for (int i = 0; i < linha; i++)
  {
    for (int x = 0; x < coluna; x++)
    {
      cout << "enter the number a value of matriz [" << i << "]"
           << "[" << x << "]:";
      cin >> valor;
      matriz[i][x] = valor;
    }
  }

  cout << endl;
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      cout << "[" << matriz[i][j] << "]"
           << "\t";
    }
    cout << endl;
  }
  cout << endl;
  cout << "Diagonal Principal: " << endl;
  for (int i = 0; i < linha; i++)
  {
    for (int j = 0; j < coluna; j++)
    {
      if (i == j)
      {
        cout << "[" << matriz[i][j] << "]\t" << endl;
      }
    }
  }
  return 0;
}