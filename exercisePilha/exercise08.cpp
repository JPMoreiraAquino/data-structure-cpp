#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{

  queue<int> firsQueue;
  queue<int> queue_copy;

  firsQueue.push(10);
  firsQueue.push(20);
  firsQueue.push(30);
  firsQueue.push(40);
  firsQueue.push(50);

  firsQueue.swap(queue_copy);

  return 0;
}