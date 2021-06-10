#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // char dest[40] = "Good";
  // strcat(dest, " morning!");
  // strncat(dest, " morning", 3);
  // cout << dest << endl;

  // cout << strstr("Hello","l") << endl;
  // cout << strstr("Hello","a") << endl;
  char str[40] = "beauty is in the eye of the beholder";
  char *ptr;
  ptr = strtok(str, " ");
  cout << ptr << endl;
  ptr = strtok(NULL, " ");
  cout << ptr << endl;
  /*while(ptr != NULL){
    ptr = strtok(NULL, " ");
    cout << ptr << endl;
  }*/
  return 0;
}