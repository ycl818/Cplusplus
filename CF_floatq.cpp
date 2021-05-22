#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double A, B;
  cin >> A >> B;
  cout << fixed << setprecision(12) << A * B << endl;
  return 0;
}
