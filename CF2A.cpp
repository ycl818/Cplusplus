#include <iostream>
using namespace std;

int main(){
	
	int A, B, C;
	cin >> A >> B >> C;
	if (C <= B && C >=A){
		cout << "IN" << endl; 
	}
	else if (C <= A && C >= B){
		cout << "IN" << endl; 
	}
	else{
		cout << "OUT" << endl; 
	}

	return 0;
}
// if ((C-A)*(C-B) < 0 )
// 		cout << "IN" << endl;
