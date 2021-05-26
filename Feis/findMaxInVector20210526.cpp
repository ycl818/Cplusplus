#include <iostream>
#include <vector>
int Max(std::vector<int>& v, int first, int last){
  if(first == last) return v[first];
  int mid = (first + last) / 2;
  int left = Max(v, first, mid);
  int right = Max(v, mid+1, last);
  if(left > right) return left;
  return right;
}
int Max(std::vector<int>& v){
  return Max(v, 0, v.size()-1);
}
int main(){
  std::vector<int> v = {3,5,8,1,7};
  std::cout << Max(v) << std::endl;
}
