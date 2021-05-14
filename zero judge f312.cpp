#include <iostream>
using namespace std;

int n;
int a1, b1, c1;
int a2, b2, c2;
int maxProfit = -100000000;
int f1(int x) { return a1 * x * x + b1 * x + c1; }
int f2(int x) { return a2 * x * x + b2 * x + c2; }
int max(int a, int b) {
  if (a > b) return a;
  return b;
}
int main() {
  cin >> a1 >> b1 >> c1;
  cin >> a2 >> b2 >> c2;
  cin >> n;

  for (int i = 0; i <= n; i++) {
    maxProfit = max(maxProfit, f1(i) + f2(n - i));
  }
  cout << maxProfit << endl;
  return 0;
}
