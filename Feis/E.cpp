#include <stdio.h>

int main()
{
    int d, pay = 0;
    printf("input distance: ");
    scanf("%d", &d);
    if (d <= 1000)
    {
        pay = 100;
    }
    else if (d > 1000)
    {
        pay = ((d - 1000) / 100) * 5 + 100;
        if ((d - 1000) % 100 != 0)
        {
            pay = ((d - 1000) / 100 + 1) * 5 + 100;
        }
    }
    printf("payment:  %d", pay);

    return 0;
}