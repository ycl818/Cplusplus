#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double x1, x2, y1, y2;
  cin >> x1 >> x2 >> y1 >> y2;
  double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  cout << "distance is " << dist << endl;

  return 0;
}