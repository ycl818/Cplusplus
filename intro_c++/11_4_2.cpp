#include <cstring>
#include <iostream>
using namespace std;
char pwd[10] = "c++";
char input[10];
int main() {
  do {
    cout << "input password" << endl;
    cin >> input;

  } while (strcmp(pwd, input) != 0);
  cout << "congrats" << endl;

  return 0;
}