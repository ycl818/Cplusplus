#include <iostream>
using namespace std;

int main(){
	int n, sum=0,sumAll;
	cin >> n;
	for(int i =1; i<=n; i++){
		sum = 0;
		for(int j =1; j<=i; j++){
			sum+=j;
		}
		cout <<"i=" << i << " ,sum = " << sum << endl;
		sumAll +=sum;
	}
	cout << sumAll << endl;

	return 0;
}

