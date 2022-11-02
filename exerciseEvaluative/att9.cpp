#include <iostream>
#include <string>

using namespace std;

float sum(float numbers[], int n)
{
  float sum = 0;

  for (int count = 0; count < n; count++)
    sum += numbers[count];

  return sum;
}

main()
{
  int size;
  char default20;
  cout << "you want the default value?(y/n)" << endl;
  cout << "(by default is 20)" << endl;
  cin >> default20;
  if (default20 == 'y' || default20 == 'Y')
  {
    cout << "value default selected";
    size = 20;
  }
  else
  {
    cout << "how many numbers you want sum? ";
    cin >> size;
  }

  float numbers[size];

  for (int i = 0; i < size; i++)
  {
    cout << "enter the value in position [" << i << "]" << endl;
    cin >> numbers[i];
  }

  cout << "The sum of all values of vector is: " << sum(numbers, size) << endl;
}
