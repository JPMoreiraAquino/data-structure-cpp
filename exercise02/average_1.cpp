#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double N1, N2, M;

  cin >> N1;
  cin >> N2;

  M = (N1 * 3.5 + N2 * 7.5) / 11;

  cout << "MEDIA = " << fixed << setprecision(5) << M << endl;
  return 0;
}