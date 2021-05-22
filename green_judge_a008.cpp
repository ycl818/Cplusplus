/**********************************************************************************/
/*  Problem: a008 "溫度轉換 (*)" from 浮點數 float (double) */
/*  Language: C++ */
/*  Result: AC (4ms, 204KB) on ZeroJudge */
/*  Author: asland at 2021-05-22 19:18:12 */
/**********************************************************************************/

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  cout << t * 9. / 5 + 32 << endl;
  return 0;
}