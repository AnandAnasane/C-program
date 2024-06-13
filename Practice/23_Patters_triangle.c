//  Wap to print pattern in traingle form

#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }

    return 0;
}
//     *    
//    ***   
//   *****  
//  ******* 
// *********








// # include <stdio.h>
// int main()
// {
//     int i,j,k;

//     for(i=1; i<=5; i++)
//     {
//         for(j=5; j>i; j--)
//         {
//             printf(" ");

//         }
//         for(k=1; k<= i; k++)
//         {
//             printf("* ");

//         }
//         printf("\n");
//     }
// return 0;
// }
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 





// # include <stdio.h>
// int main()
// {
//     int i,j,k;

//     for(i=1; i<=5; i++)
//     {
//         for(j=5; j>i; j--)
//         {
//             printf(" ");

//         }
//         for(k=1; k<= 2*i-1; k++)
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
// return 0;
// }


//     *
//    ***
//   *****
//  *******
// *********