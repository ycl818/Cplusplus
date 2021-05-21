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

  // selective sort

  for (int j = 4; j > 0; j--) {
    int max1 = 0;
    for (int i = 1; i <= j; i++) {
      if (a[max1] < a[i]) {
        max1 = i;
      }
    }
    int tmp = a[max1];
    a[max1] = a[j];
    a[j] = tmp;
  }

  // After sorted
  cout << "After selective sort " << endl;
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}