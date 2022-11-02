#include <iostream>
#include <string>

using namespace std;

string print_name(string name1, string name2)
{

  if (name1[0] > name2[0])
  {
    cout << name2 << endl;
    cout << name1 << endl;
    return " ";
  }
  cout << name1 << endl;
  cout << name2 << endl;
  return " ";
}

int main(int argc, char const *argv[])
{
  string name1, name2;

  cout << "enter the first name: ";
  cin >> name1;
  cout << "enter the secund name: ";
  cin >> name2;
  cout << "#########################################" << endl;
  print_name(name1, name2);
  return 0;
}