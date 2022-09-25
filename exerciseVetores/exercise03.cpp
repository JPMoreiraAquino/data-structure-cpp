#include <iostream>

using namespace std;
int main()
{
    int vetor[5];
    float media;
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the vector value at the position: " << i << endl;
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    media = soma / 5;
    cout << "Vector values smaller than the average: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] < media)
        {
            cout << vetor[i] << endl;
        }
    }

    cout << "Vector values greater than the average: " << endl;
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > media)
        {
            cout << vetor[i] << endl;
        }
    }
    cout << "Average of values: " << media << endl;

    return 0;
}