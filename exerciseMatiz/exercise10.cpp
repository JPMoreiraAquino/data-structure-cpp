#include <iostream>

using namespace std;

int main()
{
  int matrizA[3][4];
  int matrizB[4][3];

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 4; y++)
    {
      cout << "Enter the value of matriz[" << x << "]"
           << "[" << y << "]: ";
      cin >> matrizA[x][y];
    }
  }

  cout << "result matrizA" << endl;

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 4; y++)
    {
      cout << "[" << matrizA[x][y] << "]"
           << "\t";
    }
    cout << endl;
  }
  cout << endl;

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 4; y++)
    {
      matrizB[x][y] = matrizA[x][y];
    }
  }

  cout << "result matrizB" << endl;

  for (int x = 0; x < 3; x++)
  {
    for (int y = 0; y < 4; y++)
    {
      cout << "[" << matrizB[x][y] << "]"
           << "\t";
    }

    cout << endl;
  }
  cout << endl;
}