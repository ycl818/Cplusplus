#include <iostream>
#include <string>
using namespace std;

int main() {
  string mystr;
  cout << "input some words: " << endl;
  getline(cin, mystr);
  cout << mystr << endl;
  return 0;
}