#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int score[1000];
	int num[11];
	srand(time(NULL));
	for(int i =0; i<11; i++){
		num[i] = 0;
	}
	int j;
	for(int i = 0; i<1000; i++){
		score[i] = rand()%101;
		j = score[i] / 10;
		num[j] += 1;
	}
	for(int i = 0; i <11; i++){
		cout << "num[" << i << "] = " << num[i] << endl;
	}

	return 0;
}

