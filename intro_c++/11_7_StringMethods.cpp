#include <iostream>
#include <string>
using namespace std;

int main() {
  /*  string left = "abc";
    string right = "aef";
    cout << left + right << endl;
    cout << (left < right) << endl;
  */

  string mystr = "I love c";
  mystr.resize(10, '+');
  cout << mystr << endl;
  // cout << mystr.at(8) << endl;

  string str2 = " very much.";
  mystr.append(str2);
  cout << mystr << endl;

  string str3 = "love";
  mystr += str3;
  cout << mystr << endl;
  int pos;
  pos = mystr.find("love", 3);
  cout << pos << endl;
  // mystr.clear();
  // cout << mystr << endl;
  return 0;
}