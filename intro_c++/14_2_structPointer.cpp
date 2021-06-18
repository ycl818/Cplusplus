#include <cstring>
#include <iostream>
using namespace std;

int main() {
  struct stu {
    char name[10];
  };
  struct stu *pstud;
  struct stu stud;
  pstud = &stud;
  strcpy((*pstud).name, "John");
  cout << (*pstud).name << endl;
  return 0;
}