#include <math.h>

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  cout << fixed << setprecision(3) << result << endl;
  return 0;
}