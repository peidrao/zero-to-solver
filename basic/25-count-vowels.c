#include <stdio.h>

int main()
{
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char text[100];
    printf("Enter a word or sentence: ");
    fgets(text, sizeof(text), stdin);
    int count = 0; 
    for (int i = 0; i < sizeof(text); i++)
    {
        for (int j = 0; j < sizeof(vowels); j++) {
            if (text[i] == vowels[j]) {
                count++;
            }
        }
    }

    printf("There are %d vowels\n", count);

    return 0;
}
