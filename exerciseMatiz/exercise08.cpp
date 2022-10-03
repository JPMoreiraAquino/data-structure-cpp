#include <iostream>

using namespace std;
int main()
{
  int line, column;
  cout << "Enter the amount of lines: ";
  cin >> line;
  cout << "Enter the amount of columns: ";
  cin >> column;
  int matriz[line][column], sum = 0;

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {

      cout << "Enter the value of matriz[" << x << "]"
           << "[" << y << "]: ";
      cin >> matriz[x][y];
    }
  }

  cout << "result Matriz: " << endl;

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {
      cout << "[" << matriz[x][y] << "]"
           << "\t";
    }
    cout << endl;
  }

  sum = matriz[0][0] + matriz[1][1] + matriz[2][2];

  cout
      << "first sum" << sum << endl;
}
