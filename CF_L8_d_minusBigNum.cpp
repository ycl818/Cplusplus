#include <iostream>
#include <string>
using namespace std;
int na[200005];
int nb[200005];
int result[200005];
int main() {
  int d;
  string a;
  string b;
  cin >> d >> a >> b;
  // initialize
  for (int i = 0; i < 200005; i++) {
    na[i] = 0;
    nb[i] = 0;
    result[i] = 0;
  }

  // reverse a, b array
  string a_reverse = a;
  string b_reverse = b;
  int len_a = a_reverse.size();
  int len_b = b_reverse.size();

  for (int i = 0; i < len_a / 2; i++) {
    swap(a_reverse[i], a_reverse[len_a - 1 - i]);
  }
  for (int i = 0; i < len_b / 2; i++) {
    swap(b_reverse[i], b_reverse[len_b - 1 - i]);
  }

  for (int i = 0; i < len_a; i++) {
    na[i] = a_reverse[i] - '0';
  }
  for (int i = 0; i < len_b; i++) {
    nb[i] = b_reverse[i] - '0';
  }

  // result = reverse(reverse a -  reverse_b)
  /*
    123
     50
---------
     73


    321
    05
-----------
    370
*/
  int carry = 0;
  for (int i = 0; i < 200005; i++) {
    result[i] = na[i] - nb[i] + carry;
    if (result[i] < 0) {
      result[i] += d;
      carry = -1;
    } else {
      carry = 0;
    }
  }
  // find result start
  int start = 0;
  for (int i = 200005; i >= 0; i--) {
    if (result[i] != 0) {
      start = i;
      break;
    }
  }

  for (int i = start; i >= 0; i--) {
    cout << result[i];
  }
  cout << endl;

  return 0;
}