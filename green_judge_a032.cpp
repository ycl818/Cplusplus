#include <iostream>
using namespace std;

int main() {
  int A, B;
  char c;
  cin >> A >> c >> B;
  if (c == '+')
    cout << A + B << endl;
  else if (c == '-')
    cout << A - B << endl;
  else if (c == '*')
    cout << A * B << endl;
  return 0;
}