#include <stdio.h>

#define MAX_SIZE 10

typedef struct
{
    int data[MAX_SIZE];
    int size;
} StaticVector;

int push_back(StaticVector *vec, int value)
{
    if (vec->size >= MAX_SIZE)
    {
        return 0;
    }
    vec->data[vec->size] = value;
    vec->size++;
    return 1;
}

int main()
{
    StaticVector values = {.size = 0};
    int number, count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0)
        {

            push_back(&values, number);
        }
    }

    printf("Even values\n");
    for (int i = 0; i < values.size; i++)
    {
        printf("%d ", values.data[i]);
    }
    printf("\n");


    return 0;
}
