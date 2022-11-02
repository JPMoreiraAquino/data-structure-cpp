// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std; 
 
int main() {

int l = 0, j, x = 0, save = 0;

cout << "Digite o valor de i: ";

cin >> x;

   while(l != x){
    
    if(l > 0) {
     if(l * l > x ) {
         j = l * l;
         save = l;
         break;
     }
    }
       ++l;

     }

   cout << "Menor inteiro positivo x cuja o quadrado é superior a um valor l dado é:" << j <<  endl;
   cout << "Possition: " << save;
}