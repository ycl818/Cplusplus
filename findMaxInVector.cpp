#include <iostream>
#include <vector>
using namespace std;
int RangeMax(vector<int> v, int first, int last){
  if(first == last) return v[first];
  int mid = (first + last) / 2;
	int left = RangeMax(v,first, mid);
  int right = RangeMax(v, mid + 1, last);
  if(left > right) return left;
  return right;
}

int Max(vector<int> v){
	return RangeMax(v, 0, v.size()-1);
}

int main() {
  vector<int> v = {3,9,5,1,4};
  cout << Max(v) << endl;
  return 0;
}
