#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1;
  cin >> s1;
  cout << s1;
  cout << endl;
  if (s1[1] == '1')
    cout << "男生" << endl;
  else if (s1[1] == '2')
    cout << "女生" << endl;
  return 0;
}