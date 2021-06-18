#include <iostream>
#include <string>
using namespace std;
typedef struct _stu {
  string name;
} stu;

void in(stu *student) {
  cout << "input name: " << endl;
  ;
  getline(cin, student->name);
}
int main() {
  stu *pstud, stud;
  pstud = &stud;
  in(pstud);
  cout << "student is " << (*pstud).name << endl;
  cout << "student is " << pstud->name << endl;

  return 0;
}