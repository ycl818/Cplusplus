#include <iostream>
using namespace std;
int Sum(int n){
  if(n == 1) return 1;
  return Sum(n-1) + n;
}
int main() {
  cout << Sum(8) << endl;
  cout << Sum(99) << endl;
  cout << Sum(100) << endl;
  return 0;
}
