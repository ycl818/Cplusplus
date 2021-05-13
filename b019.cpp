#include <iostream>
using namespace std;
int a[101];
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = n - 1; i > 0; i--) {
    int max_index = 0;
    for (int j = 1; j <= i; j++) {
      if (a[max_index] > a[j]) {
        max_index = j;
      }
      int tmp = a[max_index];
      a[max_index] = a[i];
      a[i] = tmp;
    }
    /*
   // i = 2
   //  a[0] = 10
       a[1] = 30
       a[2] = 20

       a[0] > a[1] ? No
       int temp = a[0]
       a[0]  = a[2];
       a[2] = tmp

  => 20 30 10

      i = 1
      a[0] > a[1] ? No
      a[0] a[1] switch

  => 30 20 10

  ----------------------
   i = 2
   a[0] < a[1] ? Yes
   max_index = 1
   int temp = a[1]
   a[1] = a[2]
   a[2] = temp

  => 10 20 30

   */
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}