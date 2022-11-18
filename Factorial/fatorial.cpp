#include <iostream>
#include <string>

using namespace std;

main()
{
  int number, factorialTotal = 1;

  cout << "enter the number what you want to calculate your factorial: ";

  cin >> number;

  for (int i = 1; i <= number; i++)
  {
    if (i != number)
    {
      cout << i << " * ";
    }
    else
    {
      cout << i << endl;
    }
    factorialTotal = factorialTotal * i;
  }

  cout << "The factorial is: " << factorialTotal << endl;
}
