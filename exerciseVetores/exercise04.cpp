#include <iostream>

using namespace std;
int main()
{
    float vetor[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the vector value at the position vector[" << i << "]: ";
        cin >> vetor[i];
    }

    cout << "input order: ";

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << "[" << vetor[i];
        }

        if (i == 9)
        {
            cout << ", " << vetor[i] << "]" << endl;
        }

        if (i > 0 && i < 9)
        {
            cout << ", " << vetor[i];
        }
    }

    cout << "Vector values in reverse order: ";

    for (int i = 9; i >= 0; i--)
    {
        if (i == 9)
        {
            cout << "[" << vetor[i];
        }

        if (i == 0)
        {
            cout << ", " << vetor[i] << "]" << endl;
        }

        if (i < 9 && i > 0)
        {
            cout << ", " << vetor[i];
        }
    }

    return 0;
}