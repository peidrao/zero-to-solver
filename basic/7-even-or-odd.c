#include <stdio.h>

int main()
{
    int number;
    printf("Press a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Is even.\n");
    }
    else
    {
        printf("is odd.\n");
    }
    return 0;
}