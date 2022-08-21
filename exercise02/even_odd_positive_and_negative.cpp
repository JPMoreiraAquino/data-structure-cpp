#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int P, QTD_PAIR = 0, QTD_ODD = 0, QTD_POSITIVE = 0, QTD_NEGATIVE = 0;

  for (int i = 1; i <= 5; i++)
  {
    cin >> P;
    if (P % 2 == 0)
    {
      QTD_PAIR = QTD_PAIR + 1;
    }
    else
    {
      QTD_ODD = QTD_ODD + 1;
    }

    if (P > 0)
    {
      QTD_POSITIVE = QTD_POSITIVE + 1;
    }
    else
    {
      QTD_NEGATIVE = QTD_NEGATIVE + 1;
    }
  }

  cout << QTD_PAIR << " valor(es) par(es)" << endl;
  cout << QTD_ODD << " valor(es) impar(es)" << endl;
  cout << QTD_POSITIVE << " valor(es) positivo(s)" << endl;
  cout << QTD_NEGATIVE - 1 << " valor(es) negativo(s)" << endl;

  return 0;
}