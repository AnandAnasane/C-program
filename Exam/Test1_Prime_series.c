// WAP to print the series of prime number from 1 to n where n value shuld be taken from user.

#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter any number :");
    scanf("%d", &n);

    for (int j = 1; j <=n; j++)
    {
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("%d     ", j);
        }
        else
        {
            count = 0;
        }
    }
    return 0;
}

