#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double P, QTD = 0;

  for (int i = 1; i <= 6; i++)
  {
    cin >> P;
    if (P > 0)
    {
      QTD = QTD + 1;
    }
  }

  cout << QTD << " valores positivos" << endl;

  return 0;
}