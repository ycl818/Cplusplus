#include <iostream>
using namespace std;
int f(int);
int main() {
  int n;
  cout << "input n to count n! " << endl;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << i << " factorial is " << f(i) << endl;
  }
  return 0;
}

int f(int n) {
  int re;
  if (n == 1) {
    re = 1;
  } else {
    re = n * f(n - 1);
  }
  return re;
}