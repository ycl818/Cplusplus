#include <cstdlib>
#include <ctime>
#include <iostream>
int a[3];
using namespace std;
int main() {
  srand(time(NULL));
  for (int i = 0; i < 3; i++) {
    a[i] = rand() % 100 + 1;
    cout << a[i] << " ";
  }
  cout << endl;

  for (int i = 2; i > 0; i--) {
    int max_index = 0;
    for (int j = 1; j <= i; j++) {
      if (a[max_index] < a[j]) {
        max_index = j;
      }
    }
    int tmp = a[max_index];
    a[max_index] = a[i];
    a[i] = tmp;
  }
  for (int i = 0; i < 3; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
