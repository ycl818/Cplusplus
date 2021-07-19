#include <iostream>
using namespace std;

int main() {
  int n, cnt = 1;
  cin >> n;
  while (n != 1) {
    if (n % 2 == 1) {
      n = 3 * n + 1;
      cnt ++;
    } else if (n % 2 == 0) {
      n = n / 2;
      cnt ++;
    }
  }
  cout << cnt << endl;
  return 0;
}
