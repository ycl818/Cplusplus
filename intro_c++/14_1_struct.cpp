#include <cstring>
#include <iostream>
using namespace std;

int main() {
  typedef struct _stu {
    char name[10];
    int seat;
    int chi;
    int eng;
    int math;
  } stu;
  stu student1;
  strcpy(student1.name, "John");
  student1.seat = 1;
  student1.chi = 68;
  student1.eng = 99;
  student1.math = 90;
  stu student2 = {"Mary", 2, 88, 60, 79};

  typedef struct _teach {
    char name[10];
    stu student[2];
  } teach;

  teach teacher;
  strcpy(teacher.name, "Ms. Wang");
  teacher.student[0] = student1;
  teacher.student[1] = student2;

  cout << teacher.name << endl;
  cout << teacher.student[0].name << endl;
  cout << teacher.student[0].seat << endl;
  cout << teacher.student[0].chi << endl;
  cout << teacher.student[0].eng << endl;
  cout << teacher.student[0].math << endl;
  cout << endl;
  cout << teacher.student[1].name << endl;
  cout << teacher.student[1].seat << endl;
  cout << teacher.student[1].chi << endl;
  cout << teacher.student[1].eng << endl;
  cout << teacher.student[1].math << endl;
  return 0;
}