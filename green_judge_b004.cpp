#include <iostream>
using namespace std;
int a[21];
int main() {
  int n, m, x;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    a[i] = 0;
  }
  for (int i = 1; i <= m; i++) {
    cin >> x;
    a[x] = 1;
  }
  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}