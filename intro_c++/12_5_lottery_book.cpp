#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int box[7];
int main() {
  srand(time(NULL));
  int cnt = 0;
  box[cnt] = rand() % 49 + 1;
  cnt++;
  while (cnt < 6) {
    box[cnt] = rand() % 49 + 1;
    cnt++;
    for (int i = 0; i < cnt - 1; i++) {
      if (box[i] == box[cnt - 1]) {
        cnt--;
        break;
      }
    }
  }

  for (int i = 0; i < 6; i++) {
    cout << box[i] << " ";
  }
  cout << endl;
  return 0;
}