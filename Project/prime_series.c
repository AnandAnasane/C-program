#include <stdio.h>

int isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("The prime numbers are: ");

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d, ", i);
        }
    }
    return 0;
}










// #include <stdio.h>

// int isPrime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }

//     }
//     return 1;

// }
// int main()
// {
//     int n;
//     printf("Enter any number: ");
//     scanf("%d", &n);

//     // printf("Enter N2: ");
//     // scanf("%d", &n2);

//     printf("The prime numbers in reverse order: ");

//     for (int i = n; i >= 2; i--)
//     {
//         if (isPrime(i))
//         {
//             printf("%d, ", i);
//         }
//     }

//     return 0;
// }
