#include <iostream>

using namespace std;
int main()
{
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the vector value at the position: " << i << endl;
        cin >> vetor[i];
        soma = soma + vetor[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << endl;
    }
    cout << "Sum of all values: " << soma << endl;

    return 0;
}