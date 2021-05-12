#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int a[3][3];
int b[3][3];
int main() {
  srand(time(NULL));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      a[i][j] = rand() % 9 + 1;
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  cout << "After transform " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      b[i][j] = a[j][i];
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}