#include <iostream>

using namespace std;

float height_ideal(float weight, char sexo) {
    if(sexo != 'F' && sexo != 'M' && sexo != 'f' && sexo != 'm') {
        cout << "sexo invalid ";
        return 0;
    }
    if(sexo == 'F' || sexo == 'f') {
        return 62.1 * weight - 44.7;
    }
    return 72.7 * weight - 58;
}

int main() {
   
   float weight;
   char sexo;
   
   cout << "enter your weight: ";
   
   cin >> weight;
   
   cout << "enter your gender (F/M): ";
   
   cin >> sexo;
   
   cout << "your ideal height is: " << height_ideal(weight, sexo) << endl; 

    
    
    return 0;
}