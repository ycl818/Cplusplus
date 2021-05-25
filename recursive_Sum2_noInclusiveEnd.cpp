#include <iostream>
using namespace std;
int Sum(int first, int last){
  if(first + 1 == last) return first;
  int mid = (first + last) / 2 ;
  return Sum(first, mid) + Sum(mid, last);
}

int Sum(int n){
 return Sum(1, n+1);
}
int main() {
  cout << Sum(8) << endl;
  cout << Sum(99) << endl;
  cout << Sum(100) << endl;
  return 0;
}
