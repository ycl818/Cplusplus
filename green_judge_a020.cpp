#include <iostream>  
using namespace std;  
int main() {  
  int a, b, sum = 0;  
  cin >> a >> b;  
  if (b == 2 || b == 5 || b == 8) sum += 200;   
  if (a % 2 == 1) sum += 100;  
  if (a == b) sum += 50;  
    
  cout << sum << endl;  
  return 0;  
}  
