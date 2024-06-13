#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Invalid responce...");
    }
    else
    {
        for (i = 1; i <= n; i++) // for rows
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j); // for column
            }
            printf("\n");
        }
    }

    return 0;
}
