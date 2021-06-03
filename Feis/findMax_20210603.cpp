#include <iostream>
#include <vector>
using namespace std;
int Max(vector<int> &v, int first, int last){
  if(first == last) return v[first];
  int mid = (first + last) /2;
  int left = Max(v,first, mid);
  int right = Max(v,mid+1, last);
  if (left > right) return left;
  return right;
 
}
int Max(vector<int> &v){
  return Max(v, 0, v.size()-1);
}
int main() {
  vector<int> v = {3,5,7,9,1};
  cout << Max(v) << endl;
  return 0;
}
