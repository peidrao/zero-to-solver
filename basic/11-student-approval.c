#include <stdio.h>

int main()
{
    float grade1, grade2, average;
    printf("Enter two grades: ");
    scanf("%f %f", &grade1, &grade2);

    average = (grade1 + grade2) / 2;

    if (average > 7)
    {
        printf("A\n");
    }
    else if (average >= 5 && average < 7)
    {
        printf("B\n");
    }
    else
    {
        printf("TROLL\n");
    }

    return 0;
}
