#include <iostream>
using namespace std;

int main(){

	int A, B;
	cin >> A >> B;
	cout << (A / 10 != B / 10) + (A % 10 != B % 10) << endl; 
	return 0;
}

