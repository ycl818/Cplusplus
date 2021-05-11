#include <iostream>
using namespace std;
int max(int a, int b, int c){
  	int max = a > b ? a : b;
  	return max = c > max ? c : max;
}
int min(int a, int b, int c){
  	int min = a > b ? b : a;
  	return min = c > min ? min : c;
}
int main() {
  int n, d, a, b, c;
  int sum = 0;
  int cnt = 0;
  cin >> n >> d;
  for(int i = 0; i < n; i++){
  	cin >> a >> b >> c;
    if(max(a,b,c)-min(a,b,c) >= d){
    	sum+=a+b+c;
      cnt++;
    }
  }
  cout << cnt << " " << sum / 3 << endl;

  return 0;
}

