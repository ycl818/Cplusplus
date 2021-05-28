#include <iostream>
using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  int found = 0;
  int current = 0;
  for (int i = 0; i < s1.length(); i++) {
    for (int j = current; j < s2.length(); j++) {
      if (s2[j] == s1[i]) {
        current = j + 1;
        found++;
        break;
      }
    }
  }
  if (found == s1.length()) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}