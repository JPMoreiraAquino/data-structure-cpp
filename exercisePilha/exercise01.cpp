#include <stack>
#include <iostream>

using namespace std;

int main()
{
  stack<int> numbers;
  for (int i = 1; i <= 4; i++)
  {

    numbers.push(i);
  }

  cout << "stack view: " << endl;
  for (int i = 1; i <= numbers.size(); i++)
  {
    if (numbers.size() == 4)
    {
      numbers.pop();
      cout << numbers.top() << endl;
    }
    if (numbers.size() == 3)
    {
      numbers.pop();
      cout << numbers.top() << endl;
    }

    if (numbers.size() == 2)
    {
      numbers.pop();
      cout << numbers.top() << endl;
    }

    if (numbers.size() == 1)
    {
      numbers.pop();
      cout << numbers.top() << endl;
    }
  }
}