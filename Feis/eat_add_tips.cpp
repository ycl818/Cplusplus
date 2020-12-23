#include <stdio.h>

int main()
{
    int num, money;
    int sum;
    scanf("%d%d", &num, &money);
    sum = num * money * 1.1;
    printf("%d", sum);

    return 0;
}