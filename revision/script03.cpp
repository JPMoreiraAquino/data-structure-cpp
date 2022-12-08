#include <iostream>
#include <string>

using namespace std;

double factorial(int value)
{
  double factorialTotal = 1;

  for (int i = 1; i <= value; i++)
  {
    if (i != value)
    {
      cout << i << " * ";
    }
    else
    {
      cout << i << endl;
    }
    factorialTotal = factorialTotal * i;
  }

  return factorialTotal;
}

main()
{
  int number; 
  double total = 0;

  cout << "enter the number what you want to calculate your factorial: ";

  cin >> number;

  total = factorial(number);
  cout << "The factorial is: " << total << endl;
}