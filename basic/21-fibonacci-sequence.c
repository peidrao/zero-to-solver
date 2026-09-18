#include <stdio.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int next;
    int back=0;
    int current=1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            // first interaction -> 0 (i = 0)
            printf("%d ", i);
        }
        else if (i == 1)
        {
            // second interaction -> 1 (i = 1)
            printf("%d ", i);
        }
        else
        {
            next = back + current;
            printf("%d ", next);

            back = current;
            current = next;
        }
    }
    printf("\n");
    return 0;
}
//  0 -> i + (i -1) -> 0 + (0 - 1) = not work > i = 0
//  1 -> 1 + (1 - 1) -> 1 = 1
//  2 -> 2 + (2 - 1) ->