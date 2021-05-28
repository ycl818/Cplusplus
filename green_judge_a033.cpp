#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n > 9999) {
    cout << "|____" << setw(4) << setfill('0') << n % 10000 << '|' << endl;
  } else {
    cout << "|____" << setw(4) << setfill('_') << n << '|' << endl;
  }

  return 0;
}