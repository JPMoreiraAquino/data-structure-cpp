#include <iostream>

using namespace std;

float sum(float v[5], int value) {
   float sum1 = 0;

for(int i = 0; i < value; i ++) {
    sum1 = sum1 + v[i];
}

   return sum1;
}

int main() {
  float vector[5], v;
      
      
  for(int i = 0; i < 5; i++) {
      cout << "enter any value: ";
      
      cin >> v;
      vector[i] = v;
  }
  
  
  cout << "sum of vector: " << sum(vector, 5) << endl;
}