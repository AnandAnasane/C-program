#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
         if (num % i == 0)
        {
            return 0;
        }
    }
               
    return 1;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf(" %d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not prime number. \n", num);
    }

    return 0;
}
