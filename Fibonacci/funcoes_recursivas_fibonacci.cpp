#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int valor;
    cout << "up to what value do you want to calculate?: ";

    cin >> valor;

    cout << "Quantidade de Termos: " << valor << endl;
    for (int i = 1; i <= valor; i++)
    {
        cout << fibonacci(i) << " ";
    }
}