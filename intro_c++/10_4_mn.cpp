#include <iostream>
using namespace std;
int p(int, int);
int main() {
  // m^ n
  int m, n;
  cout << "input m: " << endl;
  cin >> m;
  cout << "input n: " << endl;
  cin >> n;
  cout << "m ^ n = " << p(m, n) << endl;
  return 0;
}

int p(int m, int n) {
  if (n == 1) {
    return m;
  } else {
    return m * p(m, n - 1);
  }
}