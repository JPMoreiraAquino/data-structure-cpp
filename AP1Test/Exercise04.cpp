#include <iostream>
#include <queue>

using namespace std;
int main()
{

  queue<int> queue01;
  queue<int> queue_copy;
  int value, count;
    cout << "how many numbers do you enter: ";
    cin >> count;
    
    for(int i = 0; i < count; i++) {
        cout << "enter value of queue: ";
        cin >> value;
       queue01.push(value);
    }
    
    queue01.swap(queue_copy);

    cout << "numbers F1: ";
      for(int i = 0; i < count; i++) {
          cout << queue01.front() << " ";
          queue01.pop();
      }
    
    cout << endl << "I changed the values F1 with F2";

    cout << endl;
    cout << "numbers F2(copy): ";
      for(int i = 0; i < count; i++) {
          cout << queue_copy.front() << " ";
          queue_copy.pop();
      }
  return 0;
}
