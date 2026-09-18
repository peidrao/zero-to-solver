#include <stdio.h>

int main()
{
    int numbers[10];
    int min = 10000000;
    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }

        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("max number is: %d\nmin number: %d\n", max, min);

    return 0;
}
