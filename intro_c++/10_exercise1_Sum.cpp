#include <iostream>
using namespace std;
int Sum(int n) {
  if (n == 1) return 1;
  return Sum(n - 1) + n;
}
int main() {
  cout << Sum(5) << endl;
  return 0;
}