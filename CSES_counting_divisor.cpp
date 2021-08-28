#include <iostream>
using namespace std;
const int SIZE = 1000000;
int cnt[SIZE + 1]; //用陣列儲存資訊
// 枚舉 i 的所有倍數
void pre() {
  for (int i = 1; i <= SIZE; i++) {
    for (int j = i; j <= SIZE; j += i) {
      cnt[j]++;
    }
  }
}

int main() {
  pre();
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    cout << cnt[x] << '\n';
  }
  return 0;
}
