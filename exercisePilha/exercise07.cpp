#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{

  queue<int> queue;
  int small, big = 0;
  int average = 0;

  queue.push(10);
  queue.push(69);
  queue.push(30);
  queue.push(9);
  queue.push(12);

  small = queue.front();
  for (int i = 0; i < 5; i++)
  {
    if (queue.front() > big)
    {
      big = queue.front();
    }
    if (queue.front() < small)
    {
      small = queue.front();
    }
    average = average + queue.front();
    queue.pop();
  }

  cout << "big elements of queue: " << big << endl;
  cout << "small elements fo queue: " << small << endl;
  cout << "average elements of queue: " << average / 5 << endl;

  return 0;
}