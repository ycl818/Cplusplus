#include <stdio.h>

int main()
{
    int answer = 520, guess = 0;
    printf("please input number: ");
    scanf("%d", &guess);
    while (guess != answer)
    {
        printf("Huh?\n");
        printf("please input number: ");
        scanf("%d", &guess);
        if (guess == answer)
        {
            printf("Love U\n");
            break;
        }
    }

    return 0;
}