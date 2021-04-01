#include <iostream>
using namespace std;

int main(){
	
	int a,b, c,d;
	cin >> a >> b >> c >> d;
	if (b < 0){
		a = -a;
		b = -b;
	}
	if (d < 0){
		c = -c;
		d = -d;
	}
	if (a*d < b*c){
			cout << "<" << endl;
	}
	else if (a*d > b*c){
			cout << ">" << endl;
	}
	else{
		cout << "=" << endl;
	}
	

	return 0;
}

