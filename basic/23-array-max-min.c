#include <stdio.h>

int main()
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    return 0;
}
