#include <iostream>
using namespace std;

int main(){

 int n;
 cin >> n;
 cout << 40*(n%3)+ 100*((n-n%3)/3);
 return 0;
 
}

