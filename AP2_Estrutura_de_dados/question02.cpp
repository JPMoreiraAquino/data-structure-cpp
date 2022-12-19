// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

float sumValues(float *vNumbers)
{
    int qtdNegativos = 0;
    float sumOfPositives = 0;

    for (int i = 0; i < 5; i++)
    {
        if (vNumbers[i] < 0)
        {
            qtdNegativos = qtdNegativos + 1;
        }
        else
        {
            sumOfPositives = sumOfPositives + vNumbers[i];
        }
    }

    cout << "A quantidade de numero negatico: " << qtdNegativos << endl;

    cout << "A Soma dos numero positivos: " << sumOfPositives << endl;

    return 0;
}

int main()
{
    float vector[5];

    cout << "enter the numbers of vector: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> vector[i];
    }

    sumValues(vector);

    return 0;
}