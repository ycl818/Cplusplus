#include <iostream>
using namespace std;
int Sum(int first, int last){
  if(first == last) return first;
  int mid = (first+ last) / 2;
  int left = Sum(first, mid);
  int right = Sum(mid+1, last);
  return left + right;
}

int Sum(int n){
 return Sum(1, n);
}
int main() {
  cout << Sum(8) << endl;
  cout << Sum(99) << endl;
  cout << Sum(100) << endl;
  return 0;
}
