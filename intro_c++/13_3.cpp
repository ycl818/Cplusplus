#include <iostream>
using namespace std;

int main() {
  char *name[5];
  name[0] = "apple";
  name[1] = "Banana";
  name[2] = "Cat";
  name[3] = "Dog";
  name[4] = "Elephant";
  for (int i = 0; i < 5; i++) {
    cout << "&name[" << i << "] = " << &name[i] << endl;
    cout << "number " << i + 1 << "號的同學姓名為 " << name[i] << endl;
  }
  return 0;
}