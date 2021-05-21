#include <iostream>
using namespace std;
double BMI(double, double);
int main() {
  int h, w;
  cout << "input height " << endl;
  cin >> h;
  cout << "input weight" << endl;
  cin >> w;
  cout << "your bmi is " << BMI(h, w) << endl;

  return 0;
}
double BMI(double height, double weight) {
  double h = height / 100;
  double bmi = weight / (h * h);
  return bmi;
}