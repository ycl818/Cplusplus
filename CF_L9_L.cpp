#include <algorithm>
#include <iostream>
using namespace std;
int a[200001];
bool cmp(int a, int b) {
  if (a % 2 == 0 && b % 2 == 0) return a < b;
  if (a % 2 == 1 && b % 2 == 1) return a > b;
  if (a % 2 == 0)
    return true;
  else
    return false;
}
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n, cmp);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}