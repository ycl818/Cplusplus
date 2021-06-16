#include <iostream>
using namespace std;
void callByReference(int &a) {
  a++;
  cout << "&a = " << &a << endl;
}
int main() {
  int a = 10;
  callByReference(a);
  cout << "&a = " << &a << endl;
  cout << " a = " << a << endl;

  return 0;
}