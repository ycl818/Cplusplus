#include <stdio.h>

int main()
{
    printf("%d", sizeof(long int));
    int n1, n2, n3;
    printf("Please enter the first integer: ");
    scanf("%d", &n1);
    printf("Please enter the first integer: ");
    scanf("%d", &n2);
    printf("Please enter the first integer: ");
    scanf("%d", &n3);
    double avg = (n1 + n2 + n3) / 3.;
    printf("Average: %f\n", avg);

    return 0;
}
