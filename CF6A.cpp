#include <iostream>
using namespace std;

int main() {
  int a[101][101];
  int R, C;
  cin >> R >> C;
  for(int i = 1; i <=R; i++){
  	for(int j = 1; j <= C; j++){
    	cin >> a[i][j];
    }
    //cout << endl;
  }
  
  int b[101][101];
  for(int i = 1; i <=R; i++){
  	for(int j = 1; j <= C; j++){
      	b[j][i] = a[i][j]*(i+j);
    }
    //cout << endl;
  }
  // b[j][i] = a[i][j]
  //    C * R =   R * C
   for(int i = 1; i <=C; i++){
  	for(int j = 1; j <= R; j++){
      if(j==R){
      	 cout << b[i][j];
      }else{
      	cout << b[i][j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}

