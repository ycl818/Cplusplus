#include <iostream>
using namespace std;

int main(){
	int n, space[101];
	
	space[1] = 2;	
	for (int i =2; i <=100; i++){		
		space[i] = space[i-1]+ (i*i-i+2)/2;  
	
	}
	cout << "input n: ";
	cin >> n;
	cout << "the max quantity of space is" << space[n] << endl;
	return 0;
}

