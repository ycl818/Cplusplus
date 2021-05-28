#include <iostream>
using namespace std;

int main() {
  long long A, B;
  cin >> A >> B;
  if (A > B) {
    cout << "A"
         << " " << A + B << endl;
  } else {
    cout << "B"
         << " " << A + B << endl;
  }
  return 0;
}