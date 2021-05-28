#include <iostream>
using namespace std;
int a[10];
int main() {
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  int bm = 0, sm = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > m) {
      bm++;
    } else if (a[i] < m) {
      sm++;
    }
  }
  cout << bm << " " << sm << endl;
  return 0;
}