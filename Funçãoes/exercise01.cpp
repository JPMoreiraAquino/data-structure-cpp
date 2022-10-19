#include <iostream>

using namespace std;

int larger(int number1, int number2, int number3)
{
  if (number1 > number2 && number1 > number3)
  {
    return number1;
  }
  if (number2 > number3 && number2 > number1)
  {
    return number2;
  }
  if (number3 > number1 && number3 > number2)
  {
    return number3;
  }
}

int small(int number1, int number2, int number3)
{
  if (number1 < number2 && number1 < number3)
  {
    return number1;
  }
  if (number2 < number3 && number2 < number1)
  {
    return number2;
  }
  if (number3 < number1 && number3 < number2)
  {
    return number3;
  }
}

int main(int argc, char const *argv[])
{
  cout << "Larger: " << larger(1, 2, 3) << endl;
  cout << "Small: " << small(1, 2, 3) << endl;
  return 0;
}