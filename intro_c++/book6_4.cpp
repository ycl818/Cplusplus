#include <iostream>
using namespace std;

int main(){
	for(int i= 2; i < 1000; i++){
		int flag = 1, j = 2;
		while((flag == 1) && (i>j)){
			if(i%j == 0){
				flag = 0;
			}
			j++;
		}
		if (flag == 1){
			cout << i << endl; 
		}
	}
	

	return 0;
}

