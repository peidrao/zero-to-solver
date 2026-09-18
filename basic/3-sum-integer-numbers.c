#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int number1, number2 = 0;
    // int result = 0;

    printf("Digit one number: ");
    scanf("%d", &number1);

    printf("Digit a second number: ");
    scanf("%d", &number2);

    printf("Result is : %d\n", sum(number1, number2));
    return 1;
}