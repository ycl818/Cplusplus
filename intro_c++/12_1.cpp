#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double deg, r;
  cout << "input degree: ";
  cin >> deg;
  r = deg / 180 * 3.1415926;
  cout << "Sin(" << r << ") = " << sin(r) << endl;
  cout << "Cos(" << r << ") = " << cos(r) << endl;
  cout << "Tan(" << r << ") = " << tan(r) << endl;
  return 0;
}