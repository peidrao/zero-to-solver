#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter two numbers and an operator (+, -, * or /): ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+')
    {
        printf("%.f %c %.f = %.2f\n", a, b, op, a + b);
    }
    else if (op == '-')
    {
        printf("%.f %c %.f = %.2f\n", a, b, op, a - b);
    }
    else if (op == '*')
    {
        printf("%.f %c %.f = %.2f\n", a, b, op, a * b);
    }
    else if (op == '/')
    {
        printf("%.f %c %.f = %.2f\n", a, b, op, a / b);
    }
    else
    {
        printf("invalid operation.\n");
    }

    return 0;
}
