#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[30] = "hello world!";
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    cout << str[i] << endl;
  }
  return 0;
}