#include <iostream>
using namespace std;
int C(int n) {
  if (n == 1) return 2;
  return C(n - 1) + (n * n - n + 2) / 2;
}
int main() {
  int n;
  cin >> n;
  cout << C(n) << endl;
  return 0;
}