#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
 
  for (int i = 0; i < q; i++) {
    int op;
    char val;
    int l, r;
    cin >> op;
    switch (op) {
      case 1:
        cin >> val;
        s += val;
        break;
      case 2:
        cin >> l >> r;
        s += s.substr(l - 1, r - l + 1);
        break;
      case 3:
        s.pop_back();
    }
  }
  cout << s << endl;
  return 0;
}
