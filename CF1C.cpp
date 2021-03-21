#include <iostream>
using namespace std;

int main() {

	int x;
	cin >> x;
	cout << x%10+x/10%10+x/100;

	// 123 =x
	// a+ b+ c 
	// a = x/10
	// c = x % 10
	// b = x/10%10
	return 0;
}

