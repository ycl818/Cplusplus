#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int Max_N = 1000000;
struct Team
{
    string team_name;
    int solved;
    int penalty;
    bool operator<(const Team &b) const
    {
        if (solved != b.solved)
        {
            return solved > b.solved;
        }
        if (penalty != b.penalty)
        {
            return penalty < b.penalty;
        }
        return team_name < b.team_name;
    }
} teams[Max_N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].team_name >> teams[i].solved >> teams[i].penalty;
    }
    sort(teams, teams + n);
    for (int i = 0; i < n; i++)
    {
        cout << teams[i].team_name << " " << teams[i].solved << " " << teams[i].penalty << endl;
    }

    return 0;
}