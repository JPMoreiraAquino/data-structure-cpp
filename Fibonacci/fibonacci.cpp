#include <iostream>

using namespace std;

int main()
{

    int value, fibonacci;
    cout << "up to what value do you want to calculate?: ";

    cin >> value;

    int vector[value];

    for (int i = 0; i < value + 1; i++)
    {
        if (i <= 2)
        {
            vector[i] = 1;
        }
        else
        {
            vector[i] = vector[i - 1] + vector[i - 2];
        }
    }

    for (int i = 1; i < value + 1; i++)
    {
        cout << vector[i] << " ";
        if (i == value)
        {
            cout << endl;
        }
    }
}