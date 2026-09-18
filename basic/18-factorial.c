#include <stdio.h>

int main()
{
    int number;
    long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
        if (i > 1) {
            printf("%d x ", i);
        } else {
            printf("%d = ", i);
        }
    }
    printf("%d \n", factorial);
    return 0;
}
