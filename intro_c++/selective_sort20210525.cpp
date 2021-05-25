#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int v[5];
int main() {
  srand(time(NULL));
  for(int i = 0; i < 5; i++){
    v[i] = rand() % 100 + 1;
    cout << v[i] << " ";
  }
  cout << endl;
 
  //selective sort
  for(int j = 4; j > 0; j--){
    int max_index = 0;
    for(int i = 1; i <= j; i++){
      if(v[max_index] < v[i]){
        max_index = i;
      } 
    int tmp = v[max_index];
    v[max_index] = v[j];
    v[j] = tmp;
    }
  }
  for(int i = 0; i < 5; i++){
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}
