#include <iostream>
using namespace std;
const int SIZE = 1000000;
int cnt[SIZE + 1]; 
int a[SIZE + 1];

int main() {
  int N, K, T;
  cin >> N >> K >> T;
  int group = 0 ;
  for (int i = 1; i <= T; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }
  
  for (int i = 1; i <= N; i++) {
    if(cnt[i] >= K) group++;
  }
  cout << group << '\n';
 
  for (int i = N; i >= 1 ; i--) {
    if (cnt[i] >= K) {
      cout << i << " ";
    }
  }
  cout << '\n';
  

  return 0;
}
