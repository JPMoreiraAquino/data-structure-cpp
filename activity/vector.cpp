#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vx;

  vx.push_back(1);
  vx.push_back(2);
  vx.push_back(3);
  vx.push_back(4);
  vx.push_back(5);

  cout << "Size of Vector:" << vx.size() << endl;
  for (int i = 0; i < vx.size(); i++)
  {
    cout << vx[i] << endl;
  }

  return 0;
}