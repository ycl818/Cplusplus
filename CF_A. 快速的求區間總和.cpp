#include <iostream>
using namespace std;
long long a[200002];
long long b[200002];
void solve() {
  int N;
  cin >> N;
  for (int i = 1; i <= N ; i++) {
    cin >> a[i];
  }
  b[0] = a[0];
  for (int i = 1; i <= N; i++) {
    b[i] = b[i-1] + a[i];
  }
  int Q, l, r;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    cin >> l >> r;
   // cout << "b[r] = " << b[r] << "  b[l-1] = " << b[l-1] << endl;
    cout << b[r] - b[l-1] << endl;
  }
}
int main() {
  solve();
  return 0;
}
