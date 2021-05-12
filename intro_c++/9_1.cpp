#include <iostream>
using namespace std;
int score[5] = {60, 90, 44, 98, 50};
int main() {
  bool find = 0;
  for (int i = 0; i < 5; i++) {
    if (score[i] == 59) {
      find = 1;
    }
    cout << score[i] << endl;
  }
  if (find == 1) {
    cout << "Find 59" << endl;
  } else {
    cout << "None" << endl;
  }
  return 0;
}