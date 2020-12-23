#include <stdio.h>

int main()
{
    int num;
    int total;
    printf("Please enter the number of customers: ");
    scanf("%d", &num);
    total = 300 * num;
    if (total > 3000)
    {
        total = 300 * num * 0.8;
    }
    printf("Total: %d", total);

    return 0;
}