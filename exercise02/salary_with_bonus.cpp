#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double P, V, M;
  string N;

  cin >> N;
  cin >> P;
  cin >> V;

  M = P + ((V / 100) * 15);

  cout << "TOTAL = R$ " << fixed << setprecision(2) << M << endl;
  return 0;
}