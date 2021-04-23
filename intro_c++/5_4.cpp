#include <iostream>
using namespace std;

int main(){
	int n, sum;
	cin >> n;
	for(int i=1; i <=n; i++){
		sum += i*i;
		if(sum > 1000){
			cout << sum << endl;
			break;
		}
	}
	return 0;
}

