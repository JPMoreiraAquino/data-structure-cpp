#include <iostream>

using namespace std;
int main()
{
  int line, column;
  cout << "Enter the amount of lines: ";
  cin >> line;
  cout << "Enter the amount of columns: ";
  cin >> column;
  int matriz[line][column], positionLine, positionColumn, theBig = 0;

  for (int x = 0; x < line; x++)
  {
    for (int y = 0; y < column; y++)
    {

      cout << "Enter the value of matriz[" << x << "]"
           << "[" << y << "]: ";
      cin >> matriz[x][y];

      if (theBig < matriz[x][y])
      {
        positionLine = x;
        positionColumn = y;
        theBig = matriz[x][y];
      }
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

  cout << "Position The Big is value: "
       << "Matriz[" << positionLine << "][" << positionColumn << "]" << endl;
}
