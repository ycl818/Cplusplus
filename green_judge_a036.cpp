#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << 'A' << " " << a - b << endl;
  } else if (b > a) {
    cout << 'B' << " " << b - a << endl;
  } else if (a == b) {
    cout << 0 << endl;
  }
  return 0;
}
