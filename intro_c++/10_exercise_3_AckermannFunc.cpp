#include <iostream>
using namespace std;
int A(int m, int n) {
  int re = 0;
  if (m == 0) {
    re = n + 1;
  } else if ((m > 0) && (n == 0)) {
    re = A(m - 1, 1);
  } else if ((m > 0) && (n > 0)) {
    re = A(m - 1, A(m, n - 1));
  }
  return re;
}
int main() {
  int m, n;
  cin >> m >> n;
  cout << A(m, n) << endl;
  return 0;
}