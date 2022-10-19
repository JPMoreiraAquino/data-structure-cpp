#include <iostream>

using namespace std;

int qtd_digit(int number)
{
  string x = to_string(number);
  return x.length();
}

int invert(int qtd_digit, int number)
{
  string transformText = to_string(number);
  string newText = "";
  for (int i = 0; i < qtd_digit; i++)
  {
    newText = transformText[i] + newText;
  }

  return stoi(newText);
}

int main(int argc, char const *argv[])
{
  int number;
  cout << "enter the number: ";
  cin >> number;
  cout << "your number invert is: " << invert(qtd_digit(number), number) << endl;
  return 0;
}