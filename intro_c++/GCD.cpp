#include <iostream>
using namespace std;
int gcd(int m, int n){
  if(m == 0) return n;
  return gcd(n%m, m);
}
int main() {
  cout << gcd(77,49) << endl;
  return 0;
}
