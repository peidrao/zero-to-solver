#include <stdio.h>

int main()
{
    float numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &numbers[i]);
    }

    return 0;
}
