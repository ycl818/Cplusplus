#include <iostream>
using namespace std;
int Fibonacci(int n) {
  if (n == 0) return 1;
  if (n == 1) return 1;
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
  cout << Fibonacci(2) << endl;
  cout << Fibonacci(3) << endl;
  cout << Fibonacci(4) << endl;
  cout << Fibonacci(5) << endl;
  cout << Fibonacci(6) << endl;
  cout << Fibonacci(7) << endl;
  return 0;
}