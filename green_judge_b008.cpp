#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[s.length() - 1 - i]) n++;
  }
  if (n == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}