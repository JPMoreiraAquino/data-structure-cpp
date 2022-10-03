#include <iostream>

using namespace std;
int main()
{
  int line, column;
  cout << "Enter the amount of lines: ";
  cin >> line;
  cout << "Enter the amount of columns: ";
  cin >> column;
  int matriz[line][column], positionLine, positionColumn, value;

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {

      cout << "Enter the value of matriz[" << x << "]"
           << "[" << y << "]: ";
      cin >> matriz[x][y];
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
  cout << "enter the value you find: ";
  cin >> value;

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {
      if (matriz[x][y] == value)
      {
        positionLine = x;
        positionColumn = y;
        x = line;
        y = column;
      }
    }
  }
  if (!positionLine || !positionColumn)
  {

    cout << "value is in position Matriz[" << positionLine << "][" << positionColumn << "]" << endl;
  }
  else
  {
    cout << "not found" << endl;
  }
}
