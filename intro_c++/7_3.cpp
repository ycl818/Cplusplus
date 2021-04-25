#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main(){
	int num, sum = 0, count = 0;
	int digit[40];
	double avg;
	srand(time(NULL));
	
	for(int i =0; i<=40; i++){
		num = rand()%100+1;
		digit[i] = num;
		sum += digit[i];
		cout << "the" << i << "'s number is " << digit[i] << endl; 
	}

	avg = double(sum)/ 40;
	for(int i =0 ;i <40 ;i++){
		if(digit[i]>avg){
			count++;
		}
	}	
	
	cout << "avg is "<< avg <<endl;
	cout << "the number of higher than avg is " << count << endl;

	return 0;
}

