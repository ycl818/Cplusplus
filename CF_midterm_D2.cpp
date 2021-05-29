#include <cmath>
#include <iostream>
using namespace std;
int score[100000];

int main() {
  int n, type = 0;
  double result, sum = 0;
  cin >> n;
  cin >> type;
  for (int i = 0; i < n; i++) {
    cin >> score[i];
  }
  int max_score = score[0];
  for (int i = 0; i < n; i++) {
    if (max_score < score[i]) {
      max_score = score[i];
    }
  }
  int min_score = score[0];
  for (int i = 0; i < n; i++) {
    if (min_score > score[i]) {
      min_score = score[i];
    }
  }

  for (int i = 0; i < n; i++) {
    sum += score[i];
  }
  sum -= (max_score + min_score);

  switch (type) {
    case 1:
      cout << int(sum) << endl;
      break;
    case 2:
      result = int(sum) / (n - 2);
      cout << result << endl;
      break;
    case 3:
      result = ceil(sum / (n - 2));
      cout << result << endl;
      break;
    case 4:
      result = round(sum / (n - 2));
      cout << result << endl;
      break;
    case 5:
      result = sum / (n - 2);
      result *= 10;
      int tmp = result;
      if (tmp % 10 < 6) {
        cout << int(result / 10) << endl;
      } else {
        cout << int(result / 10) + 1 << endl;
      }
  }
  return 0;
}