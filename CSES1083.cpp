#include <iostream>
using namespace std;
int a[1000000];
int main(){
 
	int N,n;
	cin >> N;
	
	for(int i = 1; i < N ; i++){
		cin >> n;
		a[n] = 1;	
	}
	
	for(int i=1; i<=N; i++){
		if(a[i]==0){
			cout << i << endl;
			break;
		}
	}

	return 0;
}
