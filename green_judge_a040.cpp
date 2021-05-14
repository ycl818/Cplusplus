#include <iostream>
using namespace std;
int main() {
  int a, b;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a > b) {
      cout << "Case " << i + 1 << ": "
           << "A"
           << " " << a - b << endl;
    } else if (b > a) {
      cout << "Case " << i + 1 << ": "
           << "B"
           << " " << b - a << endl;
    } else if (a == b) {
      cout << "Case " << i + 1 << ": " << 0 << endl;
    }
  }
  return 0;
}
