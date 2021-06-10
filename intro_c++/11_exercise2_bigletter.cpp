#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  cin >> s1;
  for (int i = 0; i < s1.length(); i++) {
    if (islower(s1[i]) != 0) {
      s1[i] = toupper(s1[i]);
    }
  }
  cout << s1;
  cout << endl;
  return 0;
}