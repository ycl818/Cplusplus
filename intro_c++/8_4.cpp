#include <iostream>
using namespace std;
int a[8][8];
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1         1
1            1
1        
*/
int main()
{
    for (int i = 0; i < 8; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i < 8; i++)
    {
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
