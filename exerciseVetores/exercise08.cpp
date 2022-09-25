#include <iostream>

using namespace std;
int main()
{
    int vetor[10];
    int quantidade = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the vector value at the position: " << endl;
        cin >> vetor[i];
    }

    cout << "Even values in vector: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cout << vetor[i] << endl;
            quantidade = quantidade + 1;
        }
    }
    cout << "Numbers of even: " << quantidade;

    return 0;
}