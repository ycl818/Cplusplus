#include <stdio.h>

int main()
{
    int money;
    int c50, c10, c1, c5;
    printf("please input amount: \n");
    scanf("%d", &money);                             //137
    c50 = money / 50;                                //2
    c10 = (money - 50 * c50) / 10;                   //3
    c5 = (money - 50 * c50 - 10 * c10) / 5;          //1
    c1 = (money - 50 * c50 - 10 * c10 - 5 * c5) / 1; //2
    if (c50 != 0)
    {
        printf("50: NTdollar %d\n ", c50);
    }
    if (c10 != 0)
    {
        printf("10: NTdollar %d\n ", c10);
    }
    if (c5 != 0)
    {
        printf("5 : NTdollar %d\n ", c5);
    }
    if (c1 != 0)
    {
        printf("1 : NTdollar %d\n ", c1);
    }

    return 0;
}