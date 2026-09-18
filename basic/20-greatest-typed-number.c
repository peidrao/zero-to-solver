#include <stdio.h>

int main()
{
    int number;
    int temp = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > temp) {
            temp = number;
        }
    }

    printf("The bigger number is : %d\n", temp);

    return 0;
}
