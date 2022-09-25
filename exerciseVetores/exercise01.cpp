
#include <iostream>

using namespace std;
int main()
{
    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the vector value at the position: " << i << endl;
        cin >> vetor[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}