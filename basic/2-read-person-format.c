#include <stdio.h>

void main()
{
    char name[100];
    int age;
    float weight;

    printf("Your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Your age: ");
    scanf("%d", &age);

    printf("Your weight: ");
    scanf("%f", &weight);

    printf("\n\n- Name: %s- Age: %d \n- Weight: %.2f\n", name, age, weight);
}