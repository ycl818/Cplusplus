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
  int max1 = a[0];
  for (int i = 0; i < 10; i++) {
    if (max1 < a[i]) {
      max1 = a[i];
    }
  }
  cout << "The maximum in the array is " << max1 << endl;

  return 0;
}