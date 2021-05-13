#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int a[5];
int main() {
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    a[i] = rand() % 100 + 1;
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Bubble sort" << endl;
  for (int i = 4; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
