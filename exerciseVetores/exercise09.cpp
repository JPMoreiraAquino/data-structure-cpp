#include <iostream>

using namespace std;

int main()
{
  int vt[10];
  int isBig, position;

  for (int i = 0; i < 10; i++)
  {
    cout << "enter the value in position vector[" << i << "]: ";
    cin >> vt[i];

    if (vt[i] > vt[i - 1])
    {
      isBig = vt[i];
      position = i;
    }
  }

  cout << "big value: " << isBig << endl;
  cout << "position vector[" << position << "]" << endl;

  return 0;
}
