#include <iostream>

using namespace std;
int main()
{
    double vt1[5], vt2[5], vt3[5], vt4[5];
    float average;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the vector value at the position vector[" << i << "]: ";
        cin >> vt1[i];
        sum = sum + vt1[i];
    }
    average = sum / 5;
    for (int i = 0; i < 5; i++)
    {

        if (vt1[i] > average)
        {
            vt3[i] = vt1[i];
        }
        else
        {
            vt3[i] = 0;
        }

        if (vt1[i] < average)
        {
            vt2[i] = vt1[i];
        }
        else
        {
            vt2[i] = 0;
        }

        if (vt1[i] == average)
        {

            vt4[i] = vt1[i];
        }
        else
        {
            vt4[i] = 0;
        }
    }
    cout << "Average of values: " << average << endl;

    cout << "Vector values smaller than the average: ";

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "[" << vt2[i];
        }

        if (i == 4)
        {
            cout << ", " << vt2[i] << "]" << endl;
        }

        if (i > 0 && i < 4)
        {
            cout << ", " << vt2[i];
        }
    }

    cout << "Vector values greater than the average: ";
    for (int i = 0; i < 5; i++)
    {

        if (i == 0)
        {
            cout << "[" << vt3[i];
        }

        if (i == 4)
        {
            cout << ", " << vt3[i] << "]" << endl;
        }

        if (i > 0 && i < 4)
        {
            cout << ", " << vt3[i];
        }
    }

    cout << "Vector Values equal the average: ";
    for (int i = 0; i < 5; i++)
    {

        if (i == 0)
        {
            cout << "[" << vt4[i];
        }

        if (i == 4)
        {
            cout << ", " << vt4[i] << "]" << endl;
        }

        if (i > 0 && i < 4)
        {
            cout << ", " << vt4[i];
        }
    }

    return 0;
}