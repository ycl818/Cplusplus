#include <iostream>
using namespace std;
int isPrime(int);
int main() {
  for (int i = 2; i <= 100; i++) {
    int result = isPrime(i);
    if (result == 1) {
      cout << i << endl;
    }
  }

  return 0;
}
int isPrime(int x) {
  int j = 2, flag = 1;
  while (flag == 1 && j < x) {
    if (x % j == 0) {
      flag = 0;
      break;
    }
    j++;
  }
  return flag;
}