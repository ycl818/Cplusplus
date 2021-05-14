#include <iostream>
using namespace std;
int main() {
  int a, b;
  while (1) {
    cin >> a >> b;
    if (cin.fail()) break;
    if (a > b) {
      cout << "A"
           << " " << a - b << endl;
    } else if (b > a) {
      cout << "B"
           << " " << b - a << endl;
    } else if (a == b) {
      cout << 0 << endl;
    }
  }
  return 0;
}
