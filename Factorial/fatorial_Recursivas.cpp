#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x == 0)
        return 1;

    return x * factorial(x - 1);
}

int main()
{
    int value, result;
    cout << "enter type value: ";
    cin >> value;
    result = factorial(value);
    cout << result << endl;
}