//A. Right-Coupled Numbers
// yichien lee
#include <iostream>
using namespace std;
int main() { 
  // a * b = x
  // a >= 0.5 b
  int n, num;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    int flag = 0;
    int a, b;
    for (int i = 1; i <= num; i++) {
      if (num % i == 0) {
        a = i;
        b = num / i;
        if (2 * a >= b && a <= b) {
          flag = 1;
          break;         
        } 
      }
    }
    if (flag) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
}
