#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  double f = sqrt(pow(b, 2) - 4 * a * c);
  double x1 = (-b + f) / (2 * a);
  double x2 = (-b - f) / (2 * a);
  if (pow(b, 2) - (4 * a * c) < 0) {
    cout << "no real root" << endl;
  } else if (pow(b, 2) - (4 * a * c) > 0) {
    cout << x1 << ',' << x2 << endl;
  } else {
    cout << (-b) / (2 * a) << endl;
  }
  return 0;
}