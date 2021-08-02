#include <iostream>
#include <vector>
using namespace std;
vector<int> a = {1, 2, 7, 8, 9, 12, 17, 21, 42};
int n = a.size();
int binary_search(int val) {
  if (a[n-1] < val) return -1;
  int l = 0, r = n - 1;
  while (l != r) {
    int mid = (l + r) / 2;
    if (a[mid] >= val) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  return l;
}
int main() {
  cout << binary_search(8) << endl;
  return 0;
}
