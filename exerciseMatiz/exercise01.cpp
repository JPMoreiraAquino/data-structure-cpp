#include <iostream>

using namespace std;
int main()
{
  int matriz[4][4], above10 = 0;

  for (int y = 0; y < 4; y++)
  {
    for (int x = 0; x < 4; x++)
    {
      cout << "Enter the value of matriz[" << y << "]"
           << "[" << x << "]: ";
      cin >> matriz[y][x];

      if (matriz[y][x] > 10)
      {
        above10 = above10 + 1;
      }
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "[" << matriz[i][j] << "]"
           << "\t";
    }
    cout << endl;
  }

  cout << "values above 10: " << above10 << endl;
}
