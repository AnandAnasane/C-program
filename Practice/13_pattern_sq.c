// WAP to print patterns in square

#include <stdio.h>

int main()
{
    int i, j, k;

    for (k = 1; k <= 5; k++)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}