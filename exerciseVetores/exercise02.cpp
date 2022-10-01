#include <iostream>

using namespace std;
int main()
{
    int vetor[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the vector value at the position vector[" << i << "]: ";
        cin >> vetor[i];
        sum = sum + vetor[i];
    }

    cout << "The array of number:";

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "[" << vetor[i];
        }

        if (i == 4)
        {
            cout << ", " << vetor[i] << "]" << endl;
        }

        if (i > 0 && i < 4)
        {
            cout << ", " << vetor[i];
        }
    }

    cout << "Sum of all values is: " << sum << endl;

    return 0;
}