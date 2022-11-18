#include <iostream>

using namespace std;

int fibonacci(int value)
{
    if (value <= 2)
    {
        return 1;
    }
    int i, F = 0, F1 = 0, F2 = 1;

    for (i = 3; i <= value; i++)
    {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }

    return F;
}
int main()
{
    int valor;
    cout << "up to what value do you want to calculate?: ";

    cin >> valor;

    cout << "Terms: " << valor << endl;

    for (int i = 1; i < valor + 1; i++)
    {
        cout << fibonacci(i + 1) << " ";
    }
}