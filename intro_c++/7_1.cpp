#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main(){
	int score[10];
	int value, smax = 0;
	srand(time(NULL));	
	for(int i = 1; i <= 10; i++){
		value = rand()%100+1; 
		score[i-1] = value;
		
		if(score[i-1]> smax){
			smax = score[i-1];
		}		
	}
	for(int i=1; i<=10;i++){
		cout << "The grade of " << i << "'s' student is " << score[i-1] << endl;
	}
	cout << "the heightest score is " << smax << endl;
	
	
	return 0;
}

