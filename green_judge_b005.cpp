#include <iostream>
using namespace std;
int a[21];
int ans;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int count_max = -1;

  for (int i = 0; i < n; i++) {
    ans = a[i];
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (ans == a[j]) {
        count++;
      }
      if (count_max < count) {
        count_max = count;
        ans = a[i];
      }
    }
  }
  cout << ans << " " << count_max << endl;
  return 0;
}