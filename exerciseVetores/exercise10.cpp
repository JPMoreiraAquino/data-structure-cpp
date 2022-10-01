#include <iostream>

using namespace std;

int main()
{
  float vt[10], positiveVt[10], negativeVt[10];
  float sum = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "enter the value in position vector[" << i << "]: ";
    cin >> vt[i];

    if (vt[i] > 0)
    {
      positiveVt[i] = vt[i];
      sum = sum + vt[i];
    }
    else
    {
      positiveVt[i] = 0;
    }

    if (vt[i] < 0)
    {
      negativeVt[i] = vt[i];
    }
    else
    {
      negativeVt[i] = 0;
    }
  }

  cout << "negative values: ";
  for (int i = 0; i < 10; i++)
  {
    if (i == 0)
    {
      cout << "[" << negativeVt[i];
    }

    if (i == 9)
    {
      cout << ", " << negativeVt[i] << "]" << endl;
    }

    if (i > 0 && i < 9)
    {
      cout << ", " << negativeVt[i];
    }
  }
  cout << "sum values positive: ";
  cout << sum;
  return 0;
}
