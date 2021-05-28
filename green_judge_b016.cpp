#include <iostream>
#include <string>
using namespace std;
int na[203];
int nb[203];
int sum[203];
int main() {
  string a;
  string b;
  cin >> a >> b;

  // initialize array
  for (int i = 0; i < 203; i++) {
    na[i] = 0;
    nb[i] = 0;
    sum[i] = 0;
  }

  // reverse string a and b
  string a_reverse = a;
  int len_a = a_reverse.size();
  for (int i = 0; i < len_a / 2; i++) {
    swap(a_reverse[i], a_reverse[len_a - 1 - i]);
  }

  string b_reverse = b;
  int len_b = b_reverse.size();
  for (int i = 0; i < len_b / 2; i++) {
    swap(b_reverse[i], b_reverse[len_b - 1 - i]);
  }

  // put values into array
  for (int i = 0; i < len_a; i++) {
    na[i] = a_reverse[i] - '0';
  }

  for (int i = 0; i < len_b; i++) {
    nb[i] = b_reverse[i] - '0';
  }

  // sum a and b
  int carry = 0;
  for (int i = 0; i < 203; i++) {
    sum[i] = na[i] + nb[i] + carry;
    if (sum[i] >= 10) {
      sum[i] -= 10;
      carry = 1;
    } else {
      carry = 0;
    }
  }

  int start = 0;
  // find the start num in sum
  for (int i = 202; i >= 0; i--) {
    if (sum[i] != 0) {
      start = i;
      break;
    }
  }

  for (int i = start; i >= 0; i--) {
    cout << sum[i];
  }

  cout << endl;

  return 0;
}