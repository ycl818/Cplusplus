#include <cctype>
#include <iostream>
using namespace std;

int main() {
  cout << isalpha('Q') << endl;  // 1
  cout << isalpha('+') << endl;  // 0
  cout << isdigit('+') << endl;  // 0
  cout << isdigit('5') << endl;  // 1
  cout << isupper('A') << endl;  // 1
  cout << isupper('a') << endl;  // 0
  cout << isalnum('b') << endl;  // 1
  cout << isalnum('7') << endl;  // 1
  return 0;
}