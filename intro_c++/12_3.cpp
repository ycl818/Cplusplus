#include <cmath>
#include <iostream>
using namespace std;

// triangle area
int main() {
  int a, b, c;
  double area;
  cin >> a >> b >> c;
  double s = (a + b + c) / 2.0;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  cout << area << endl;

  return 0;
}