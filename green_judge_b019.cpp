#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];
int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a, a + n);
  reverse(a, a + n);
  for(int i = 0; i <n; i++){
    cout << a[i];
    if(i + 1 < n ){ cout << " ";}
    else{ cout << "\n";}
  }
  return 0;
}
