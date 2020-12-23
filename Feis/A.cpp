#include <stdio.h>

int main()
{
    int num1, num2;
    int distance;
    printf("please input two numbers : ");
    scanf("%d%d", &num1, &num2);
    distance = num1 - num2;
    if (distance < 0)
    {
        distance = -distance;
    }
    printf("distance: %d", distance);

    return 0;
}