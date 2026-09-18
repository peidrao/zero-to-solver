#include <stdio.h>

int main()
{
    int secret = 42;
    int guess;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
    } while (guess != secret);

    return 0;
}
