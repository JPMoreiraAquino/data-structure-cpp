#include <iostream>

using namespace std;

int main()
{
  int vt[6];
  int sum = 0;

  for (int i = 0; i < 6; i++)
  {
    cout << "type a number in the position vector[" << i << "]: ";
    cin >> vt[i];

    if (i == 0 || i == 1 || i == 5)
    {
      sum = sum + vt[i];
    }
  }

  cout << "sum position A[0] A[1] A[5] is equal: " << sum << endl;

  vt[4] = 100;

  cout << "the values of vector is: ";

  for (int i = 0; i < 6; i++)
  {

    if (i == 0)
    {
      cout << "[" << vt[i];
    }

    if (i == 5)
    {
      cout << ", " << vt[i] << "]" << endl;
    }

    if (i > 0 && i < 6)
    {
      cout << ", " << vt[i];
    }
  }

  return 0;
}