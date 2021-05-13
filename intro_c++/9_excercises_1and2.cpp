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
  int min1 = a[0];
  for (int i = 0; i < 3; i++) {
    if (min1 > a[i]) {
      min1 = a[i];
    }
  }
  int cnt = 0;
  int max1 = a[0];
  for (int i = 0; i < 3; i++) {
    if (max1 < a[i]) {
      max1 = a[i];
      cnt++;
    }
  }
  cout << min1 << endl;
  cout << max1 << " in the array[" << cnt << "]" << endl;
  return 0;
}
