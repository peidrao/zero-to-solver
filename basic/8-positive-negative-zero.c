#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("positive\n");
    } else if (number < 0)
    {
        printf("negative\n");
    } else {
        printf("equal 0\n");
    }
    
    return 0;
}
