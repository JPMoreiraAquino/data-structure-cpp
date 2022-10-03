#include <iostream>

using namespace std;
int main()
{
  int line, column;
  cout << "Enter the amount of lines: ";
  cin >> line;
  cout << "Enter the amount of columns: ";
  cin >> column;
  int matriz[line][column];

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {
      if (x == y)
        matriz[x][y] = 1;
      else
        matriz[x][y] = 0;
    }
  }

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {
      cout << "[" << matriz[x][y] << "]"
           << "\t";
    }
    cout << endl;
  }
}
