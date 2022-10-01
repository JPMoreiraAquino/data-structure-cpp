
#include <iostream>

using namespace std;
int main()
{
    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the vector value at the position vector[" << i << "]: ";
        cin >> vetor[i];
    }

    cout << "numbers typed:" << endl;

    for (int i = 0; i < 6; i++)
    {
        if (i == 0)
        {
            cout << "[" << vetor[i];
        }

        if (i == 5)
        {
            cout << ", " << vetor[i] << "]" << endl;
        }

        if (i > 0)
        {
            cout << ", " << vetor[i];
        }
    }

    return 0;
}