#include <iostream>
#include <string>

using namespace std;

main()
{
  int x, y, value = 0, positionY, positionX;
  int matriz[2][2];

  for (x = 0; x < 2; x++)
  {
    for (y = 0; y < 2; y++)
    {
      cout << "enter the value of position [" << x << "][" << y << "]: ";
      cin >> matriz[x][y];
      value = matriz[x][y];
    }
  }

  for (x = 0; x < 2; x++)
  {
    for (y = 0; y < 2; y++)
    {
      if (matriz[x][y] <= value)
      {
        value = matriz[x][y];
        positionX = x;
        positionY = y;
      }
    }
  }
  cout << endl;
  cout << "The small value is" << value << " in potion [" << positionX << "][" << positionY << "]" << endl;
}
