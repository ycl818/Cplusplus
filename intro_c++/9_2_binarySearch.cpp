#include <iostream>
using namespace std;
int score[10] = {45, 59, 62, 67, 70, 78, 83, 85, 88, 92};
int main() {
  int mid = 5, right = 9, left = 0;
  while (score[mid] != 59) {
    cout << "socre[" << mid << "] = " << score[mid] << endl;
    if (left >= right) {
      break;
    }
    if (score[mid] > 59) {
      right = mid - 1;  // represents 59 in the left side of mid
    } else {
      left = mid + 1;
    }

    mid = (left + right) / 2;
    cout << "Right updated to " << right << endl;
    cout << "Left updated to " << left << endl;
    cout << "Mid updated to " << mid << endl;
  }
  if (score[mid] == 59) {
    cout << "Find 59" << endl;
  } else {
    cout << "None" << endl;
  }
  return 0;
}