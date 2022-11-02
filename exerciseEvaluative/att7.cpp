#include <iostream>
#include <string>

using namespace std;

main()
{
  int x, y, value, positionY, positionX;
  int matriz[4][4];

  for (x = 0; x < 4; x++)
  {
    for (y = 0; y < 4; y++)
    {
      cout << "enter the value of position [" << x << "][" << y << "]: ";
      cin >> matriz[x][y];
    }
  }

  cout << "enter the number that you want to find: ";

  cin >> value;

  for (x = 0; x < 4; x++)
  {
    for (y = 0; y < 4; y++)
    {
      if (matriz[x][y] == value)
      {
        value = matriz[x][y];
        positionX = x;
        positionY = y;
      }
    }
  }

  cout << "The value " << value << " is in potion [" << positionX << "][" << positionY << "]" << endl;
}