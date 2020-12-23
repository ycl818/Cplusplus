#include <stdio.h>

int main()
{
    int cost;
    int total;
    printf("please enter the consumption amount: ");
    scanf("%d", &cost);
    total = cost;
    if (total > 3000)
    {
        total = (cost - 3000) * 0.8 + 3000;
    }

    printf("Total payment is : %d", total);

    return 0;
}