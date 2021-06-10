#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int cnt = 0;
  string mystr = "abc12345defgh49053485jldjfa";
  for (int i = 0; i < mystr.length(); i++) {
    if (isdigit(mystr[i]) == 1) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}