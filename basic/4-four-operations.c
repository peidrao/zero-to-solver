#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

float division(int a, int b)
{
    return (float)a / b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b = 0;

    printf("digit a number: ");
    scanf("%d", &a);

    printf("digit a second number: ");
    scanf("%d", &b);

    printf("Sum: %d + %d = %d\n", a, b, sum(a, b));
    printf("Div: %d / %d = %.2f\n", a, b, division(a, b));
    printf("Sub: %d - %d = %d\n", a, b, sub(a, b));
    printf("Mul: %d * %d = %d\n", a, b, multiplication(a, b));

    return 0;
}