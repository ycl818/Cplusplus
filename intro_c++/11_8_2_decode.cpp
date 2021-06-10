#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  cin >> s1;
  for (int i = 0; i < s1.length(); i++) {
    cout << char(s1[i] - 3);
  }
  cout << endl;
  return 0;
}