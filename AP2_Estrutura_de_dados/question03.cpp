#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

main()
{
  list<int> values;
  list<int>::iterator element;
  int value, findValue;
  bool boleano;

  values.push_front(10);
  values.push_front(20);
  values.push_front(30);
  values.push_front(40);
  values.push_front(50);

  values.push_back(14);

  cout << "enter the number insert: ";

  cin >> value;

  values.push_front(value);

  cout << "enter the value you find: ";

  cin >> findValue;

  int size = values.size();

  element = find(values.begin(), values.end(), findValue);

  if (*element == findValue)
  {
    cout << "element found!!! :) " << endl;
  }
  else
  {
    cout << "element NOT found!!! :( " << endl;
  }

  for (int i = 0; i < size; i++)
  {
    cout << "values: " << values.front() << endl;
    values.pop_front();
  }

  return 0;
}