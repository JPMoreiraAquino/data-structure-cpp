#include <iostream>

using namespace std;
int main()
{
    int vetor[10];
    int x = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the vector value at the position [" << i << "]:" << endl;
        cin >> vetor[i];
    }

    cout << "Enter a reference value:" << endl;
    cin >> x;

    cout << "Vector values smaller than the reference value: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < x)
        {
            cout << vetor[i] << endl;
        }
    }

    cout << "Vector values greater than the reference value: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > x)
        {
            cout << vetor[i] << endl;
        }
    }

    return 0;
}