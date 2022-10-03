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

      matriz[x][y] = x * y;
    }
  }

  cout << "result Matriz" << endl;

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
