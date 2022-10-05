#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{

  queue<int> firstQueue;
  int count = 0;

  firstQueue.push(33);
  firstQueue.push(12);
  firstQueue.push(13);
  firstQueue.push(9);
  firstQueue.push(52);

  for (int i = 0; i < 5; i++)
  {
    if (firstQueue.front() % 2 != 1)
    {
      cout << firstQueue.front() << endl;
      count = count + 1;
    }
    firstQueue.pop();
  }
  cout << "Number of firstQueue elements that are even = " << count << endl;

  return 0;
}