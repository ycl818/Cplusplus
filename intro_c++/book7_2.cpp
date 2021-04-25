#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int prize[6];
	int check[48];
	int num,count =1;
	srand(time(NULL));
	
	for(int i=0;i <48; i++){
		check[i] = 0;
	}
	do{
		num = rand()%48+1;
		if(check[num] == 0){
			check[num] = 1;
			prize[count-1] = num;
			count ++;
		}else{
			continue;
		}
	}while(count <= 6);
	for(int i=0;i<6;i++){
		cout << "The " << (i+1) << "'s number is " << prize[i]  << endl; 
	}

	return 0;
}

