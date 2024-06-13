// Practice of Fibonacci series.....!

#include <stdio.h>

int main()

{
    int n, c;
    int a = 0;
    int b = 1;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", a);

        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
