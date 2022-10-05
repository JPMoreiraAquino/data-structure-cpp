#include <iostream>
#include <stack>
using namespace std;
int main(void)
{

  string text;
  bool palindromo = true;
  stack<string> word;

  cout << "type the word: ";
  cin >> text;

  word.push(text);

  int length = text.length();

  for (int i = length / 2; i > 0; i--)
  {
    if (text[i] != text[length - i - 1])
    {
      palindromo = false;
      break;
    }
  }
  cout << endl
       << (palindromo ? "is palíndromo" : "is not palíndromo");

  cout << endl;
}