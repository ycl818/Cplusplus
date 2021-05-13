#include <cstdlib>
#include <ctime>
#include <iostream>
int a[10];
using namespace std;
int main() {
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    a[i] = rand() % 100 + 1;
    cout << a[i] << " ";
  }
  cout << endl;
  for (int i = 9; i >= 0; i--) {
    int max_index = 0;
    for (int j = 0; j <= i; j++) {
      if (a[max_index] < a[j]) {
        max_index = j;
      }
    }
    int tmp = a[max_index];
    a[max_index] = a[i];
    a[i] = tmp;
  }
  cout << "After selective sort" << endl;
  for (int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}