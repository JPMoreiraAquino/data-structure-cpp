#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<string> v1;
  queue<string> v2;

  v1.push("Skyline");
  v1.push("BMW");
  v1.push("FIat uno");
  v1.push("Miata");

  v2.push("creta");
  v2.push("brasilia");
  v2.push("hilux");

  if (v2.size() == v1.size())
  {
    cout << "queue!" << endl;
  }
  else if (v1.size() > v2.size())
  {
    cout << "Queue vehicles1 is longer than queue vehicles2!";
  }
  else
  {
    cout << "Queue vehicles2 is longer than queue vehicles1!";
  }
  return 0;
}