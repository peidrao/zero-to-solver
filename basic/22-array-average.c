#include <stdio.h>

int main()
{
    float numbers[5];
    size_t length = sizeof(numbers) / sizeof(numbers[0]);
    float total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &numbers[i]);
        // i could sum the numbers here, but I want to create another for.
    }   

    for (int i= 0; i < length; i++) {
        total += numbers[i];
    }

    printf("The average is %.2f\n", total/length);

    return 0;
}
