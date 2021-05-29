#include <iostream>
#include <string>
using namespace std;
string k[10];

bool sub(string s1, string s2) {
  if (s1.find(s2) != string::npos) {
    return 1;
  }
  return 0;
}

int main() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> k[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (sub(s, k[i])) {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}