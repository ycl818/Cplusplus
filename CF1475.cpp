#include <iostream>
using namespace std;

int main(){
	int t;
	long long n;
	
	cin >> t;
	
	while(t--){
		
		cin >> n;
		
		if (n&(n-1)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl; 
		}
	}
	

	
	

	return 0;
}

