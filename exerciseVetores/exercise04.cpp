#include <iostream>

using namespace std;
int main()
{
    float vetor[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the vector value at the position: " << i << endl;
        cin >> vetor[i];
    }

    cout << "Vector values in reverse order." << endl;
    for (int i = 10 - 1; i >= 0; i--)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}