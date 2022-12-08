#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

main()
{
  list<int> values, values2;
  list<int>:: iterator element;

  values.push_front(1);
  values.push_front(2);
  values.push_front(3);
  values.push_front(4);
  values.push_front(5);

  values2.push_front(6);
  values2.push_front(7);
  values2.push_front(8);
  values2.push_front(9);
  values2.push_front(10);


  element = find(values.begin(), values.end(), 5);

  if(*element == 5) {
    cout << "element found!!! :) " << *element << endl;
  } else {
    cout << "element NOT found!!! :( " << *element << endl;
  }

  values2.merge(values);
  values2.sort();
  int size = values2.size(); 
  
  for(int i = 0; i < size; i++) {
      cout << "values: " << values2.front() << endl;
      values2.pop_front();
  }

  return 0;
}