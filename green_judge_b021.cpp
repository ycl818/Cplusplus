#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    int grades[5];
    int sum;
    bool operator<(const Student &b) const
    {
        if (sum != b.sum)
            return sum > b.sum;
        return grades[2] > b.grades[2];
    }
} students[100];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].id;
        int s = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> students[i].grades[j];
            s += students[i].grades[j];
        }
        students[i].sum = s;
    }
    sort(students, students + n);
    for (int i = 0; i < n; i++)
    {
        cout << students[i].id << endl;
    }
    return 0;
}