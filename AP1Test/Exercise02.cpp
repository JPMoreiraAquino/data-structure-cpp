#include <iostream>

using namespace std;
int main()
{
    int vetor[4];
    int x = 0;
    

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the vector value at the position Vetor[" << i << "]:";
        cin >> vetor[i];
    }

    cout << "Enter a reference value: ";
    cin >> x;

    cout << "Vector values smaller than the reference value: ";
    for (int i = 0; i < 4; i++)
    {
        if (vetor[i] < x)
        {
            cout << vetor[i] << ", ";
        }
    }
    
    cout << endl;
    
    cout << "Vector values greater than the reference value: ";
    for (int i = 0; i < 4; i++)
    {
        if (vetor[i] > x)
        {
            cout << vetor[i] << ", ";
        }
    }
    
    cout << endl;
    
    cout << "Vector values is equal to the reference value: ";
    
     for (int i = 0; i < 4; i++)
    {
        if (vetor[i] == x )
        {
            cout << vetor[i] << ", ";
        }
    }
    return 0;
}