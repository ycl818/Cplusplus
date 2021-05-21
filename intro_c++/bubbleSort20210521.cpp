#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int a[5];
int main() {
  srand(time(NULL));
  for (int i = 0; i < 5; i++) {
    a[i] = rand() % 100 + 1;
  }
  cout << "Before soted " << endl;
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  // Bubble sort
  for (int i = 5; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (a[j] > a[j + 1]) {
        int tmp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = tmp;
      }
    }
  }
  // After sorted
  cout << "After bubble sort " << endl;
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}