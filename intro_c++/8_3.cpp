#include <iostream>
using namespace std;
int a[2][3] = {{1, 2, 3}, {2, 2, 2}};
int b[3][2] = {{1, 2}, {2, 2}, {3, 2}};
int c[2][2] = {};
int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
