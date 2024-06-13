//  Practice prime series
#include <stdio.h>
#define LINE printf("\n -------------------------------------------------- \n");

void isPrime();

int main()
{
    isPrime();
    return 0;
}

void isPrime()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int j = 2; j <= n; j++)
    {

        int isPrime = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d, ", j);
        }
    }
}

// //  Fourth == Programe to print Prime number series with user defined values..

// #include <stdio.h>

// int main()

// {
//     // int n,
//     int count = 0;
//     // printf("Enter the number ");
//     // scanf("%d", &n);

//     for (int j = 1; j < 50; j++)
//     {
// int isPrime =1;
//         for (int i = 2; i < j; i++)
//         {
//             if (j % i == 0)
//             {
// isPrime = 0;
// break;
//
//             }
//         }
//         if (isPrime)
//         {
//             printf("%d ", j);
//         }
//
//     }

//     return 0;
// }

// First == Simple prime number Programe.
// # include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value :");
//     scanf("%d", &n);

//     for(int i = 2; i <= n; i++)
//     {
//         if (n%i == 0)
//         {
//             printf("This is not prime number \n");
//             break;
//         }
//         else
//         {
//             printf("This is prime number \n");
//             break;
//         }
//     }

//     return 0;

// }

// Second == Programe with function which declared and defined first..
// #include <stdio.h>

// int isPrime()
// {
//     int n;
//     printf("Enter the value:  ");
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % 2 != 0)
//         {
//             printf("Prime number");
//         }
//         else
//         {
//             printf("not Prime number");
//         }

//         return 1;
//     }
// }

// int main()
// {
//     int n;
//     isPrime(n);
//     return 0;
// }

// Third == Programe with function which defined first and declared last..
// #include <stdio.h>
// int isPrime();

// int main()
// {
//     int n;
//     isPrime(n);
//     return 0;
// }

// int isPrime()
// {
//     int n;
//     printf("Enter the value:  ");
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i++)
//     {
//         if (n % 2 != 0)
//         {
//             printf("Prime number");
//         }
//         else
//         {
//             printf("not Prime number");
//         }

//         return 1;
//     }
// }
