//  WAP to print patterns

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter any number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 3 || j == 3)
            {
                printf("* ");
            } 
            else 
            {
                printf("  ");
            }   
        }
        printf("\n");
    }
    
    return 0;
}

// OUTPUT
//     *     
//     *     
// * * * * * 
//     *     
//     *  








// #include<stdio.h> 
// int main() 
// { 
//     for (int  i = 1; i <= 5; i++) 
//     { 
//         for (int  j = 1; j <= 5; j++) 
//         { 
//             if (i == j || i + j ==  6) 
//             { 
//                 printf("* "); 
//             } 
//             else 
//             { 
//                 printf("  "); 
//             } 
//         } 
//         printf("\n"); 
//     } 
 
 
 
 
 
 
    // for (int  i = 1; i <= 5; i++) 
    // { 
    //     for (int  j = 1; j <= 5; j++) 
    //     { 
    //         if (i == 3 || j ==  3) 
    //         { 
    //             printf("* "); 
    //         } 
    //         else 
    //         { 
    //             printf("  "); 
    //         } 
    //     } 
    //     printf("\n"); 
    // } 
 
 
 
    // for (int  i = 1; i <= 5; i++) 
    // { 
    //     for (int  i = 1; i <= 5; i++) 
    //     { 
    //         printf("*  "); 
    //     } 
    //     printf("\n"); 
    // } 

    // for (i = 1; i <= n; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

// OUTPUT
// 1
// 22
// 333
// 4444
// 55555
