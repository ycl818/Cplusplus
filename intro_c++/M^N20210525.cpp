#include <iostream>
using namespace std;
int p(int m, int n){
  if(n == 1) return m;
  return p(m, n-1) * m;
}
int main() {
  cout << p(3,3) << endl;
  return 0;
}
