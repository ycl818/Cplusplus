#include <iostream>
using namespace std;
int a[10];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max1 = a[0];
  int index;
  for (int i = 0; i < 10; i++) {
    if (a[i] > max1) {
      max1 = a[i];
      index = i + 1;
    }
  }
  cout << index << " " << max1 << endl;
  return 0;
}