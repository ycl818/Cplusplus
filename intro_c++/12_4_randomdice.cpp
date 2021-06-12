#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    cout << rand() % 6 + 1 << endl;
  }
  return 0;
}