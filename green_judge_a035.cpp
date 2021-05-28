#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  cout << int(b * log10(a)) + 1 << endl;
  return 0;
}