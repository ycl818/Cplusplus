#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int n[10];
int main() {
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    n[i] = rand() % 100 + 1;
    cout << n[i] << " ";
  }
  cout << endl;

  // bubble sort
  for (int i = 9; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (n[j] > n[j + 1]) {
        int temp = n[j];
        n[j] = n[j + 1];
        n[j + 1] = temp;
      }
    }
  }
  cout << "After Sorted" << endl;
  for (int i = 0; i < 10; i++) {
    cout << n[i] << " ";
  }
  cout << endl;
  return 0;
}