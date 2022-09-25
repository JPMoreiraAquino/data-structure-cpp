#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vx;
  vector<int> vx2;

  vx.push_back(1);
  vx.push_back(2);
  vx.push_back(3);
  vx.push_back(4);
  vx.push_back(5);

  vx2.push_back(6);
  vx2.push_back(7);
  vx2.push_back(8);
  vx2.push_back(9);
  vx2.push_back(10);

  cout << "Size of Vector:" << vx.size() << endl;
  for (int i = 0; i < vx.size(); i++)
  {
    cout << vx[i] << " ";
  }
  cout << endl;

  vx.swap(vx2);
  for (int i = 0; i < vx.size(); i++)
  {
    cout << vx[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < vx2.size(); i++)
  {
    cout << vx2[i] << " ";
  }
  cout << endl;

  while (!vx2.empty())
  {
    cout << vx2.size() << endl;
    vx2.pop_back();
  }
  cout << vx2.size() << endl;
  return 0;
}