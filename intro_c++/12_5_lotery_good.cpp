#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int box[7];
int main() {
  srand(time(NULL));
  int i, j;
  for (i = 0; i < 6; i++) {
    do {
      box[i] = rand() % 49 + 1;
      for (j = 0; j < i; j++) {
        if (box[j] == box[i]) {
          break;
        }
      }
    } while (j != i);
  }

  for (int i = 0; i < 6; i++) {
    cout << box[i] << " ";
  }
  cout << endl;
  return 0;
}