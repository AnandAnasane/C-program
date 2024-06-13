//  WAP to print pattern cross

# include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter any number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if ( i == j)
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
}
// output
// *
//   *       
//     *     
//       *   
//         * 



// if ( i == j || i+j == 6)
//  for cross
// OUTPUT
// *       * 
//   *   *   
//     *     
//   *   *   
// *       * 