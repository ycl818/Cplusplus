#include <iostream>
using namespace std;
void swapByAdress(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int a = 10, b = 20;
  swapByAdress(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}