#include <iostream>
using namespace std;
int C(int m, int n) {
  if (n == 0 || m == n) return 1;
  return C(m - 1, n) + C(m - 1, n - 1);
}
int main() {
  cout << C(4, 1) << endl;
  return 0;
}