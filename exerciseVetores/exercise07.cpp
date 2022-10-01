#include <iostream>

using namespace std;

int main()
{
  int vt[8];
  int x, y, sum = 0;

  for (int i = 0; i < 8; i++)
  {
    cout << "enter the value in position vector[" << i << "]: ";
    cin >> vt[i];
  }

  cout << "enter the position X of vector for sum: ";
  cin >> x;

  cout << "enter the position y of vector for sum: ";
  cin >> y;

  cout << vt[x];
  cout << vt[y];

  sum = sum + vt[x];
  sum = sum + vt[y];

  cout << "the sum of position x and y is: " << sum << endl;

  return 0;
}
