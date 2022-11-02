#include <iostream>

using namespace std; 
 
int main() {

int l = 0, j, x = 0, save = 0;

cout << "Digite o valor de i: ";

cin >> x;

   while(l != x){
    if(l > 0) {
    cout << x << " X " << l  << " = " << x * l << endl;

     }
     
       ++l;
   }

}


