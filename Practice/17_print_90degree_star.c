//  WAP to print pattern cross

#include <stdio.h>


int main()
{
    int i, j, k;


    for (i = 1; i <= 5; i++) //row
    {
        for (j = 1; j < i; j++) //space
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++) // column
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 























// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++) //row
//     {
//         for (j = i; j < 5; j++) //space
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= i; k++) // column
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// // OUTPUT
// //     * 
// //    * * 
// //   * * * 
// //  * * * * 
// // * * * * *





// int main()
// {
//     int n, i, j;

//     printf("Enter any number : ");
//     scanf("%d", &n);

//     for(i = 1; i <= 5; i++) // for ROW
//     {
//         for(j = 1; j <= i; j++) // for COLUMN
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // OUTPUT
// // *
// // * *
// // * * *
// // * * * *
// // * * * * *

//  FOR REVERSE
// for(i = 1; i <= 5; i++)  // for row
//     {
//         for(j = 5; j >= i; j--)  // for column
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;

// OUTPUT
// * * * * *
// * * * *
// * * *
// * *
// *