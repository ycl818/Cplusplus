#include <iostream>
using namespace std;

int main() {
  int *p, x = 1, y = 2;
  cout << "&x = " << &x << endl;
  cout << "&y = " << &y << endl;
  p = &x;
  cout << "after p = &x, p = " << p << endl;
  p = &y;
  cout << "after p = &y, p = " << p << endl;
  return 0;
}