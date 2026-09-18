#include <stdio.h>

int main()
{
    char text[100];
    printf("Enter a word or sentence: ");
    fgets(text, sizeof(text), stdin);

    return 0;
}
