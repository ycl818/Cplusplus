#include <iostream>
#include <vector>
using namespace std;
int Max(vector<int>& v, int size){
  if(size == 1) return v[0];
  int m = Max(v,v[size]);
  if(m > v[size-1]){
    return m;
  }
  return v[size-1];
}
int Max(vector<int>&v){
  return Max(v, v.size()-1);
}
int main() {
  vector<int> v = {3,5,7,9,1};
  cout << Max(v) << endl;
  return 0;
}
